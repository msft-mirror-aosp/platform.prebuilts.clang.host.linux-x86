"""Feature definitions for Android's C/C++ toolchain.

This top level list of features are available through the get_features function.
"""

load(
    "@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl",
    "feature",
    "flag_group",
    "flag_set",
    "with_feature_set",
)
load(
    ":cc_toolchain_constants.bzl",
    _actions = "actions",
    _flags = "flags",
    _generated_constants = "generated_constants",
)

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
                actions = [_actions.cpp_compile],
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
                actions = [_actions.c_compile],
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
                actions = [_actions.cpp_compile],
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
                actions = [_actions.cpp_compile],
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
                actions = [_actions.cpp_compile],
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
                actions = [_actions.cpp_compile],
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
                actions = [_actions.cpp_link_dynamic_library],
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
                actions = [_actions.cpp_link_executable],
                flag_groups = [
                    flag_group(
                        flags = flags + additional_static_flags,
                    ),
                ],
            ),
            flag_set(
                actions = [_actions.cpp_link_dynamic_library],
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

def _flatten(xs):
    ret = []
    for x in xs:
        if type(x) == "list":
            ret.extend(x)
        else:
            ret.append(x)
    return ret

# Create the full list of features.
def get_features(
        target_os,
        target_flags,
        linker_only_flags,
        builtin_include_dirs,
        libclang_rt_builtin):
    os_is_device = target_os == "android"

    # Linker-only flags feature
    linker_flags = []
    linker_flags.extend(linker_only_flags)
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

    # Aggregate all features
    features = [
        _compiler_flag_features(target_flags, os_is_device),
        _rpath_features(),
        _rtti_features(),
        _use_libcrt_feature(libclang_rt_builtin),
        _linker_flag_feature("linker_target_flags", flags = target_flags),
        linker_flag_feature,
        # System include directories features
        _toolchain_include_feature(system_includes = builtin_include_dirs),
    ]
    return _flatten([f for f in features if f != None])
