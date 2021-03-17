load("@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl", "feature", "flag_group", "flag_set", "tool_path", "with_feature_set")
load("@bazel_tools//tools/build_defs/cc:action_names.bzl", "ACTION_NAMES")
load("//build/bazel/rules:static_libc.bzl", "LibcConfigInfo")

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

# Toolchain definitions.
DEFINES = [
    "-DANDROID",
    "-D__compiler_offsetof=__builtin_offsetof",
    "-D_FORTIFY_SOURCE=2",
    "-DNDEBUG",
    "-UDEBUG",
]

# These defines should only apply to targets which are not under
# @external/. This can be controlled by adding "-non_external_compiler_flags"
# to the features list for external/ packages.
# This corresponds to special-casing in Soong (see "external/" in build/soong/cc/compiler.go).
NON_EXTERNAL_DEFINES = [
    "-DANDROID_STRICT",
]
COMPILER_FLAGS = [
    "-g",
    "-O2",
    "-no-canonical-prefixes",
    "-nostdlibinc",
    "-faddrsig",
    "-fcolor-diagnostics",
    "-fdata-sections",
    "-fdebug-prefix-map=/proc/self/cwd=",
    "-fexperimental-new-pass-manager",
    "-ffunction-sections",
    "-fmessage-length=0",
    "-fno-exceptions",
    "-fno-short-enums",
    "-fno-strict-aliasing",
    "-ftrivial-auto-var-init=pattern",
    "-fstack-protector-strong",
    "-funwind-tables",
    "-fPIC",
]
ASM_COMPILER_FLAGS = [
    "-D__ASSEMBLY__",
]
C_COMPILER_FLAGS = [
    "-std=gnu99",
]
CC_COMPILER_STANDARD_STD_FLAGS = [
    "-std=gnu++17",
]

# Should be toggled instead of CC_COMPILER_STANARD_STD_FLAGS if
# the soong module has "cpp_std: 'experimental'". In bazel, tied
# to the feature "cpp_std_experimental".
CC_COMPILER_EXPERIMENTAL_STD_FLAGS = [
    "-std=gnu++2a",
]
CC_COMPILER_FLAGS = [
    "-D_LIBCPP_ENABLE_THREAD_SAFETY_ANNOTATIONS",
    "-fno-rtti",
    "-fvisibility-inlines-hidden",
    "-Wimplicit-fallthrough",
]
WARNINGS = [
    "-W",
    "-Wall",
    "-Wa,--noexecstack",
    "-Werror",
    "-Werror=address",
    "-Werror=address-of-temporary",
    "-Werror=date-time",
    "-Werror=format-security",
    "-Werror=implicit-function-declaration",
    "-Werror=int-conversion",
    "-Werror=int-to-pointer-cast",
    "-Werror=non-virtual-dtor",
    "-Werror=pointer-to-int-cast",
    "-Werror=return-type",
    "-Werror=sequence-point",
    "-Winit-self",
    "-Wno-c++98-compat-extra-semi",
    "-Wno-c99-designator",
    "-Wno-defaulted-function-deleted",
    "-Wno-format-pedantic",
    "-Wno-gnu-include-next",
    "-Wno-inconsistent-missing-override",
    "-Wno-multichar",
    # http://b/145210666
    "-Wno-reorder-init-list",
    "-Wno-reserved-id-macro",
    "-Wno-return-std-move-in-c++11",
    "-Wno-sign-compare",
    "-Wno-tautological-constant-compare",
    "-Wno-tautological-type-limit-compare",
    "-Wno-tautological-unsigned-enum-zero-compare",
    "-Wno-tautological-unsigned-zero-compare",
    "-Wno-thread-safety-negative",
    "-Wno-unused",
    "-Wno-unused-command-line-argument",
    "-Wno-zero-as-null-pointer-constant",
    "-Wpointer-arith",
    "-Wsign-promo",
    "-Wstrict-aliasing=2",
]
LINKER_FLAGS = [
    "-nostdlib",
    "-Wl,-z,noexecstack",
    "-Wl,-z,relro",
    "-Wl,-z,now",
    "-Wl,--build-id=md5",
    "-Wl,--warn-shared-textrel",
    "-Wl,--fatal-warnings",
    "-Wl,--no-undefined-version",
    "-Wl,--exclude-libs,libgcc.a",
    "-Wl,--exclude-libs,libgcc_stripped.a",
    "-fuse-ld=lld",
    "-Wl,--no-undefined",
    "-Wl,--hash-style=gnu",
    "-Wl,--gc-sections",
]
STATIC_LINKER_FLAGS = [
    "-static",
]
DYNAMIC_LINKER_FLAGS = []

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
    ]

