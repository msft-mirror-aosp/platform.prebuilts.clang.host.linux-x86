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

"""Common features and helper functions for configuring CC toolchain for Android kernel."""

load(
    "@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl",
    "feature",
    "flag_group",
    "flag_set",
    "tool_path",
)
load(
    "@rules_cc//cc:action_names.bzl",
    "ALL_CC_COMPILE_ACTION_NAMES",
    "ALL_CC_LINK_ACTION_NAMES",
)

def _tool_paths(ctx):
    # From _setup_env.sh
    #  HOSTCC=clang
    #  HOSTCXX=clang++
    #  CC=clang
    #  LD=ld.lld
    #  AR=llvm-ar
    #  NM=llvm-nm
    #  OBJCOPY=llvm-objcopy
    #  OBJDUMP=llvm-objdump
    #  OBJSIZE=llvm-size
    #  READELF=llvm-readelf
    #  STRIP=llvm-strip

    # Using symlink "parent" to find the binary because tool_path only accept
    # relative paths to cc_toolchain's package; see
    # https://github.com/bazelbuild/bazel/issues/8438

    return [
        tool_path(
            name = "gcc",
            path = "parent/clang-{}/bin/clang".format(ctx.attr.clang_version),
        ),
        tool_path(
            name = "ld",
            path = "parent/clang-{}/bin/ld.lld".format(ctx.attr.clang_version),
        ),
        tool_path(
            name = "ar",
            path = "parent/clang-{}/bin/llvm-ar".format(ctx.attr.clang_version),
        ),
        tool_path(
            name = "cpp",
            path = "parent/clang-{}/bin/clang++".format(ctx.attr.clang_version),
        ),
        tool_path(
            name = "nm",
            path = "parent/clang-{}/bin/llvm-nm".format(ctx.attr.clang_version),
        ),
        tool_path(
            name = "objdump",
            path = "parent/clang-{}/bin/llvm-objdump".format(ctx.attr.clang_version),
        ),
        tool_path(
            name = "strip",
            path = "parent/clang-{}/bin/llvm-strip".format(ctx.attr.clang_version),
        ),
    ]

def _common_cflags():
    return feature(
        name = "kleaf-no-canonical-prefixes",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = ALL_CC_COMPILE_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            # Work around https://github.com/bazelbuild/bazel/issues/4605
                            # "cxx_builtin_include_directory doesn't work with non-absolute path"
                            "-no-canonical-prefixes",
                        ],
                    ),
                ],
            ),
        ],
    )

def _lld_compiler_rt():
    # From _setup_env.sh
    return feature(
        name = "kleaf-lld-compiler-rt",
        enabled = False,  # Not enabled unless implied by individual os
        flag_sets = [
            flag_set(
                actions = ALL_CC_LINK_ACTION_NAMES,
                flag_groups = [
                    flag_group(
                        flags = [
                            "-fuse-ld=lld",
                            "--rtlib=compiler-rt",
                        ],
                    ),
                ],
            ),
        ],
    )

def _common_features(_ctx):
    """Features that applies to both android and linux toolchain."""
    return [
        _common_cflags(),
        _lld_compiler_rt(),
    ]

common = struct(
    features = _common_features,
    tool_paths = _tool_paths,
)
