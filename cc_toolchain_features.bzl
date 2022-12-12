"""Feature definitions for Android's C/C++ toolchain.

This top level list of features are available through the get_features function.
"""

load(
    "@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl",
    "feature",
    "feature_set",
    "flag_group",
    "flag_set",
    "variable_with_value",
    "with_feature_set",
)
load(
    ":cc_toolchain_constants.bzl",
    _actions = "actions",
    _arches = "arches",
    _c_std_versions = "c_std_versions",
    _cpp_std_versions = "cpp_std_versions",
    _default_c_std_version = "default_c_std_version",
    _default_c_std_version_no_gnu = "default_c_std_version_no_gnu",
    _default_cpp_std_version = "default_cpp_std_version",
    _default_cpp_std_version_no_gnu = "default_cpp_std_version_no_gnu",
    _experimental_c_std_version = "experimental_c_std_version",
    _experimental_c_std_version_no_gnu = "experimental_c_std_version_no_gnu",
    _experimental_cpp_std_version = "experimental_cpp_std_version",
    _experimental_cpp_std_version_no_gnu = "experimental_cpp_std_version_no_gnu",
    _flags = "flags",
    _generated_constants = "generated_constants",
)
load("@soong_injection//api_levels:api_levels.bzl", _api_levels = "api_levels")
load("@soong_injection//product_config:product_variables.bzl", "product_vars")

def _get_sdk_version_features(os_is_device, target_arch):
    if not os_is_device:
        return []

    default_sdk_version = "10000"
    sdk_feature_prefix = "sdk_version_"
    all_sdk_versions = [default_sdk_version]
    for level in _api_levels.values():
        all_sdk_versions.append(str(level))

    # Explicitly support internal branch state where the platform sdk version has
    # finalized, but the sdk is still active, so it's represented by a 9000-ish
    # value in _api_levels.
    platform_sdk_version = str(product_vars["Platform_sdk_version"])
    if platform_sdk_version not in all_sdk_versions:
        all_sdk_versions.append(platform_sdk_version)

    flag_prefix = "--target="
    if target_arch == _arches.X86:
        flag_prefix += "i686-linux-android"
    elif target_arch == _arches.X86_64:
        flag_prefix += "x86_64-linux-android"
    elif target_arch == _arches.Arm:
        flag_prefix += _generated_constants.ArmClangTriple
    elif target_arch == _arches.Arm64:
        flag_prefix += "aarch64-linux-android"
    else:
        fail("Unknown target arch %s" % (target_arch))

    features = [feature(
        name = "sdk_version_default",
        enabled = True,
        implies = [sdk_feature_prefix + default_sdk_version],
    )]
    features.extend([
        feature(name = sdk_feature_prefix + sdk_version, provides = ["sdk_version"])
        for sdk_version in all_sdk_versions
    ])
    features.append(feature(
        name = "sdk_version_flag",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _actions.compile + _actions.link,
                flag_groups = [
                    flag_group(
                        flags = [flag_prefix + sdk_version],
                    ),
                ],
                with_features = [
                    with_feature_set(
                        features = [sdk_feature_prefix + sdk_version],
                    ),
                ],
            )
            for sdk_version in all_sdk_versions
        ],
    ))
    return features

