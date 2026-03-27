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

load(
    "@kernel_toolchain_info//:dict.bzl",
    "VARS",
)
load("@rules_cc//cc/toolchains:cc_toolchain.bzl", "cc_toolchain")
load(":clang_config.bzl", "clang_config")

_CC_TOOLCHAIN_TYPE = Label("@bazel_tools//tools/cpp:toolchain_type")

def _clang_toolchain_internal(
        name,
        clang_version,
        arch,
        clang_pkg,
        clang_all_binaries,
        clang_includes,
        linker_files = None,
        sysroot_label = None,
        sysroot_dir = None,
        bin_files = None,
        bin_dirs = None,
        lib_files = None,
        lib_dirs = None,
        target = None,
        extra_features = None,
        dynamic_runtime_lib = None,
        static_runtime_lib = None,
        static_link_cpp_runtimes = None):
    """Defines a cc toolchain for kernel build, based on clang.

    Args:
        name: name of the toolchain
        clang_version: value of `CLANG_VERSION`, e.g. `r475365b`.
        arch: an ArchInfo object to look up extra kwargs.
        clang_pkg: Label to any target in the clang toolchain package.

            This is used as an anchor to locate other targets in the package.
            Name of the label is ignored.
        clang_all_binaries: Label to All compiler, linker, etc. binaries.
        clang_includes: Label to all include files.
        linker_files: Additional dependencies to the linker
        sysroot_label: Label to a list of files from sysroot
        sysroot_dir: Label containing a single directory to sysroot.
        bin_files: Files for `-B`
        bin_dirs: Directory to be set in `-B`
        lib_files: Files for `-L`
        lib_dirs: Directory to be set in `-L`
        target: The `--target` option provided to clang. This is usually `NDK_TRIPLE`.
        extra_features: Extra features enabled on this toolchain
        dynamic_runtime_lib: pass to cc_toolchain
        static_runtime_lib: pass to cc_toolchain
        static_link_cpp_runtimes: If true, enable "static_link_cpp_runtimes" feature but
            disable "static-libgcc".
    """

    sysroot_labels = []
    if sysroot_label != None:
        sysroot_labels.append(sysroot_label)

    if linker_files == None:
        linker_files = []

    if bin_files == None:
        bin_files = []

    if lib_files == None:
        lib_files = []

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
    clang = clang_pkg.relative(":bin/clang")
    clang_plus_plus = clang_pkg.relative(":bin/clang++")

    # TODO: Support building C++ device binaries.
    #   This requires adding "-static-libstdc++" to avoid dynamic linkage.
    ld = clang_plus_plus if arch.target_os == "linux" else clang
    strip = clang_pkg.relative(":bin/llvm-strip")
    ar = clang_pkg.relative(":bin/llvm-ar")
    objcopy = clang_pkg.relative(":bin/llvm-objcopy")
    readelf = clang_pkg.relative(":bin/llvm-readelf")
    # cc_* rules doesn't seem to need nm, obj-dump, size.
    # Kleaf needs readelf.

    native.filegroup(
        name = name + "_compiler_files",
        srcs = [
            clang_all_binaries,
            clang_includes,
        ] + sysroot_labels + bin_files,
    )

    native.filegroup(
        name = name + "_linker_files",
        srcs = [clang_all_binaries] + sysroot_labels + linker_files + bin_files + lib_files,
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
        sysroot_dir = sysroot_dir,
        bin_dirs = bin_dirs,
        lib_dirs = lib_dirs,
        target_cpu = arch.target_cpu,
        target_os = arch.target_os,
        target = target,
        toolchain_identifier = name + "_clang_id",
        clang = clang,
        ld = ld,
        clang_plus_plus = clang_plus_plus,
        strip = strip,
        ar = ar,
        objcopy = objcopy,
        readelf = readelf,
        extra_features = extra_features,
        static_link_cpp_runtimes = static_link_cpp_runtimes,
    )

    cc_toolchain(
        name = name + "_cc_toolchain",
        all_files = name + "_all_files",
        ar_files = clang_all_binaries,
        compiler_files = name + "_compiler_files",
        dwp_files = clang_all_binaries,
        linker_files = name + "_linker_files",
        objcopy_files = clang_all_binaries,
        strip_files = clang_all_binaries,
        dynamic_runtime_lib = dynamic_runtime_lib,
        static_runtime_lib = static_runtime_lib,
        supports_param_files = False,
        toolchain_config = name + "_clang_config",
        toolchain_identifier = name + "_clang_id",
    )

    target_compatible_with = [
        "@platforms//os:{}".format(arch.target_os),
        "@platforms//cpu:{}".format(arch.target_cpu),
    ]
    if arch.target_libc != None:
        target_compatible_with.append(Label("//build/kernel/kleaf/platforms/libc:{}".format(arch.target_libc)))

    native.toolchain(
        name = name,
        exec_compatible_with = [
            "@platforms//os:linux",
            "@platforms//cpu:x86_64",
        ],
        target_compatible_with = target_compatible_with,
        toolchain = name + "_cc_toolchain",
        toolchain_type = _CC_TOOLCHAIN_TYPE,
        visibility = ["@kleaf_clang_toolchain//:__subpackages__"],
    )

