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
load(
    "//build/bazel/rules/test_common:flags.bzl",
    "action_flags_test",
)

compile_action_mnemonic = "CppCompile"
link_action_mnemonic = "CppLink"
ubsan_prefix_format = "-fsanitize=%s"

def _ubsan_sanitizer_test(
        name,
        target_under_test,
        expected_sanitizers):
    action_flags_test(
        name = name,
        target_under_test = target_under_test,
        mnemonics_with_flags = [compile_action_mnemonic, link_action_mnemonic],
        expected_flags = [
            ubsan_prefix_format % sanitizer
            for sanitizer in expected_sanitizers
        ],
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
    _ubsan_sanitizer_test(
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
    _ubsan_sanitizer_test(
        name = test_name,
        target_under_test = name,
        expected_sanitizers = ["undefined"],
    )
    return test_name

def _ubsan_disablement_test(
        name,
        target_under_test,
        expected_disabled_sanitizer,
        disabled,
        target_compatible_with):
    no_sanitize_flag_prefix_format = "-fno-sanitize=%s"
    if disabled:
        action_flags_test(
            name = name,
            target_under_test = target_under_test,
            mnemonics_with_flags = [compile_action_mnemonic],
            expected_flags = [
                no_sanitize_flag_prefix_format % expected_disabled_sanitizer,
            ],
            target_compatible_with = target_compatible_with,
        )
    else:
        action_flags_test(
            name = name,
            target_under_test = target_under_test,
            mnemonics_without_flags = [compile_action_mnemonic],
            exclusive = False,
            expected_flags = [
                no_sanitize_flag_prefix_format % expected_disabled_sanitizer,
            ],
            target_compatible_with = target_compatible_with,
        )

def ubsan_disablement_linux_test(
        name,
        target_under_test,
        expected_disabled_sanitizer,
        disabled):
    _ubsan_disablement_test(
        name = name,
        target_under_test = target_under_test,
        expected_disabled_sanitizer = expected_disabled_sanitizer,
        disabled = disabled,
        target_compatible_with = ["@//build/bazel/platforms/os:linux"],
    )

def ubsan_disablement_linux_bionic_test(
        name,
        target_under_test,
        expected_disabled_sanitizer,
        disabled):
    _ubsan_disablement_test(
        name = name,
        target_under_test = target_under_test,
        expected_disabled_sanitizer = expected_disabled_sanitizer,
        disabled = disabled,
        target_compatible_with = ["@//build/bazel/platforms/os:linux_bionic"],
    )

def ubsan_disablement_android_test(
        name,
        target_under_test,
        expected_disabled_sanitizer,
        disabled):
    _ubsan_disablement_test(
        name = name,
        target_under_test = target_under_test,
        expected_disabled_sanitizer = expected_disabled_sanitizer,
        disabled = disabled,
        target_compatible_with = ["@//build/bazel/platforms/os:android"],
    )

def _test_ubsan_implicit_integer_sign_change_disabled_when_linux_with_integer():
    name = "ubsan_implicit_integer_sign_change_disabled_when_linux_with_integer"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["ubsan_integer"],
        tags = ["manual"],
    )
    ubsan_disablement_linux_test(
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
    ubsan_disablement_linux_test(
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
    ubsan_disablement_linux_test(
        name = test_name,
        target_under_test = name,
        expected_disabled_sanitizer = "implicit-integer-sign-change",
        disabled = False,
    )

    return test_name

def _test_ubsan_unsigned_shift_base_disabled_when_linux_with_integer():
    name = "ubsan_unsigned_shift_base_disabled_when_linux_with_integer"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["ubsan_integer"],
        tags = ["manual"],
    )
    ubsan_disablement_linux_test(
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
    ubsan_disablement_linux_test(
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
    ubsan_disablement_linux_test(
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

# TODO(b/263787980): Uncomment when bionic toolchain is implemented
#def _test_ubsan_unsupported_non_bionic_checks_not_disabled_when_linux_bionic():
#    name = "ubsan_unsupported_non_bionic_checks_not_disabled_when_linux_bionic"
#    test_name = name + "_test"
#
#    native.cc_binary(
#        name = name,
#        srcs = test_srcs,
#        features = ["ubsan_undefined"],
#        tags = ["manual"],
#    )
#
#    ubsan_disablement_linux_bionic_test(
#        name = test_name,
#        target_under_test = name,
#        expected_disabled_sanitizer = "function,vptr",
#        disabled = False,
#    )
#
#    return test_name

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

sanitizer_no_link_runtime_flag = "-fno-sanitize-link-runtime"

def _test_ubsan_no_link_runtime():
    name = "ubsan_no_link_runtime"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["ubsan_undefined"],
        tags = ["manual"],
    )

    android_test_name = name + "_when_android_test"
    test_names = [android_test_name]
    action_flags_android_test(
        name = android_test_name,
        target_under_test = name,
        mnemonics_with_flags = [link_action_mnemonic],
        exclusive = True,
        expected_flags = [sanitizer_no_link_runtime_flag],
    )

    # TODO(b/263787980): Uncomment when bionic toolchain is implemented
    #    bionic_test_name = name + "_when_bionic_test"
    #    action_flags_linux_bionic_test(
    #        name = bionic_test_name,
    #        target_under_test = name,
    #        mnemonics_with_flags = [link_action_mnemonic],
    #        expected_flags = [sanitizer_no_link_runtime_flag],
    #    )
    #    test_names += [bionic_test_name]

    # TODO(b/263787526): Uncomment when musl toolchain is implemented
    #    musl_test_name = name + "_when_musl_test"
    #    action_flags_musl_test(
    #        name = musl_test_name,
    #        target_under_test = name,
    #        mnemonics_with_flags = [link_action_mnemonic],
    #        expected_flags = [sanitizer_no_link_runtime_flag],
    #    )
    #    test_names += [musl_test_name]

    return test_names

def action_flags_linux_test(**kwargs):
    action_flags_test(
        target_compatible_with = ["@//build/bazel/platforms/os:linux"],
        **kwargs
    )

def action_flags_android_test(**kwargs):
    action_flags_test(
        target_compatible_with = ["@//build/bazel/platforms/os:android"],
        **kwargs
    )

# TODO(b/263787980): Uncomment when bionic toolchain is implemented
#def action_flags_linux_bionic_test(**kwargs):
#    action_flags_test(
#        target_compatible_with = ["@//build/bazel/platforms/os:linux_bionic"],
#        **kwargs
#    )

# TODO(b/263787526): Uncomment when musl toolchain is implemented
#def action_flags_linux_musl_test(**kwargs):
#    action_flags_test(
#        target_compatible_with = ["@//build/bazel/platforms/os:linux_musl"],
#        **kwargs
#    )

def _test_ubsan_link_runtime_when_not_bionic_or_musl():
    name = "ubsan_link_runtime_when_not_bionic_or_musl"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        tags = ["manual"],
    )

    action_flags_linux_test(
        name = test_name,
        target_under_test = name,
        mnemonics_without_flags = [link_action_mnemonic],
        exclusive = False,
        expected_flags = [sanitizer_no_link_runtime_flag],
    )

    return test_name

no_undefined_flag = "-Wl,--no-undefined"

def _test_no_undefined_flag_present_when_bionic_or_musl():
    name = "no_undefined_flag_present_when_bionic_or_musl"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["ubsan_undefined"],
        tags = ["manual"],
    )

    android_test_name = name + "_when_android_test"
    test_names = [android_test_name]
    action_flags_android_test(
        name = android_test_name,
        target_under_test = name,
        mnemonics_with_flags = [link_action_mnemonic],
        expected_flags = [no_undefined_flag],
    )

    # TODO(b/263787980): Uncomment when bionic toolchain is implemented
    #    bionic_test_name = name + "_when_bionic_test"
    #    test_names += [bionic_test_name]
    #    action_flags_linux_bionic_test(
    #        name = bionic_test_name,
    #        target_under_test = name,
    #        mnemonics_with_flags = [link_action_mnemonic],
    #        expected_flags = [no_undefined_flag],
    #    )

    # TODO(b/263787526): Uncomment when musl toolchain is implemented
    #    musl_test_name = name + "_when_musl_test"
    #    test_names += [musl_test_name]
    #    action_flags_musl_test(
    #        name = musl_test_name,
    #        target_under_test = name,
    #        mnemonics_with_flags = [link_action_mnemonic],
    #        expected_flags = [no_undefined_flag],
    #    )

    return test_names

def _test_no_undefined_flag_absent_when_not_bionic_or_musl():
    name = "no_undefined_flag_absent_when_not_bionic_or_musl"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["ubsan_undefined"],
        tags = ["manual"],
    )

    action_flags_linux_test(
        name = test_name,
        target_under_test = name,
        mnemonics_without_flags = [link_action_mnemonic],
        exclusive = False,
        expected_flags = [no_undefined_flag],
    )

    return test_name

def cc_toolchain_features_ubsan_test_suite(name):
    native.test_suite(
        name = name,
        tests = [
            _test_ubsan_integer_overflow_feature(),
            _test_ubsan_misc_undefined_feature(),
            _test_ubsan_implicit_integer_sign_change_disabled_when_linux_with_integer(),
            _test_ubsan_implicit_integer_sign_change_not_disabled_when_specified(),
            _test_ubsan_implicit_integer_sign_change_not_disabled_without_integer(),
            _test_ubsan_unsigned_shift_base_disabled_when_linux_with_integer(),
            _test_ubsan_unsigned_shift_base_not_disabled_when_specified(),
            _test_ubsan_unsigned_shift_base_not_disabled_without_integer(),
            _test_ubsan_unsupported_non_bionic_checks_disabled_when_linux(),
            # TODO(b/263787980): Uncomment when bionic toolchain is implemented
            # _test_ubsan_unsupported_non_bionic_checks_not_disabled_when_linux_bionic(),
            _test_ubsan_unsupported_non_bionic_checks_not_disabled_when_android(),
            _test_ubsan_unsupported_non_bionic_checks_not_disabled_when_no_ubsan(),
            _test_ubsan_link_runtime_when_not_bionic_or_musl(),
        ] + _test_ubsan_no_link_runtime() + _test_no_undefined_flag_present_when_bionic_or_musl(),
    )