def _get_c_std_features():
    features = []
    features.append(feature(
        # The default cpp_std feature. Remember to disable
        # this feature if enabling another cpp_std feature.
        name = "cpp_std_default",
        enabled = True,
        implies = [_default_cpp_std_version],
    ))
    features.append(feature(
        # The default c_std feature. Remember to disable
        # this feature if enabling another cpp_std feature.
        name = "c_std_default",
        enabled = True,
        implies = [_default_c_std_version],
    ))

    features.append(feature(
        name = "cpp_std_default_no_gnu",
        implies = [_default_cpp_std_version_no_gnu],
    ))
    features.append(feature(
        name = "c_std_default_no_gnu",
        implies = [_default_cpp_std_version_no_gnu],
    ))
    features.append(feature(
        name = "cpp_std_experimental",
        implies = [_experimental_cpp_std_version],
    ))
    features.append(feature(
        name = "c_std_experimental",
        implies = [_experimental_cpp_std_version],
    ))
    features.append(feature(
        name = "cpp_std_experimental_no_gnu",
        implies = [_experimental_cpp_std_version_no_gnu],
    ))
    features.append(feature(
        name = "c_std_experimental_no_gnu",
        implies = [_experimental_cpp_std_version_no_gnu],
    ))
    features.extend([
        feature(name = std_version, provides = ["cpp_std"])
        for std_version in _cpp_std_versions
    ])
    features.extend([
        feature(name = std_version, provides = ["c_std"])
        for std_version in _c_std_versions
    ])
    features.append(feature(
        name = "cpp_std_flag",
        enabled = True,
        # Create the -std flag group for each of the std versions,
        # enabled with with_feature_set.
        flag_sets = [
            flag_set(
                actions = [_actions.cpp_compile],
                flag_groups = [
                    flag_group(
                        flags = ["-std=" + std_version],
                    ),
                ],
                with_features = [
                    with_feature_set(
                        features = [std_version],
                    ),
                ],
            )
            for std_version in _cpp_std_versions
        ],
    ))
    features.append(feature(
        name = "c_std_flag",
        enabled = True,
        # Create the -std flag group for each of the std versions,
        # enabled with with_feature_set.
        flag_sets = [
            flag_set(
                actions = [_actions.c_compile],
                flag_groups = [
                    flag_group(
                        flags = ["-std=" + std_version],
                    ),
                ],
                with_features = [
                    with_feature_set(
                        features = [std_version],
                    ),
                ],
            )
            for std_version in _c_std_versions
        ],
    ))
    return features

