"""Feature definitions for Android's C/C++ toolchain.

This top level list of features are available through the get_features function.
"""

load(
    "@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl",
    "feature",
    "flag_group",
    "flag_set",
    "variable_with_value",
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

def _linker_flag_feature(name, flags = []):
    if not flags:
        return None
    return feature(
        name = name,
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _actions.link,
                flag_groups = [
                    flag_group(flags = flags),
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

# Additional linker flags that are dependent on a host or device target.
def _additional_linker_flags(os_is_device):
    linker_flags = []
    if os_is_device:
        linker_flags.extend(_generated_constants.DeviceGlobalLldflags)
        linker_flags.extend(_flags.bionic_linker_flags)
    else:
        linker_flags.extend(_generated_constants.HostGlobalLldflags)
    return linker_flags

# Legacy features moved from their hardcoded Bazel's Java implementation
# to Starlark.
#
# These legacy features must come before all other features.
def _get_legacy_features_begin():
    features = [
        # Legacy features omitted from this list, since they're not used in
        # Android builds currently, or is alternatively supported through rules
        # directly (e.g. stripped_shared_library for debug symbol stripping).
        #
        # runtime_library_search_directories: replaced by custom _rpath_feature().
        #
        # Compile related features:
        #
        # random_seed
        # legacy_compile_flags
        # per_object_debug_info
        #
        # Optimization related features:
        #
        # fdo_instrument
        # fdo_optimize
        # cs_fdo_instrument
        # cs_fdo_optimize
        # fdo_prefetch_hints
        # autofdo
        # propeller_optimize
        #
        # Interface libraries related features:
        #
        # supports_interface_shared_libraries
        # build_interface_libraries
        # dynamic_library_linker_tool
        #
        # Coverage:
        #
        # coverage
        # llvm_coverage_map_format
        # gcc_coverage_map_format
        #
        # Others:
        #
        # symbol_counts
        # static_libgcc
        # fission_support
        # static_link_cpp_runtimes
        #
        # ------------------------
        #
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=98;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "dependency_file",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = _actions.compile,
                    flag_groups = [
                        flag_group(
                            expand_if_available = "dependency_file",
                            flags = [
                                "-MD",
                                "-MF",
                                "%{dependency_file}",
                            ],
                        ),
                    ],
                ),
            ],
        ),
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=147;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "pic",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = _actions.compile,
                    flag_groups = [
                        flag_group(
                            expand_if_available = "pic",
                            flags = ["-fPIC"],
                        ),
                    ],
                ),
            ],
        ),
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=186;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "preprocessor_defines",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = _actions.compile,
                    flag_groups = [
                        flag_group(
                            iterate_over = "preprocessor_defines",
                            flags = ["-D%{preprocessor_defines}"],
                        ),
                    ],
                ),
            ],
        ),
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=207;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "includes",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = _actions.compile,
                    flag_groups = [
                        flag_group(
                            expand_if_available = "includes",
                            iterate_over = "includes",
                            flags = ["-include", "%{includes}"],
                        ),
                    ],
                ),
            ],
        ),
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=232;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "include_paths",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = _actions.compile,
                    flag_groups = [
                        flag_group(
                            iterate_over = "quote_include_paths",
                            flags = ["-iquote", "%{quote_include_paths}"],
                        ),
                        flag_group(
                            iterate_over = "include_paths",
                            flags = ["-I", "%{include_paths}"],
                        ),
                        flag_group(
                            iterate_over = "system_include_paths",
                            flags = ["-isystem", "%{system_include_paths}"],
                        ),
                        flag_group(
                            flags = ["-F%{framework_include_paths}"],
                            iterate_over = "framework_include_paths",
                        ),
                    ],
                ),
            ],
        ),
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=476;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "shared_flag",
            flag_sets = [
                flag_set(
                    actions = [
                        _actions.cpp_link_dynamic_library,
                        _actions.cpp_link_nodeps_dynamic_library,
                    ],
                    flag_groups = [
                        flag_group(
                            flags = [
                                "-shared",
                            ],
                        ),
                    ],
                ),
            ],
        ),
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=492;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "linkstamps",
            flag_sets = [
                flag_set(
                    actions = _actions.link,
                    flag_groups = [
                        flag_group(
                            expand_if_available = "linkstamp_paths",
                            iterate_over = "linkstamp_paths",
                            flags = ["%{linkstamp_paths}"],
                        ),
                    ],
                ),
            ],
        ),
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=512;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "output_execpath_flags",
            flag_sets = [
                flag_set(
                    actions = _actions.link,
                    flag_groups = [
                        flag_group(
                            expand_if_available = "output_execpath",
                            flags = [
                                "-o",
                                "%{output_execpath}",
                            ],
                        ),
                    ],
                ),
            ],
        ),
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=592;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "library_search_directories",
            flag_sets = [
                flag_set(
                    actions = _actions.link,
                    flag_groups = [
                        flag_group(
                            expand_if_available = "library_search_directories",
                            iterate_over = "library_search_directories",
                            flags = ["-L%{library_search_directories}"],
                        ),
                    ],
                ),
            ],
        ),
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=612;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "archiver_flags",
            flag_sets = [
                flag_set(
                    actions = ["c++-link-static-library"],
                    flag_groups = [
                        flag_group(
                            flags = ["rcsD"],
                        ),
                        flag_group(
                            expand_if_available = "output_execpath",
                            flags = ["%{output_execpath}"],
                        ),
                    ],
                ),
                flag_set(
                    actions = ["c++-link-static-library"],
                    flag_groups = [
                        flag_group(
                            expand_if_available = "libraries_to_link",
                            iterate_over = "libraries_to_link",
                            flag_groups = [
                                flag_group(
                                    expand_if_equal = variable_with_value(
                                        name = "libraries_to_link.type",
                                        value = "object_file",
                                    ),
                                    flags = ["%{libraries_to_link.name}"],
                                ),
                            ],
                        ),
                        flag_group(
                            expand_if_equal = variable_with_value(
                                name = "libraries_to_link.type",
                                value = "object_file_group",
                            ),
                            iterate_over = "libraries_to_link.object_files",
                            flags = ["%{libraries_to_link.object_files}"],
                        ),
                    ],
                ),
            ],
        ),
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=653;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "libraries_to_link",
            flag_sets = [
                flag_set(
                    actions = _actions.link,
                    flag_groups = ([
                        flag_group(
                            expand_if_true = "thinlto_param_file",
                            flags = ["-Wl,@%{thinlto_param_file}"],
                        ),
                        flag_group(
                            expand_if_available = "libraries_to_link",
                            iterate_over = "libraries_to_link",
                            flag_groups = (
                                [
                                    flag_group(
                                        expand_if_equal = variable_with_value(
                                            name = "libraries_to_link.type",
                                            value = "object_file_group",
                                        ),
                                        expand_if_false = "libraries_to_link.is_whole_archive",
                                        flags = ["-Wl,--start-lib"],
                                    ),
                                    flag_group(
                                        expand_if_equal = variable_with_value(
                                            name = "libraries_to_link.type",
                                            value = "static_library",
                                        ),
                                        expand_if_true = "libraries_to_link.is_whole_archive",
                                        flags = ["-Wl,-whole-archive"],
                                    ),
                                    flag_group(
                                        expand_if_equal = variable_with_value(
                                            name = "libraries_to_link.type",
                                            value = "object_file_group",
                                        ),
                                        iterate_over = "libraries_to_link.object_files",
                                        flags = ["%{libraries_to_link.object_files}"],
                                    ),
                                    flag_group(
                                        expand_if_equal = variable_with_value(
                                            name = "libraries_to_link.type",
                                            value = "object_file",
                                        ),
                                        flags = ["%{libraries_to_link.name}"],
                                    ),
                                    flag_group(
                                        expand_if_equal = variable_with_value(
                                            name = "libraries_to_link.type",
                                            value = "interface_library",
                                        ),
                                        flags = ["%{libraries_to_link.name}"],
                                    ),
                                    flag_group(
                                        expand_if_equal = variable_with_value(
                                            name = "libraries_to_link.type",
                                            value = "static_library",
                                        ),
                                        flags = ["%{libraries_to_link.name}"],
                                    ),
                                    flag_group(
                                        expand_if_equal = variable_with_value(
                                            name = "libraries_to_link.type",
                                            value = "dynamic_library",
                                        ),
                                        flags = ["-l%{libraries_to_link.name}"],
                                    ),
                                    flag_group(
                                        expand_if_equal = variable_with_value(
                                            name = "libraries_to_link.type",
                                            value = "versioned_dynamic_library",
                                        ),
                                        flags = ["-l:%{libraries_to_link.name}"],
                                    ),
                                    flag_group(
                                        expand_if_equal = variable_with_value(
                                            name = "libraries_to_link.type",
                                            value = "static_library",
                                        ),
                                        expand_if_true = "libraries_to_link.is_whole_archive",
                                        flags = ["-Wl,-no-whole-archive"],
                                    ),
                                    flag_group(
                                        expand_if_equal = variable_with_value(
                                            name = "libraries_to_link.type",
                                            value = "object_file_group",
                                        ),
                                        expand_if_false = "libraries_to_link.is_whole_archive",
                                        flags = ["-Wl,--end-lib"],
                                    ),
                                ]
                            ),
                        ),
                    ]),
                ),
            ],
        ),
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=826;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "force_pic_flags",
            flag_sets = [
                flag_set(
                    actions = [_actions.cpp_link_executable],
                    flag_groups = [
                        flag_group(
                            expand_if_available = "force_pic",
                            flags = ["-pie"],
                        ),
                    ],
                ),
            ],
        ),
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=842;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "user_link_flags",
            flag_sets = [
                flag_set(
                    actions = _actions.link,
                    flag_groups = [
                        flag_group(
                            expand_if_available = "user_link_flags",
                            iterate_over = "user_link_flags",
                            flags = ["%{user_link_flags}"],
                        ),
                    ],
                ),
            ],
        ),
        feature(
            name = "strip_debug_symbols",
            flag_sets = [
                flag_set(
                    actions = _actions.link,
                    flag_groups = [
                        flag_group(
                            expand_if_available = "strip_debug_symbols",
                            flags = ["-Wl,-S"],
                        ),
                    ],
                ),
            ],
        ),
    ]

    return features

