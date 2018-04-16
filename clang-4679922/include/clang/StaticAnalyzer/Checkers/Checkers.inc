
#ifdef GET_GROUPS
#endif // GET_GROUPS


#ifdef GET_PACKAGES
PACKAGE("alpha", -1, false)
PACKAGE("alpha.clone", -1, true)
PACKAGE("alpha.core", -1, true)
PACKAGE("alpha.cplusplus", -1, true)
PACKAGE("alpha.deadcode", -1, true)
PACKAGE("alpha.osx", -1, true)
PACKAGE("alpha.osx.cocoa", -1, true)
PACKAGE("alpha.osx.cocoa.localizability", -1, true)
PACKAGE("alpha.security", -1, true)
PACKAGE("alpha.security.taint", -1, true)
PACKAGE("alpha.unix", -1, true)
PACKAGE("alpha.unix.cstring", -1, true)
PACKAGE("apiModeling", -1, true)
PACKAGE("apiModeling.google", -1, true)
PACKAGE("core", -1, false)
PACKAGE("core.builtin", -1, false)
PACKAGE("core.uninitialized", -1, false)
PACKAGE("cplusplus", -1, false)
PACKAGE("deadcode", -1, false)
PACKAGE("debug", -1, false)
PACKAGE("llvm", -1, false)
PACKAGE("nullability", -1, false)
PACKAGE("optin", -1, false)
PACKAGE("optin.cplusplus", -1, false)
PACKAGE("optin.mpi", -1, false)
PACKAGE("optin.osx", -1, false)
PACKAGE("optin.osx.cocoa", -1, false)
PACKAGE("optin.osx.cocoa.localizability", -1, false)
PACKAGE("optin.performance", -1, false)
PACKAGE("optin.portability", -1, false)
PACKAGE("osx", -1, false)
PACKAGE("osx.cocoa", -1, false)
PACKAGE("osx.coreFoundation", -1, false)
PACKAGE("osx.coreFoundation.containers", -1, false)
PACKAGE("security", -1, false)
PACKAGE("security.insecureAPI", -1, false)
PACKAGE("unix", -1, false)
PACKAGE("unix.cstring", -1, true)
PACKAGE("valist", -1, false)
#endif // GET_PACKAGES