def _compiler_flag_features(os_is_device, target_arch, target_os, flags = []):
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
    asm_only_flags = _generated_constants.CommonGlobalAsflags

    # Default C++ compile action only flags (No C)
    cpp_only_flags = []
    cpp_only_flags.extend(_generated_constants.CommonGlobalCppflags)
    if os_is_device:
        cpp_only_flags.extend(_generated_constants.DeviceGlobalCppflags)
    else:
        cpp_only_flags.extend(_generated_constants.HostGlobalCppflags)

    # Default C compile action only flags (No C++)
    c_only_flags = []
    c_only_flags.extend(_generated_constants.CommonGlobalConlyflags)

    # Flags that only apply in the external/ directory.
    non_external_flags = _flags.non_external_defines

    features = []

    # TODO: disabled on windows
    features.append(feature(
        name = "pic",
        enabled = False,
        flag_sets = [
            flag_set(
                actions = _actions.compile,
                flag_groups = [
                    flag_group(
                        flags = ["-fPIC"],
                    ),
                ],
                with_features = [
                    with_feature_set(
                        features = ["linker_flags"],
                        not_features = ["pie"],
                    ),
                ],
            ),
        ],
    ))

    features.append(feature(
        name = "pie",
        enabled = False,
        flag_sets = [
            flag_set(
                actions = _actions.compile,
                flag_groups = [
                    flag_group(
                        flags = ["-fPIE"],
                    ),
                ],
                with_features = [
                    with_feature_set(
                        features = ["linker_flags"],
                        not_features = ["pic"],
                    ),
                ],
            ),
        ],
    ))

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
                with_features = [
                    with_feature_set(
                        not_features = ["external_compiler_flags"],
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
    if c_only_flags:
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
        name = "external_compiler_flags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _actions.compile,
                flag_groups = [
                    flag_group(
                        flags = _generated_constants.ExternalCflags,
                    ),
                ],
                with_features = [
                    with_feature_set(
                        not_features = ["non_external_compiler_flags"],
                    ),
                ],
            ),
        ],
    ))

    features.append(feature(
        name = "arm_isa_arm",
        enabled = False,
        provides = ["arm_isa"],
        flag_sets = [
            flag_set(
                actions = _actions.compile,
                flag_groups = [
                    flag_group(
                        flags = ["-fstrict-aliasing"],
                    ),
                ],
            ),
        ],
    ))

    features.append(feature(
        name = "arm_isa_thumb",
        enabled = target_arch == _arches.Arm,
        provides = ["arm_isa"],
        flag_sets = [
            flag_set(
                actions = _actions.compile,
                flag_groups = [
                    flag_group(
                        flags = [
                            "-mthumb",
                            "-Os",
                        ],
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

    if target_os != "darwin":
        # These cannot be overriden by the user.
        features.append(feature(
            name = "no_override_clang_external_global_copts",
            enabled = True,
            flag_sets = [
                flag_set(
                    # We want this to apply to all actions except assembly
                    # primarily to match Soong's semantics
                    actions = [a for a in _actions.compile if a not in _actions.assemble],
                    flag_groups = [
                        flag_group(
                            flags = _generated_constants.NoOverrideExternalGlobalCflags,
                        ),
                    ],
                ),
            ],
            requires = [
                feature_set(features = [
                    "external_compiler_flags",
                ]),
            ],
        ))

    return features

def _rtti_features(rtti_toggle):
    if not rtti_toggle:
        return []

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

# TODO(b/202167934): Darwin does not support pack dynamic relocations
def _pack_dynamic_relocations_features(os_is_device):
    pack_dynamic_relocations_feature = feature(
        name = "pack_dynamic_relocations",
        enabled = True,
    )

    disable_pack_relocations_feature = feature(
        name = "disable_pack_relocations",
        flag_sets = [
            flag_set(
                actions = _actions.link,
                flag_groups = [
                    flag_group(
                        flags = ["-Wl,--pack-dyn-relocs=none"],
                    ),
                ],
                with_features = [
                    with_feature_set(
                        features = ["linker_flags"],
                        not_features = ["pack_dynamic_relocations"],
                    ),
                ],
            ),
        ],
        enabled = False,
    )

    if not os_is_device:
        return [pack_dynamic_relocations_feature, disable_pack_relocations_feature]

    # sdk version >= 30
    sht_relr_feature = feature(
        name = "sht_relr",
        provides = ["pack_dynamic_relocations"],
        flag_sets = [
            flag_set(
                actions = _actions.link,
                flag_groups = [
                    flag_group(
                        flags = ["-Wl,--pack-dyn-relocs=android+relr"],
                    ),
                ],
                with_features = [
                    with_feature_set(
                        features = ["linker_flags"],
                        not_features = [
                            "disable_pack_relocations",
                            "android_relr",
                            "relocation_packer",
                        ],
                    ),
                ],
            ),
        ],
        enabled = True,
    )

    # sdk version >= 28
    android_relr_feature = feature(
        name = "android_relr",
        provides = ["pack_dynamic_relocations"],
        flag_sets = [
            flag_set(
                actions = _actions.link,
                flag_groups = [
                    flag_group(
                        flags = ["-Wl,--pack-dyn-relocs=android+relr", "-Wl,--use-android-relr-tags"],
                    ),
                ],
                with_features = [
                    with_feature_set(
                        features = ["linker_flags"],
                        not_features = [
                            "disable_pack_relocations",
                            "sht_relr",
                            "relocation_packer",
                        ],
                    ),
                ],
            ),
        ],
        enabled = False,
    )

    # sdk version >= 32
    relocation_packer_feature = feature(
        name = "relocation_packer",
        provides = ["pack_dynamic_relocations"],
        flag_sets = [
            flag_set(
                actions = _actions.link,
                flag_groups = [
                    flag_group(
                        flags = ["-Wl,--pack-dyn-relocs=android"],
                    ),
                ],
                with_features = [
                    with_feature_set(
                        features = ["linker_flags"],
                        not_features = [
                            "disable_pack_relocations",
                            "sht_relr",
                            "android_relr",
                        ],
                    ),
                ],
            ),
        ],
        enabled = False,
    )

    return [
        pack_dynamic_relocations_feature,
        disable_pack_relocations_feature,
        sht_relr_feature,
        android_relr_feature,
        relocation_packer_feature,
    ]

# TODO(b/202167934): Darwin by default disallows undefined symbols, to allow, -Wl,undefined,dynamic_lookup
def _undefined_symbols_feature():
    return _linker_flag_feature("no_undefined_symbols", flags = ["-Wl,--no-undefined"], enabled = True)

def _dynamic_linker_flag_feature(os_is_device, arch_is_64_bit):
    if os_is_device:
        # TODO: handle bootstrap partition, asan
        dynamic_linker_path = "/system/bin/linker"
        if arch_is_64_bit:
            dynamic_linker_path += "64"
        return _binary_linker_flag_feature(name = "dynamic_linker", flags = ["-Wl,-dynamic-linker," + dynamic_linker_path])

    # TODO(b/205771732, b/205772164): linux_musl and linux_bionic should
    # add "-Wl,--no-dynamic-linker".
    return []

# TODO(b/202167934): Darwin uses @loader_path in place of $ORIGIN
def _rpath_features(os_is_device, arch_is_64_bit):
    runtime_library_search_directories_flag_sets = [
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
    ]

    if (not os_is_device) and arch_is_64_bit:
        runtime_library_search_directories_flag_sets += [flag_set(
            actions = _actions.link,
            flag_groups = [
                flag_group(
                    flag_groups = [
                        flag_group(
                            flags = [
                                "-Wl,-rpath,$ORIGIN/../lib64",
                                "-Wl,-rpath,$ORIGIN/lib64",
                            ],
                        ),
                    ],
                ),
            ],
            with_features = [
                with_feature_set(not_features = ["static_link_cpp_runtimes"]),
            ],
        )]

    runtime_library_search_directories_feature = feature(
        name = "runtime_library_search_directories",
        flag_sets = runtime_library_search_directories_flag_sets,
    )

    disable_rpath_feature = feature(
        name = "disable_rpath",
        enabled = False,
    )
    return [runtime_library_search_directories_feature, disable_rpath_feature]

def _use_libcrt_feature(path):
    if not path:
        return None
    return _flag_feature("use_libcrt", actions = _actions.link, flags = [
        path.path,
        "-Wl,--exclude-libs=" + path.path,
    ])

def _flag_feature(name, actions = None, flags = None, enabled = True):
    if not flags or not actions:
        return None
    return feature(
        name = name,
        enabled = enabled,
        flag_sets = [
            flag_set(
                actions = actions,
                flag_groups = [
                    flag_group(flags = flags),
                ],
            ),
        ],
    )

def _linker_flag_feature(name, flags = [], enabled = True):
    return _flag_feature(name, actions = _actions.link, flags = flags, enabled = enabled)

def _archiver_flag_feature(name, flags = [], enabled = True):
    return _flag_feature(name, actions = _actions.archive, flags = flags, enabled = enabled)

def _binary_linker_flag_feature(name, flags = [], enabled = True):
    return _flag_feature(name, actions = [_actions.cpp_link_executable], flags = flags, enabled = enabled)

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

def _stub_library_feature():
    return feature(
        name = "stub_library",
        enabled = False,
        flag_sets = [
            flag_set(
                actions = [_actions.c_compile],
                flag_groups = [
                    flag_group(
                        # Ensures that the stub libraries are always compiled with default visibility
                        flags = _generated_constants.StubLibraryCompilerFlags + ["-fvisibility=default"],
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

def _additional_archiver_flags(target_os):
    archiver_flags = []
    if target_os != "darwin":
        archiver_flags.extend(_flags.non_darwin_archiver_flags)
    return archiver_flags

# Additional linker flags that are dependent on a host or device target.
def _additional_linker_flags(os_is_device):
    linker_flags = []
    if os_is_device:
        linker_flags.extend(_generated_constants.DeviceGlobalLldflags)
        linker_flags.extend(_flags.bionic_linker_flags)
    else:
        linker_flags.extend(_generated_constants.HostGlobalLldflags)
    return linker_flags

def _static_binary_linker_flags(os_is_device):
    linker_flags = []
    if os_is_device:
        linker_flags.extend(_flags.bionic_static_executable_linker_flags)
    return linker_flags

def _shared_binary_linker_flags(os_is_device, target_os):
    linker_flags = []
    if os_is_device:
        linker_flags.extend(_flags.bionic_dynamic_executable_linker_flags)
    elif target_os != "windows":
        linker_flags.extend(_flags.host_non_windows_dynamic_executable_linker_flags)
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
        # pic
        # force_pic_flags
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
                            flags = ["crsPD"],
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
                                        flags = ["-Wl,--whole-archive"],
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
                                        flags = ["-Wl,--no-whole-archive"],
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
            enabled = False,
        ),
        feature(
            name = "llvm_coverage_map_format",
            flag_sets = [
                flag_set(
                    actions = _actions.compile,
                    flag_groups = [
                        flag_group(
                            flags = [
                                "-fprofile-instr-generate=/data/misc/trace/clang-%%p-%%m.profraw",
                                "-fcoverage-mapping",
                                "-Wno-pass-failed",
                                "-D__ANDROID_CLANG_COVERAGE__",
                            ],
                        ),
                    ],
                ),
                flag_set(
                    actions = [_actions.c_compile, _actions.cpp_compile],
                    flag_groups = [flag_group(flags = ["-Wno-frame-larger-than="])],
                ),
                # TODO(b/233660582): support "-Wl,--wrap,open" and libprofile-clang-extras
                flag_set(
                    actions = _actions.link,
                    flag_groups = [flag_group(flags = ["-fprofile-instr-generate"])],
                ),
                flag_set(
                    actions = _actions.link,
                    flag_groups = [flag_group(flags = ["-Wl,--wrap,open"])],
                    with_features = [
                        with_feature_set(
                            features = ["android_coverage_lib"],
                        ),
                    ],
                ),
            ],
            requires = [feature_set(features = ["coverage"])],
        ),
        feature(name = "coverage"),
        feature(name = "android_coverage_lib"),
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

def _link_crtbegin(crt_files):
    # in practice, either all of these are supported for a toolchain or none of them do
    if crt_files.shared_library_crtbegin == None or crt_files.shared_binary_crtbegin == None or crt_files.static_binary_crtbegin == None:
        return []

    features = [
        feature(
            # User facing feature
            name = "link_crt",
            enabled = True,
            implies = ["link_crtbegin", "link_crtend"],
        ),
        feature(
            name = "link_crtbegin",
            enabled = True,
        ),
        feature(
            name = "link_crtbegin_so",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = [_actions.cpp_link_dynamic_library],
                    flag_groups = [
                        flag_group(
                            flags = [crt_files.shared_library_crtbegin.path],
                        ),
                    ],
                    with_features = [
                        with_feature_set(
                            features = ["link_crt", "link_crtbegin"],
                        ),
                    ],
                ),
            ],
        ),
        feature(
            name = "link_crtbegin_dynamic",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = [_actions.cpp_link_executable],
                    flag_groups = [
                        flag_group(
                            flags = [crt_files.shared_binary_crtbegin.path],
                        ),
                    ],
                    with_features = [
                        with_feature_set(
                            features = [
                                "dynamic_executable",
                                "link_crt",
                                "link_crtbegin",
                            ],
                        ),
                    ],
                ),
            ],
        ),
        feature(
            name = "link_crtbegin_static",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = [_actions.cpp_link_executable],
                    flag_groups = [
                        flag_group(
                            flags = [crt_files.static_binary_crtbegin.path],
                        ),
                    ],
                    with_features = [
                        with_feature_set(
                            features = [
                                "link_crt",
                                "link_crtbegin",
                                "static_executable",
                            ],
                        ),
                    ],
                ),
            ],
        ),
    ]

    return features

def _link_crtend(crt_files):
    # in practice, either all of these are supported for a toolchain or none of them do
    if crt_files.shared_library_crtend == None or crt_files.binary_crtend == None:
        return None

    return [
        feature(
            name = "link_crtend",
            enabled = True,
        ),
        feature(
            name = "link_crtend_so",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = [_actions.cpp_link_dynamic_library],
                    flag_groups = [
                        flag_group(
                            flags = [crt_files.shared_library_crtend.path],
                        ),
                    ],
                    with_features = [
                        with_feature_set(
                            features = ["link_crt", "link_crtend"],
                        ),
                    ],
                ),
            ],
        ),
        feature(
            name = "link_crtend_binary",
            enabled = True,
            flag_sets = [
                flag_set(
                    actions = [_actions.cpp_link_executable],
                    flag_groups = [
                        flag_group(
                            flags = [crt_files.binary_crtend.path],
                        ),
                    ],
                    with_features = [
                        with_feature_set(
                            features = ["link_crt", "link_crtend"],
                        ),
                    ],
                ),
            ],
        ),
    ]

def _get_thinlto_features():
    features = [
        feature(
            name = "android_thin_lto",
            enabled = False,
            flag_sets = [
                flag_set(
                    actions = _actions.compile + _actions.link + _actions.assemble,
                    flag_groups = [
                        flag_group(
                            flags = [
                                "-flto=thin",
                                "-fsplit-lto-unit",
                            ],
                        ),
                    ],
                    with_features = [
                        with_feature_set(
                            not_features = ["disable_android_thin_lto"],
                        ),
                    ],
                ),
            ],
        ),
        feature(
            name = "android_thin_lto_whole_program_vtables",
            enabled = False,
            requires = [feature_set(features = ["android_thin_lto"])],
            flag_sets = [
                flag_set(
                    actions = _actions.link,
                    flag_groups = [
                        flag_group(
                            flags = ["-fwhole-program-vtables"],
                        ),
                    ],
                    with_features = [
                        with_feature_set(
                            not_features = ["disable_android_thin_lto"],
                        ),
                    ],
                ),
            ],
        ),
        feature(
            name = "android_thin_lto_limit_cross_tu_inline",
            enabled = False,
            requires = [feature_set(features = ["android_thin_lto"])],
            flag_sets = [
                flag_set(
                    actions = _actions.link,
                    flag_groups = [
                        flag_group(
                            flags = ["-Wl,-plugin-opt,-import-instr-limit=5"],
                        ),
                    ],
                    with_features = [
                        with_feature_set(
                            not_features = ["disable_android_thin_lto"],
                        ),
                    ],
                ),
            ],
        ),
        feature(
            name = "disable_android_thin_lto",
            enabled = False,
            flag_sets = [
                flag_set(
                    actions = _actions.compile + _actions.link,
                    flag_groups = [
                        flag_group(
                            flags = ["-fno-lto"],
                        ),
                    ],
                ),
            ],
        ),
    ]
    return features

def _get_ubsan_features(target_os):
    ALL_UBSAN_ACTIONS = _actions.compile + _actions.link + _actions.assemble

    ubsan_features = [
        feature(
            name = "ubsan_integer_overflow",
            enabled = False,
            flag_sets = [
                flag_set(
                    actions = ALL_UBSAN_ACTIONS,
                    flag_groups = [
                        flag_group(
                            flags = [
                                "-fsanitize=unsigned-integer-overflow",
                                "-fsanitize=signed-integer-overflow",
                            ],
                        ),
                    ],
                ),
            ],
            implies = ["ubsan_minimal_runtime"],
        ),
    ]

    ubsan_checks = [
        "alignment",
        "bool",
        "builtin",
        "bounds",
        "array-bounds",
        "local-bounds",
        "enum",
        "float-cast-overflow",
        "float-divide-by-zero",
        "function",
        "implicit-unsigned-integer-truncation",
        "implicit-signed-integer-truncation",
        "implicit-integer-sign-change",
        "integer-divide-by-zero",
        "nonnull-attribute",
        "null",
        "nullability-arg",
        "nullability-assign",
        "nullability-return",
        "objc-cast",
        "object-size",
        "pointer-overflow",
        "return",
        "returns-nonnull-attribute",
        "shift",
        "shift-base",
        "shift-exponent",
        "unsigned-shift-base",
        "signed-integer-overflow",
        "unreachable",
        "unsigned-integer-overflow",
        "vla-bound",
        "vptr",

        # check groups
        "undefined",
        "implicit-integer-truncation",
        "implicit-integer-arithmetic-value-change",
        "implicit-conversion",
        "integer",
        "nullability",
    ]
    ubsan_features += [
        feature(
            name = "ubsan_" + check_name,
            enabled = False,
            flag_sets = [
                flag_set(
                    actions = ALL_UBSAN_ACTIONS,
                    flag_groups = [
                        flag_group(
                            flags = ["-fsanitize=%s" % check_name],
                        ),
                    ],
                ),
            ],
            implies = ["ubsan_minimal_runtime"],
        )
        for check_name in ubsan_checks
    ]

    ubsan_features += [
        feature(
            name = "ubsan_minimal_runtime",
            enabled = False,
            flag_sets = [
                flag_set(
                    actions = ALL_UBSAN_ACTIONS,
                    flag_groups = [
                        flag_group(
                            flags = [
                                "-fsanitize-minimal-runtime",
                                "-fno-sanitize-trap=integer,undefined",
                                "-fno-sanitize-recover=integer,undefined",
                            ],
                        ),
                    ],
                ),
            ],
        ),
    ]

    ubsan_features += [
        feature(
            name = "ubsan_disable_unsupported_integer_checks",
            enabled = True,
            flag_sets = [
                # TODO(b/119329758): If this bug is fixed, this shouldn't be
                #                    needed anymore
                flag_set(
                    actions = _actions.compile,
                    flag_groups = [
                        flag_group(
                            flags = [
                                "-fno-sanitize=implicit-integer-sign-change",
                            ],
                        ),
                    ],
                    with_features = [
                        with_feature_set(
                            features = ["ubsan_integer"],
                            not_features = [
                                "ubsan_implicit-integer-sign-change",
                            ],
                        ),
                    ],
                ),
                # TODO(b/171275751): If this bug is fixed, this shouldn't be
                #                    needed anymore
                flag_set(
                    actions = _actions.compile,
                    flag_groups = [
                        flag_group(
                            flags = [
                                "-fno-sanitize=unsigned-shift-base",
                            ],
                        ),
                    ],
                    with_features = [
                        with_feature_set(
                            features = ["ubsan_integer"],
                            not_features = [
                                "ubsan_unsigned-shift-base",
                            ],
                        ),
                    ],
                ),
            ],
        ),
    ]

    # non-Bionic toolchain prebuilts are missing UBSan's vptr and function san.
    # Musl toolchain prebuilts have vptr and function sanitizers, but enabling
    # them implicitly enables RTTI which causes RTTI mismatch issues with
    # dependencies.
    ubsan_features += [
        feature(
            name = "ubsan_disable_unsupported_non_bionic_checks",
            enabled = target_os not in ["linux_bionic", "android"],
            flag_sets = [
                flag_set(
                    actions = _actions.compile,
                    flag_groups = [
                        flag_group(
                            flags = [
                                "-fno-sanitize=function,vptr",
                            ],
                        ),
                    ],
                    with_features = [
                        with_feature_set(
                            features = ["ubsan_integer_overflow"],
                        ),
                    ] + [
                        with_feature_set(features = ["ubsan_" + check_name])
                        for check_name in ubsan_checks
                    ],
                ),
            ],
        ),
    ]
    return ubsan_features

# Create the full list of features.
def get_features(
        target_os,
        target_arch,
        target_flags,
        compile_only_flags,
        linker_only_flags,
        builtin_include_dirs,
        libclang_rt_builtin,
        crt_files,
        rtti_toggle):
    os_is_device = target_os == "android"
    arch_is_64_bit = target_arch.endswith("64")

    # Aggregate all features in order.
    # Note that the feature-list helper methods called below may return empty
    # lists, depending on whether these features should be enabled. These are still
    # listed in the below stanza as-is to preserve ordering.
    features = [
        # Do not depend on Bazel's built-in legacy features and action configs:
        feature(name = "no_legacy_features"),

        # This must always come first, after no_legacy_features.
        _link_crtbegin(crt_files),

        # Explicitly depend on a subset of legacy configs:
        _get_legacy_features_begin(),

        # get_c_std_features must come before _compiler_flag_features and user
        # compile flags, as build targets may use copts/cflags to explicitly
        # change the -std version to overwrite the defaults or c{,pp}_std attribute
        # value.
        _get_c_std_features(),
        # Features tied to sdk version
        _get_sdk_version_features(os_is_device, target_arch),
        _compiler_flag_features(os_is_device, target_arch, target_os, target_flags + compile_only_flags),
        _rpath_features(os_is_device, arch_is_64_bit),
        _rtti_features(rtti_toggle),
        _use_libcrt_feature(libclang_rt_builtin),
        # Shared compile/link flags that should also be part of the link actions.
        _linker_flag_feature("linker_target_flags", flags = target_flags),
        # Link-only flags.
        _linker_flag_feature("linker_flags", flags = linker_only_flags + _additional_linker_flags(os_is_device)),
        _archiver_flag_feature("additional_archiver_flags", flags = _additional_archiver_flags(target_os)),
        _undefined_symbols_feature(),
        _dynamic_linker_flag_feature(os_is_device, arch_is_64_bit),
        _binary_linker_flag_feature("dynamic_executable", flags = _shared_binary_linker_flags(os_is_device, target_os)),
        # distinct from other static flags as it can be disabled separately
        _binary_linker_flag_feature("static_flag", flags = ["-static"], enabled = False),
        # default for executables is dynamic linking
        _binary_linker_flag_feature("static_executable", flags = _static_binary_linker_flags(os_is_device), enabled = False),
        _pack_dynamic_relocations_features(os_is_device),
        # System include directories features
        _toolchain_include_feature(system_includes = builtin_include_dirs),
        # Compiling stub.c sources to stub libraries
        _stub_library_feature(),
        _get_legacy_features_end(),
        # Optimization
        _get_thinlto_features(),
        # Sanitizers
        _get_ubsan_features(target_os),
        # This must always come last.
        _link_crtend(crt_files),
    ]

    return _flatten([f for f in features if f != None])
