//
// Copyright (C) 2017 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

package clangprebuilts

import (
	"path"
	"strings"

	"github.com/google/blueprint/pathtools"
	"github.com/google/blueprint/proptools"

	"android/soong/android"
	"android/soong/cc"
	"android/soong/cc/config"
	"android/soong/genrule"
)

var (
	// Files included in the llvm-tools filegroup in ../Android.bp
	llvmToolsFiles = []string{
		"bin/llvm-cxxfilt",
		"bin/llvm-objcopy",
		"bin/llvm-strip",
		"bin/llvm-symbolizer",
	}
)

// This module is used to generate libfuzzer, libomp static libraries and
// libclang_rt.* shared libraries. When LLVM_PREBUILTS_VERSION and
// LLVM_RELEASE_VERSION are set, the library will generated from the given
// path.
func init() {
	android.RegisterModuleType("llvm_host_defaults",
		llvmHostDefaultsFactory)
	android.RegisterModuleType("llvm_prebuilt_library_shared",
		llvmPrebuiltLibrarySharedFactory)
	android.RegisterModuleType("llvm_prebuilt_library_static",
		llvmPrebuiltLibraryStaticFactory)
	android.RegisterModuleType("llvm_prebuilt_build_tool",
		llvmPrebuiltBuildToolFactory)
	android.RegisterModuleType("ndk_prebuilt_shared_stl",
		ndkPrebuiltSharedStlFactory)
	android.RegisterModuleType("ndk_prebuilt_static_stl",
		ndkPrebuiltStaticStlFactory)
	android.RegisterModuleType("libclang_rt_prebuilt_library_shared",
		libClangRtPrebuiltLibrarySharedFactory)
	android.RegisterModuleType("libclang_rt_prebuilt_library_static",
		libClangRtPrebuiltLibraryStaticFactory)
	android.RegisterModuleType("libclang_rt_prebuilt_object",
		libClangRtPrebuiltObjectFactory)
	android.RegisterModuleType("llvm_host_arch_filegroup",
		llvmHostArchFileGroupFactory)
	android.RegisterModuleType("clang_builtin_headers",
		clangBuiltinHeadersFactory)
	android.RegisterModuleType("llvm_tools_filegroup",
		llvmToolsFilegroupFactory)
}

func getClangPrebuiltDir(ctx android.LoadHookContext) string {
	return path.Join(
		"./",
		ctx.Config().GetenvWithDefault("LLVM_PREBUILTS_VERSION", config.ClangVersion(ctx)),
	)
}

func getDirectoryInClangShortVersionLibDir(ctx android.LoadHookContext, dir string) string {
	libDir := path.Join(getClangPrebuiltDir(ctx), "lib", "clang", "*", dir)

	// Verify that exactly one directory exists
	globbedDirs := android.Glob(ctx, pathtools.GlobArgs{Pattern: path.Join(ctx.ModuleDir(), libDir)})
	if len(globbedDirs) == 0 {
		ctx.ModuleErrorf("failed to find directory in %s", path.Join(ctx.ModuleDir(), libDir))
	} else if len(globbedDirs) > 1 {
		ctx.ModuleErrorf("found multiple directories in %s, expected one: %q", path.Join(ctx.ModuleDir(), libDir), globbedDirs.Strings())
	}

	return libDir
}

func getClangResourceDir(ctx android.LoadHookContext) string {
	return getDirectoryInClangShortVersionLibDir(ctx, "lib/linux")
}

func getSymbolFilePath(ctx android.LoadHookContext, arch string) string {
	libDir := getClangResourceDir(ctx)
	// Strip the prebuilt_ prefix
	baseModuleName := android.RemoveOptionalPrebuiltPrefix(ctx.ModuleName())
	return path.Join(libDir, strings.TrimSuffix(baseModuleName, ".llndk")+arch+".map.txt")
}

func trimVersionNumbers(ver string, retain int) string {
	sep := "."
	versions := strings.Split(ver, sep)
	return strings.Join(versions[0:retain], sep)
}

func androidLibcxxHeaderDirs(ctx android.LoadHookContext, kind string, arch string) []string {
	clangDir := getClangPrebuiltDir(ctx)
	// Ensure that the target-specific __config_site header comes first so it
	// overrides the default __config_site header.
	return []string{
		path.Join(clangDir, "android_libc++", kind, arch, "include", "c++", "v1"),
		path.Join(clangDir, "include", "c++", "v1"),
	}
}

func hostLibcxxHeaderDirs(ctx android.LoadHookContext, triple string) []string {
	clangDir := getClangPrebuiltDir(ctx)
	// Ensure that the target-specific __config_site header comes first so it
	// overrides the default __config_site header.
	return []string{
		path.Join(clangDir, "include", triple, "c++", "v1"),
		path.Join(clangDir, "include", "c++", "v1"),
	}
}

