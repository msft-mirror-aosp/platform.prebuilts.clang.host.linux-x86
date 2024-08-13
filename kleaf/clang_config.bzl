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

"""Configure CC toolchain for Android kernel."""

load(
    "@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl",
    "feature",
)
load(":android.bzl", "android")
load(":common.bzl", "common")
load(":linux.bzl", "linux")

def _impl(ctx):
    if ctx.attr.target_os == "linux":
        features = linux.features(ctx)
    elif ctx.attr.target_os == "android":
        features = android.features(ctx)
    else:
        fail("target_os == {} is not supported yet".format(ctx.attr.target_os))

    features += common.features(ctx)
    if ctx.attr.extra_features:
        features.append(feature(
            name = "kleaf-extra-features",
            enabled = True,
            implies = ctx.attr.extra_features,
        ))
    if ctx.attr.static_link_cpp_runtimes:
        # Add custom static_link_cpp_runtimes and always set it to true. This
        # allows static_runtime_lib/dynamic_runtime_lib to be used.
        features.append(feature(
            name = "static_link_cpp_runtimes",
            enabled = True,
        ))

        # If the binary has linkstatic=True (the default), always -static to make
        # it fully static.
        features.append(feature(
            name = "static_linking_mode",
            enabled = False,
            implies = [
                "fully_static_link",
            ],
        ))

        # Overrides the builtin static_libgcc feature so it does not add -static-libgcc
        # when static_link_cpp_runtimes is enabled
        features.append(feature(
            name = "static_libgcc",
            enabled = False,
        ))

    sysroot_path = "/dev/null"
    if ctx.file.sysroot_dir:
        sysroot_path = ctx.file.sysroot_dir.path

    return cc_common.create_cc_toolchain_config_info(
        ctx = ctx,
        toolchain_identifier = ctx.attr.toolchain_identifier,
        target_cpu = ctx.attr.target_cpu,
        action_configs = common.action_configs(ctx),
        features = features,
        builtin_sysroot = sysroot_path,

        # The attributes below are required by the constructor, but don't
        # affect actions at all.
        host_system_name = "__toolchain_host_system_name__",
        target_system_name = "__toolchain_target_system_name__",
        target_libc = "__toolchain_target_libc__",
        compiler = ctx.attr.clang_version,
        abi_version = "__toolchain_abi_version__",
        abi_libc_version = "__toolchain_abi_libc_version__",
    )

clang_config = rule(
    implementation = _impl,
    attrs = {
        "target_cpu": attr.string(mandatory = True, values = [
            "arm",
            "arm64",
            "i386",
            "riscv64",
            "x86_64",
        ]),
        "target_os": attr.string(mandatory = True, values = [
            "android",
            "linux",
        ]),
        "sysroot_dir": attr.label(allow_single_file = True),
        "bin_dirs": attr.label_list(),
        "lib_dirs": attr.label_list(),
        "target": attr.string(),
        "toolchain_identifier": attr.string(),
        "clang_version": attr.string(),
        "extra_features": attr.string_list(),
        "static_link_cpp_runtimes": attr.bool(),
    } | common.tool_attrs(),
    provides = [CcToolchainConfigInfo],
)
