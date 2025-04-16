# C Toolchain in Kleaf

## Toolchain declaration

Source: [BUILD.bazel](BUILD.bazel)

The following toolchains are declared:

*   Default toolchains
*   User toolchains, provided via command line flags

### Default toolchains

[Source: `BUILD.bazel`](BUILD.bazel)

Default toolchains, named `{target_os}_{target_cpu}_clang_toolchain`,
are the fallback toolchains when a C toolchain is requested without
any version information.

These toolchains are marked "target_compatible_with":
*   the corresponding `@platforms//os:{target_os}`
*   the corresponding `@platforms//cpu:{target_cpu}`

These toolchains are marked "exec_compatible_with":
*   `@platforms//os:linux`
*   `@platforms//cpu:x86_64`

These toolchains have `cc_toolchain.compiler` set to `CLANG_VERSION` from
`@kernel_toolchain_info//:dict.bzl`.

### User toolchains

[Source: `clang_toolchain_repository.bzl`](clang_toolchain_repository.bzl)

User toolchains,
`@kleaf_clang_toolchain//:1_user_{target_os}_{target_cpu}_clang_toolchain`,
are the toolchains provided by the user from the command line.

These toolchains are marked "target_compatible_with":
*   the corresponding `@platforms//os:{target_os}`
*   the corresponding `@platforms//cpu:{target_cpu}`

These toolchains are marked "exec_compatible_with":
*   `@platforms//os:linux`
*   `@platforms//cpu:x86_64`

These toolchains have `cc_toolchain.compiler` set to
`"kleaf_clang_toolchain_skip_version_check"` (an implementation detail).

## Toolchain registration

[Source: `clang_toolchain_repository.bzl`](clang_toolchain_repository.bzl)

Toolchains are registered in the following order:

1.  If `--user_clang_toolchain` is set, the user toolchains are registered.
    Otherwise, fake user toolchains are registered.
2.  The default toolchains

## Toolchain resolution

The following assumes that the reader is familar with
[Bazel's toolchain resolution process](https://bazel.build/extending/toolchains#toolchain-resolution).

Each toolchain registered through Bazel can specify a list of compatible
constraint values with `exec_compatible_with` and `target_compatible_with`. A
toolchain matches a platform when the toolchain’s constraint values are a
**SUBSET** of the platform's constraint values.

To determine the toolchain for a
[build target](https://bazel.build/extending/rules#target_instantiation),
Bazel does the following.

1.  The platform of the build target is determined. By default, the platform of
    of the build target is the
    [target platform](https://bazel.build/extending/platforms), subject to
    transitions. If the build target is built in an `exec` configuration (e.g.
    when building as one of the
    [`tools` of a `genrule`](https://bazel.build/reference/be/general#genrule.tools),
    or as
    [a dependency with `cfg="exec"`](https://bazel.build/extending/rules#configurations), the platform of the build target is the
    [execution platform](https://bazel.build/extending/platforms), subject to
    transitions.
2.  Bazel looks for a toolchain such that the toolchain's constraint values
    are a **SUBSET** of the constraint values of the platform of the build
    target.

For a build without any flags or transitions, the execution platform is
`@local_config_platform//:host`. For Kleaf, this usually contains two
constraint values: (`linux`, `x86_64`).

For a build without any flags or transitions, Bazel uses
["single-platform builds"](https://bazel.build/extending/platforms)
by default, so the target platform is the same as the execution platform with
two constraint values: (`linux`, `x86_64`).

In Kleaf, if a target is built with `--config=android_{cpu}`, or is wrapped in
an `android_filegroup` with a given `cpu`, the target platform has two
constraint values (`android`, `{cpu}`).

### Example: cc\_* rules

For a build without any flags or transitions, the platform of the build target
has two constrants: (`linux`, `x86_64`). The toolchains are looked up in
the following order:

1.  If `--user_clang_toolchain` is set, `1_user_linux_x86_64_clang_toolchain`
    is returned because its constraint values (`linux`, `x86_64`) are a subset
    of the platform's constraint values (`linux`, `x86_64`). Otherwise, if
    `--user_clang_toolchain` is not set, Bazel continues checking the following
    toolchains.
2.  The default toolchain `linux_x86_64_clang_toolchain` is returned because
    its constraint values (`linux`, `x86_64`) are a subset
    of the platform's constraint values (`linux`, `x86_64`)

If a `cc_*` target is built with `--config=android_arm64`, the platform of the
build target has two constrants: (`android`, `arm64`). The toolchains are looked
up in the following order:

1.  If `--user_clang_toolchain` is set, `1_user_android_arm64_clang_toolchain`
    is returned because its constraint values (`android`, `arm64`) are a subset
    of the platform's constraint values (`android`, `arm64`). Otherwise, if
    `--user_clang_toolchain` is not set, Bazel continues checking the following
    toolchains.
2.  The default toolchain `android_arm64_clang_toolchain` is returned because
    its constraint values (`android`, `arm64`) are a subset
    of the platform's constraint values (`android`, `arm64`)

If a `cc_*` target is wrapped in an `android_filegroup` target with
`cpu="arm64"`, **when the `android_filegroup` target is built**, a transition is
applied on the `cc_*` target so its platform has constraint values
(`android`, `arm64`). The toolchain resolution process is the same as with
`--config=android_arm64.`

### Example: kernel\_* rules without toolchain\_version

If a `kernel_build` does not specify `toolchain_version`:

*   Its execution platform has constraint values (`linux`, `x86_64`)
*   Its target platform has constraint values (`android`, `{target_cpu}`) where
    `{target_cpu}` is specified in `kernel_build.arch`.

When `kernel_toolchains` looks up the toolchains for the execution platform
and the target platform, respectively, the process is similar to the one
for [`cc_*` rules](#example-cc_-rules). That is:

*   If `--user_clang_toolchain` is set, the user toolchains are returned:
    *   `user_linux_x86_64_clang_toolchain` is resolved for the
        execution platform
    *   `user_android_{target_cpu}_clang_toolchain` is resolved for the
        target platform
*   Otherwise, the default toolchains are returned:
    *   `linux_x86_64_clang_toolchain` is resolved for the
        execution platform
    *   `android_{target_cpu}_clang_toolchain` is resolved for the
        target platform

## Caveats

To use the user toolchains, the following is expected from the workspace:

*   An environment variable, `KLEAF_USER_CLANG_TOOLCHAIN_PATH`, must
    be set to the path to the user clang toolchain. This is set by
    Kleaf's Bazel wrapper, `bazel.py`, when `--user_clang_toolchain` is set.