// The darwin-x86 directory sometimes isn't checked out on Linux machines, and
// if it's missing, then the Darwin filegroups won't be defined. For
// master-plus-llvm, on the other hand, the Darwin filegroups are defined, but
// the build uses clang-dev instead of clang-rNNNNNN, and clang-dev only exists
// for linux-x86, not darwin-x86.
func hasDarwinClangPrebuilt(ctx android.LoadHookContext) bool {
	return android.ExistentPathForSource(
		ctx, "prebuilts/clang/host/darwin-x86", getClangPrebuiltDir(ctx),
		"bin/clang").Valid()
}

func hasLinuxArm64ClangPrebuilt(ctx android.LoadHookContext) bool {
	return android.ExistentPathForSource(
		ctx, "prebuilts/clang/host/linux-arm64", getClangPrebuiltDir(ctx),
		"bin/clang").Valid()
}

type archInnerProps struct {
	Enabled             *bool
	Export_include_dirs []string
	Srcs                []string
	Stem                *string
	Sanitized           struct {
		None struct {
			Srcs []string
		}
		Hwaddress struct {
			Srcs []string
		}
	}
	Stubs struct {
		Symbol_file *string
	}
	Llndk struct {
		Symbol_file *string
	}
}

type archProps struct {
	Android_arm         archInnerProps
	Android_arm64       archInnerProps
	Android_riscv64     archInnerProps
	Android_x86         archInnerProps
	Android_x86_64      archInnerProps
	Linux_bionic_arm64  archInnerProps
	Linux_bionic_x86_64 archInnerProps
	Glibc_x86           archInnerProps
	Glibc_x86_64        archInnerProps
	Linux_musl_x86      archInnerProps
	Linux_musl_x86_64   archInnerProps
	Linux_musl_arm      archInnerProps
	Linux_musl_arm64    archInnerProps
	Darwin              archInnerProps
	Windows_x86         archInnerProps
	Windows_x86_64      archInnerProps
}

func invokeOnAndroidTargets(p *archProps, fn func(ap *archInnerProps, arch string)) {
	fn(&p.Android_arm, "arm")
	fn(&p.Android_arm64, "aarch64")
	fn(&p.Android_riscv64, "riscv64")
	fn(&p.Android_x86, "i386")
	fn(&p.Android_x86_64, "x86_64")
	fn(&p.Linux_bionic_arm64, "aarch64")
	fn(&p.Linux_bionic_x86_64, "x86_64")
}

func setAndroidLibcxxSrcProps(ctx android.LoadHookContext, ap *archInnerProps, kind string,
	arch string, libName string) {

	clangDir := getClangPrebuiltDir(ctx)
	setSrcsField := func(field *[]string, subdir string) {
		*field = []string{path.Join(clangDir, "android_libc++", subdir, arch, "lib", libName)}
	}

	if arch == "aarch64" {
		setSrcsField(&ap.Sanitized.None.Srcs, kind)
		setSrcsField(&ap.Sanitized.Hwaddress.Srcs, kind+"_hwasan")
	} else {
		setSrcsField(&ap.Srcs, kind)
	}
}

