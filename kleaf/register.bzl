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

load(":clang_toolchain_repository.bzl", "clang_toolchain_repository")

# buildifier: disable=unnamed-macro
def register_clang_toolchains():
    """Registers all clang toolchains defined in this package.

    The user clang toolchain is expected from the path defined in the
    `KLEAF_USER_CLANG_TOOLCHAIN_PATH` environment variable, if set.
    """

    clang_toolchain_repository(
        name = "kleaf_clang_toolchain",
    )
    native.register_toolchains("@kleaf_clang_toolchain//:all")
