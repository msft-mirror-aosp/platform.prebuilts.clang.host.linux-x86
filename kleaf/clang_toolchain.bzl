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
load(
    "@kernel_toolchain_info//:dict.bzl",
    "VARS",
)
load(":clang_config.bzl", "clang_config")

def clang_toolchain(
        name,
        clang_version,
        target_cpu,
        target_os,
        linker_files = None,
        sysroot_label = None,
        sysroot_path = None,
        ndk_triple = None,
        extra_compatible_with = None):
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
        extra_compatible_with: Extra `exec_compatible_with` / `target_compatible_with`.
    """

    if sysroot_path == None:
        sysroot_path = "/dev/null"

    sysroot_labels = []
    if sysroot_label != None:
        sysroot_labels.append(sysroot_label)

    if linker_files == None:
        linker_files = []

    if extra_compatible_with == None:
        extra_compatible_with = []

    clang_pkg = "//prebuilts/clang/host/linux-x86/clang-{}".format(clang_version)
    clang_includes = Label("{}:includes".format(clang_pkg))

    # Technically we can split the binaries into those for compiler, linker
    # etc., but since these binaries are usually updated together, it is okay
    # to use a superset here.
    clang_all_binaries = Label("{}:binaries".format(clang_pkg))

    # Individual binaries
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
    #
    # Note: ld.lld does not recognize --target etc. from android.bzl,
    # so just use clang directly
    clang = Label("{}:bin/clang".format(clang_pkg))
    clang_plus_plus = Label("{}:bin/clang++".format(clang_pkg))
    ld = clang
    strip = Label("{}:bin/llvm-strip".format(clang_pkg))
    ar = Label("{}:bin/llvm-ar".format(clang_pkg))
    objcopy = Label("{}:bin/llvm-objcopy".format(clang_pkg))
    # cc_* rules doesn't seem to need nm, obj-dump, size, and readelf

    native.filegroup(
        name = name + "_compiler_files",
        srcs = [
            clang_all_binaries,
            clang_includes,
        ] + sysroot_labels,
    )

    native.filegroup(
        name = name + "_linker_files",
        srcs = [clang_all_binaries] + sysroot_labels + linker_files,
    )

    native.filegroup(
        name = name + "_all_files",
        srcs = [
            clang_all_binaries,
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
        clang = clang,
        ld = ld,
        clang_plus_plus = clang_plus_plus,
        strip = strip,
        ar = ar,
        objcopy = objcopy,
    )

    native.cc_toolchain(
        name = name + "_cc_toolchain",
        all_files = name + "_all_files",
        ar_files = clang_all_binaries,
        compiler_files = name + "_compiler_files",
        dwp_files = clang_all_binaries,
        linker_files = name + "_linker_files",
        objcopy_files = clang_all_binaries,
        strip_files = clang_all_binaries,
        supports_param_files = False,
        toolchain_config = name + "_clang_config",
        toolchain_identifier = name + "_clang_id",
    )

    native.toolchain(
        name = name,
        exec_compatible_with = [
            "@platforms//os:linux",
            "@platforms//cpu:x86_64",
        ] + extra_compatible_with,
        target_compatible_with = [
            "@platforms//os:{}".format(target_os),
            "@platforms//cpu:{}".format(target_cpu),
        ] + extra_compatible_with,
        toolchain = name + "_cc_toolchain",
        toolchain_type = CPP_TOOLCHAIN_TYPE,
    )

def linux_x86_64_clang_toolchain(
        name,
        clang_version,
        extra_compatible_with = None):
    """Declare an linux_x86_64 toolchain.

    Args:
        name: name prefix
        clang_version: `CLANG_VERSION`
        extra_compatible_with: extra `exec_compatible_with` and `target_compatible_with`
    """
    clang_toolchain(
        name = name,
        clang_version = clang_version,
        linker_files = [
            # From _setup_env.sh, HOSTLDFLAGS
            Label("//prebuilts/kernel-build-tools:linux-x86-libs"),
        ],
        # From _setup_env.sh
        # sysroot_flags+="--sysroot=${ROOT_DIR}/build/kernel/build-tools/sysroot "
        sysroot_label = Label("//build/kernel:sysroot"),
        sysroot_path = "build/kernel/build-tools/sysroot",
        target_cpu = "x86_64",
        target_os = "linux",
        extra_compatible_with = extra_compatible_with,
    )

def android_arm64_clang_toolchain(
        name,
        clang_version,
        extra_compatible_with = None):
    """Declare an android_arm64 toolchain.

    Args:
        name: name prefix
        clang_version: `CLANG_VERSION`
        extra_compatible_with: extra `exec_compatible_with` and `target_compatible_with`
    """
    clang_toolchain(
        name = name,
        clang_version = clang_version,
        ndk_triple = VARS.get("AARCH64_NDK_TRIPLE"),
        # From _setup_env.sh: when NDK triple is set,
        # --sysroot=${NDK_DIR}/toolchains/llvm/prebuilt/linux-x86_64/sysroot
        sysroot_label = "@prebuilt_ndk//:sysroot" if "AARCH64_NDK_TRIPLE" in VARS else None,
        sysroot_path = "external/prebuilt_ndk/toolchains/llvm/prebuilt/linux-x86_64/sysroot" if "AARCH64_NDK_TRIPLE" in VARS else None,
        target_cpu = "arm64",
        target_os = "android",
        extra_compatible_with = extra_compatible_with,
    )

def android_x86_64_clang_toolchain(
        name,
        clang_version,
        extra_compatible_with = None):
    """Declare an android_x86_64 toolchain.

    Args:
        name: name prefix
        clang_version: `CLANG_VERSION`
        extra_compatible_with: extra `exec_compatible_with` and `target_compatible_with`
    """
    clang_toolchain(
        name = name,
        clang_version = clang_version,
        ndk_triple = VARS.get("X86_64_NDK_TRIPLE"),
        # From _setup_env.sh: when NDK triple is set,
        # --sysroot=${NDK_DIR}/toolchains/llvm/prebuilt/linux-x86_64/sysroot
        sysroot_label = "@prebuilt_ndk//:sysroot" if "X86_64_NDK_TRIPLE" in VARS else None,
        sysroot_path = "external/prebuilt_ndk/toolchains/llvm/prebuilt/linux-x86_64/sysroot" if "X86_64_NDK_TRIPLE" in VARS else None,
        target_cpu = "x86_64",
        target_os = "android",
        extra_compatible_with = extra_compatible_with,
    )

def android_riscv64_clang_toolchain(
        name,
        clang_version,
        extra_compatible_with = None):
    """Declare an android_riscv toolchain.

    Args:
        name: name prefix
        clang_version: `CLANG_VERSION`
        extra_compatible_with: extra `exec_compatible_with` and `target_compatible_with`
    """
    clang_toolchain(
        name = name,
        clang_version = clang_version,
        target_cpu = "riscv64",
        target_os = "android",
        extra_compatible_with = extra_compatible_with,
        # TODO(b/271919464): We need NDK_TRIPLE for riscv
    )
