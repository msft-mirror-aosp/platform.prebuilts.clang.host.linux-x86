load(
    "@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl",
    "action_config",
    "feature",
    "flag_group",
    "flag_set",
    "tool",
    "tool_path",
    "with_feature_set",
)
load(
    ":cc_toolchain_constants.bzl",
    _actions = "actions",
    _flags = "flags",
    _generated_constants = "generated_constants",
)

# Clang-specific configuration.
_ClangVersionInfo = provider(fields = ["directory", "includes"])

def _clang_version_impl(ctx):
    directory = ctx.file.directory
    provider = _ClangVersionInfo(
        directory = directory,
        includes = [directory.short_path + "/" + d for d in ctx.attr.includes],
    )
    return [provider]

clang_version = rule(
    implementation = _clang_version_impl,
    attrs = {
        "directory": attr.label(allow_single_file = True, mandatory = True),
        "includes": attr.string_list(default = []),
    },
)

def _tool_paths(clang_version_info):
    return [
        tool_path(
            name = "gcc",
            path = clang_version_info.directory.basename + "/bin/clang",
        ),
        tool_path(
            name = "ld",
            path = clang_version_info.directory.basename + "/bin/ld.lld",
        ),
        tool_path(
            name = "ar",
            path = clang_version_info.directory.basename + "/bin/llvm-ar",
        ),
        tool_path(
            name = "cpp",
            path = "/bin/false",
        ),
        tool_path(
            name = "gcov",
            path = "/bin/false",
        ),
        tool_path(
            name = "nm",
            path = clang_version_info.directory.basename + "/bin/llvm-nm",
        ),
        tool_path(
            name = "objdump",
            path = clang_version_info.directory.basename + "/bin/llvm-objdump",
        ),
        # Soong has a wrapper around strip.
        # https://cs.android.com/android/platform/superproject/+/master:build/soong/cc/strip.go;l=62;drc=master
        # https://cs.android.com/android/platform/superproject/+/master:build/soong/cc/builder.go;l=991-1025;drc=master
        tool_path(
            name = "strip",
            path = clang_version_info.directory.basename + "/bin/llvm-strip",
        ),
        tool_path(
            name = "clang++",
            path = clang_version_info.directory.basename + "/bin/clang++",
        ),
    ]

def _compiler_flag_features(flags = [], os_is_device = False):
    compiler_flags = []

    # Combine the toolchain's provided flags with the default ones.
    compiler_flags.extend(flags)
    compiler_flags.extend(_flags.compiler_flags)
    compiler_flags.extend(_generated_constants.CommonGlobalCflags)

    if os_is_device:
        compiler_flags.extend(_generated_constants.DeviceGlobalCflags)
    else:
        compiler_flags.extend(_generated_constants.HostGlobalCflags)

    # Default compiler flags for assembly sources.
    asm_only_flags = _flags.asm_compiler_flags

    # Default C++ compile action only flags (No C)
    cpp_only_flags = []
    cpp_only_flags.extend(_generated_constants.CommonGlobalCppflags)
    if os_is_device:
        cpp_only_flags.extend(_generated_constants.DeviceGlobalCppflags)
    else:
        cpp_only_flags.extend(_generated_constants.HostGlobalCppflags)

    # Default C compile action only flags (No C++)
    c_only_flags = []
    c_only_flags.extend(_flags.c_compiler_flags)
    c_only_flags.extend(_generated_constants.CommonGlobalConlyflags)

    # Flags that only apply in the external/ directory.
    non_external_flags = _flags.non_external_defines

    features = []

    features.append(feature(
        name = "non_external_compiler_flags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _actions.compile,
                flag_groups = [
                    flag_group(
                        flags = non_external_flags,
                    ),
                ],
            ),
        ],
    ))
    features.append(feature(
        name = "common_compiler_flags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _actions.compile,
                flag_groups = [
                    flag_group(
                        flags = compiler_flags,
                    ),
                ],
            ),
        ],
    ))
    features.append(feature(
        name = "asm_compiler_flags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _actions.assemble,
                flag_groups = [
                    flag_group(
                        flags = asm_only_flags,
                    ),
                ],
            ),
        ],
    ))
    features.append(feature(
        name = "cpp_compiler_flags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _actions.cpp_compile,
                flag_groups = [
                    flag_group(
                        flags = cpp_only_flags,
                    ),
                ],
            ),
        ],
    ))
    features.append(feature(
        name = "c_compiler_flags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _actions.c_compile,
                flag_groups = [
                    flag_group(
                        flags = c_only_flags,
                    ),
                ],
            ),
        ],
    ))
    features.append(feature(
        name = "cpp_std_experimental",
        flag_sets = [
            flag_set(
                actions = _actions.cpp_compile,
                flag_groups = [
                    flag_group(
                        flags = _flags.cc_compiler_experimental_std_flags,
                    ),
                ],
            ),
        ],
    ))
    features.append(feature(
        name = "cpp_std_standard",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _actions.cpp_compile,
                with_features = [
                    with_feature_set(not_features = ["cpp_std_experimental"]),
                ],
                flag_groups = [
                    flag_group(
                        flags = _flags.cc_compiler_standard_std_flags,
                    ),
                ],
            ),
        ],
    ))

    # The user_compile_flags feature is used by Bazel to add --copt, --conlyopt,
    # and --cxxopt values. Any features added above this call will thus appear
    # earlier in the commandline than the user opts (so users could override
    # flags set by earlier features). Anything after the user options are
    # effectively non-overridable by users.
    features.append(feature(
        name = "user_compile_flags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _actions.compile,
                flag_groups = [
                    flag_group(
                        expand_if_available = "user_compile_flags",
                        flags = ["%{user_compile_flags}"],
                        iterate_over = "user_compile_flags",
                    ),
                ],
            ),
        ],
    ))

    # These cannot be overriden by the user.
    features.append(feature(
        name = "no_override_clang_global_copts",
        enabled = True,
        flag_sets = [
            flag_set(
                # We want this to apply to all actions except assembly
                # primarily to match Soong's semantics
                actions = [a for a in _actions.compile if a not in _actions.assemble],
                flag_groups = [
                    flag_group(
                        flags = _generated_constants.NoOverrideGlobalCflags,
                    ),
                ],
            ),
        ],
    ))

    return features