func llvmPrebuiltLibraryShared(ctx android.LoadHookContext) {
	moduleName := strings.TrimPrefix(ctx.ModuleName(), "prebuilt_")

	clangDir := getClangPrebuiltDir(ctx)

	type props struct {
		Export_include_dirs []string
		Target              archProps
		Stl                 *string
	}

	p := &props{}

	if moduleName == "libc++" {
		invokeOnAndroidTargets(&p.Target, func(ap *archInnerProps, arch string) {
			setAndroidLibcxxSrcProps(ctx, ap, "platform", arch, "libc++.so")
			ap.Export_include_dirs = androidLibcxxHeaderDirs(ctx, "platform", arch)
		})
		setHostProps := func(ap *archInnerProps, triple string) {
			ap.Srcs = []string{path.Join(clangDir, "lib", triple, "libc++.so")}
			ap.Export_include_dirs = hostLibcxxHeaderDirs(ctx, triple)
		}
		setHostProps(&p.Target.Glibc_x86, "i386-unknown-linux-gnu")
		setHostProps(&p.Target.Glibc_x86_64, "x86_64-unknown-linux-gnu")
		setHostProps(&p.Target.Linux_musl_arm, "arm-unknown-linux-musleabihf")
		setHostProps(&p.Target.Linux_musl_arm64, "aarch64-unknown-linux-musl")
		setHostProps(&p.Target.Linux_musl_x86, "i686-unknown-linux-musl")
		setHostProps(&p.Target.Linux_musl_x86_64, "x86_64-unknown-linux-musl")
		if hasDarwinClangPrebuilt(ctx) {
			p.Target.Darwin.Srcs = []string{":libc++_darwin"}
			// TODO: At the moment, the Darwin __config_site header is the same as the
			// Linux __config_site headers, but for correctness we ought to use the
			// Darwin header somehow.
			p.Target.Darwin.Export_include_dirs = []string{path.Join(clangDir, "include", "c++", "v1")}
		}
	} else if moduleName == "ndk_libc++_shared" {
		invokeOnAndroidTargets(&p.Target, func(ap *archInnerProps, arch string) {
			setAndroidLibcxxSrcProps(ctx, ap, "ndk", arch, "libc++_shared.so")
			ap.Export_include_dirs = androidLibcxxHeaderDirs(ctx, "ndk", arch)
		})
	} else if moduleName == "libc++abi_shared" {
		// TODO: It's not clear that libc++abi_shared is needed, because the libc++
		// shared library has libc++abi linked into it. The Darwin libc++.1.dylib
		// previously depended on libc++abi.1.dylib, but when it was renamed to
		// libc++.dylib, it also lost its runtime dependency on the ABI dylib.
		libcxxabiSoName := "libc++abi.so"
		p.Target.Glibc_x86.Srcs = []string{path.Join(clangDir, "lib", "i386-unknown-linux-gnu", libcxxabiSoName)}
		p.Target.Glibc_x86_64.Srcs = []string{path.Join(clangDir, "lib", "x86_64-unknown-linux-gnu", libcxxabiSoName)}
		p.Target.Linux_musl_x86.Srcs = []string{path.Join(clangDir, "lib", "i686-unknown-linux-musl", libcxxabiSoName)}
		p.Target.Linux_musl_x86_64.Srcs = []string{path.Join(clangDir, "lib", "x86_64-unknown-linux-musl", libcxxabiSoName)}
		p.Target.Linux_musl_arm.Srcs = []string{path.Join(clangDir, "lib", "arm-unknown-linux-musleabihf", libcxxabiSoName)}
		p.Target.Linux_musl_arm64.Srcs = []string{path.Join(clangDir, "lib", "aarch64-unknown-linux-musl", libcxxabiSoName)}
		if hasDarwinClangPrebuilt(ctx) {
			p.Target.Darwin.Srcs = []string{":libc++abi_shared_darwin"}
		}
	} else if moduleName == "libclang-cpp_host" {
		p.Export_include_dirs = []string{path.Join(clangDir, "include")}
		p.Target.Glibc_x86_64.Srcs = []string{path.Join(clangDir, "lib", "libclang-cpp.so")}
		if hasLinuxArm64ClangPrebuilt(ctx) {
			p.Target.Linux_musl_arm64.Srcs = []string{":libclang-cpp_host_linux_arm64"}
		}
		if hasDarwinClangPrebuilt(ctx) {
			p.Target.Darwin.Srcs = []string{":libclang-cpp_host_darwin"}
		}
	} else {
		ctx.ModuleErrorf("unsupported LLVM prebuilt shared library: " + moduleName)
	}

	p.Stl = proptools.StringPtr("none")
	ctx.AppendProperties(p)
}

