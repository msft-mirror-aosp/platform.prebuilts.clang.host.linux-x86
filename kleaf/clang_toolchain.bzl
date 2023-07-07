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

"""Defines a cc toolchain for kernel build, based on clang."""

load("@bazel_tools//tools/cpp:toolchain_utils.bzl", "CPP_TOOLCHAIN_TYPE")
load(":clang_config.bzl", "clang_config")

def clang_toolchain(
        name,
        clang_version,
        target_cpu,
        target_os,
        linker_files = None,
        sysroot_label = None,
        sysroot_path = None,
        ndk_triple = None):
    """Defines a cc toolchain for kernel build, based on clang.

    Args:
        name: name of the toolchain
        clang_version: value of `CLANG_VERSION`, e.g. `r475365b`.
        target_cpu: CPU that the toolchain cross-compiles to
        target_os: OS that the toolchain cross-compiles to
        linker_files: Additional dependencies to the linker
        sysroot_label: Label to a list of files from sysroot
        sysroot_path: Path to sysroot
        ndk_triple: `NDK_TRIPLE`.
    """

    if sysroot_path == None:
        sysroot_path = "/dev/null"

    sysroot_labels = []
    if sysroot_label != None:
        sysroot_labels.append(sysroot_label)

    if linker_files == None:
        linker_files = []

    clang = "//{}/parent/clang-{}".format(native.package_name(), clang_version)
    clang_includes = "{}:includes".format(clang)

    # Technically we can split the binaries into those for compiler, linker
    # etc., but since these binaries are usually updated together, it is okay
    # to use a superset here.
    clang_bin = "{}:binaries".format(clang)

    native.filegroup(
        name = name + "_compiler_files",
        srcs = [
            clang_bin,
            clang_includes,
        ] + sysroot_labels,
    )

    native.filegroup(
        name = name + "_linker_files",
        srcs = [clang_bin] + sysroot_labels + linker_files,
    )

    native.filegroup(
        name = name + "_all_files",
        srcs = [
            clang_bin,
            name + "_compiler_files",
            name + "_linker_files",
        ],
    )

    clang_config(
        name = name + "_clang_config",
        clang_version = clang_version,
        sysroot = sysroot_path,
        target_cpu = target_cpu,
        target_os = target_os,
        ndk_triple = ndk_triple,
        toolchain_identifier = name + "_clang_id",
    )

    native.cc_toolchain(
        name = name + "_cc_toolchain",
        all_files = name + "_all_files",
        ar_files = clang_bin,
        compiler_files = name + "_compiler_files",
        dwp_files = clang_bin,
        linker_files = name + "_linker_files",
        objcopy_files = clang_bin,
        strip_files = clang_bin,
        supports_param_files = False,
        toolchain_config = name + "_clang_config",
        toolchain_identifier = name + "_clang_id",
    )

    native.toolchain(
        name = name,
        exec_compatible_with = [
            "@platforms//os:linux",
            "@platforms//cpu:x86_64",
        ],
        target_compatible_with = [
            "@platforms//os:{}".format(target_os),
            "@platforms//cpu:{}".format(target_cpu),
        ],
        toolchain = name + "_cc_toolchain",
        toolchain_type = CPP_TOOLCHAIN_TYPE,
    )
