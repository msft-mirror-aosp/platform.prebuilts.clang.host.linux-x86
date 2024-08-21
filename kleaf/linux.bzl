# Copyright (C) 2023 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""For Android kernel builds, configure CC toolchain for host binaries."""

load(
    "@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl",
    "feature",
    "feature_set",
    "flag_group",
    "flag_set",
)
load(
    "@rules_cc//cc:action_names.bzl",
    "ALL_CC_LINK_ACTION_NAMES",
    "ALL_CPP_COMPILE_ACTION_NAMES",
)

# Note: openssl (via boringssl) and elfutils should be added explicitly
# via //prebuilts/kernel-build-tools:imported_libs
# Hence not listed here.
# See example in //build/kernel/kleaf/tests/cc_testing:openssl_client

def _linux_features(ctx):
    # Global feature flags.
    features = []

    # The cc toolchain supports building C++ code for cc_* rules.
    features.append(feature(
        name = "kleaf-host-cc",
        enabled = True,
    ))

    # By default, musl stuff are disabled
    # unless enabled by clang_config.extra_features in the musl toolchain.
    features.append(feature(
        name = "kleaf-host-musl",
        enabled = False,
    ))

    # Flags applied to C++ code

    extra_compile_flags = []
    for bin_dir in ctx.files.bin_dirs:
        extra_compile_flags.append("-B" + bin_dir.path)

    extra_link_flags = list(extra_compile_flags)
    for lib_dir in ctx.files.lib_dirs:
        extra_link_flags.append("-L" + lib_dir.path)

    features.append(feature(
        name = "kleaf-host-cc-rules-flags",
        # If all requirements are satisified, enable this by default.
        enabled = True,
        requires = [feature_set(features = [
            "kleaf-host-cc",
        ])],
        flag_sets = [
            flag_set(
                actions = ALL_CC_LINK_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            "--target={}".format(ctx.attr.target),
                            "-stdlib=libc++",
                            # Using -static-libstdc++ removes the complication of adding
                            # libc++ to runfiles for cc_binary, adjusting rpath, and
                            # packaging libc++ along with the cc_binary when it is
                            # mentioned in a pkg_* or copy_to_dist_dir rule.
                            # Can't use static_link_cpp_runtimes because
                            # https://github.com/bazelbuild/bazel/issues/14342
                            "-static-libstdc++",
                        ] + extra_link_flags,
                    ),
                ],
            ),
            flag_set(
                # Applies to C++ code only.
                actions = ALL_CPP_COMPILE_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            "--target={}".format(ctx.attr.target),
                            "-stdlib=libc++",
                        ] + extra_compile_flags,
                    ),
                ],
            ),
        ],
    ))

    # Flags applied to C++ code when it is built against musl libc.
    features.append(feature(
        name = "kleaf-host-cc-rules-musl",
        # If all requirements are satisified, enable this by default.
        enabled = True,
        requires = [feature_set(features = [
            "kleaf-host-cc",
            "kleaf-host-musl",
        ])],
        flag_sets = [
            flag_set(
                # Applies to C++ code only.
                actions = ALL_CPP_COMPILE_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            "-D_LIBCPP_HAS_MUSL_LIBC=ON",
                        ],
                    ),
                ],
            ),
        ],
    ))
    return features

linux = struct(
    features = _linux_features,
)
