"""Copyright (C) 2022 The Android Open Source Project

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
"""

load("@bazel_skylib//lib:unittest.bzl", "analysistest", "asserts")

def _ubsan_integer_overflow_feature_test_impl(ctx):
    env = analysistest.begin(ctx)
    actions = analysistest.target_actions(env)

    for action in actions:
        if action.mnemonic in ["CppCompile", "CppLink"]:
            for sanitizer in ctx.attr.expected_sanitizers:
                asserts.true(
                    env,
                    ("-fsanitize=%s" % sanitizer) in action.argv,
                    "%s action did not contain %s sanitizer arg" % (
                        action.mnemonic,
                        sanitizer,
                    ),
                )

    return analysistest.end(env)

ubsan_sanitizer_test = analysistest.make(
    _ubsan_integer_overflow_feature_test_impl,
    attrs = {
        "expected_sanitizers": attr.string_list(
            doc = "Sanitizers expected to be supplied to the command line",
        ),
    },
)

# Include these different file types to make sure that all actions types are
# triggered
test_srcs = [
    "foo.cpp",
    "bar.c",
    "baz.s",
    "blah.S",
]

def _test_ubsan_integer_overflow_feature():
    name = "ubsan_integer_overflow"
    test_name = name + "_test"
    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["ubsan_integer_overflow"],
        tags = ["manual"],
    )
    ubsan_sanitizer_test(
        name = test_name,
        target_under_test = name,
        expected_sanitizers = [
            "signed-integer-overflow",
            "unsigned-integer-overflow",
        ],
    )
    return test_name

def _test_ubsan_misc_undefined_feature():
    name = "ubsan_misc_undefined"
    test_name = name + "_test"
    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["ubsan_undefined"],  # Just pick one; doesn't matter which
        tags = ["manual"],
    )
    ubsan_sanitizer_test(
        name = test_name,
        target_under_test = name,
        expected_sanitizers = ["undefined"],
    )
    return test_name

def _ubsan_disablement_test_impl(ctx):
    env = analysistest.begin(ctx)
    actions = analysistest.target_actions(env)

    expected_sanitizer_disabling_flag = "-fno-sanitize=%s" % (
        ctx.attr.expected_disabled_sanitizer
    )
    for action in actions:
        if action.mnemonic == "CppCompile":
            if ctx.attr.disabled:
                asserts.true(
                    env,
                    expected_sanitizer_disabling_flag in action.argv,
                    "Disabling flag was missing but expected for sanitizer " +
                    ctx.attr.expected_disabled_sanitizer,
                )
            else:
                asserts.false(
                    env,
                    expected_sanitizer_disabling_flag in action.argv,
                    "Disabling flag was not expected but present for sanitizer " +
                    ctx.attr.expected_disabled_sanitizer,
                )

    return analysistest.end(env)

disablement_test_attrs = {
    "expected_disabled_sanitizer": attr.string(
        doc = "The sanitizer to check for disablement via -fno-sanitize=*",
    ),
    "disabled": attr.bool(
        doc = "Whether the sanitizer above should be disabled explciitly",
    ),
}
ubsan_disablement_test = analysistest.make(
    _ubsan_disablement_test_impl,
    attrs = disablement_test_attrs,
)
ubsan_disablement_linux_test = analysistest.make(
    _ubsan_disablement_test_impl,
    attrs = disablement_test_attrs,
    config_settings = {
        "//command_line_option:platforms": "@//build/bazel/platforms:linux_x86",
    },
)
ubsan_disablement_linux_bionic_test = analysistest.make(
    _ubsan_disablement_test_impl,
    attrs = disablement_test_attrs,
    config_settings = {
        "//command_line_option:platforms": "@//build/bazel/platforms:linux_bionic_x86_64",
    },
)
ubsan_disablement_android_test = analysistest.make(
    _ubsan_disablement_test_impl,
    attrs = disablement_test_attrs,
    config_settings = {
        "//command_line_option:platforms": "@//build/bazel/platforms:android_x86",
    },
)

def _test_ubsan_implicit_integer_sign_change_disabled_by_default_with_integer():
    name = "ubsan_implicit_integer_sign_change_disabled_by_default_with_integer"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["ubsan_integer"],
        tags = ["manual"],
    )
    ubsan_disablement_test(
        name = test_name,
        target_under_test = name,
        expected_disabled_sanitizer = "implicit-integer-sign-change",
        disabled = True,
    )

    return test_name