func llvmPrebuiltLibraryStatic(ctx android.LoadHookContext) {
	clangDir := getClangPrebuiltDir(ctx)
	libDir := getClangResourceDir(ctx)
	moduleName := strings.TrimPrefix(ctx.ModuleName(), "prebuilt_")

	type props struct {
		Export_include_dirs []string
		Target              archProps
	}

	p := &props{}

	if moduleName == "libc++_static" {
		invokeOnAndroidTargets(&p.Target, func(ap *archInnerProps, arch string) {
			setAndroidLibcxxSrcProps(ctx, ap, "platform", arch, "libc++_static.a")
			ap.Export_include_dirs = androidLibcxxHeaderDirs(ctx, "platform", arch)
		})
		setHostProps := func(ap *archInnerProps, triple string) {
			ap.Srcs = []string{path.Join(clangDir, "lib", triple, "libc++.a")}
			ap.Export_include_dirs = hostLibcxxHeaderDirs(ctx, triple)
		}
		setHostProps(&p.Target.Glibc_x86, "i386-unknown-linux-gnu")
		setHostProps(&p.Target.Glibc_x86_64, "x86_64-unknown-linux-gnu")
		setHostProps(&p.Target.Linux_musl_arm, "arm-unknown-linux-musleabihf")
		setHostProps(&p.Target.Linux_musl_arm64, "aarch64-unknown-linux-musl")
		setHostProps(&p.Target.Linux_musl_x86, "i686-unknown-linux-musl")
		setHostProps(&p.Target.Linux_musl_x86_64, "x86_64-unknown-linux-musl")
		setHostProps(&p.Target.Windows_x86, "i686-w64-windows-gnu")
		setHostProps(&p.Target.Windows_x86_64, "x86_64-w64-windows-gnu")
		if hasDarwinClangPrebuilt(ctx) {
			p.Target.Darwin.Srcs = []string{":libc++_static_darwin"}
			// TODO: At the moment, the Darwin __config_site header is the same as the
			// Linux __config_site headers, but for correctness we ought to use the
			// Darwin header somehow.
			p.Target.Darwin.Export_include_dirs = []string{path.Join(clangDir, "include", "c++", "v1")}
		}
	} else if moduleName == "libc++_static_noexcept" {
		invokeOnAndroidTargets(&p.Target, func(ap *archInnerProps, arch string) {
			setAndroidLibcxxSrcProps(ctx, ap, "platform_noexcept", arch, "libc++_static_noexcept.a")
			ap.Export_include_dirs = androidLibcxxHeaderDirs(ctx, "platform", arch)
		})
	} else if moduleName == "ndk_libc++_static" {
		invokeOnAndroidTargets(&p.Target, func(ap *archInnerProps, arch string) {
			setAndroidLibcxxSrcProps(ctx, ap, "ndk", arch, "libc++_static.a")
			ap.Export_include_dirs = androidLibcxxHeaderDirs(ctx, "ndk", arch)
		})
	} else if moduleName == "libc++demangle" {
		invokeOnAndroidTargets(&p.Target, func(ap *archInnerProps, arch string) {
			setAndroidLibcxxSrcProps(ctx, ap, "platform", arch, "libc++demangle.a")
		})
	} else if moduleName == "libc++demangle_noexcept" {
		invokeOnAndroidTargets(&p.Target, func(ap *archInnerProps, arch string) {
			setAndroidLibcxxSrcProps(ctx, ap, "platform_noexcept", arch, "libc++demangle_noexcept.a")
		})
	} else if moduleName == "libc++abi_static" {
		// TODO: It's not clear that libc++abi_static is actually needed, because
		// its object files are in libc++_static anyway.
		name := "libc++abi.a"
		p.Target.Glibc_x86.Srcs = []string{path.Join(clangDir, "lib", "i386-unknown-linux-gnu", name)}
		p.Target.Glibc_x86_64.Srcs = []string{path.Join(clangDir, "lib", "x86_64-unknown-linux-gnu", name)}
		p.Target.Windows_x86.Srcs = []string{path.Join(clangDir, "lib", "i686-w64-windows-gnu", name)}
		p.Target.Windows_x86_64.Srcs = []string{path.Join(clangDir, "lib", "x86_64-w64-windows-gnu", name)}
		if hasDarwinClangPrebuilt(ctx) {
			p.Target.Darwin.Srcs = []string{":libc++abi_static_darwin"}
		}
	} else if moduleName == "ndk_libc++abi" {
		invokeOnAndroidTargets(&p.Target, func(ap *archInnerProps, arch string) {
			setAndroidLibcxxSrcProps(ctx, ap, "ndk", arch, "libc++abi.a")
		})
	} else if moduleName == "libsimpleperf_readelf" {
		name := "libsimpleperf_readelf.a"
		headerDir := path.Join(clangDir, "include")
		p.Export_include_dirs = []string{headerDir}
		invokeOnAndroidTargets(&p.Target, func(ap *archInnerProps, arch string) {
			ap.Srcs = []string{path.Join(libDir, arch, name)}
		})
		p.Target.Glibc_x86_64.Srcs = []string{path.Join(clangDir, "lib/x86_64-unknown-linux-gnu", name)}
		p.Target.Linux_musl_x86_64.Srcs = []string{path.Join(libDir, "x86_64-unknown-linux-musl/lib", name)}
		p.Target.Linux_musl_arm64.Srcs = []string{path.Join(libDir, "aarch64-unknown-linux-musl/lib", name)}
		p.Target.Windows_x86_64.Srcs = []string{path.Join(clangDir, "lib/x86_64-w64-windows-gnu", name)}
		if hasDarwinClangPrebuilt(ctx) {
			p.Target.Darwin.Srcs = []string{":libsimpleperf_readelf_darwin"}
		}
	} else {
		// Default behavior for a runtime library (like libunwind or libomp). Find
		// the library from in the Clang resource directory.
		name := moduleName + ".a"
		if name == "libFuzzer.a" {
			// TODO: Should these headers be removed? They declare internal symbols
			// that aren't exported from libFuzzer.a(fuzzer.o). See b/303175229,
			// aosp/2898988. Should libFuzzer be replaced by libclang_rt.fuzzer?
			headerDir := path.Join(clangDir, "prebuilt_include", "llvm", "lib", "Fuzzer")
			p.Export_include_dirs = []string{headerDir}
		}
		invokeOnAndroidTargets(&p.Target, func(ap *archInnerProps, arch string) {
			ap.Srcs = []string{path.Join(libDir, arch, name)}
		})
		p.Target.Linux_musl_x86.Srcs = []string{path.Join(libDir, "i686-unknown-linux-musl/lib", name)}
		p.Target.Linux_musl_x86_64.Srcs = []string{path.Join(libDir, "x86_64-unknown-linux-musl/lib", name)}
		p.Target.Linux_musl_arm.Srcs = []string{path.Join(libDir, "arm-unknown-linux-musleabihf/lib", name)}
		p.Target.Linux_musl_arm64.Srcs = []string{path.Join(libDir, "aarch64-unknown-linux-musl/lib", name)}
	}

	ctx.AppendProperties(p)
}