def _compiler_flag_features(
        flags = [],
        asm_only_flags = [],
        c_only_flags = [],
        non_external_flags = []):
    features = []
    if non_external_flags:
        features.append(feature(
            name = "non_external_compiler_flags",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = [
                        ACTION_NAMES.c_compile,
                        ACTION_NAMES.cpp_compile,
                        ACTION_NAMES.assemble,
                        ACTION_NAMES.preprocess_assemble,
                    ],
                    flag_groups = [
                        flag_group(
                            flags = non_external_flags,
                        ),
                    ],
                ),
            ],
        ))
    if flags:
        features.append(feature(
            name = "common_compiler_flags",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = [
                        ACTION_NAMES.c_compile,
                        ACTION_NAMES.cpp_compile,
                        ACTION_NAMES.assemble,
                        ACTION_NAMES.preprocess_assemble,
                    ],
                    flag_groups = [
                        flag_group(
                            flags = flags,
                        ),
                    ],
                ),
            ],
        ))
    if asm_only_flags:
        features.append(feature(
            name = "asm_compiler_flags",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = [
                        ACTION_NAMES.assemble,
                        ACTION_NAMES.preprocess_assemble,
                    ],
                    flag_groups = [
                        flag_group(
                            flags = asm_only_flags,
                        ),
                    ],
                ),
            ],
        ))
    if c_only_flags:
        features.append(feature(
            name = "c_compiler_flags",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = [
                        ACTION_NAMES.c_compile,
                        ACTION_NAMES.assemble,
                        ACTION_NAMES.preprocess_assemble,
                    ],
                    flag_groups = [
                        flag_group(
                            flags = c_only_flags,
                        ),
                    ],
                ),
            ],
        ))
    features.append(feature(
        name = "cc_compiler_flags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = [
                    ACTION_NAMES.cpp_compile,
                ],
                flag_groups = [
                    flag_group(
                        flags = CC_COMPILER_FLAGS,
                    ),
                ],
            ),
        ],
    ))
    features.append(feature(
        name = "cpp_std_experimental",
        flag_sets = [
            flag_set(
                actions = [
                    ACTION_NAMES.cpp_compile,
                ],
                flag_groups = [
                    flag_group(
                        flags = CC_COMPILER_EXPERIMENTAL_STD_FLAGS,
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
                actions = [
                    ACTION_NAMES.cpp_compile,
                ],
                with_features = [
                    with_feature_set(not_features = ["cpp_std_experimental"]),
                ],
                flag_groups = [
                    flag_group(
                        flags = CC_COMPILER_STANDARD_STD_FLAGS,
                    ),
                ],
            ),
        ],
    ))
    return features

def _rpath_features():
    runtime_library_search_directories_feature = feature(
        name = "runtime_library_search_directories",
        flag_sets = [
            flag_set(
                actions = [
                    ACTION_NAMES.cpp_link_executable,
                    ACTION_NAMES.cpp_link_dynamic_library,
                    ACTION_NAMES.cpp_link_nodeps_dynamic_library,
                    ACTION_NAMES.lto_index_for_executable,
                    ACTION_NAMES.lto_index_for_dynamic_library,
                    ACTION_NAMES.lto_index_for_nodeps_dynamic_library,
                ],
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
                actions = [
                    ACTION_NAMES.cpp_link_executable,
                    ACTION_NAMES.cpp_link_dynamic_library,
                    ACTION_NAMES.cpp_link_nodeps_dynamic_library,
                    ACTION_NAMES.lto_index_for_executable,
                    ACTION_NAMES.lto_index_for_dynamic_library,
                    ACTION_NAMES.lto_index_for_nodeps_dynamic_library,
                ],
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

def _linker_flag_feature(name, flags = [], additional_static_flags = [], additional_dynamic_flags = []):
    if not flags:
        return None
    return feature(
        name = name,
        enabled = True,
        flag_sets = [
            flag_set(
                actions = [
                    ACTION_NAMES.assemble,
                    ACTION_NAMES.preprocess_assemble,
                    ACTION_NAMES.cpp_link_executable,
                ],
                flag_groups = [
                    flag_group(
                        flags = flags,
                    ),
                ],
            ),
            flag_set(
                actions = [
                    ACTION_NAMES.cpp_link_executable,
                ],
                flag_groups = [
                    flag_group(
                        flags = flags + additional_static_flags,
                    ),
                ],
            ),
            flag_set(
                actions = [
                    ACTION_NAMES.cpp_link_dynamic_library,
                ],
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
                actions = [
                    ACTION_NAMES.assemble,
                    ACTION_NAMES.preprocess_assemble,
                    ACTION_NAMES.linkstamp_compile,
                    ACTION_NAMES.c_compile,
                    ACTION_NAMES.cpp_compile,
                    ACTION_NAMES.cpp_header_parsing,
                    ACTION_NAMES.cpp_module_compile,
                    ACTION_NAMES.cpp_module_codegen,
                    ACTION_NAMES.lto_backend,
                    ACTION_NAMES.clif_match,
                ],
                flag_groups = [
                    flag_group(
                        flags = flags,
                    ),
                ],
            ),
        ],
    )

def _system_libraries_feature(system_libraries = []):
    if not system_libraries:
        return None
    return feature(
        name = "system_libraries",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = [
                    ACTION_NAMES.cpp_link_executable,
                ],
                flag_groups = [
                    flag_group(
                        flags = system_libraries,
                    ),
                ],
            ),
        ],
    )

def _cc_toolchain_config_impl(ctx):
    clang_version_info = ctx.attr.clang_version[_ClangVersionInfo]
    if ctx.attr.libc:
        libc_config = ctx.attr.libc[LibcConfigInfo]
    else:
        libc_config = None
    builtin_include_dirs = []
    if libc_config:
        builtin_include_dirs.extend(libc_config.include_dirs)
    builtin_include_dirs.extend(clang_version_info.includes)
    compiler_flag_features = _compiler_flag_features(
        flags = DEFINES + COMPILER_FLAGS + WARNINGS + ctx.attr.target_flags,
        asm_only_flags = ASM_COMPILER_FLAGS,
        c_only_flags = C_COMPILER_FLAGS,
        non_external_flags = NON_EXTERNAL_DEFINES,
    )
    linker_target_flag_feature = _linker_flag_feature(
        "linker_target_flags",
        flags = ctx.attr.target_flags,
    )
    linker_flag_feature = _linker_flag_feature(
        "linker_flags",
        flags = LINKER_FLAGS + ctx.attr.linker_flags,
        additional_static_flags = STATIC_LINKER_FLAGS,
        additional_dynamic_flags = DYNAMIC_LINKER_FLAGS,
    )
    toolchain_include_directories_feature = _toolchain_include_feature(
        system_includes = builtin_include_dirs,
    )
    if libc_config:
        system_libraries_feature = _system_libraries_feature(
            system_libraries = libc_config.system_libraries,
        )
    else:
        system_libraries_feature = None
    features = compiler_flag_features + _rpath_features() + [linker_target_flag_feature, linker_flag_feature, toolchain_include_directories_feature, system_libraries_feature]
    features = [feature for feature in features if feature != None]
    return cc_common.create_cc_toolchain_config_info(
        ctx = ctx,
        toolchain_identifier = "x86_64-toolchain",
        host_system_name = "i686-unknown-linux-gnu",
        target_system_name = "x86_64-unknown-unknown",
        target_cpu = "x86_64",
        target_libc = "unknown",
        compiler = "clang",
        abi_version = "unknown",
        abi_libc_version = "unknown",
        tool_paths = _tool_paths(clang_version_info),
        features = features,
        cxx_builtin_include_directories = builtin_include_dirs,
    )

_cc_toolchain_config = rule(
    implementation = _cc_toolchain_config_impl,
    attrs = {
        "clang_version": attr.label(mandatory = True, providers = [_ClangVersionInfo]),
        "libc": attr.label(providers = [LibcConfigInfo], mandatory = False),
        "target_flags": attr.string_list(default = []),
        "linker_flags": attr.string_list(default = []),
    },
    provides = [CcToolchainConfigInfo],
)

# Macro to set up both the toolchain and the config.
def android_cc_toolchain(
        name,
        clang_version = None,
        # This should come from the clang_version provider.
        # Instead, it's hard-coded because this is a macro, not a rule.
        clang_version_directory = None,
        libc = None,
        target_flags = [],
        linker_flags = [],
        toolchain_identifier = None):
    # Write the toolchain config.
    _cc_toolchain_config(
        name = "%s_config" % name,
        clang_version = clang_version,
        libc = libc,
        target_flags = target_flags,
        linker_flags = linker_flags,
    )

    # Create the filegroups needed for sandboxing toolchain inputs to C++ actions.
    native.filegroup(
        name = "%s_compiler_clang_includes" % name,
        srcs =
            native.glob([clang_version_directory + "/lib64/clang/*/include/**"]),
    )

    native.filegroup(
        name = "%s_compiler_binaries" % name,
        srcs = native.glob([
            clang_version_directory + "/bin/clang*",
        ]),
    )

    native.filegroup(
        name = "%s_linker_binaries" % name,
        srcs = native.glob([
            # Linking shared libraries uses clang.
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

    if libc:
        native.filegroup(
            name = "%s_compiler_files" % name,
            srcs = [
                "%s_compiler_binaries" % name,
                "%s_includes" % libc,
                "%s_compiler_clang_includes" % name,
            ],
        )
        native.filegroup(
            name = "%s_linker_files" % name,
            srcs = [
                "%s_linker_binaries" % name,
                "%s_system_libraries" % libc,
            ],
        )
    else:
        native.filegroup(
            name = "%s_compiler_files" % name,
            srcs = [
                "%s_compiler_binaries" % name,
                "%s_compiler_clang_includes" % name,
            ],
        )
        native.filegroup(
            name = "%s_linker_files" % name,
            srcs = [
                "%s_linker_binaries" % name,
            ],
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
    native.cc_toolchain(
        name = name,
        all_files = "%s_all_files" % name,
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
