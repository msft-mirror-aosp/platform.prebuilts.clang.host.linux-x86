# Copyright (C) 2023 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

load("@bazel_skylib//lib:unittest.bzl", "analysistest", "asserts")
load("//build/bazel/rules/cc:cc_library_static.bzl", "cc_library_static")

def _clang_version_path_test_impl(ctx):
    env = analysistest.begin(ctx)
    actions = analysistest.target_actions(env)

    compile_actions = [a for a in actions if a.mnemonic == "CppCompile"]
    if len(compile_actions) != 1:
        asserts.equals(
            env,
            1,
            len(compile_actions),
            "expected 1 compile action; found: " + str(compile_actions),
        )
        return analysistest.end(env)

    inputs = compile_actions[0].inputs.to_list()
    clang_binary_files = [f for f in inputs if f.short_path.endswith("clang")]
    if len(clang_binary_files) != 1:
        asserts.equals(
            env,
            1,
            len(clang_binary_files),
            "expected 1 clang binary file; found: " + str(clang_binary_files),
        )
        return analysistest.end(env)
    clang_path = clang_binary_files[0].short_path
    asserts.equals(
        env,
        ctx.attr.expected_clang_path,
        clang_path,
        "expected clang binary path to be `%s`, but got `%s`" % (
            ctx.attr.expected_clang_path,
            clang_path,
        ),
    )

    link_actions = [a for a in actions if a.mnemonic == "CppLink"]
    if len(link_actions) != 1:
        asserts.equals(
            env,
            1,
            len(link_actions),
            "expected 1 link action; found: " + str(link_actions),
        )
        return analysistest.end(env)
    inputs = link_actions[0].inputs.to_list()

    libclang_rt_files = [f for f in inputs if "libclang_rt" in f.short_path]
    if len(libclang_rt_files) != 1:
        asserts.equals(
            env,
            1,
            len(libclang_rt_files),
            "expected 1 libclang_rt file; found: " + str(libclang_rt_files),
        )
        return analysistest.end(env)
    libclang_rt_path = libclang_rt_files[0].short_path
    asserts.equals(
        env,
        ctx.attr.expected_libclang_rt_path,
        libclang_rt_path,
        "expected libclang_rt path to be `%s`, but got `%s`" % (
            ctx.attr.expected_libclang_rt_path,
            libclang_rt_path,
        ),
    )

    return analysistest.end(env)

def _clang_version_path_test(clang_version, clang_short_version):
    return analysistest.make(
        _clang_version_path_test_impl,
        attrs = {
            "expected_clang_path": attr.string(
                mandatory = True,
            ),
            "expected_libclang_rt_path": attr.string(
                mandatory = True,
            ),
        },
        config_settings = {
            "@//prebuilts/clang/host/linux-x86:clang_version": clang_version,
            "@//prebuilts/clang/host/linux-x86:clang_short_version": clang_short_version,
        },
    )

_clang_15_0_1_path_test = _clang_version_path_test("clang-r458507", "15.0.1")

_clang_16_0_2_path_test = _clang_version_path_test("clang-r475365b", "16.0.2")

def _test_clang_version_paths(os, arch, clang_short_version, clang_version_test, expected_clang_path, expected_libclang_rt_path):
    name = "clang_version_paths_%s_%s_%s" % (
        os,
        arch,
        clang_short_version,
    )
    test_name = name + "_test"
    native.cc_binary(
        name = name,
        srcs = ["a.cpp"],
        tags = ["manual"],
    )
    clang_version_test(
        name = test_name,
        target_under_test = name,
        expected_clang_path = expected_clang_path,
        expected_libclang_rt_path = expected_libclang_rt_path,
        target_compatible_with = [
            "//build/bazel/platforms/os:" + os,
            "//build/bazel/platforms/arch:" + arch,
        ],
    )
    return test_name

def _create_clang_version_tests():
    test_cases = [
        {
            "os": "android",
            "arch": "arm64",
            "clang_short_version": "15.0.1",
            "clang_version_test": _clang_15_0_1_path_test,
            "expected_clang_path": "prebuilts/clang/host/linux-x86/clang-r458507/bin/clang",
            "expected_libclang_rt_path": "prebuilts/clang/host/linux-x86/clang-r458507/lib/clang/15.0.1/lib/linux/libclang_rt.builtins-aarch64-android.a",
        },
        {
            "os": "android",
            "arch": "arm64",
            "clang_short_version": "16.0.2",
            "clang_version_test": _clang_16_0_2_path_test,
            "expected_clang_path": "prebuilts/clang/host/linux-x86/clang-r475365b/bin/clang",
            "expected_libclang_rt_path": "prebuilts/clang/host/linux-x86/clang-r475365b/lib/clang/16.0.2/lib/linux/libclang_rt.builtins-aarch64-android.a",
        },
    ]
    return [
        _test_clang_version_paths(**tc)
        for tc in test_cases
    ]

def cc_toolchain_clang_version_test_suite(name):
    native.test_suite(
        name = name,
        tests = _create_clang_version_tests(),
    )
