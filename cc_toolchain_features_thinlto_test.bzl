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

# Include these different file types to make sure that all actions types are
# triggered
test_srcs = [
    "foo.cpp",
    "bar.c",
    "baz.s",
    "blah.S",
]

compile_action_mnemonic = "CppCompile"
link_action_mnemonic = "CppLink"

def test_thin_lto_feature():
    name = "thin_lto_feature"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = ["android_thin_lto"],
        tags = ["manual"],
    )
    action_flags_test(
        name = test_name,
        target_under_test = name,
        mnemonics_with_flags = [compile_action_mnemonic, link_action_mnemonic],
        expected_flags = [
            "-flto=thin",
            "-fsplit-lto-unit",
        ],
    )

    return test_name

def test_whole_program_vtables_feature():
    name = "whole_program_vtables_feature"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = [
            "android_thin_lto",
            "android_thin_lto_whole_program_vtables",
        ],
        tags = ["manual"],
    )
    action_flags_test(
        name = test_name,
        target_under_test = name,
        mnemonics_with_flags = [link_action_mnemonic],
        expected_flags = ["-fwhole-program-vtables"],
    )

    return test_name

def test_whole_program_vtables_requires_thinlto_feature():
    name = "whole_program_vtables_requires_thinlto"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = [
            "android_thin_lto_whole_program_vtables",
        ],
        tags = ["manual"],
    )
    action_flags_test(
        name = test_name,
        target_under_test = name,
        mnemonics_without_flags = [
            compile_action_mnemonic,
            link_action_mnemonic,
        ],
        exclusive = False,
        expected_flags = ["-fwhole-program-vtables"],
    )

    return test_name

def test_limit_cross_tu_inline_feature():
    name = "limit_cross_tu_inline_feature"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = [
            "android_thin_lto",
            "android_thin_lto_limit_cross_tu_inline",
        ],
        tags = ["manual"],
    )
    action_flags_test(
        name = test_name,
        target_under_test = name,
        mnemonics_with_flags = [link_action_mnemonic],
        expected_flags = ["-Wl,-plugin-opt,-import-instr-limit=5"],
    )

    return test_name

def test_limit_cross_tu_inline_requires_thinlto_feature():
    name = "limit_cross_tu_inline_requires_thinlto"
    test_name = name + "_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = [
            "android_thin_lto_whole_program_vtables",
        ],
        tags = ["manual"],
    )
    action_flags_test(
        name = test_name,
        target_under_test = name,
        mnemonics_without_flags = [
            compile_action_mnemonic,
            link_action_mnemonic,
        ],
        exclusive = False,
        expected_flags = ["-Wl,-plugin-opt,-import-instr-limit=5"],
    )

    return test_name

def test_disable_thin_lto():
    name = "disable_thin_lto"
    no_lto_flag_test_name = name + "_no_lto_flag_test"

    native.cc_binary(
        name = name,
        srcs = test_srcs,
        features = [
            "android_thin_lto",
            "android_thin_lto_whole_program_vtables",
            "android_thin_lto_limit_cross_tu_inline",
            "disable_android_thin_lto",
        ],
        tags = ["manual"],
    )
    action_flags_test(
        name = no_lto_flag_test_name,
        target_under_test = name,
        mnemonics_with_flags = [compile_action_mnemonic, link_action_mnemonic],
        expected_flags = ["-fno-lto"],
    )

    lto_flags_not_present_test_name = name + "_lto_flags_not_present_test"

    action_flags_test(
        name = lto_flags_not_present_test_name,
        target_under_test = name,
        mnemonics_without_flags = [
            compile_action_mnemonic,
            link_action_mnemonic,
        ],
        exclusive = False,
        expected_flags = [
            "-flto=thin",
            "-fsplit-lto-unit",
            "-fwhole-program-vtables",
            "-Wl,-plugin-opt,-import-instr-limit=5",
        ],
    )

    return [no_lto_flag_test_name, lto_flags_not_present_test_name]

def cc_toolchain_features_lto_test_suite(name):
    native.test_suite(
        name = name,
        tests = [
            test_thin_lto_feature(),
            test_whole_program_vtables_feature(),
            test_whole_program_vtables_requires_thinlto_feature(),
            test_limit_cross_tu_inline_feature(),
            test_limit_cross_tu_inline_requires_thinlto_feature(),
        ] + test_disable_thin_lto(),
    )