# Legacy features moved from their hardcoded Bazel's Java implementation
# to Starlark.
#
# These legacy features must come after all other features.
def _get_legacy_features_end():
    # Omitted legacy (unused or re-implemented) features:
    #
    # fully_static_link
    # user_compile_flags
    # sysroot
    features = [
        feature(
            name = "linker_param_file",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = _actions.link + _actions.archive,
                    flag_groups = [
                        flag_group(
                            expand_if_available = "linker_param_file",
                            flags = ["@%{linker_param_file}"],
                        ),
                    ],
                ),
            ],
        ),
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=1511;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "compiler_input_flags",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = _actions.compile,
                    flag_groups = [
                        flag_group(
                            expand_if_available = "source_file",
                            flags = ["-c", "%{source_file}"],
                        ),
                    ],
                ),
            ],
        ),
        # https://cs.opensource.google/bazel/bazel/+/master:src/main/java/com/google/devtools/build/lib/rules/cpp/CppActionConfigs.java;l=1538;drc=6d03a2ecf25ad596446c296ef1e881b60c379812
        feature(
            name = "compiler_output_flags",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = _actions.compile,
                    flag_groups = [
                        flag_group(
                            expand_if_available = "output_assembly_file",
                            flags = ["-S"],
                        ),
                        flag_group(
                            expand_if_available = "output_preprocess_file",
                            flags = ["-E"],
                        ),
                        flag_group(
                            expand_if_available = "output_file",
                            flags = ["-o", "%{output_file}"],
                        ),
                    ],
                ),
            ],
        ),
    ]

    return features

