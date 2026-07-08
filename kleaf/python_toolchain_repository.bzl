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
    toolchain_version_bzl = repository_ctx.attr.toolchain_version_bzl

    build_file_content = '''\
"""
Python toolchain pointing to Clang-bundled Python.
"""
load("{toolchain_version_bzl}", "CLANG_VERSION")
load("@rules_python//python:py_runtime_pair.bzl", "py_runtime_pair")
load("@rules_python//python:py_exec_tools_toolchain.bzl", "py_exec_tools_toolchain")

py_runtime_pair(
    name = "py_runtime_pair",
    py3_runtime = "{linux_x86_pkg}/clang-{{}}:python3".format(CLANG_VERSION),
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
    toolchain_type = "@rules_python//python:toolchain_type",
    visibility = ["//visibility:public"],
)

py_exec_tools_toolchain(
    name = "py_exec_tools_toolchain_impl",
    # Use the interpreter from //python:toolchain_type
    exec_interpreter = None,
)

toolchain(
    name = "py_exec_tools_toolchain",
    exec_compatible_with = [
        "@platforms//os:linux",
        "@platforms//cpu:x86_64",
    ],
    toolchain = ":py_exec_tools_toolchain_impl",
    toolchain_type = "@rules_python//python:exec_tools_toolchain_type",
    visibility = ["//visibility:public"],
)
'''.format(linux_x86_pkg = linux_x86_pkg, toolchain_version_bzl = toolchain_version_bzl)

    repository_ctx.file("BUILD.bazel", build_file_content)

python_toolchain_repository = repository_rule(
    doc = """Defines a repository that provides a Python toolchain pointing to Clang-bundled Python.""",
    implementation = _python_toolchain_repository_impl,
    local = True,
    attrs = {
        "toolchain_version_bzl": attr.string(
            default = "@kernel_toolchain_info//:dict.bzl",
            doc = "Label pointing to the Starlark file containing CLANG_VERSION",
        ),
    },
)
