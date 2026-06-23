# Copyright (C) 2026 The Android Open Source Project
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

"""Defines a repository that provides a Python toolchain pointing to Clang-bundled Python."""

def _python_toolchain_repository_impl(repository_ctx):
    repository_ctx.file("REPO.bazel", "")

    # Resolve the label to prebuilts/clang/host/linux-x86
    # str(Label(":x")) gives @<repo>//prebuilts/clang/host/linux-x86/kleaf:x
    this_pkg = str(Label(":x")).removesuffix(":x")
    linux_x86_pkg = this_pkg.removesuffix("/kleaf")

    build_file_content = '''\
"""
Python toolchain pointing to Clang-bundled Python.
"""
load("@kernel_toolchain_info//:dict.bzl", "VARS")
load("@rules_python//python:py_runtime_pair.bzl", "py_runtime_pair")

py_runtime_pair(
    name = "py_runtime_pair",
    py3_runtime = "{linux_x86_pkg}/clang-{{}}:python3".format(VARS["CLANG_VERSION"]),
)

toolchain(
    name = "py_toolchain",
    exec_compatible_with = [
        "@platforms//os:linux",
        "@platforms//cpu:x86_64",
    ],
    target_compatible_with = [
        "@platforms//os:linux",
        "@platforms//cpu:x86_64",
    ],
    toolchain = ":py_runtime_pair",
    toolchain_type = "@bazel_tools//tools/python:toolchain_type",
    visibility = ["//visibility:public"],
)
'''.format(linux_x86_pkg = linux_x86_pkg)

    repository_ctx.file("BUILD.bazel", build_file_content)

python_toolchain_repository = repository_rule(
    doc = """Defines a repository that provides a Python toolchain pointing to Clang-bundled Python.""",
    implementation = _python_toolchain_repository_impl,
    local = True,
)
