load("@bazel_tools//tools/build_defs/cc:action_names.bzl", "ACTION_NAMES")
load("@soong_injection//cc_toolchain:constants.bzl", _generated_constants = "constants")

# This file uses structs to organize and control the visibility of symbols.

# Handcrafted default flags.
flags = struct(
    # =============
    # Compiler flags
    # =============
    compiler_flags = [
        "-fPIC",
    ],
    asm_compiler_flags = [
        "-D__ASSEMBLY__",
    ],
    c_compiler_flags = [
        # CStdVersion in cc/config/global.go
        "-std=gnu99",
    ],
    # ============
    # Linker flags
    # ============
    bionic_linker_flags = [
        # These are the linker flags for OSes that use Bionic: LinuxBionic, Android
        "-nostdlib",
        "-Wl,--gc-sections",
    ],
    bionic_static_executable_linker_flags = [
        "-Bstatic",
    ],
    bionic_dynamic_executable_linker_flags = [
        "-pie",
        "-Bdynamic",
        "-Wl,-z,nocopyreloc",
    ],
    # ===========
    # Other flags
    # ===========
    non_external_defines = [
        # These defines should only apply to targets which are not under
        # @external/. This can be controlled by adding "-non_external_compiler_flags"
        # to the features list for external/ packages.
        # This corresponds to special-casing in Soong (see "external/" in build/soong/cc/compiler.go).
        "-DANDROID_STRICT",
    ],
)

# Generated flags dumped from Soong's cc toolchain code.
generated_constants = _generated_constants

# The set of C and C++ actions used in the Android build. There are other types
# of actions available in ACTION_NAMES, but those are not used in
# Android yet.
actions = struct(
    compile = [
        ACTION_NAMES.c_compile,
        ACTION_NAMES.cpp_compile,
        ACTION_NAMES.assemble,
        ACTION_NAMES.preprocess_assemble,
    ],
    c_compile = ACTION_NAMES.c_compile,
    cpp_compile = ACTION_NAMES.cpp_compile,
    # Assembler actions for .s and .S files.
    assemble = [
        ACTION_NAMES.assemble,
        ACTION_NAMES.preprocess_assemble,
    ],
    # Link actions
    link = [
        ACTION_NAMES.cpp_link_executable,
        ACTION_NAMES.cpp_link_dynamic_library,
        ACTION_NAMES.cpp_link_nodeps_dynamic_library,
    ],
    # Differentiate archive actions from link actions
    archive = [
        ACTION_NAMES.cpp_link_static_library,
    ],
    cpp_link_dynamic_library = ACTION_NAMES.cpp_link_dynamic_library,
    cpp_link_nodeps_dynamic_library = ACTION_NAMES.cpp_link_nodeps_dynamic_library,
    cpp_link_static_library = ACTION_NAMES.cpp_link_static_library,
    cpp_link_executable = ACTION_NAMES.cpp_link_executable,
    strip = ACTION_NAMES.strip,
)

bionic_crt = struct(
    # crtbegin and crtend libraries for compiling cc_library_shared and
    # cc_binary against the Bionic runtime
    shared_library_crtbegin = "//bionic/libc:crtbegin_so",
    shared_library_crtend = "//bionic/libc:crtend_so",
    shared_binary_crtbegin = "//bionic/libc:crtbegin_dynamic",
    static_binary_crtbegin = "//bionic/libc:crtbegin_static",
    binary_crtend = "//bionic/libc:crtend_android",
)

default_cpp_std_version = "gnu++17"
cpp_std_versions = [
    "gnu++98",
    "gnu++11",
    "gnu++17",
    "gnu++2a",
    "c++98",
    "c++11",
    "c++17",
    "c++2a",
]

# Added by linker.go for non-bionic, non-musl, non-windows toolchains.
# Should be added to host builds to match the default behavior of device builds.
device_compatibility_flags_non_windows = [
    "-ldl",
    "-lpthread",
    "-lm",
]

# Added by linker.go for non-bionic, non-musl, non-darwin toolchains.
# Should be added to host builds to match the default behavior of device builds.
device_compatibility_flags_non_darwin = [ "-lrt" ]