func llvmPrebuiltBuildTool(ctx android.LoadHookContext) {
	clangDir := getClangPrebuiltDir(ctx)
	name := strings.TrimPrefix(ctx.ModuleName(), "prebuilt_")
	src := path.Join(clangDir, "bin", name)

	type props struct {
		Enabled *bool
		Target  struct {
			Host_linux_x86_64 struct {
				Enabled *bool
				Src     *string
			}
			Host_linux_arm64 struct {
				Enabled *bool
				Src     *string
				Deps []string
			}
		}
	}
	p := &props{}
	p.Enabled = proptools.BoolPtr(false)
	p.Target.Host_linux_x86_64.Enabled = proptools.BoolPtr(true)
	p.Target.Host_linux_x86_64.Src = &src

	if hasLinuxArm64ClangPrebuilt(ctx) {
		p.Target.Host_linux_arm64.Enabled = proptools.BoolPtr(true)
		p.Target.Host_linux_arm64.Src = proptools.StringPtr(":" + name + "_host_linux_arm64")
		p.Target.Host_linux_arm64.Deps = []string{":llvm_tools_libc_musl_host_linux_arm64"}
	}
	ctx.AppendProperties(p)
}

type prebuiltLibrarySharedProps struct {
	Is_llndk            *bool
	Llndk_moved_to_apex *bool

	Shared_libs []string
}

type prebuiltLibraryProps struct {
	Lib_name *string

	Suffix *string
}