def _test_ubsan_implicit_integer_sign_change_not_disabled_when_specified():
    name = "ubsan_implicit_integer_sign_change_not_disabled_when_specified"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = [
            "ubsan_integer",
            "ubsan_implicit-integer-sign-change",
        ],
        tags = ["manual"],
    )
    ubsan_disablement_test(
        name = test_name,
        target_under_test = name,
        expected_disabled_sanitizer = "implicit-integer-sign-change",
        disabled = False,
    )

    return test_name

def _test_ubsan_implicit_integer_sign_change_not_disabled_without_integer():
    name = "ubsan_implicit_integer_sign_change_not_disabled_without_integer"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        tags = ["manual"],
    )
    ubsan_disablement_test(
        name = test_name,
        target_under_test = name,
        expected_disabled_sanitizer = "implicit-integer-sign-change",
        disabled = False,
    )

    return test_name

def _test_ubsan_unsigned_shift_base_disabled_by_default_with_integer():
    name = "ubsan_unsigned_shift_base_disabled_by_default_with_integer"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["ubsan_integer"],
        tags = ["manual"],
    )
    ubsan_disablement_test(
        name = test_name,
        target_under_test = name,
        expected_disabled_sanitizer = "unsigned-shift-base",
        disabled = True,
    )

    return test_name

def _test_ubsan_unsigned_shift_base_not_disabled_when_specified():
    name = "ubsan_unsigned_shift_base_not_disabled_when_specified"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = [
            "ubsan_integer",
            "ubsan_unsigned-shift-base",
        ],
        tags = ["manual"],
    )
    ubsan_disablement_test(
        name = test_name,
        target_under_test = name,
        expected_disabled_sanitizer = "unsigned-shift-base",
        disabled = False,
    )

    return test_name

def _test_ubsan_unsigned_shift_base_not_disabled_without_integer():
    name = "ubsan_unsigned_shift_base_not_disabled_without_integer"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        tags = ["manual"],
    )
    ubsan_disablement_test(
        name = test_name,
        target_under_test = name,
        expected_disabled_sanitizer = "unsigned-shift-base",
        disabled = False,
    )

    return test_name

def _test_ubsan_unsupported_non_bionic_checks_disabled_when_linux():
    name = "ubsan_unsupported_non_bionic_checks_disabled_when_linux"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["ubsan_undefined"],
        tags = ["manual"],
    )

    ubsan_disablement_linux_test(
        name = test_name,
        target_under_test = name,
        expected_disabled_sanitizer = "function,vptr",
        disabled = True,
    )

    return test_name

def _test_ubsan_unsupported_non_bionic_checks_not_disabled_when_linux_bionic():
    name = "ubsan_unsupported_non_bionic_checks_not_disabled_when_linux_bionic"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["ubsan_undefined"],
        tags = ["manual"],
    )

    ubsan_disablement_linux_bionic_test(
        name = test_name,
        target_under_test = name,
        expected_disabled_sanitizer = "function,vptr",
        disabled = False,
    )

    return test_name

def _test_ubsan_unsupported_non_bionic_checks_not_disabled_when_android():
    name = "ubsan_unsupported_non_bionic_checks_not_disabled_when_android"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["ubsan_undefined"],
        tags = ["manual"],
    )

    ubsan_disablement_android_test(
        name = test_name,
        target_under_test = name,
        expected_disabled_sanitizer = "function,vptr",
        disabled = False,
    )

    return test_name

def _test_ubsan_unsupported_non_bionic_checks_not_disabled_when_no_ubsan():
    name = "ubsan_unsupported_non_bionic_checks_not_disabled_when_no_ubsan"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        tags = ["manual"],
    )

    ubsan_disablement_linux_test(
        name = test_name,
        target_under_test = name,
        expected_disabled_sanitizer = "function,vptr",
        disabled = False,
    )

    return test_name

def cc_toolchain_features_ubsan_test_suite(name):
    native.test_suite(
        name = name,
        tests = [
            _test_ubsan_integer_overflow_feature(),
            _test_ubsan_misc_undefined_feature(),
            _test_ubsan_implicit_integer_sign_change_disabled_by_default_with_integer(),
            _test_ubsan_implicit_integer_sign_change_not_disabled_when_specified(),
            _test_ubsan_implicit_integer_sign_change_not_disabled_without_integer(),
            _test_ubsan_unsigned_shift_base_disabled_by_default_with_integer(),
            _test_ubsan_unsigned_shift_base_not_disabled_when_specified(),
            _test_ubsan_unsigned_shift_base_not_disabled_without_integer(),
            _test_ubsan_unsupported_non_bionic_checks_disabled_when_linux(),
            _test_ubsan_unsupported_non_bionic_checks_not_disabled_when_android(),
            _test_ubsan_unsupported_non_bionic_checks_not_disabled_when_no_ubsan(),
        ],
    )