def _link_crtbegin(shared_library_crtbegin = None):
    if shared_library_crtbegin == None:
        return []

    features = [
        feature(
            # User facing feature
            name = "link_crt",
            implies = [
                "link_crtbegin",
                "link_crtend"
            ],
            enabled = True,
        ),
        # TODO(b/197920036): add support for linking shared/static executables
        feature(
            name = "link_crtbegin",
            enabled = False,
            flag_sets = [
                flag_set(
                    actions = [_actions.cpp_link_dynamic_library],
                    flag_groups = [
                        flag_group(
                            flags = [shared_library_crtbegin.path],
                        ),
                    ],
                ),
            ],
        ),
    ]

    return features

def _link_crtend(shared_library_crtend):
    if shared_library_crtend == None:
        return None

    # TODO(b/197920036): add support for linking shared/static executables
    return feature(
        name = "link_crtend",
        enabled = False,
        flag_sets = [
            flag_set(
                actions = [_actions.cpp_link_dynamic_library],
                flag_groups = [
                    flag_group(
                        flags = [shared_library_crtend.path],
                    ),
                ],
            ),
        ],
    )

# Create the full list of features.
def get_features(
        target_os,
        target_flags,
        linker_only_flags,
        builtin_include_dirs,
        libclang_rt_builtin,
        shared_library_crtbegin,
        shared_library_crtend):
    os_is_device = target_os == "android"

    # Aggregate all features in order:
    features = [
        # Do not depend on Bazel's built-in legacy features and action configs:
        feature(name = "no_legacy_features"),

        # This must always come first, after no_legacy_features.
        _link_crtbegin(shared_library_crtbegin),

        # Explicitly depend on a subset of legacy configs:
        _get_legacy_features_begin(),
        _compiler_flag_features(target_flags, os_is_device),
        _rpath_features(),
        _rtti_features(),
        _use_libcrt_feature(libclang_rt_builtin),
        # Shared compile/link flags that should also be part of the link actions.
        _linker_flag_feature("linker_target_flags", flags = target_flags),
        # Link-only flags.
        _linker_flag_feature("linker_flags", flags = linker_only_flags + _additional_linker_flags(os_is_device)),
        # System include directories features
        _toolchain_include_feature(system_includes = builtin_include_dirs),
        _get_legacy_features_end(),

        # This must always come last.
        _link_crtend(shared_library_crtend),
    ]
    return _flatten([f for f in features if f != None])