#ifdef GET_CHECKERS
CHECKER("debug.AnalysisOrder", AnalysisOrderChecker, AnalysisOrder.cpp, "Print callbacks that are called during analysis in order", -1, false)
CHECKER("debug.Stats", AnalyzerStatsChecker, AnalyzerStatsChecker.cpp, "Emit warnings with analyzer statistics", -1, false)
CHECKER("alpha.security.ArrayBound", ArrayBoundChecker, ArrayBoundChecker.cpp, "Warn about buffer overflows (older checker)", -1, true)
CHECKER("alpha.security.ArrayBoundV2", ArrayBoundCheckerV2, ArrayBoundCheckerV2.cpp, "Warn about buffer overflows (newer checker)", -1, true)
CHECKER("alpha.unix.BlockInCriticalSection", BlockInCriticalSectionChecker, BlockInCriticalSectionChecker.cpp, "Check for calls to blocking functions inside a critical section", -1, true)
CHECKER("alpha.core.BoolAssignment", BoolAssignmentChecker, BoolAssignmentChecker.cpp, "Warn about assigning non-{0,1} values to Boolean variables", -1, true)
CHECKER("core.builtin.BuiltinFunctions", BuiltinFunctionChecker, BuiltinFunctionChecker.cpp, "Evaluate compiler builtin functions (e.g., alloca())", -1, false)
CHECKER("osx.coreFoundation.CFError", CFErrorChecker, NSErrorChecker.cpp, "Check usage of CFErrorRef* parameters", -1, false)
CHECKER("debug.DumpCFG", CFGDumper, DebugCheckers.cpp, "Display Control-Flow Graphs", -1, false)
CHECKER("debug.ViewCFG", CFGViewer, DebugCheckers.cpp, "View Control-Flow Graphs using GraphViz", -1, false)
CHECKER("osx.coreFoundation.CFNumber", CFNumberChecker, BasicObjCFoundationChecks.cpp, "Check for proper uses of CFNumber APIs", -1, false)
CHECKER("osx.coreFoundation.CFRetainRelease", CFRetainReleaseChecker, BasicObjCFoundationChecks.cpp, "Check for null arguments to CFRetain/CFRelease/CFMakeCollectable", -1, false)
CHECKER("alpha.unix.cstring.BufferOverlap", CStringBufferOverlap, CStringChecker.cpp, "Checks for overlap in two buffer arguments", -1, true)
CHECKER("alpha.unix.cstring.NotNullTerminated", CStringNotNullTerm, CStringChecker.cpp, "Check for arguments which are not null-terminating strings", -1, true)
CHECKER("unix.cstring.NullArg", CStringNullArg, CStringChecker.cpp, "Check for null pointers being passed as arguments to C string functions", -1, true)
CHECKER("alpha.unix.cstring.OutOfBounds", CStringOutOfBounds, CStringChecker.cpp, "Check for out-of-bounds access in string functions", -1, true)
CHECKER("unix.cstring.BadSizeArg", CStringSyntaxChecker, CStringSyntaxChecker.cpp, "Check the size argument passed into C string functions for common erroneous patterns", -1, true)
CHECKER("cplusplus.SelfAssignment", CXXSelfAssignmentChecker, CXXSelfAssignmentChecker.cpp, "Checks C++ copy and move assignment operators for self assignment", -1, false)
CHECKER("core.CallAndMessage", CallAndMessageChecker, CallAndMessageChecker.cpp, "Check for logical errors for function calls and Objective-C message expressions (e.g., uninitialized arguments, null function pointers)", -1, false)
CHECKER("alpha.core.CallAndMessageUnInitRefArg", CallAndMessageUnInitRefArg, CallAndMessageChecker.cpp, "Check for logical errors for function calls and Objective-C message expressions (e.g., uninitialized arguments, null function pointers, and pointer to undefined variables)", -1, true)
CHECKER("debug.DumpCalls", CallDumper, TraversalChecker.cpp, "Print calls as they are traversed by the engine", -1, false)
CHECKER("debug.DumpCallGraph", CallGraphDumper, DebugCheckers.cpp, "Display Call Graph", -1, false)
CHECKER("debug.ViewCallGraph", CallGraphViewer, DebugCheckers.cpp, "View Call Graph using GraphViz", -1, false)
CHECKER("alpha.core.CastSize", CastSizeChecker, CastSizeChecker.cpp, "Check when casting a malloc'ed type T, whether the size is a multiple of the size of T", -1, true)
CHECKER("alpha.core.CastToStruct", CastToStructChecker, CastToStructChecker.cpp, "Check for cast from non-struct pointer to struct pointer", -1, true)
CHECKER("alpha.unix.Chroot", ChrootChecker, ChrootChecker.cpp, "Check improper use of chroot", -1, true)
CHECKER("osx.cocoa.ClassRelease", ClassReleaseChecker, BasicObjCFoundationChecks.cpp, "Check for sending 'retain', 'release', or 'autorelease' directly to a Class", -1, false)
CHECKER("alpha.clone.CloneChecker", CloneChecker, CloneChecker.cpp, "Reports similar pieces of code.", -1, true)
CHECKER("debug.ConfigDumper", ConfigDumper, DebugCheckers.cpp, "Dump config table", -1, false)
CHECKER("alpha.core.Conversion", ConversionChecker, ConversionChecker.cpp, "Loss of sign/precision in implicit conversions", -1, true)
CHECKER("valist.CopyToSelf", CopyToSelfChecker, ValistChecker.cpp, "Check for va_lists which are copied onto itself.", -1, false)
CHECKER("deadcode.DeadStores", DeadStoresChecker, DeadStoresChecker.cpp, "Check for values stored to variables that are never read afterwards", -1, false)
CHECKER("alpha.cplusplus.DeleteWithNonVirtualDtor", DeleteWithNonVirtualDtorChecker, DeleteWithNonVirtualDtorChecker.cpp, "Reports destructions of polymorphic objects with a non-virtual destructor in their base class", -1, true)
CHECKER("core.NullDereference", DereferenceChecker, DereferenceChecker.cpp, "Check for dereferences of null pointers", -1, false)
CHECKER("alpha.osx.cocoa.DirectIvarAssignment", DirectIvarAssignment, DirectIvarAssignment.cpp, "Check for direct assignments to instance variables", -1, true)
CHECKER("alpha.osx.cocoa.DirectIvarAssignmentForAnnotatedFunctions", DirectIvarAssignmentForAnnotatedFunctions, DirectIvarAssignment.cpp, "Check for direct assignments to instance variables in the methods annotated with objc_no_direct_instance_variable_assignment", -1, true)
CHECKER("core.DivideZero", DivZeroChecker, DivZeroChecker.cpp, "Check for division by zero", -1, false)
CHECKER("debug.DumpDominators", DominatorsTreeDumper, DebugCheckers.cpp, "Print the dominance tree for a given CFG", -1, false)
CHECKER("alpha.core.DynamicTypeChecker", DynamicTypeChecker, DynamicTypeChecker.cpp, "Check for cases where the dynamic and the static type of an object are unrelated.", -1, true)
CHECKER("core.DynamicTypePropagation", DynamicTypePropagation, DynamicTypePropagation.cpp, "Generate dynamic type information", -1, false)
CHECKER("optin.osx.cocoa.localizability.EmptyLocalizationContextChecker", EmptyLocalizationContextChecker, LocalizationChecker.cpp, "Check that NSLocalizedString macros include a comment for context", -1, false)
CHECKER("debug.ViewExplodedGraph", ExplodedGraphViewer, DebugCheckers.cpp, "View Exploded Graphs using GraphViz", -1, false)
CHECKER("debug.ExprInspection", ExprInspectionChecker, ExprInspectionChecker.cpp, "Check the analyzer's understanding of expressions", -1, false)
CHECKER("alpha.core.FixedAddr", FixedAddressChecker, FixedAddressChecker.cpp, "Check for assignment of a fixed address to a pointer", -1, true)
CHECKER("security.FloatLoopCounter", FloatLoopCounter, CheckSecuritySyntaxOnly.cpp, "Warn on using a floating point value as a loop counter (CERT: FLP30-C, FLP30-CPP)", -1, false)
CHECKER("alpha.osx.GCDAsyncSemaphore", GCDAsyncSemaphoreChecker, GCDAsyncSemaphoreChecker.cpp, "Checker for performance anti-pattern when using semaphors from async API", -1, true)
CHECKER("apiModeling.google.GTest", GTestChecker, GTestChecker.cpp, "Model gtest assertion APIs", -1, true)
CHECKER("alpha.security.taint.TaintPropagation", GenericTaintChecker, GenericTaintChecker.cpp, "Generate taint information used by other checkers", -1, true)
CHECKER("alpha.core.IdenticalExpr", IdenticalExprChecker, IdenticalExprChecker.cpp, "Warn about unintended use of identical expressions in operators", -1, true)
CHECKER("alpha.osx.cocoa.InstanceVariableInvalidation", InstanceVariableInvalidation, IvarInvalidationChecker.cpp, "Check that the invalidatable instance variables are invalidated in the methods annotated with objc_instance_variable_invalidator", -1, true)
CHECKER("alpha.cplusplus.IteratorRange", IteratorRangeChecker, IteratorChecker.cpp, "Check for iterators used outside their valid ranges", -1, true)
CHECKER("llvm.Conventions", LLVMConventionsChecker, LLVMConventionsChecker.cpp, "Check code for LLVM codebase conventions", -1, false)
CHECKER("debug.DumpLiveVars", LiveVariablesDumper, DebugCheckers.cpp, "Print results of live variable analysis", -1, false)
CHECKER("optin.mpi.MPI-Checker", MPIChecker, MPIChecker.cpp, "Checks MPI code", -1, false)
CHECKER("osx.SecKeychainAPI", MacOSKeychainAPIChecker, MacOSKeychainAPIChecker.cpp, "Check for proper uses of Secure Keychain APIs", -1, false)
CHECKER("osx.API", MacOSXAPIChecker, MacOSXAPIChecker.cpp, "Check for proper uses of various Apple APIs", -1, false)
CHECKER("unix.Malloc", MallocChecker, MallocChecker.cpp, "Check for memory leaks, double free, and use-after-free problems. Traces memory managed by malloc()/free().", -1, false)
CHECKER("alpha.security.MallocOverflow", MallocOverflowSecurityChecker, MallocOverflowSecurityChecker.cpp, "Check for overflows in the arguments to malloc()", -1, true)
CHECKER("unix.MallocSizeof", MallocSizeofChecker, MallocSizeofChecker.cpp, "Check for dubious malloc arguments involving sizeof", -1, false)
CHECKER("unix.MismatchedDeallocator", MismatchedDeallocatorChecker, MallocChecker.cpp, "Check for mismatched deallocators.", -1, false)
CHECKER("alpha.osx.cocoa.MissingInvalidationMethod", MissingInvalidationMethod, IvarInvalidationChecker.cpp, "Check that the invalidation methods are present in classes that contain invalidatable instance variables", -1, true)
CHECKER("alpha.cplusplus.MisusedMovedObject", MisusedMovedObjectChecker, MisusedMovedObjectChecker.cpp, "Method calls on a moved-from object and copying a moved-from object will be reported", -1, true)
CHECKER("alpha.security.MmapWriteExec", MmapWriteExecChecker, MmapWriteExecChecker.cpp, "Warn on mmap() calls that are both writable and executable", -1, true)
CHECKER("osx.cocoa.NSAutoreleasePool", NSAutoreleasePoolChecker, NSAutoreleasePoolChecker.cpp, "Warn for suboptimal uses of NSAutoreleasePool in Objective-C GC mode", -1, false)
CHECKER("osx.cocoa.NSError", NSErrorChecker, NSErrorChecker.cpp, "Check usage of NSError** parameters", -1, false)
CHECKER("cplusplus.NewDelete", NewDeleteChecker, MallocChecker.cpp, "Check for double-free and use-after-free problems. Traces memory managed by new/delete.", -1, false)
CHECKER("cplusplus.NewDeleteLeaks", NewDeleteLeaksChecker, MallocChecker.cpp, "Check for memory leaks. Traces memory managed by new/delete.", -1, false)
CHECKER("osx.cocoa.NilArg", NilArgChecker, BasicObjCFoundationChecks.cpp, "Check for prohibited nil arguments to ObjC method calls", -1, false)
CHECKER("core.builtin.NoReturnFunctions", NoReturnFunctionChecker, NoReturnFunctionChecker.cpp, "Evaluate \"panic\" functions that are known to not return to the caller", -1, false)
CHECKER("optin.osx.cocoa.localizability.NonLocalizedStringChecker", NonLocalizedStringChecker, LocalizationChecker.cpp, "Warns about uses of non-localized NSStrings passed to UI methods expecting localized NSStrings", -1, false)
CHECKER("core.NonNullParamChecker", NonNullParamChecker, NonNullParamChecker.cpp, "Check for null pointers passed as arguments to a function whose arguments are references or marked with the 'nonnull' attribute", -1, false)
CHECKER("core.NonnilStringConstants", NonnullGlobalConstantsChecker, NonilStringConstantsChecker.cpp, "Assume that const string-like globals are non-null", -1, false)
CHECKER("nullability.NullPassedToNonnull", NullPassedToNonnullChecker, NullabilityChecker.cpp, "Warns when a null pointer is passed to a pointer which has a _Nonnull type.", -1, false)
CHECKER("nullability.NullReturnedFromNonnull", NullReturnedFromNonnullChecker, NullabilityChecker.cpp, "Warns when a null pointer is returned from a function that has _Nonnull return type.", -1, false)
CHECKER("nullability.NullableDereferenced", NullableDereferencedChecker, NullabilityChecker.cpp, "Warns when a nullable pointer is dereferenced.", -1, false)
CHECKER("nullability.NullablePassedToNonnull", NullablePassedToNonnullChecker, NullabilityChecker.cpp, "Warns when a nullable pointer is passed to a pointer which has a _Nonnull type.", -1, false)
CHECKER("nullability.NullableReturnedFromNonnull", NullableReturnedFromNonnullChecker, NullabilityChecker.cpp, "Warns when a nullable pointer is returned from a function that has _Nonnull return type.", -1, false)
CHECKER("osx.NumberObjectConversion", NumberObjectConversionChecker, NumberObjectConversionChecker.cpp, "Check for erroneous conversions of objects representing numbers into numbers", -1, false)
CHECKER("osx.cocoa.AtSync", ObjCAtSyncChecker, ObjCAtSyncChecker.cpp, "Check for nil pointers used as mutexes for @synchronized", -1, false)
CHECKER("osx.coreFoundation.containers.PointerSizedValues", ObjCContainersASTChecker, ObjCContainersASTChecker.cpp, "Warns if 'CFArray', 'CFDictionary', 'CFSet' are created with non-pointer-size values", -1, false)
CHECKER("osx.coreFoundation.containers.OutOfBounds", ObjCContainersChecker, ObjCContainersChecker.cpp, "Checks for index out-of-bounds when using 'CFArray' API", -1, false)
CHECKER("osx.cocoa.Dealloc", ObjCDeallocChecker, CheckObjCDealloc.cpp, "Warn about Objective-C classes that lack a correct implementation of -dealloc", -1, false)
CHECKER("osx.cocoa.ObjCGenerics", ObjCGenericsChecker, DynamicTypePropagation.cpp, "Check for type errors when using Objective-C generics", -1, false)
CHECKER("osx.cocoa.Loops", ObjCLoopChecker, BasicObjCFoundationChecks.cpp, "Improved modeling of loops using Cocoa collection types", -1, false)
CHECKER("osx.cocoa.IncompatibleMethodTypes", ObjCMethSigsChecker, CheckObjCInstMethSignature.cpp, "Warn about Objective-C method signatures with type incompatibilities", -1, false)
CHECKER("osx.cocoa.NonNilReturnValue", ObjCNonNilReturnValueChecker, BasicObjCFoundationChecks.cpp, "Model the APIs that are guaranteed to return a non-nil value", -1, false)
CHECKER("osx.ObjCProperty", ObjCPropertyChecker, ObjCPropertyChecker.cpp, "Check for proper uses of Objective-C properties", -1, false)
CHECKER("osx.cocoa.SelfInit", ObjCSelfInitChecker, ObjCSelfInitChecker.cpp, "Check that 'self' is properly initialized inside an initializer method", -1, false)
CHECKER("osx.cocoa.MissingSuperCall", ObjCSuperCallChecker, ObjCMissingSuperCallChecker.cpp, "Warn about Objective-C methods that lack a necessary call to super", -1, false)
CHECKER("osx.cocoa.SuperDealloc", ObjCSuperDeallocChecker, ObjCSuperDeallocChecker.cpp, "Warn about improper use of '[super dealloc]' in Objective-C", -1, false)
CHECKER("osx.cocoa.UnusedIvars", ObjCUnusedIvarsChecker, ObjCUnusedIVarsChecker.cpp, "Warn about private ivars that are never used", -1, false)
CHECKER("optin.performance.Padding", PaddingChecker, PaddingChecker.cpp, "Check for excessively padded structs.", -1, false)
CHECKER("alpha.osx.cocoa.localizability.PluralMisuseChecker", PluralMisuseChecker, LocalizationChecker.cpp, "Warns against using one vs. many plural pattern in code when generating localized strings.", -1, true)
CHECKER("alpha.core.PointerArithm", PointerArithChecker, PointerArithChecker, "Check for pointer arithmetic on locations other than array elements", -1, true)
CHECKER("alpha.core.PointerSub", PointerSubChecker, PointerSubChecker, "Check for pointer subtractions on two pointers pointing to different memory chunks", -1, true)
CHECKER("alpha.unix.PthreadLock", PthreadLockChecker, PthreadLockChecker.cpp, "Simple lock -> unlock checker", -1, true)
CHECKER("osx.cocoa.RetainCount", RetainCountChecker, RetainCountChecker.cpp, "Check for leaks and improper reference count management", -1, false)
CHECKER("alpha.security.ReturnPtrRange", ReturnPointerRangeChecker, ReturnPointerRangeChecker.cpp, "Check for an out-of-bound pointer being returned to callers", -1, true)
CHECKER("core.uninitialized.UndefReturn", ReturnUndefChecker, ReturnUndefChecker.cpp, "Check for uninitialized values being returned to the caller", -1, false)
CHECKER("alpha.unix.SimpleStream", SimpleStreamChecker, SimpleStreamChecker.cpp, "Check for misuses of stream APIs", -1, true)
CHECKER("alpha.core.SizeofPtr", SizeofPointerChecker, CheckSizeofPointer.cpp, "Warn about unintended use of sizeof() on pointer expressions", -1, true)
CHECKER("alpha.core.StackAddressAsyncEscape", StackAddrAsyncEscapeChecker, StackAddrEscapeChecker.cpp, "Check that addresses to stack memory do not escape the function", -1, true)
CHECKER("core.StackAddressEscape", StackAddrEscapeChecker, StackAddrEscapeChecker.cpp, "Check that addresses to stack memory do not escape the function", -1, false)
CHECKER("unix.StdCLibraryFunctions", StdCLibraryFunctionsChecker, StdLibraryFunctionsChecker.cpp, "Improve modeling of the C standard library functions", -1, false)
CHECKER("alpha.unix.Stream", StreamChecker, StreamChecker.cpp, "Check stream handling functions", -1, true)
CHECKER("debug.TaintTest", TaintTesterChecker, TaintTesterChecker.cpp, "Mark tainted symbols as such.", -1, false)
CHECKER("alpha.core.TestAfterDivZero", TestAfterDivZeroChecker, TestAfterDivZeroChecker.cpp, "Check for division by variable that is later compared against 0. Either the comparison is useless or there is division by zero.", -1, true)
CHECKER("debug.DumpTraversal", TraversalDumper, TraversalChecker.cpp, "Print branch conditions as they are traversed by the engine", -1, false)
CHECKER("security.insecureAPI.UncheckedReturn", UncheckedReturn, CheckSecuritySyntaxOnly.cpp, "Warn on uses of functions whose return values must be always checked", -1, false)
CHECKER("core.uninitialized.Branch", UndefBranchChecker, UndefBranchChecker.cpp, "Check for uninitialized values used as branch conditions", -1, false)
CHECKER("core.uninitialized.CapturedBlockVariable", UndefCapturedBlockVarChecker, UndefCapturedBlockVarChecker.cpp, "Check for blocks that capture uninitialized values", -1, false)
CHECKER("core.UndefinedBinaryOperatorResult", UndefResultChecker, UndefResultChecker.cpp, "Check for undefined results of binary operators", -1, false)
CHECKER("core.uninitialized.ArraySubscript", UndefinedArraySubscriptChecker, UndefinedArraySubscriptChecker.cpp, "Check for uninitialized values used as array subscripts", -1, false)
CHECKER("core.uninitialized.Assign", UndefinedAssignmentChecker, UndefinedAssignmentChecker.cpp, "Check for assigning uninitialized values", -1, false)
CHECKER("valist.Uninitialized", UninitializedChecker, ValistChecker.cpp, "Check for usages of uninitialized (or already released) va_lists.", -1, false)
CHECKER("unix.API", UnixAPIMisuseChecker, UnixAPIChecker.cpp, "Check calls to various UNIX/Posix functions", -1, false)
CHECKER("optin.portability.UnixAPI", UnixAPIPortabilityChecker, UnixAPIChecker.cpp, "Finds implementation-defined behavior in UNIX/Posix functions", -1, false)
CHECKER("alpha.deadcode.UnreachableCode", UnreachableCodeChecker, UnreachableCodeChecker.cpp, "Check unreachable code", -1, true)
CHECKER("valist.Unterminated", UnterminatedChecker, ValistChecker.cpp, "Check for va_lists which are not released by a va_end call.", -1, false)
CHECKER("core.VLASize", VLASizeChecker, VLASizeChecker.cpp, "Check for declarations of VLA of undefined or zero size", -1, false)
CHECKER("osx.cocoa.VariadicMethodTypes", VariadicMethodTypeChecker, BasicObjCFoundationChecks.cpp, "Check for passing non-Objective-C types to variadic collection initialization methods that expect only Objective-C types", -1, false)
CHECKER("unix.Vfork", VforkChecker, VforkChecker.cpp, "Check for proper usage of vfork", -1, false)
CHECKER("optin.cplusplus.VirtualCall", VirtualCallChecker, VirtualCallChecker.cpp, "Check virtual function calls during construction or destruction", -1, false)
CHECKER("security.insecureAPI.getpw", getpw, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'getpw' function", -1, false)
CHECKER("security.insecureAPI.gets", gets, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'gets' function", -1, false)
CHECKER("security.insecureAPI.mkstemp", mkstemp, CheckSecuritySyntaxOnly.cpp, "Warn when 'mkstemp' is passed fewer than 6 X's in the format string", -1, false)
CHECKER("security.insecureAPI.mktemp", mktemp, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'mktemp' function", -1, false)
CHECKER("security.insecureAPI.rand", rand, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'rand', 'random', and related functions", -1, false)
CHECKER("security.insecureAPI.strcpy", strcpy, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'strcpy' and 'strcat' functions", -1, false)
CHECKER("security.insecureAPI.vfork", vfork, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'vfork' function", -1, false)
#endif // GET_CHECKERS


#ifdef GET_MEMBER_ARRAYS
static const short SubPackageArray0[] = { 3, 17, 21, 32, 40, 23, 1, -1 };
static const short SubPackageArray1[] = { 2, -1 };
static const short CheckerArray2[] = { 27, -1 };
static const short SubPackageArray3[] = { 4, 6, 7, 8, 11, 10, 12, 13, 14, 5, 16, 9, 15, -1 };
static const short CheckerArray4[] = { 5, -1 };
static const short CheckerArray5[] = { 19, -1 };
static const short CheckerArray6[] = { 23, -1 };
static const short CheckerArray7[] = { 24, -1 };
static const short CheckerArray8[] = { 29, -1 };
static const short CheckerArray9[] = { 38, -1 };
static const short CheckerArray10[] = { 43, -1 };
static const short CheckerArray11[] = { 48, -1 };
static const short CheckerArray12[] = { 93, -1 };
static const short CheckerArray13[] = { 94, -1 };
static const short CheckerArray14[] = { 100, -1 };
static const short CheckerArray15[] = { 101, -1 };
static const short CheckerArray16[] = { 106, -1 };
static const short SubPackageArray17[] = { 18, 19, 20, -1 };
static const short CheckerArray18[] = { 32, -1 };
static const short CheckerArray19[] = { 50, -1 };
static const short CheckerArray20[] = { 61, -1 };
static const short SubPackageArray21[] = { 22, -1 };
static const short CheckerArray22[] = { 117, -1 };
static const short SubPackageArray23[] = { 25, 24, -1 };
static const short CheckerArray24[] = { 45, -1 };
static const short SubPackageArray25[] = { 30, 28, 29, 26, 27, -1 };
static const short CheckerArray26[] = { 34, -1 };
static const short CheckerArray27[] = { 35, -1 };
static const short CheckerArray28[] = { 49, -1 };
static const short CheckerArray29[] = { 60, -1 };
static const short SubPackageArray30[] = { 31, -1 };
static const short CheckerArray31[] = { 92, -1 };
static const short SubPackageArray32[] = { 38, 33, 34, 37, 35, 36, -1 };
static const short CheckerArray33[] = { 2, -1 };
static const short CheckerArray34[] = { 3, -1 };
static const short CheckerArray35[] = { 57, -1 };
static const short CheckerArray36[] = { 62, -1 };
static const short CheckerArray37[] = { 97, -1 };
static const short SubPackageArray38[] = { 39, -1 };
static const short CheckerArray39[] = { 47, -1 };
static const short SubPackageArray40[] = { 46, 42, 43, 45, 44, 41, -1 };
static const short CheckerArray41[] = { 4, -1 };
static const short CheckerArray42[] = { 25, -1 };
static const short CheckerArray43[] = { 95, -1 };
static const short CheckerArray44[] = { 99, -1 };
static const short CheckerArray45[] = { 104, -1 };
static const short SubPackageArray46[] = { 49, 47, 48, -1 };
static const short CheckerArray47[] = { 12, -1 };
static const short CheckerArray48[] = { 13, -1 };
static const short CheckerArray49[] = { 15, -1 };
static const short SubPackageArray50[] = { 51, -1 };
static const short SubPackageArray51[] = { 52, -1 };
static const short CheckerArray52[] = { 46, -1 };
static const short SubPackageArray53[] = { 63, 66, 59, 54, 57, 62, 55, 61, 60, 56, 58, -1 };
static const short CheckerArray54[] = { 18, -1 };
static const short CheckerArray55[] = { 36, -1 };
static const short CheckerArray56[] = { 39, -1 };
static const short CheckerArray57[] = { 70, -1 };
static const short CheckerArray58[] = { 71, -1 };
static const short CheckerArray59[] = { 33, -1 };
static const short CheckerArray60[] = { 102, -1 };
static const short CheckerArray61[] = { 111, -1 };
static const short CheckerArray62[] = { 119, -1 };
static const short SubPackageArray63[] = { 65, 64, -1 };
static const short CheckerArray64[] = { 6, -1 };
static const short CheckerArray65[] = { 68, -1 };
static const short SubPackageArray66[] = { 67, 68, 69, 70, 71, -1 };
static const short CheckerArray67[] = { 112, -1 };
static const short CheckerArray68[] = { 113, -1 };
static const short CheckerArray69[] = { 109, -1 };
static const short CheckerArray70[] = { 110, -1 };
static const short CheckerArray71[] = { 98, -1 };
static const short SubPackageArray72[] = { 73, 74, 75, -1 };
static const short CheckerArray73[] = { 65, -1 };
static const short CheckerArray74[] = { 66, -1 };
static const short CheckerArray75[] = { 17, -1 };
static const short SubPackageArray76[] = { 77, -1 };
static const short CheckerArray77[] = { 31, -1 };
static const short SubPackageArray78[] = { 79, 84, 85, 90, 81, 91, 82, 80, 86, 83, 88, 89, 87, 92, -1 };
static const short CheckerArray79[] = { 0, -1 };
static const short CheckerArray80[] = { 28, -1 };
static const short CheckerArray81[] = { 8, -1 };
static const short CheckerArray82[] = { 21, -1 };
static const short CheckerArray83[] = { 20, -1 };
static const short CheckerArray84[] = { 37, -1 };
static const short CheckerArray85[] = { 52, -1 };
static const short CheckerArray86[] = { 107, -1 };
static const short CheckerArray87[] = { 42, -1 };
static const short CheckerArray88[] = { 1, -1 };
static const short CheckerArray89[] = { 105, -1 };
static const short CheckerArray90[] = { 9, -1 };
static const short CheckerArray91[] = { 22, -1 };
static const short CheckerArray92[] = { 41, -1 };
static const short SubPackageArray93[] = { 94, -1 };
static const short CheckerArray94[] = { 51, -1 };
static const short SubPackageArray95[] = { 96, 97, 98, 99, 100, -1 };
static const short CheckerArray96[] = { 72, -1 };
static const short CheckerArray97[] = { 73, -1 };
static const short CheckerArray98[] = { 74, -1 };
static const short CheckerArray99[] = { 75, -1 };
static const short CheckerArray100[] = { 76, -1 };
static const short SubPackageArray101[] = { 113, 102, 111, 106, 104, -1 };
static const short SubPackageArray102[] = { 103, -1 };
static const short CheckerArray103[] = { 122, -1 };
static const short SubPackageArray104[] = { 105, -1 };
static const short CheckerArray105[] = { 53, -1 };
static const short SubPackageArray106[] = { 107, -1 };
static const short SubPackageArray107[] = { 108, -1 };
static const short SubPackageArray108[] = { 110, 109, -1 };
static const short CheckerArray109[] = { 40, -1 };
static const short CheckerArray110[] = { 69, -1 };
static const short SubPackageArray111[] = { 112, -1 };
static const short CheckerArray112[] = { 91, -1 };
static const short SubPackageArray113[] = { 114, -1 };
static const short CheckerArray114[] = { 116, -1 };
static const short SubPackageArray115[] = { 120, 137, 117, 116, 119, 118, -1 };
static const short CheckerArray116[] = { 55, -1 };
static const short CheckerArray117[] = { 77, -1 };
static const short CheckerArray118[] = { 86, -1 };
static const short CheckerArray119[] = { 54, -1 };
static const short SubPackageArray120[] = { 121, 129, 122, 136, 127, 124, 135, 133, 125, 130, 126, 128, 132, 131, 123, 134, -1 };
static const short CheckerArray121[] = { 78, -1 };
static const short CheckerArray122[] = { 26, -1 };
static const short CheckerArray123[] = { 81, -1 };
static const short CheckerArray124[] = { 84, -1 };
static const short CheckerArray125[] = { 83, -1 };
static const short CheckerArray126[] = { 88, -1 };
static const short CheckerArray127[] = { 63, -1 };
static const short CheckerArray128[] = { 64, -1 };
static const short CheckerArray129[] = { 67, -1 };
static const short CheckerArray130[] = { 85, -1 };
static const short CheckerArray131[] = { 82, -1 };
static const short CheckerArray132[] = { 96, -1 };
static const short CheckerArray133[] = { 87, -1 };
static const short CheckerArray134[] = { 89, -1 };
static const short CheckerArray135[] = { 90, -1 };
static const short CheckerArray136[] = { 120, -1 };
static const short SubPackageArray137[] = { 141, 139, 140, 138, -1 };
static const short CheckerArray138[] = { 7, -1 };
static const short CheckerArray139[] = { 10, -1 };
static const short CheckerArray140[] = { 11, -1 };
static const short SubPackageArray141[] = { 143, 142, -1 };
static const short CheckerArray142[] = { 80, -1 };
static const short CheckerArray143[] = { 79, -1 };
static const short SubPackageArray144[] = { 146, 145, -1 };
static const short CheckerArray145[] = { 44, -1 };
static const short SubPackageArray146[] = { 149, 148, 151, 150, 152, 153, 154, 147, -1 };
static const short CheckerArray147[] = { 108, -1 };
static const short CheckerArray148[] = { 123, -1 };
static const short CheckerArray149[] = { 124, -1 };
static const short CheckerArray150[] = { 125, -1 };
static const short CheckerArray151[] = { 126, -1 };
static const short CheckerArray152[] = { 127, -1 };
static const short CheckerArray153[] = { 128, -1 };
static const short CheckerArray154[] = { 129, -1 };
static const short SubPackageArray155[] = { 162, 156, 157, 158, 159, 161, 160, -1 };
static const short CheckerArray156[] = { 115, -1 };
static const short CheckerArray157[] = { 56, -1 };
static const short CheckerArray158[] = { 58, -1 };
static const short CheckerArray159[] = { 59, -1 };
static const short CheckerArray160[] = { 103, -1 };
static const short CheckerArray161[] = { 121, -1 };
static const short SubPackageArray162[] = { 164, 163, -1 };
static const short CheckerArray163[] = { 16, -1 };
static const short CheckerArray164[] = { 14, -1 };
static const short SubPackageArray165[] = { 167, 168, 166, -1 };
static const short CheckerArray166[] = { 30, -1 };
static const short CheckerArray167[] = { 114, -1 };
static const short CheckerArray168[] = { 118, -1 };
#endif // GET_MEMBER_ARRAYS


#ifdef GET_CHECKNAME_TABLE
  { "alpha",                                                          0, SubPackageArray0, false },
  { "alpha.clone",                                                    0, SubPackageArray1, true },
  { "alpha.clone.CloneChecker",                                       CheckerArray2, 0, false },
  { "alpha.core",                                                     0, SubPackageArray3, true },
  { "alpha.core.BoolAssignment",                                      CheckerArray4, 0, false },
  { "alpha.core.CallAndMessageUnInitRefArg",                          CheckerArray5, 0, false },
  { "alpha.core.CastSize",                                            CheckerArray6, 0, false },
  { "alpha.core.CastToStruct",                                        CheckerArray7, 0, false },
  { "alpha.core.Conversion",                                          CheckerArray8, 0, false },
  { "alpha.core.DynamicTypeChecker",                                  CheckerArray9, 0, false },
  { "alpha.core.FixedAddr",                                           CheckerArray10, 0, false },
  { "alpha.core.IdenticalExpr",                                       CheckerArray11, 0, false },
  { "alpha.core.PointerArithm",                                       CheckerArray12, 0, false },
  { "alpha.core.PointerSub",                                          CheckerArray13, 0, false },
  { "alpha.core.SizeofPtr",                                           CheckerArray14, 0, false },
  { "alpha.core.StackAddressAsyncEscape",                             CheckerArray15, 0, false },
  { "alpha.core.TestAfterDivZero",                                    CheckerArray16, 0, false },
  { "alpha.cplusplus",                                                0, SubPackageArray17, true },
  { "alpha.cplusplus.DeleteWithNonVirtualDtor",                       CheckerArray18, 0, false },
  { "alpha.cplusplus.IteratorRange",                                  CheckerArray19, 0, false },
  { "alpha.cplusplus.MisusedMovedObject",                             CheckerArray20, 0, false },
  { "alpha.deadcode",                                                 0, SubPackageArray21, true },
  { "alpha.deadcode.UnreachableCode",                                 CheckerArray22, 0, false },
  { "alpha.osx",                                                      0, SubPackageArray23, true },
  { "alpha.osx.GCDAsyncSemaphore",                                    CheckerArray24, 0, false },
  { "alpha.osx.cocoa",                                                0, SubPackageArray25, true },
  { "alpha.osx.cocoa.DirectIvarAssignment",                           CheckerArray26, 0, false },
  { "alpha.osx.cocoa.DirectIvarAssignmentForAnnotatedFunctions",      CheckerArray27, 0, false },
  { "alpha.osx.cocoa.InstanceVariableInvalidation",                   CheckerArray28, 0, false },
  { "alpha.osx.cocoa.MissingInvalidationMethod",                      CheckerArray29, 0, false },
  { "alpha.osx.cocoa.localizability",                                 0, SubPackageArray30, true },
  { "alpha.osx.cocoa.localizability.PluralMisuseChecker",             CheckerArray31, 0, false },
  { "alpha.security",                                                 0, SubPackageArray32, true },
  { "alpha.security.ArrayBound",                                      CheckerArray33, 0, false },
  { "alpha.security.ArrayBoundV2",                                    CheckerArray34, 0, false },
  { "alpha.security.MallocOverflow",                                  CheckerArray35, 0, false },
  { "alpha.security.MmapWriteExec",                                   CheckerArray36, 0, false },
  { "alpha.security.ReturnPtrRange",                                  CheckerArray37, 0, false },
  { "alpha.security.taint",                                           0, SubPackageArray38, true },
  { "alpha.security.taint.TaintPropagation",                          CheckerArray39, 0, false },
  { "alpha.unix",                                                     0, SubPackageArray40, true },
  { "alpha.unix.BlockInCriticalSection",                              CheckerArray41, 0, false },
  { "alpha.unix.Chroot",                                              CheckerArray42, 0, false },
  { "alpha.unix.PthreadLock",                                         CheckerArray43, 0, false },
  { "alpha.unix.SimpleStream",                                        CheckerArray44, 0, false },
  { "alpha.unix.Stream",                                              CheckerArray45, 0, false },
  { "alpha.unix.cstring",                                             0, SubPackageArray46, true },
  { "alpha.unix.cstring.BufferOverlap",                               CheckerArray47, 0, false },
  { "alpha.unix.cstring.NotNullTerminated",                           CheckerArray48, 0, false },
  { "alpha.unix.cstring.OutOfBounds",                                 CheckerArray49, 0, false },
  { "apiModeling",                                                    0, SubPackageArray50, true },
  { "apiModeling.google",                                             0, SubPackageArray51, true },
  { "apiModeling.google.GTest",                                       CheckerArray52, 0, false },
  { "core",                                                           0, SubPackageArray53, false },
  { "core.CallAndMessage",                                            CheckerArray54, 0, false },
  { "core.DivideZero",                                                CheckerArray55, 0, false },
  { "core.DynamicTypePropagation",                                    CheckerArray56, 0, false },
  { "core.NonNullParamChecker",                                       CheckerArray57, 0, false },
  { "core.NonnilStringConstants",                                     CheckerArray58, 0, false },
  { "core.NullDereference",                                           CheckerArray59, 0, false },
  { "core.StackAddressEscape",                                        CheckerArray60, 0, false },
  { "core.UndefinedBinaryOperatorResult",                             CheckerArray61, 0, false },
  { "core.VLASize",                                                   CheckerArray62, 0, false },
  { "core.builtin",                                                   0, SubPackageArray63, false },
  { "core.builtin.BuiltinFunctions",                                  CheckerArray64, 0, false },
  { "core.builtin.NoReturnFunctions",                                 CheckerArray65, 0, false },
  { "core.uninitialized",                                             0, SubPackageArray66, false },
  { "core.uninitialized.ArraySubscript",                              CheckerArray67, 0, false },
  { "core.uninitialized.Assign",                                      CheckerArray68, 0, false },
  { "core.uninitialized.Branch",                                      CheckerArray69, 0, false },
  { "core.uninitialized.CapturedBlockVariable",                       CheckerArray70, 0, false },
  { "core.uninitialized.UndefReturn",                                 CheckerArray71, 0, false },
  { "cplusplus",                                                      0, SubPackageArray72, false },
  { "cplusplus.NewDelete",                                            CheckerArray73, 0, false },
  { "cplusplus.NewDeleteLeaks",                                       CheckerArray74, 0, false },
  { "cplusplus.SelfAssignment",                                       CheckerArray75, 0, false },
  { "deadcode",                                                       0, SubPackageArray76, false },
  { "deadcode.DeadStores",                                            CheckerArray77, 0, false },
  { "debug",                                                          0, SubPackageArray78, false },
  { "debug.AnalysisOrder",                                            CheckerArray79, 0, false },
  { "debug.ConfigDumper",                                             CheckerArray80, 0, false },
  { "debug.DumpCFG",                                                  CheckerArray81, 0, false },
  { "debug.DumpCallGraph",                                            CheckerArray82, 0, false },
  { "debug.DumpCalls",                                                CheckerArray83, 0, false },
  { "debug.DumpDominators",                                           CheckerArray84, 0, false },
  { "debug.DumpLiveVars",                                             CheckerArray85, 0, false },
  { "debug.DumpTraversal",                                            CheckerArray86, 0, false },
  { "debug.ExprInspection",                                           CheckerArray87, 0, false },
  { "debug.Stats",                                                    CheckerArray88, 0, false },
  { "debug.TaintTest",                                                CheckerArray89, 0, false },
  { "debug.ViewCFG",                                                  CheckerArray90, 0, false },
  { "debug.ViewCallGraph",                                            CheckerArray91, 0, false },
  { "debug.ViewExplodedGraph",                                        CheckerArray92, 0, false },
  { "llvm",                                                           0, SubPackageArray93, false },
  { "llvm.Conventions",                                               CheckerArray94, 0, false },
  { "nullability",                                                    0, SubPackageArray95, false },
  { "nullability.NullPassedToNonnull",                                CheckerArray96, 0, false },
  { "nullability.NullReturnedFromNonnull",                            CheckerArray97, 0, false },
  { "nullability.NullableDereferenced",                               CheckerArray98, 0, false },
  { "nullability.NullablePassedToNonnull",                            CheckerArray99, 0, false },
  { "nullability.NullableReturnedFromNonnull",                        CheckerArray100, 0, false },
  { "optin",                                                          0, SubPackageArray101, false },
  { "optin.cplusplus",                                                0, SubPackageArray102, false },
  { "optin.cplusplus.VirtualCall",                                    CheckerArray103, 0, false },
  { "optin.mpi",                                                      0, SubPackageArray104, false },
  { "optin.mpi.MPI-Checker",                                          CheckerArray105, 0, false },
  { "optin.osx",                                                      0, SubPackageArray106, false },
  { "optin.osx.cocoa",                                                0, SubPackageArray107, false },
  { "optin.osx.cocoa.localizability",                                 0, SubPackageArray108, false },
  { "optin.osx.cocoa.localizability.EmptyLocalizationContextChecker", CheckerArray109, 0, false },
  { "optin.osx.cocoa.localizability.NonLocalizedStringChecker",       CheckerArray110, 0, false },
  { "optin.performance",                                              0, SubPackageArray111, false },
  { "optin.performance.Padding",                                      CheckerArray112, 0, false },
  { "optin.portability",                                              0, SubPackageArray113, false },
  { "optin.portability.UnixAPI",                                      CheckerArray114, 0, false },
  { "osx",                                                            0, SubPackageArray115, false },
  { "osx.API",                                                        CheckerArray116, 0, false },
  { "osx.NumberObjectConversion",                                     CheckerArray117, 0, false },
  { "osx.ObjCProperty",                                               CheckerArray118, 0, false },
  { "osx.SecKeychainAPI",                                             CheckerArray119, 0, false },
  { "osx.cocoa",                                                      0, SubPackageArray120, false },
  { "osx.cocoa.AtSync",                                               CheckerArray121, 0, false },
  { "osx.cocoa.ClassRelease",                                         CheckerArray122, 0, false },
  { "osx.cocoa.Dealloc",                                              CheckerArray123, 0, false },
  { "osx.cocoa.IncompatibleMethodTypes",                              CheckerArray124, 0, false },
  { "osx.cocoa.Loops",                                                CheckerArray125, 0, false },
  { "osx.cocoa.MissingSuperCall",                                     CheckerArray126, 0, false },
  { "osx.cocoa.NSAutoreleasePool",                                    CheckerArray127, 0, false },
  { "osx.cocoa.NSError",                                              CheckerArray128, 0, false },
  { "osx.cocoa.NilArg",                                               CheckerArray129, 0, false },
  { "osx.cocoa.NonNilReturnValue",                                    CheckerArray130, 0, false },
  { "osx.cocoa.ObjCGenerics",                                         CheckerArray131, 0, false },
  { "osx.cocoa.RetainCount",                                          CheckerArray132, 0, false },
  { "osx.cocoa.SelfInit",                                             CheckerArray133, 0, false },
  { "osx.cocoa.SuperDealloc",                                         CheckerArray134, 0, false },
  { "osx.cocoa.UnusedIvars",                                          CheckerArray135, 0, false },
  { "osx.cocoa.VariadicMethodTypes",                                  CheckerArray136, 0, false },
  { "osx.coreFoundation",                                             0, SubPackageArray137, false },
  { "osx.coreFoundation.CFError",                                     CheckerArray138, 0, false },
  { "osx.coreFoundation.CFNumber",                                    CheckerArray139, 0, false },
  { "osx.coreFoundation.CFRetainRelease",                             CheckerArray140, 0, false },
  { "osx.coreFoundation.containers",                                  0, SubPackageArray141, false },
  { "osx.coreFoundation.containers.OutOfBounds",                      CheckerArray142, 0, false },
  { "osx.coreFoundation.containers.PointerSizedValues",               CheckerArray143, 0, false },
  { "security",                                                       0, SubPackageArray144, false },
  { "security.FloatLoopCounter",                                      CheckerArray145, 0, false },
  { "security.insecureAPI",                                           0, SubPackageArray146, false },
  { "security.insecureAPI.UncheckedReturn",                           CheckerArray147, 0, false },
  { "security.insecureAPI.getpw",                                     CheckerArray148, 0, false },
  { "security.insecureAPI.gets",                                      CheckerArray149, 0, false },
  { "security.insecureAPI.mkstemp",                                   CheckerArray150, 0, false },
  { "security.insecureAPI.mktemp",                                    CheckerArray151, 0, false },
  { "security.insecureAPI.rand",                                      CheckerArray152, 0, false },
  { "security.insecureAPI.strcpy",                                    CheckerArray153, 0, false },
  { "security.insecureAPI.vfork",                                     CheckerArray154, 0, false },
  { "unix",                                                           0, SubPackageArray155, false },
  { "unix.API",                                                       CheckerArray156, 0, false },
  { "unix.Malloc",                                                    CheckerArray157, 0, false },
  { "unix.MallocSizeof",                                              CheckerArray158, 0, false },
  { "unix.MismatchedDeallocator",                                     CheckerArray159, 0, false },
  { "unix.StdCLibraryFunctions",                                      CheckerArray160, 0, false },
  { "unix.Vfork",                                                     CheckerArray161, 0, false },
  { "unix.cstring",                                                   0, SubPackageArray162, true },
  { "unix.cstring.BadSizeArg",                                        CheckerArray163, 0, false },
  { "unix.cstring.NullArg",                                           CheckerArray164, 0, false },
  { "valist",                                                         0, SubPackageArray165, false },
  { "valist.CopyToSelf",                                              CheckerArray166, 0, false },
  { "valist.Uninitialized",                                           CheckerArray167, 0, false },
  { "valist.Unterminated",                                            CheckerArray168, 0, false },
#endif // GET_CHECKNAME_TABLE

