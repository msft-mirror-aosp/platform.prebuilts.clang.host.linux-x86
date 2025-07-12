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

"""Defines a repository that provides all clang toolchains."""

# General comment on toolchain registration orders:
#
# "When using target patterns to register toolchains, the order in which
# the individual toolchains are registered is determined by the following rules:
# [...]
# Within a package, toolchains are registered in the lexicographical order of their names."
#
# Toolchains in this repository is prefixed with numbers to show their ordering.
#
# See
# https://bazel.build/extending/toolchains#registering-building-toolchains

def _clang_toolchain_repository_impl(repository_ctx):
    repository_ctx.file("WORKSPACE.bazel", """\
workspace(name = "{}")
""".format(repository_ctx.attr.name))

    build_file_content = '''\
"""
All clang toolchains used by Kleaf.
"""
load("@kernel_toolchain_info//:dict.bzl","VARS")
load("{architecture_constants}", "SUPPORTED_ARCHITECTURES")
load("{clang_toolchain}", "clang_toolchain")
'''.format(
        architecture_constants = Label(":architecture_constants.bzl"),
        clang_toolchain = Label(":clang_toolchain.bzl"),
    )

    if "KLEAF_USER_CLANG_TOOLCHAIN_PATH" not in repository_ctx.os.environ:
        build_file_content += _empty_clang_toolchain_build_file()
    else:
        build_file_content += _real_clang_toolchain_build_file(repository_ctx)

    build_file_content += _common_aliases_build_file()

    repository_ctx.file("BUILD.bazel", build_file_content)

def _empty_clang_toolchain_build_file():
    build_file_content = '''\

load("{empty_toolchain}", "empty_toolchain")

toolchain_type(
    name = "empty_toolchain_type",
    visibility = ["//visibility:private"],
)

[empty_toolchain(
    name = "1_user_{{}}_clang_toolchain".format(arch.name),
    toolchain_type = ":empty_toolchain_type",
    visibility = ["//visibility:private"],
) for arch in SUPPORTED_ARCHITECTURES]
'''.format(
        empty_toolchain = Label(":empty_toolchain.bzl"),
    )
    return build_file_content

def _real_clang_toolchain_build_file(repository_ctx):
    user_clang_toolchain_path = repository_ctx.os.environ["KLEAF_USER_CLANG_TOOLCHAIN_PATH"]
    user_clang_toolchain_path = repository_ctx.path(user_clang_toolchain_path)

    # Symlink contents of user_clang_toolchain_path to the top of the repository
    for subpath in user_clang_toolchain_path.readdir():
        if subpath.basename in ("BUILD.bazel", "BUILD", "WORKSPACE.bazel", "WORKSPACE"):
            continue

        subpath_s = str(subpath)
        user_clang_toolchain_path_s = str(user_clang_toolchain_path)
        if not subpath_s.startswith(user_clang_toolchain_path_s + "/"):
            fail("FATAL: {} does not start with {}/".format(
                subpath_s,
                user_clang_toolchain_path_s,
            ))

        repository_ctx.symlink(
            subpath,
            subpath_s.removeprefix(user_clang_toolchain_path_s + "/"),
        )

    build_file_content = '''\
filegroup(
    name = "common_binaries",
    srcs = glob([
        "bin/*",
        "lib/*",
    ]),
)

filegroup(
    name = "common_includes",
    srcs = glob([
        "lib/clang/*/include/**",
        "include/c++/**",
    ]),
)

filegroup(
    name = "glibc_binaries",
    srcs = glob([
        "lib/x86_64-unknown-linux-gnu/*",
    ]) + [
        ":common_binaries",
    ],
)

filegroup(
    name = "glibc_includes",
    srcs = glob([
        "include/x86_64-unknown-linux-gnu/c++/**",
    ]) + [
        ":common_includes",
    ],
)

filegroup(
    name = "musl_binaries",
    srcs = glob([
        "bin/*",
        "lib/*",
        "lib/**/x86_64-unknown-linux-musl/*",
        "musl/lib/**/x86_64-unknown-linux-musl/*",
    ]) + [
        ":common_binaries",
    ],
)

filegroup(
    name = "musl_includes",
    srcs = glob([
        "lib/clang/*/include/**",
        "include/c++/**",
        "include/x86_64-unknown-linux-musl/c++/**",
    ]) + [
        ":common_includes",
    ],
)

[clang_toolchain(
    name = "1_user_{{}}_clang_toolchain".format(arch.name),
    arch = arch,
    clang_pkg = ":fake_anchor_target",
    clang_version = "kleaf_user_clang_toolchain_skip_version_check",
) for arch in SUPPORTED_ARCHITECTURES]
'''.format(
        architecture_constants = Label(":architecture_constants.bzl"),
        clang_toolchain = Label(":clang_toolchain.bzl"),
    )

    return build_file_content

def _common_aliases_build_file():
    # Label(): Resolve the label against this extension (clang_toolchain_repository.bzl) so the
    # workspace name is injected properly when //prebuilts is in a subworkspace.
    # @<kleaf tooling workspace>//prebuilts/clang/host/linux-x86/kleaf
    this_pkg = str(Label(":x")).removesuffix(":x")

    # @<kleaf tooling workspace>//prebuilts/clang/host/linux-x86
    linux_x86_pkg = this_pkg.removesuffix("/kleaf")

    build_file_content = """

# Default toolchains.

[clang_toolchain(
    name = "3_default_{{}}_clang_toolchain".format(arch.name),
    clang_pkg = "{linux_x86_pkg}/clang-{{}}".format(VARS["CLANG_VERSION"]),
    clang_version = VARS["CLANG_VERSION"],
    arch = arch,
) for arch in SUPPORTED_ARCHITECTURES]

""".format(
        this_pkg = this_pkg,
        linux_x86_pkg = linux_x86_pkg,
    )

    return build_file_content

clang_toolchain_repository = repository_rule(
    doc = """Defines a repository that provides all clang toolchains Kleaf uses.

    Register them as follows:

    ```
    register_toolchains("@kleaf_clang_toolchain//:all")
    ```

    The user clang toolchain is expected from the path defined in the
    `KLEAF_USER_CLANG_TOOLCHAIN_PATH` environment variable, if set.
""",
    implementation = _clang_toolchain_repository_impl,
    environ = [
        "KLEAF_USER_CLANG_TOOLCHAIN_PATH",
    ],
    local = True,
)