func libClangRtPrebuiltLibraryShared(ctx android.LoadHookContext, libProps *prebuiltLibraryProps,
	sharedProps *prebuiltLibrarySharedProps) {

	if ctx.Config().IsEnvTrue("FORCE_BUILD_SANITIZER_SHARED_OBJECTS") {
		return
	}

	libDir := getClangResourceDir(ctx)

	type props struct {
		Target             archProps
		System_shared_libs []string
		No_libcrt          *bool
		Sanitize           struct {
			Never *bool
		}
		Strip struct {
			None *bool
		}
		Pack_relocations *bool
		Stl              *string
		Stubs            struct {
			Symbol_file *string
			Versions    []string
		}
		Llndk struct {
			Symbol_file   *string
			Moved_to_apex *bool
		}
	}

	p := &props{}

	name := proptools.StringDefault(libProps.Lib_name, strings.TrimPrefix(ctx.ModuleName(), "prebuilt_"))
	suffix := proptools.String(libProps.Suffix)

	p.Target.Android_arm.Srcs = []string{path.Join(libDir, name+"-arm-android"+suffix+".so")}
	p.Target.Android_arm.Stem = proptools.StringPtr(name + "-arm-android" + suffix)
	p.Target.Android_arm.Srcs = []string{path.Join(libDir, name+"-arm-android"+suffix+".so")}
	p.Target.Android_arm.Stem = proptools.StringPtr(name + "-arm-android" + suffix)
	p.Target.Android_arm64.Srcs = []string{path.Join(libDir, name+"-aarch64-android"+suffix+".so")}
	p.Target.Android_arm64.Stem = proptools.StringPtr(name + "-aarch64-android" + suffix)
	p.Target.Android_riscv64.Srcs = []string{path.Join(libDir, name+"-riscv64-android"+suffix+".so")}
	p.Target.Android_riscv64.Stem = proptools.StringPtr(name + "-riscv64-android" + suffix)
	p.Target.Android_x86.Srcs = []string{path.Join(libDir, name+"-i686-android"+suffix+".so")}
	p.Target.Android_x86.Stem = proptools.StringPtr(name + "-i686-android" + suffix)
	p.Target.Android_x86_64.Srcs = []string{path.Join(libDir, name+"-x86_64-android"+suffix+".so")}
	p.Target.Android_x86_64.Stem = proptools.StringPtr(name + "-x86_64-android" + suffix)
	p.Target.Linux_bionic_arm64.Srcs = []string{path.Join(libDir, name+"-aarch64-android"+suffix+".so")}
	p.Target.Linux_bionic_arm64.Stem = proptools.StringPtr(name + "-aarch64-android" + suffix)
	p.Target.Linux_bionic_x86_64.Srcs = []string{path.Join(libDir, name+"-x86_64-android"+suffix+".so")}
	p.Target.Linux_bionic_x86_64.Stem = proptools.StringPtr(name + "-x86_64-android" + suffix)
	p.Target.Glibc_x86.Srcs = []string{path.Join(libDir, "../i386-unknown-linux-gnu", name+suffix+".so")}
	p.Target.Glibc_x86.Stem = proptools.StringPtr(name + suffix)
	p.Target.Glibc_x86_64.Srcs = []string{path.Join(libDir, "../x86_64-unknown-linux-gnu", name+suffix+".so")}
	p.Target.Glibc_x86_64.Stem = proptools.StringPtr(name + suffix)
	p.Target.Linux_musl_x86.Srcs = []string{path.Join(libDir, "i686-unknown-linux-musl/lib/linux", name+"-i386"+suffix+".so")}
	p.Target.Linux_musl_x86.Stem = proptools.StringPtr(name + "-i386" + suffix)
	p.Target.Linux_musl_x86_64.Srcs = []string{path.Join(libDir, "x86_64-unknown-linux-musl/lib/linux", name+"-x86_64"+suffix+".so")}
	p.Target.Linux_musl_x86_64.Stem = proptools.StringPtr(name + "-x86_64" + suffix)
	p.Target.Linux_musl_arm.Srcs = []string{path.Join(libDir, "arm-unknown-linux-musleabihf/lib/linux", name+"-armhf"+suffix+".so")}
	p.Target.Linux_musl_arm.Stem = proptools.StringPtr(name + "-armhf" + suffix)
	p.Target.Linux_musl_arm64.Srcs = []string{path.Join(libDir, "aarch64-unknown-linux-musl/lib/linux", name+"-aarch64"+suffix+".so")}
	p.Target.Linux_musl_arm64.Stem = proptools.StringPtr(name + "-aarch64" + suffix)

	p.System_shared_libs = []string{}
	p.No_libcrt = proptools.BoolPtr(true)
	p.Sanitize.Never = proptools.BoolPtr(true)
	p.Strip.None = proptools.BoolPtr(true)
	disable := false
	p.Pack_relocations = &disable
	p.Stl = proptools.StringPtr("none")

	if proptools.Bool(sharedProps.Is_llndk) {
		p.Stubs.Versions = []string{"29", "10000"}
		p.Llndk.Moved_to_apex = sharedProps.Llndk_moved_to_apex
		// Set the symbol_file of the "base" variant to a fake file. This will be overridden later.
		// This is necessary today since `image` mutator which creates the llndk variants runs before `arch` mutator.
		// Without this hack, the llndk variants will not be created.
		p.Llndk.Symbol_file = proptools.StringPtr(getSymbolFilePath(ctx, "-does-not-exist"))
		p.Stubs.Symbol_file = proptools.StringPtr(getSymbolFilePath(ctx, "-does-not-exist"))
		// Arch specific overrides
		p.Target.Android_arm.Stubs.Symbol_file = proptools.StringPtr(getSymbolFilePath(ctx, "-arm-android"))
		p.Target.Android_arm.Llndk.Symbol_file = proptools.StringPtr(getSymbolFilePath(ctx, "-arm-android"))
		p.Target.Android_arm64.Stubs.Symbol_file = proptools.StringPtr(getSymbolFilePath(ctx, "-aarch64-android"))
		p.Target.Android_arm64.Llndk.Symbol_file = proptools.StringPtr(getSymbolFilePath(ctx, "-aarch64-android"))
		p.Target.Android_riscv64.Stubs.Symbol_file = proptools.StringPtr(getSymbolFilePath(ctx, "-riscv64-android"))
		p.Target.Android_riscv64.Llndk.Symbol_file = proptools.StringPtr(getSymbolFilePath(ctx, "-riscv64-android"))
		p.Target.Android_x86.Stubs.Symbol_file = proptools.StringPtr(getSymbolFilePath(ctx, "-i686-android"))
		p.Target.Android_x86.Llndk.Symbol_file = proptools.StringPtr(getSymbolFilePath(ctx, "-i686-android"))
		p.Target.Android_x86_64.Stubs.Symbol_file = proptools.StringPtr(getSymbolFilePath(ctx, "-x86_64-android"))
		p.Target.Android_x86_64.Llndk.Symbol_file = proptools.StringPtr(getSymbolFilePath(ctx, "-x86_64-android"))
	}

	ctx.AppendProperties(p)
}