def _rtti_features():
    rtti_flag_feature = feature(
        name = "rtti_flag",
        flag_sets = [
            flag_set(
                actions = _actions.cpp_compile,
                flag_groups = [
                    flag_group(
                        flags = ["-frtti"],
                    ),
                ],
                with_features = [
                    with_feature_set(features = ["rtti"]),
                ],
            ),
            flag_set(
                actions = _actions.cpp_compile,
                flag_groups = [
                    flag_group(
                        flags = ["-fno-rtti"],
                    ),
                ],
                with_features = [
                    with_feature_set(not_features = ["rtti"]),
                ],
            ),
        ],
        enabled = True,
    )
    rtti_feature = feature(
        name = "rtti",
        enabled = False,
    )
    return [rtti_flag_feature, rtti_feature]

def _rpath_features():
    runtime_library_search_directories_feature = feature(
        name = "runtime_library_search_directories",
        flag_sets = [
            flag_set(
                actions = _actions.link,
                flag_groups = [
                    flag_group(
                        iterate_over = "runtime_library_search_directories",
                        flag_groups = [
                            flag_group(
                                flags = [
                                    "-Wl,-rpath,$EXEC_ORIGIN/%{runtime_library_search_directories}",
                                ],
                                expand_if_true = "is_cc_test",
                            ),
                            flag_group(
                                flags = [
                                    "-Wl,-rpath,$ORIGIN/%{runtime_library_search_directories}",
                                ],
                                expand_if_false = "is_cc_test",
                            ),
                        ],
                        expand_if_available =
                            "runtime_library_search_directories",
                    ),
                ],
                with_features = [
                    with_feature_set(features = ["static_link_cpp_runtimes"]),
                ],
            ),
            flag_set(
                actions = _actions.link,
                flag_groups = [
                    flag_group(
                        iterate_over = "runtime_library_search_directories",
                        flag_groups = [
                            flag_group(
                                flags = [
                                    "-Wl,-rpath,$ORIGIN/%{runtime_library_search_directories}",
                                ],
                            ),
                        ],
                        expand_if_available =
                            "runtime_library_search_directories",
                    ),
                ],
                with_features = [
                    with_feature_set(
                        not_features = ["static_link_cpp_runtimes", "disable_rpath"],
                    ),
                ],
            ),
        ],
    )
    disable_rpath_feature = feature(
        name = "disable_rpath",
        enabled = False,
    )
    return [runtime_library_search_directories_feature, disable_rpath_feature]