def clang_toolchain(
        name,
        clang_version,
        clang_pkg,
        arch):
    """Declare a clang toolchain for the given OS-architecture.

    The toolchain should be under `prebuilts/clang/host/linux-x86`.

    Args:
        name: name of the toolchain
        clang_version: nonconfigurable. version of the toolchain
        clang_pkg: Label to any target in the clang toolchain package.

            This is used as an anchor to locate other targets in the package.
            Name of the label is ignored.
        arch: key to look up extra kwargs.
    """

    clang_pkg = native.package_relative_label(clang_pkg)
    extra_kwargs = _get_extra_kwargs(arch, clang_pkg)

    _clang_toolchain_internal(
        name = name,
        clang_version = clang_version,
        arch = arch,
        clang_pkg = clang_pkg,
        **extra_kwargs
    )

_GCC_PKG = Label("//prebuilts/gcc/linux-x86/host/x86_64-linux-glibc2.17-4.8")

def _get_extra_kwargs(arch, clang_pkg):
    # Common comment on all_binaries:
    # Technically we can split the binaries into those for compiler, linker
    # etc., but since these binaries are usually updated together, it is okay
    # to use a superset here.

    if arch.target_os == "linux" and arch.target_libc == "musl":
        return dict(
            target = "x86_64-unknown-linux-musl",
            sysroot_label = Label("//prebuilts/kernel-build-tools:musl_sysroot_files"),
            sysroot_dir = Label("//prebuilts/kernel-build-tools:musl_sysroot_dir"),
            linker_files = [
                Label("//prebuilts/kernel-build-tools:libs"),
            ],
            extra_features = [
                "kleaf-lld-compiler-rt",
                "kleaf-host-musl",
            ],
            static_runtime_lib = Label(":empty_filegroup"),
            dynamic_runtime_lib = Label("//prebuilts/kernel-build-tools:libc_musl_file"),
            static_link_cpp_runtimes = True,
            clang_all_binaries = clang_pkg.relative(":musl_binaries"),
            clang_includes = clang_pkg.relative(":musl_includes"),
        )

    if arch.target_os == "linux" and arch.target_libc == "glibc":
        return dict(
            target = "x86_64-unknown-linux-gnu",
            sysroot_label = _GCC_PKG.relative(":sysroot_files"),
            sysroot_dir = _GCC_PKG.relative(":sysroot_dir"),
            extra_features = [
                "kleaf-lld",
            ],
            clang_all_binaries = clang_pkg.relative(":glibc_binaries"),
            clang_includes = clang_pkg.relative(":glibc_includes"),
        )

    if arch.target_os != "android":
        fail("Unsupported {}".format(arch))

    if arch.target_cpu == "arm64":
        return dict(
            target = VARS.get("AARCH64_NDK_TRIPLE"),
            sysroot_label = "@prebuilt_ndk//:sysroot_{}_files".format(VARS.get("AARCH64_NDK_TRIPLE")) if "AARCH64_NDK_TRIPLE" in VARS else None,
            sysroot_dir = "@prebuilt_ndk//:sysroot_dir" if "AARCH64_NDK_TRIPLE" in VARS else None,
            clang_all_binaries = clang_pkg.relative(":android_aarch64_binaries"),
            clang_includes = clang_pkg.relative(":common_includes"),
        )

    if arch.target_cpu == "arm":
        return dict(
            target = VARS.get("ARM_NDK_TRIPLE"),
            sysroot_label = "@prebuilt_ndk//:sysroot_{}_files".format(VARS.get("ARM_NDK_TRIPLE")) if "ARM_NDK_TRIPLE" in VARS else None,
            sysroot_dir = "@prebuilt_ndk//:sysroot_dir" if "ARM_NDK_TRIPLE" in VARS else None,
            clang_all_binaries = clang_pkg.relative(":android_arm_binaries"),
            clang_includes = clang_pkg.relative(":common_includes"),
        )

    if arch.target_cpu == "x86_64":
        return dict(
            target = VARS.get("X86_64_NDK_TRIPLE"),
            sysroot_label = "@prebuilt_ndk//:sysroot_{}_files".format(VARS.get("X86_64_NDK_TRIPLE")) if "X86_64_NDK_TRIPLE" in VARS else None,
            sysroot_dir = "@prebuilt_ndk//:sysroot_dir" if "X86_64_NDK_TRIPLE" in VARS else None,
            clang_all_binaries = clang_pkg.relative(":android_x86_64_binaries"),
            clang_includes = clang_pkg.relative(":common_includes"),
        )

    if arch.target_cpu == "i386":
        return dict(
            # i386 uses the same NDK_TRIPLE as x86_64
            target = VARS.get("X86_64_NDK_TRIPLE"),
            sysroot_label = "@prebuilt_ndk//:sysroot_{}_files".format(VARS.get("X86_64_NDK_TRIPLE")) if "X86_64_NDK_TRIPLE" in VARS else None,
            sysroot_dir = "@prebuilt_ndk//:sysroot_dir" if "X86_64_NDK_TRIPLE" in VARS else None,
            clang_all_binaries = clang_pkg.relative(":android_x86_64_binaries"),
            clang_includes = clang_pkg.relative(":common_includes"),
        )

    if arch.target_cpu == "riscv64":
        return dict(
            # TODO(b/271919464): We need NDK_TRIPLE for riscv
            clang_all_binaries = clang_pkg.relative(":android_riscv64_binaries"),
            clang_includes = clang_pkg.relative(":common_includes"),
        )

    fail("Unsupported {}".format(arch))