func libClangRtPrebuiltLibraryStatic(ctx android.LoadHookContext, libProps *prebuiltLibraryProps) {
	libDir := getClangResourceDir(ctx)

	type props struct {
		Target             archProps
		System_shared_libs []string
		No_libcrt          *bool
		Stl                *string
	}

	name := proptools.StringDefault(libProps.Lib_name, strings.TrimPrefix(ctx.ModuleName(), "prebuilt_"))
	name = strings.TrimSuffix(name, ".static")
	suffix := proptools.String(libProps.Suffix)

	p := &props{}

	p.Target.Android_arm.Srcs = []string{path.Join(libDir, name+"-arm-android"+suffix+".a")}
	p.Target.Android_arm64.Srcs = []string{path.Join(libDir, name+"-aarch64-android"+suffix+".a")}
	p.Target.Android_riscv64.Srcs = []string{path.Join(libDir, name+"-riscv64-android"+suffix+".a")}
	p.Target.Android_x86.Srcs = []string{path.Join(libDir, name+"-i686-android"+suffix+".a")}
	p.Target.Android_x86_64.Srcs = []string{path.Join(libDir, name+"-x86_64-android"+suffix+".a")}
	p.Target.Linux_bionic_arm64.Srcs = []string{path.Join(libDir, name+"-aarch64-android"+suffix+".a")}
	p.Target.Linux_bionic_x86_64.Srcs = []string{path.Join(libDir, name+"-x86_64-android"+suffix+".a")}
	p.Target.Glibc_x86.Srcs = []string{path.Join(libDir, "../i386-unknown-linux-gnu", name+suffix+".a")}
	p.Target.Glibc_x86_64.Srcs = []string{path.Join(libDir, "../x86_64-unknown-linux-gnu", name+suffix+".a")}
	p.Target.Linux_musl_x86.Srcs = []string{path.Join(libDir, "i686-unknown-linux-musl/lib/linux", name+"-i386"+suffix+".a")}
	p.Target.Linux_musl_x86_64.Srcs = []string{path.Join(libDir, "x86_64-unknown-linux-musl/lib/linux", name+"-x86_64"+suffix+".a")}
	p.Target.Linux_musl_arm.Srcs = []string{path.Join(libDir, "arm-unknown-linux-musleabihf/lib/linux", name+"-armhf"+suffix+".a")}
	p.Target.Linux_musl_arm64.Srcs = []string{path.Join(libDir, "aarch64-unknown-linux-musl/lib/linux", name+"-aarch64"+suffix+".a")}
	p.System_shared_libs = []string{}
	p.No_libcrt = proptools.BoolPtr(true)
	p.Stl = proptools.StringPtr("none")
	ctx.AppendProperties(p)
}

func libClangRtPrebuiltObject(ctx android.LoadHookContext) {
	libDir := getClangResourceDir(ctx)

	type props struct {
		Arch struct {
			X86 struct {
				Srcs []string
			}
			X86_64 struct {
				Srcs []string
			}
			Arm struct {
				Srcs []string
			}
			Arm64 struct {
				Srcs []string
			}
		}
		System_shared_libs []string
		Stl                *string
	}

	name := strings.TrimPrefix(ctx.ModuleName(), "prebuilt_")

	p := &props{}
	p.Arch.X86.Srcs = []string{path.Join(libDir, "../i386-unknown-linux-gnu", name+".o")}
	p.Arch.X86_64.Srcs = []string{path.Join(libDir, "../x86_64-unknown-linux-gnu", name+".o")}
	p.Arch.Arm.Srcs = []string{path.Join(libDir, "arm-unknown-linux-musleabihf/lib/linux", name+"-armhf.o")}
	p.Arch.Arm64.Srcs = []string{path.Join(libDir, "aarch64-unknown-linux-musl/lib/linux", name+"-aarch64.o")}
	p.System_shared_libs = []string{}
	p.Stl = proptools.StringPtr("none")
	ctx.AppendProperties(p)
}

func llvmHostArchFileGroupHook(ctx android.LoadHookContext, fileGroupProps *llvmHostArchFileGroupProperties) {
	clangDir := getClangPrebuiltDir(ctx)

	lib := path.Join(clangDir, proptools.String(fileGroupProps.Lib))

	// On main-plus-llvm the darwin filegroup modules will exist, but the clang version is overridden to
	// clang-dev, and there are no darwin prebuilts with that version.  Ignore any missing sources.
	if android.ExistentPathForSource(ctx, ctx.ModuleDir(), lib).Valid() {
		type props struct {
			Srcs []string
		}
		p := &props{}
		p.Srcs = []string{lib}
		ctx.AppendProperties(p)
	}
}

func llvmPrebuiltLibraryStaticFactory() android.Module {
	module, _ := cc.NewPrebuiltStaticLibrary(android.HostAndDeviceSupported)
	android.AddLoadHook(module, llvmPrebuiltLibraryStatic)
	return module.Init()
}