def _use_libcrt_feature(path):
    if not path:
        return None
    return feature(
        name = "use_libcrt",
        enabled = True,
        flag_sets = [
            # TODO(b/190383809): binaries need to be linked with late static libs grouped
            flag_set(
                actions = _actions.cpp_link_dynamic_library,
                flag_groups = [
                    flag_group(
                        flags = [path.path],
                    ),
                ],
            ),
        ],
    )

def _linker_flag_feature(name, flags = [], additional_static_flags = [], additional_dynamic_flags = []):
    if not flags:
        return None
    return feature(
        name = name,
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _actions.cpp_link_executable,
                flag_groups = [
                    flag_group(
                        flags = flags + additional_static_flags,
                    ),
                ],
            ),
            flag_set(
                actions = _actions.cpp_link_dynamic_library,
                flag_groups = [
                    flag_group(
                        flags = flags + additional_dynamic_flags,
                    ),
                ],
            ),
        ],
    )

def _toolchain_include_feature(system_includes = []):
    flags = []
    for include in system_includes:
        flags.append("-isystem")
        flags.append(include)
    if not flags:
        return None
    return feature(
        name = "toolchain_include_directories",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _actions.compile,
                flag_groups = [
                    flag_group(
                        flags = flags,
                    ),
                ],
            ),
        ],
    )

def _cc_toolchain_config_impl(ctx):
    clang_version_info = ctx.attr.clang_version[_ClangVersionInfo]
    tool_paths = _tool_paths(clang_version_info)
    tool_name_to_tool = {}
    for tool_path in tool_paths:
        tool_name_to_tool[tool_path.name] = tool(
            path = tool_path.path,
        )

    # use clang++ for linking to match Soong
    action_configs = []
    for action_name in _actions.link:
        action_configs.append(action_config(
            action_name = action_name,
            enabled = True,
            tools = [
                tool_name_to_tool["clang++"],
            ],
        ))

    action_configs.append(action_config(
        action_name = _actions.cpp_compile[0],
        enabled = True,
        tools = [
            tool_name_to_tool["clang++"],
        ],
    ))

    os_is_device = ctx.attr.target_os == "android"

    # This is so that Bazel doesn't validate .d files against the set of headers
    # declared in BUILD files (Blueprint files don't contain that data)
    builtin_include_dirs = ["/"]
    builtin_include_dirs.extend(clang_version_info.includes)

    # b/186035856: Do not add anything to this list.
    builtin_include_dirs.extend(_generated_constants.CommonGlobalIncludes)

    # Compiler action features
    compiler_flag_features = _compiler_flag_features(ctx.attr.target_flags, os_is_device)

    # Linker action features
    linker_target_flag_feature = _linker_flag_feature(
        "linker_target_flags",
        flags = ctx.attr.target_flags,
    )

    linker_flags = []
    linker_flags.extend(ctx.attr.linker_flags)
    if os_is_device:
        linker_flags.extend(_generated_constants.DeviceGlobalLldflags)
        linker_flags.extend(_flags.bionic_linker_flags)
    else:
        linker_flags.extend(_generated_constants.HostGlobalLldflags)
    linker_flag_feature = _linker_flag_feature(
        "linker_flags",
        flags = linker_flags,
        additional_static_flags = _flags.static_linker_flags,
        additional_dynamic_flags = _flags.dynamic_linker_flags,
    )

    # System include directories features
    toolchain_include_directories_feature = _toolchain_include_feature(
        system_includes = builtin_include_dirs,
    )

    # Aggregate all features
    features = compiler_flag_features + \
               _rpath_features() + _rtti_features() + \
               [
                   _use_libcrt_feature(ctx.file.libclang_rt_builtin),
                   linker_target_flag_feature,
                   linker_flag_feature,
                   toolchain_include_directories_feature,
               ]
    features = [feature for feature in features if feature != None]

    return cc_common.create_cc_toolchain_config_info(
        ctx = ctx,
        toolchain_identifier = ctx.attr.toolchain_identifier,
        tool_paths = _tool_paths(clang_version_info),
        features = features,
        action_configs = action_configs,
        cxx_builtin_include_directories = builtin_include_dirs,
        target_cpu = "_".join([ctx.attr.target_os, ctx.attr.target_arch]),
        # The attributes below are required by the constructor, but don't
        # affect actions at all.
        host_system_name = "__toolchain_host_system_name__",
        target_system_name = "__toolchain_target_system_name__",
        target_libc = "__toolchain_target_libc__",
        compiler = "__toolchain_compiler__",
        abi_version = "__toolchain_abi_version__",
        abi_libc_version = "__toolchain_abi_libc_version__",
    )

