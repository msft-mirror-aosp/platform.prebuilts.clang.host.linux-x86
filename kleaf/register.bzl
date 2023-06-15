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

"""Registers all clang toolchains defined in this package."""

load(":versions.bzl", "VERSIONS")

# buildifier: disable=unnamed-macro
def register_clang_toolchains():
    """Registers all clang toolchains defined in this package."""
    for version in VERSIONS:
        native.register_toolchains(
            "//prebuilts/clang/host/linux-x86/kleaf:{}_android_arm64_clang_toolchain".format(version),
            "//prebuilts/clang/host/linux-x86/kleaf:{}_android_arm_clang_toolchain".format(version),
            "//prebuilts/clang/host/linux-x86/kleaf:{}_android_i386_clang_toolchain".format(version),
            "//prebuilts/clang/host/linux-x86/kleaf:{}_android_riscv64_clang_toolchain".format(version),
            "//prebuilts/clang/host/linux-x86/kleaf:{}_android_x86_64_clang_toolchain".format(version),
            "//prebuilts/clang/host/linux-x86/kleaf:{}_linux_x86_64_clang_toolchain".format(version),
        )

    native.register_toolchains(
        "//prebuilts/clang/host/linux-x86/kleaf:android_arm64_clang_toolchain",
        "//prebuilts/clang/host/linux-x86/kleaf:android_arm_clang_toolchain",
        "//prebuilts/clang/host/linux-x86/kleaf:android_i386_clang_toolchain",
        "//prebuilts/clang/host/linux-x86/kleaf:android_riscv64_clang_toolchain",
        "//prebuilts/clang/host/linux-x86/kleaf:android_x86_64_clang_toolchain",
        "//prebuilts/clang/host/linux-x86/kleaf:linux_x86_64_clang_toolchain",
    )