func llvmPrebuiltBuildToolFactory() android.Module {
	module := android.NewPrebuiltBuildTool()
	android.AddLoadHook(module, llvmPrebuiltBuildTool)
	return module
}

func llvmPrebuiltLibrarySharedFactory() android.Module {
	module, _ := cc.NewPrebuiltSharedLibrary(android.HostAndDeviceSupported)
	android.AddLoadHook(module, llvmPrebuiltLibraryShared)
	return module.Init()
}

func ndkPrebuiltStaticStlFactory() android.Module {
	module, _ := cc.NewPrebuiltStaticLibrary(android.DeviceSupported)
	module.Properties.AlwaysSdk = true
	module.Properties.HideFromMake = true
	module.SetPreventInstall()
	android.AddLoadHook(module, llvmPrebuiltLibraryStatic)
	return module.Init()
}

func ndkPrebuiltSharedStlFactory() android.Module {
	module, _ := cc.NewPrebuiltSharedLibrary(android.DeviceSupported)
	module.Properties.AlwaysSdk = true
	module.Properties.HideFromMake = true
	module.SetPreventInstall()
	android.AddLoadHook(module, llvmPrebuiltLibraryShared)
	return module.Init()
}

func libClangRtPrebuiltLibrarySharedFactory() android.Module {
	module, _ := cc.NewPrebuiltSharedLibrary(android.HostAndDeviceSupported)
	props := &prebuiltLibraryProps{}
	sharedProps := &prebuiltLibrarySharedProps{}
	module.AddProperties(props, sharedProps)
	android.AddLoadHook(module, func(ctx android.LoadHookContext) {
		libClangRtPrebuiltLibraryShared(ctx, props, sharedProps)
	})
	return module.Init()
}

func libClangRtPrebuiltLibraryStaticFactory() android.Module {
	module, _ := cc.NewPrebuiltStaticLibrary(android.HostAndDeviceSupported)
	props := &prebuiltLibraryProps{}
	module.AddProperties(props)
	android.AddLoadHook(module, func(ctx android.LoadHookContext) {
		libClangRtPrebuiltLibraryStatic(ctx, props)
	})
	return module.Init()
}

func libClangRtPrebuiltObjectFactory() android.Module {
	module := cc.NewPrebuiltObject(android.HostAndDeviceSupported)
	android.AddLoadHook(module, libClangRtPrebuiltObject)
	return module.Init()
}

type llvmHostArchFileGroupProperties struct {
	Lib *string
}

type llvmHostArchFileGroup struct {
	android.Module

	properties llvmHostArchFileGroupProperties
}

func llvmHostArchFileGroupFactory() android.Module {
	module := &llvmHostArchFileGroup{
		Module: android.FileGroupFactory(),
	}
	module.AddProperties(&module.properties)
	android.AddLoadHook(module, func(ctx android.LoadHookContext) {
		llvmHostArchFileGroupHook(ctx, &module.properties)
	})
	return module
}

func llvmHostDefaults(ctx android.LoadHookContext) {
	type props struct {
		Enabled *bool
	}

	p := &props{}
	if !ctx.Config().IsEnvTrue("LLVM_BUILD_HOST_TOOLS") {
		p.Enabled = proptools.BoolPtr(false)
	}
	ctx.AppendProperties(p)
}

func llvmHostDefaultsFactory() android.Module {
	module := cc.DefaultsFactory()
	android.AddLoadHook(module, llvmHostDefaults)
	return module
}

func clangBuiltinHeaders(ctx android.LoadHookContext) {
	type props struct {
		Cmd  *string
		Srcs []string
	}

	p := &props{}
	builtinHeadersDir := getDirectoryInClangShortVersionLibDir(ctx, "include")

	s := "$(location) " + path.Join(ctx.ModuleDir(), builtinHeadersDir) + " $(in) >$(out)"
	p.Cmd = &s

	p.Srcs = []string{path.Join(builtinHeadersDir, "**", "*.h")}
	ctx.AppendProperties(p)
}

func clangBuiltinHeadersFactory() android.Module {
	module := genrule.GenRuleFactory()
	android.AddLoadHook(module, clangBuiltinHeaders)
	return module
}

func llvmToolsFileGroup(ctx android.LoadHookContext) {
	type props struct {
		Srcs []string
	}

	p := &props{}
	prebuiltDir := path.Join(getClangPrebuiltDir(ctx))
	for _, src := range llvmToolsFiles {
		p.Srcs = append(p.Srcs, path.Join(prebuiltDir, src))
	}
	ctx.AppendProperties(p)
}

func llvmToolsFilegroupFactory() android.Module {
	module := android.FileGroupFactory()
	android.AddLoadHook(module, llvmToolsFileGroup)
	return module
}