_cc_toolchain_config = rule(
    implementation = _cc_toolchain_config_impl,
    attrs = {
        "target_os": attr.string(mandatory = True),
        "target_arch": attr.string(mandatory = True),
        "toolchain_identifier": attr.string(mandatory = True),
        "clang_version": attr.label(mandatory = True, providers = [_ClangVersionInfo]),
        "target_flags": attr.string_list(default = []),
        "linker_flags": attr.string_list(default = []),
        "libclang_rt_builtin": attr.label(allow_single_file = True),
    },
    provides = [CcToolchainConfigInfo],
)

# macro to expand feature flags for a toolchain
# we do not pass these directly to the toolchain so the order can
# be specified per toolchain
def expand_feature_flags(enabled_features = [], flag_map = {}):
    flags = []
    for feature in enabled_features:
        flags.extend(flag_map.get(feature, []))
    return flags

# Macro to set up both the toolchain and the config.
def android_cc_toolchain(
        name,
        target_os = None,
        target_arch = None,
        clang_version = None,
        # This should come from the clang_version provider.
        # Instead, it's hard-coded because this is a macro, not a rule.
        clang_version_directory = None,
        libclang_rt_builtin = None,
        target_flags = [],
        linker_flags = [],
        toolchain_identifier = None):
    extra_linker_paths = []
    libclang_rt_path = None
    if libclang_rt_builtin:
        libclang_rt_path = libclang_rt_builtin
        extra_linker_paths.append(":" + libclang_rt_path)

    # Write the toolchain config.
    _cc_toolchain_config(
        name = "%s_config" % name,
        target_os = target_os,
        target_arch = target_arch,
        clang_version = clang_version,
        libclang_rt_builtin = libclang_rt_path,
        target_flags = target_flags,
        linker_flags = linker_flags,
        toolchain_identifier = toolchain_identifier,
    )

    # Create the filegroups needed for sandboxing toolchain inputs to C++ actions.
    native.filegroup(
        name = "%s_compiler_clang_includes" % name,
        srcs = native.glob([clang_version_directory + "/lib64/clang/*/include/**"]),
    )

    native.filegroup(
        name = "%s_compiler_binaries" % name,
        srcs = native.glob([clang_version_directory + "/bin/clang*"]),
    )

    native.filegroup(
        name = "%s_linker_binaries" % name,
        srcs = native.glob([
            # Linking shared libraries uses clang++, which symlinks to clang.
            clang_version_directory + "/bin/clang*",
        ]) + [
            clang_version_directory + "/bin/lld",
            clang_version_directory + "/bin/ld.lld",
        ],
    )

    native.filegroup(
        name = "%s_ar_files" % name,
        srcs = [clang_version_directory + "/bin/llvm-ar"],
    )

    native.filegroup(
        name = "%s_compiler_files" % name,
        srcs = [
            "%s_compiler_binaries" % name,
            "%s_compiler_clang_includes" % name,
        ],
    )

    native.filegroup(
        name = "%s_linker_files" % name,
        srcs = ["%s_linker_binaries" % name] + extra_linker_paths,
    )

    native.filegroup(
        name = "%s_all_files" % name,
        srcs = [
            "%s_compiler_files" % name,
            "%s_linker_files" % name,
            "%s_ar_files" % name,
        ],
    )

    # Create the actual cc_toolchain.
    # The dependency on //:empty is intentional; it's necessary so that Bazel
    # can parse .d files correctly (see the comment in $TOP/BUILD)
    native.cc_toolchain(
        name = name,
        all_files = "%s_all_files" % name,
        as_files = "//:empty",  # Note the "//" prefix, see comment above
        ar_files = "%s_ar_files" % name,
        compiler_files = "%s_compiler_files" % name,
        dwp_files = ":empty",
        linker_files = "%s_linker_files" % name,
        objcopy_files = ":empty",
        strip_files = ":empty",
        supports_param_files = 0,
        toolchain_config = ":%s_config" % name,
        toolchain_identifier = toolchain_identifier,
    )
