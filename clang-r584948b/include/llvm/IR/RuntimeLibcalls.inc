/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Runtime LibCalls Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: RuntimeLibcalls.td                                                   *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_RUNTIME_LIBCALL_ENUM
namespace llvm {
namespace RTLIB {
enum Libcall : unsigned short {
  ACOS_F32 = 0,
  ACOS_F64 = 1,
  ACOS_F80 = 2,
  ACOS_F128 = 3,
  ACOS_PPCF128 = 4,
  ADD_F32 = 5,
  ADD_F64 = 6,
  ADD_F80 = 7,
  ADD_F128 = 8,
  ADD_PPCF128 = 9,
  AEABI_MEMCLR = 10,
  AEABI_MEMCLR4 = 11,
  AEABI_MEMCLR8 = 12,
  AEABI_MEMCPY4 = 13,
  AEABI_MEMCPY8 = 14,
  AEABI_MEMMOVE4 = 15,
  AEABI_MEMMOVE8 = 16,
  AEABI_MEMSET4 = 17,
  AEABI_MEMSET8 = 18,
  ASIN_F32 = 19,
  ASIN_F64 = 20,
  ASIN_F80 = 21,
  ASIN_F128 = 22,
  ASIN_PPCF128 = 23,
  ATAN2_F32 = 24,
  ATAN2_F64 = 25,
  ATAN2_F80 = 26,
  ATAN2_F128 = 27,
  ATAN2_PPCF128 = 28,
  ATAN_F32 = 29,
  ATAN_F64 = 30,
  ATAN_F80 = 31,
  ATAN_F128 = 32,
  ATAN_PPCF128 = 33,
  ATOMIC_COMPARE_EXCHANGE = 34,
  ATOMIC_COMPARE_EXCHANGE_1 = 35,
  ATOMIC_COMPARE_EXCHANGE_2 = 36,
  ATOMIC_COMPARE_EXCHANGE_4 = 37,
  ATOMIC_COMPARE_EXCHANGE_8 = 38,
  ATOMIC_COMPARE_EXCHANGE_16 = 39,
  ATOMIC_EXCHANGE = 40,
  ATOMIC_EXCHANGE_1 = 41,
  ATOMIC_EXCHANGE_2 = 42,
  ATOMIC_EXCHANGE_4 = 43,
  ATOMIC_EXCHANGE_8 = 44,
  ATOMIC_EXCHANGE_16 = 45,
  ATOMIC_FETCH_ADD_1 = 46,
  ATOMIC_FETCH_ADD_2 = 47,
  ATOMIC_FETCH_ADD_4 = 48,
  ATOMIC_FETCH_ADD_8 = 49,
  ATOMIC_FETCH_ADD_16 = 50,
  ATOMIC_FETCH_AND_1 = 51,
  ATOMIC_FETCH_AND_2 = 52,
  ATOMIC_FETCH_AND_4 = 53,
  ATOMIC_FETCH_AND_8 = 54,
  ATOMIC_FETCH_AND_16 = 55,
  ATOMIC_FETCH_NAND_1 = 56,
  ATOMIC_FETCH_NAND_2 = 57,
  ATOMIC_FETCH_NAND_4 = 58,
  ATOMIC_FETCH_NAND_8 = 59,
  ATOMIC_FETCH_NAND_16 = 60,
  ATOMIC_FETCH_OR_1 = 61,
  ATOMIC_FETCH_OR_2 = 62,
  ATOMIC_FETCH_OR_4 = 63,
  ATOMIC_FETCH_OR_8 = 64,
  ATOMIC_FETCH_OR_16 = 65,
  ATOMIC_FETCH_SUB_1 = 66,
  ATOMIC_FETCH_SUB_2 = 67,
  ATOMIC_FETCH_SUB_4 = 68,
  ATOMIC_FETCH_SUB_8 = 69,
  ATOMIC_FETCH_SUB_16 = 70,
  ATOMIC_FETCH_XOR_1 = 71,
  ATOMIC_FETCH_XOR_2 = 72,
  ATOMIC_FETCH_XOR_4 = 73,
  ATOMIC_FETCH_XOR_8 = 74,
  ATOMIC_FETCH_XOR_16 = 75,
  ATOMIC_LOAD = 76,
  ATOMIC_LOAD_1 = 77,
  ATOMIC_LOAD_2 = 78,
  ATOMIC_LOAD_4 = 79,
  ATOMIC_LOAD_8 = 80,
  ATOMIC_LOAD_16 = 81,
  ATOMIC_STORE = 82,
  ATOMIC_STORE_1 = 83,
  ATOMIC_STORE_2 = 84,
  ATOMIC_STORE_4 = 85,
  ATOMIC_STORE_8 = 86,
  ATOMIC_STORE_16 = 87,
  BZERO = 88,
  CALLOC = 89,
  CBRT_F32 = 90,
  CBRT_F64 = 91,
  CBRT_F80 = 92,
  CBRT_F128 = 93,
  CBRT_PPCF128 = 94,
  CEIL_F32 = 95,
  CEIL_F64 = 96,
  CEIL_F80 = 97,
  CEIL_F128 = 98,
  CEIL_PPCF128 = 99,
  CLEAR_CACHE = 100,
  CONVERT_F128_PPCF128 = 101,
  CONVERT_PPCF128_F128 = 102,
  COPYSIGN_F32 = 103,
  COPYSIGN_F64 = 104,
  COPYSIGN_F80 = 105,
  COPYSIGN_F128 = 106,
  COPYSIGN_PPCF128 = 107,
  COSH_F32 = 108,
  COSH_F64 = 109,
  COSH_F80 = 110,
  COSH_F128 = 111,
  COSH_PPCF128 = 112,
  COS_F32 = 113,
  COS_F64 = 114,
  COS_F80 = 115,
  COS_F128 = 116,
  COS_PPCF128 = 117,
  CTLZ_I32 = 118,
  CTLZ_I64 = 119,
  CTLZ_I128 = 120,
  CTPOP_I32 = 121,
  CTPOP_I64 = 122,
  CTPOP_I128 = 123,
  CXA_END_CLEANUP = 124,
  DEOPTIMIZE = 125,
  DIV_F32 = 126,
  DIV_F64 = 127,
  DIV_F80 = 128,
  DIV_F128 = 129,
  DIV_PPCF128 = 130,
  EXP2_F32 = 131,
  EXP2_F64 = 132,
  EXP2_F80 = 133,
  EXP2_F128 = 134,
  EXP2_FINITE_F32 = 135,
  EXP2_FINITE_F64 = 136,
  EXP2_FINITE_F80 = 137,
  EXP2_FINITE_F128 = 138,
  EXP2_FINITE_PPCF128 = 139,
  EXP2_PPCF128 = 140,
  EXP10_F32 = 141,
  EXP10_F64 = 142,
  EXP10_F80 = 143,
  EXP10_F128 = 144,
  EXP10_FINITE_F32 = 145,
  EXP10_FINITE_F64 = 146,
  EXP10_FINITE_F80 = 147,
  EXP10_FINITE_F128 = 148,
  EXP10_FINITE_PPCF128 = 149,
  EXP10_PPCF128 = 150,
  EXP_F32 = 151,
  EXP_F64 = 152,
  EXP_F80 = 153,
  EXP_F128 = 154,
  EXP_FINITE_F32 = 155,
  EXP_FINITE_F64 = 156,
  EXP_FINITE_F80 = 157,
  EXP_FINITE_F128 = 158,
  EXP_FINITE_PPCF128 = 159,
  EXP_PPCF128 = 160,
  FAST_ADD_F32 = 161,
  FAST_ADD_F64 = 162,
  FAST_ADD_F80 = 163,
  FAST_ADD_F128 = 164,
  FAST_ADD_PPCF128 = 165,
  FAST_DIV_F32 = 166,
  FAST_DIV_F64 = 167,
  FAST_DIV_F80 = 168,
  FAST_DIV_F128 = 169,
  FAST_DIV_PPCF128 = 170,
  FAST_MUL_F32 = 171,
  FAST_MUL_F64 = 172,
  FAST_MUL_F80 = 173,
  FAST_MUL_F128 = 174,
  FAST_MUL_PPCF128 = 175,
  FAST_SQRT_F32 = 176,
  FAST_SQRT_F64 = 177,
  FAST_SQRT_F80 = 178,
  FAST_SQRT_F128 = 179,
  FAST_SQRT_PPCF128 = 180,
  FAST_SUB_F32 = 181,
  FAST_SUB_F64 = 182,
  FAST_SUB_F80 = 183,
  FAST_SUB_F128 = 184,
  FAST_SUB_PPCF128 = 185,
  FEGETENV = 186,
  FEGETMODE = 187,
  FESETENV = 188,
  FESETMODE = 189,
  FLOOR_F32 = 190,
  FLOOR_F64 = 191,
  FLOOR_F80 = 192,
  FLOOR_F128 = 193,
  FLOOR_PPCF128 = 194,
  FMAXIMUM_F32 = 195,
  FMAXIMUM_F64 = 196,
  FMAXIMUM_F80 = 197,
  FMAXIMUM_F128 = 198,
  FMAXIMUM_NUM_F32 = 199,
  FMAXIMUM_NUM_F64 = 200,
  FMAXIMUM_NUM_F80 = 201,
  FMAXIMUM_NUM_F128 = 202,
  FMAXIMUM_NUM_PPCF128 = 203,
  FMAXIMUM_PPCF128 = 204,
  FMAX_F32 = 205,
  FMAX_F64 = 206,
  FMAX_F80 = 207,
  FMAX_F128 = 208,
  FMAX_PPCF128 = 209,
  FMA_F32 = 210,
  FMA_F64 = 211,
  FMA_F80 = 212,
  FMA_F128 = 213,
  FMA_PPCF128 = 214,
  FMINIMUM_F32 = 215,
  FMINIMUM_F64 = 216,
  FMINIMUM_F80 = 217,
  FMINIMUM_F128 = 218,
  FMINIMUM_NUM_F32 = 219,
  FMINIMUM_NUM_F64 = 220,
  FMINIMUM_NUM_F80 = 221,
  FMINIMUM_NUM_F128 = 222,
  FMINIMUM_NUM_PPCF128 = 223,
  FMINIMUM_PPCF128 = 224,
  FMIN_F32 = 225,
  FMIN_F64 = 226,
  FMIN_F80 = 227,
  FMIN_F128 = 228,
  FMIN_PPCF128 = 229,
  FPEXT_BF16_F32 = 230,
  FPEXT_F16_F32 = 231,
  FPEXT_F16_F64 = 232,
  FPEXT_F16_F80 = 233,
  FPEXT_F16_F128 = 234,
  FPEXT_F32_F64 = 235,
  FPEXT_F32_F128 = 236,
  FPEXT_F32_PPCF128 = 237,
  FPEXT_F64_F128 = 238,
  FPEXT_F64_PPCF128 = 239,
  FPEXT_F80_F128 = 240,
  FPROUND_F32_BF16 = 241,
  FPROUND_F32_F16 = 242,
  FPROUND_F64_BF16 = 243,
  FPROUND_F64_F16 = 244,
  FPROUND_F64_F32 = 245,
  FPROUND_F80_BF16 = 246,
  FPROUND_F80_F16 = 247,
  FPROUND_F80_F32 = 248,
  FPROUND_F80_F64 = 249,
  FPROUND_F128_BF16 = 250,
  FPROUND_F128_F16 = 251,
  FPROUND_F128_F32 = 252,
  FPROUND_F128_F64 = 253,
  FPROUND_F128_F80 = 254,
  FPROUND_PPCF128_F16 = 255,
  FPROUND_PPCF128_F32 = 256,
  FPROUND_PPCF128_F64 = 257,
  FPTOSINT_F16_I32 = 258,
  FPTOSINT_F16_I64 = 259,
  FPTOSINT_F16_I128 = 260,
  FPTOSINT_F32_I32 = 261,
  FPTOSINT_F32_I64 = 262,
  FPTOSINT_F32_I128 = 263,
  FPTOSINT_F64_I32 = 264,
  FPTOSINT_F64_I64 = 265,
  FPTOSINT_F64_I128 = 266,
  FPTOSINT_F80_I32 = 267,
  FPTOSINT_F80_I64 = 268,
  FPTOSINT_F80_I128 = 269,
  FPTOSINT_F128_I32 = 270,
  FPTOSINT_F128_I64 = 271,
  FPTOSINT_F128_I128 = 272,
  FPTOSINT_PPCF128_I32 = 273,
  FPTOSINT_PPCF128_I64 = 274,
  FPTOSINT_PPCF128_I128 = 275,
  FPTOUINT_F16_I32 = 276,
  FPTOUINT_F16_I64 = 277,
  FPTOUINT_F16_I128 = 278,
  FPTOUINT_F32_I32 = 279,
  FPTOUINT_F32_I64 = 280,
  FPTOUINT_F32_I128 = 281,
  FPTOUINT_F64_I32 = 282,
  FPTOUINT_F64_I64 = 283,
  FPTOUINT_F64_I128 = 284,
  FPTOUINT_F80_I32 = 285,
  FPTOUINT_F80_I64 = 286,
  FPTOUINT_F80_I128 = 287,
  FPTOUINT_F128_I32 = 288,
  FPTOUINT_F128_I64 = 289,
  FPTOUINT_F128_I128 = 290,
  FPTOUINT_PPCF128_I32 = 291,
  FPTOUINT_PPCF128_I64 = 292,
  FPTOUINT_PPCF128_I128 = 293,
  FREXP_F32 = 294,
  FREXP_F64 = 295,
  FREXP_F80 = 296,
  FREXP_F128 = 297,
  FREXP_PPCF128 = 298,
  HEXAGON_MEMCPY_LIKELY_ALIGNED_MIN32BYTES_MULT8BYTES = 299,
  LDEXP_F32 = 300,
  LDEXP_F64 = 301,
  LDEXP_F80 = 302,
  LDEXP_F128 = 303,
  LDEXP_PPCF128 = 304,
  LLRINT_F32 = 305,
  LLRINT_F64 = 306,
  LLRINT_F80 = 307,
  LLRINT_F128 = 308,
  LLRINT_PPCF128 = 309,
  LLROUND_F32 = 310,
  LLROUND_F64 = 311,
  LLROUND_F80 = 312,
  LLROUND_F128 = 313,
  LLROUND_PPCF128 = 314,
  LOG2_F32 = 315,
  LOG2_F64 = 316,
  LOG2_F80 = 317,
  LOG2_F128 = 318,
  LOG2_FINITE_F32 = 319,
  LOG2_FINITE_F64 = 320,
  LOG2_FINITE_F80 = 321,
  LOG2_FINITE_F128 = 322,
  LOG2_FINITE_PPCF128 = 323,
  LOG2_PPCF128 = 324,
  LOG10_F32 = 325,
  LOG10_F64 = 326,
  LOG10_F80 = 327,
  LOG10_F128 = 328,
  LOG10_FINITE_F32 = 329,
  LOG10_FINITE_F64 = 330,
  LOG10_FINITE_F80 = 331,
  LOG10_FINITE_F128 = 332,
  LOG10_FINITE_PPCF128 = 333,
  LOG10_PPCF128 = 334,
  LOG_F32 = 335,
  LOG_F64 = 336,
  LOG_F80 = 337,
  LOG_F128 = 338,
  LOG_FINITE_F32 = 339,
  LOG_FINITE_F64 = 340,
  LOG_FINITE_F80 = 341,
  LOG_FINITE_F128 = 342,
  LOG_FINITE_PPCF128 = 343,
  LOG_PPCF128 = 344,
  LRINT_F32 = 345,
  LRINT_F64 = 346,
  LRINT_F80 = 347,
  LRINT_F128 = 348,
  LRINT_PPCF128 = 349,
  LROUND_F32 = 350,
  LROUND_F64 = 351,
  LROUND_F80 = 352,
  LROUND_F128 = 353,
  LROUND_PPCF128 = 354,
  MEMCPY = 355,
  MEMCPY_ALIGN_4 = 356,
  MEMCPY_ELEMENT_UNORDERED_ATOMIC_1 = 357,
  MEMCPY_ELEMENT_UNORDERED_ATOMIC_2 = 358,
  MEMCPY_ELEMENT_UNORDERED_ATOMIC_4 = 359,
  MEMCPY_ELEMENT_UNORDERED_ATOMIC_8 = 360,
  MEMCPY_ELEMENT_UNORDERED_ATOMIC_16 = 361,
  MEMMOVE = 362,
  MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1 = 363,
  MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2 = 364,
  MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4 = 365,
  MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8 = 366,
  MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16 = 367,
  MEMSET = 368,
  MEMSET_ELEMENT_UNORDERED_ATOMIC_1 = 369,
  MEMSET_ELEMENT_UNORDERED_ATOMIC_2 = 370,
  MEMSET_ELEMENT_UNORDERED_ATOMIC_4 = 371,
  MEMSET_ELEMENT_UNORDERED_ATOMIC_8 = 372,
  MEMSET_ELEMENT_UNORDERED_ATOMIC_16 = 373,
  MIPS16_RET_DC = 374,
  MIPS16_RET_DF = 375,
  MIPS16_RET_SC = 376,
  MIPS16_RET_SF = 377,
  MODF_F32 = 378,
  MODF_F64 = 379,
  MODF_F80 = 380,
  MODF_F128 = 381,
  MODF_PPCF128 = 382,
  MULO_I32 = 383,
  MULO_I64 = 384,
  MULO_I128 = 385,
  MUL_F32 = 386,
  MUL_F64 = 387,
  MUL_F80 = 388,
  MUL_F128 = 389,
  MUL_I8 = 390,
  MUL_I16 = 391,
  MUL_I32 = 392,
  MUL_I64 = 393,
  MUL_I128 = 394,
  MUL_PPCF128 = 395,
  NEARBYINT_F32 = 396,
  NEARBYINT_F64 = 397,
  NEARBYINT_F80 = 398,
  NEARBYINT_F128 = 399,
  NEARBYINT_PPCF128 = 400,
  NEG_I32 = 401,
  NEG_I64 = 402,
  OBJC_AUTORELEASE = 403,
  OBJC_AUTORELEASEPOOLPOP = 404,
  OBJC_AUTORELEASEPOOLPUSH = 405,
  OBJC_AUTORELEASERETURNVALUE = 406,
  OBJC_CLAIMAUTORELEASEDRETURNVALUE = 407,
  OBJC_COPYWEAK = 408,
  OBJC_DESTROYWEAK = 409,
  OBJC_INITWEAK = 410,
  OBJC_LOADWEAK = 411,
  OBJC_LOADWEAKRETAINED = 412,
  OBJC_MOVEWEAK = 413,
  OBJC_RELEASE = 414,
  OBJC_RETAIN = 415,
  OBJC_RETAINAUTORELEASE = 416,
  OBJC_RETAINAUTORELEASEDRETURNVALUE = 417,
  OBJC_RETAINAUTORELEASERETURNVALUE = 418,
  OBJC_RETAINBLOCK = 419,
  OBJC_RETAINEDOBJECT = 420,
  OBJC_RETAIN_AUTORELEASE = 421,
  OBJC_STORESTRONG = 422,
  OBJC_STOREWEAK = 423,
  OBJC_SYNC_ENTER = 424,
  OBJC_SYNC_EXIT = 425,
  OBJC_UNRETAINEDOBJECT = 426,
  OBJC_UNRETAINEDPOINTER = 427,
  OBJC_UNSAFECLAIMAUTORELEASEDRETURNVALUE = 428,
  OEQ_F32 = 429,
  OEQ_F64 = 430,
  OEQ_F128 = 431,
  OEQ_PPCF128 = 432,
  OGE_F32 = 433,
  OGE_F64 = 434,
  OGE_F128 = 435,
  OGE_PPCF128 = 436,
  OGT_F32 = 437,
  OGT_F64 = 438,
  OGT_F128 = 439,
  OGT_PPCF128 = 440,
  OLE_F32 = 441,
  OLE_F64 = 442,
  OLE_F128 = 443,
  OLE_PPCF128 = 444,
  OLT_F32 = 445,
  OLT_F64 = 446,
  OLT_F128 = 447,
  OLT_PPCF128 = 448,
  OUTLINE_ATOMIC_CAS1_ACQ = 449,
  OUTLINE_ATOMIC_CAS1_ACQ_REL = 450,
  OUTLINE_ATOMIC_CAS1_REL = 451,
  OUTLINE_ATOMIC_CAS1_RELAX = 452,
  OUTLINE_ATOMIC_CAS2_ACQ = 453,
  OUTLINE_ATOMIC_CAS2_ACQ_REL = 454,
  OUTLINE_ATOMIC_CAS2_REL = 455,
  OUTLINE_ATOMIC_CAS2_RELAX = 456,
  OUTLINE_ATOMIC_CAS4_ACQ = 457,
  OUTLINE_ATOMIC_CAS4_ACQ_REL = 458,
  OUTLINE_ATOMIC_CAS4_REL = 459,
  OUTLINE_ATOMIC_CAS4_RELAX = 460,
  OUTLINE_ATOMIC_CAS8_ACQ = 461,
  OUTLINE_ATOMIC_CAS8_ACQ_REL = 462,
  OUTLINE_ATOMIC_CAS8_REL = 463,
  OUTLINE_ATOMIC_CAS8_RELAX = 464,
  OUTLINE_ATOMIC_CAS16_ACQ = 465,
  OUTLINE_ATOMIC_CAS16_ACQ_REL = 466,
  OUTLINE_ATOMIC_CAS16_REL = 467,
  OUTLINE_ATOMIC_CAS16_RELAX = 468,
  OUTLINE_ATOMIC_LDADD1_ACQ = 469,
  OUTLINE_ATOMIC_LDADD1_ACQ_REL = 470,
  OUTLINE_ATOMIC_LDADD1_REL = 471,
  OUTLINE_ATOMIC_LDADD1_RELAX = 472,
  OUTLINE_ATOMIC_LDADD2_ACQ = 473,
  OUTLINE_ATOMIC_LDADD2_ACQ_REL = 474,
  OUTLINE_ATOMIC_LDADD2_REL = 475,
  OUTLINE_ATOMIC_LDADD2_RELAX = 476,
  OUTLINE_ATOMIC_LDADD4_ACQ = 477,
  OUTLINE_ATOMIC_LDADD4_ACQ_REL = 478,
  OUTLINE_ATOMIC_LDADD4_REL = 479,
  OUTLINE_ATOMIC_LDADD4_RELAX = 480,
  OUTLINE_ATOMIC_LDADD8_ACQ = 481,
  OUTLINE_ATOMIC_LDADD8_ACQ_REL = 482,
  OUTLINE_ATOMIC_LDADD8_REL = 483,
  OUTLINE_ATOMIC_LDADD8_RELAX = 484,
  OUTLINE_ATOMIC_LDADD16_ACQ = 485,
  OUTLINE_ATOMIC_LDADD16_ACQ_REL = 486,
  OUTLINE_ATOMIC_LDADD16_REL = 487,
  OUTLINE_ATOMIC_LDADD16_RELAX = 488,
  OUTLINE_ATOMIC_LDCLR1_ACQ = 489,
  OUTLINE_ATOMIC_LDCLR1_ACQ_REL = 490,
  OUTLINE_ATOMIC_LDCLR1_REL = 491,
  OUTLINE_ATOMIC_LDCLR1_RELAX = 492,
  OUTLINE_ATOMIC_LDCLR2_ACQ = 493,
  OUTLINE_ATOMIC_LDCLR2_ACQ_REL = 494,
  OUTLINE_ATOMIC_LDCLR2_REL = 495,
  OUTLINE_ATOMIC_LDCLR2_RELAX = 496,
  OUTLINE_ATOMIC_LDCLR4_ACQ = 497,
  OUTLINE_ATOMIC_LDCLR4_ACQ_REL = 498,
  OUTLINE_ATOMIC_LDCLR4_REL = 499,
  OUTLINE_ATOMIC_LDCLR4_RELAX = 500,
  OUTLINE_ATOMIC_LDCLR8_ACQ = 501,
  OUTLINE_ATOMIC_LDCLR8_ACQ_REL = 502,
  OUTLINE_ATOMIC_LDCLR8_REL = 503,
  OUTLINE_ATOMIC_LDCLR8_RELAX = 504,
  OUTLINE_ATOMIC_LDCLR16_ACQ = 505,
  OUTLINE_ATOMIC_LDCLR16_ACQ_REL = 506,
  OUTLINE_ATOMIC_LDCLR16_REL = 507,
  OUTLINE_ATOMIC_LDCLR16_RELAX = 508,
  OUTLINE_ATOMIC_LDEOR1_ACQ = 509,
  OUTLINE_ATOMIC_LDEOR1_ACQ_REL = 510,
  OUTLINE_ATOMIC_LDEOR1_REL = 511,
  OUTLINE_ATOMIC_LDEOR1_RELAX = 512,
  OUTLINE_ATOMIC_LDEOR2_ACQ = 513,
  OUTLINE_ATOMIC_LDEOR2_ACQ_REL = 514,
  OUTLINE_ATOMIC_LDEOR2_REL = 515,
  OUTLINE_ATOMIC_LDEOR2_RELAX = 516,
  OUTLINE_ATOMIC_LDEOR4_ACQ = 517,
  OUTLINE_ATOMIC_LDEOR4_ACQ_REL = 518,
  OUTLINE_ATOMIC_LDEOR4_REL = 519,
  OUTLINE_ATOMIC_LDEOR4_RELAX = 520,
  OUTLINE_ATOMIC_LDEOR8_ACQ = 521,
  OUTLINE_ATOMIC_LDEOR8_ACQ_REL = 522,
  OUTLINE_ATOMIC_LDEOR8_REL = 523,
  OUTLINE_ATOMIC_LDEOR8_RELAX = 524,
  OUTLINE_ATOMIC_LDEOR16_ACQ = 525,
  OUTLINE_ATOMIC_LDEOR16_ACQ_REL = 526,
  OUTLINE_ATOMIC_LDEOR16_REL = 527,
  OUTLINE_ATOMIC_LDEOR16_RELAX = 528,
  OUTLINE_ATOMIC_LDSET1_ACQ = 529,
  OUTLINE_ATOMIC_LDSET1_ACQ_REL = 530,
  OUTLINE_ATOMIC_LDSET1_REL = 531,
  OUTLINE_ATOMIC_LDSET1_RELAX = 532,
  OUTLINE_ATOMIC_LDSET2_ACQ = 533,
  OUTLINE_ATOMIC_LDSET2_ACQ_REL = 534,
  OUTLINE_ATOMIC_LDSET2_REL = 535,
  OUTLINE_ATOMIC_LDSET2_RELAX = 536,
  OUTLINE_ATOMIC_LDSET4_ACQ = 537,
  OUTLINE_ATOMIC_LDSET4_ACQ_REL = 538,
  OUTLINE_ATOMIC_LDSET4_REL = 539,
  OUTLINE_ATOMIC_LDSET4_RELAX = 540,
  OUTLINE_ATOMIC_LDSET8_ACQ = 541,
  OUTLINE_ATOMIC_LDSET8_ACQ_REL = 542,
  OUTLINE_ATOMIC_LDSET8_REL = 543,
  OUTLINE_ATOMIC_LDSET8_RELAX = 544,
  OUTLINE_ATOMIC_LDSET16_ACQ = 545,
  OUTLINE_ATOMIC_LDSET16_ACQ_REL = 546,
  OUTLINE_ATOMIC_LDSET16_REL = 547,
  OUTLINE_ATOMIC_LDSET16_RELAX = 548,
  OUTLINE_ATOMIC_SWP1_ACQ = 549,
  OUTLINE_ATOMIC_SWP1_ACQ_REL = 550,
  OUTLINE_ATOMIC_SWP1_REL = 551,
  OUTLINE_ATOMIC_SWP1_RELAX = 552,
  OUTLINE_ATOMIC_SWP2_ACQ = 553,
  OUTLINE_ATOMIC_SWP2_ACQ_REL = 554,
  OUTLINE_ATOMIC_SWP2_REL = 555,
  OUTLINE_ATOMIC_SWP2_RELAX = 556,
  OUTLINE_ATOMIC_SWP4_ACQ = 557,
  OUTLINE_ATOMIC_SWP4_ACQ_REL = 558,
  OUTLINE_ATOMIC_SWP4_REL = 559,
  OUTLINE_ATOMIC_SWP4_RELAX = 560,
  OUTLINE_ATOMIC_SWP8_ACQ = 561,
  OUTLINE_ATOMIC_SWP8_ACQ_REL = 562,
  OUTLINE_ATOMIC_SWP8_REL = 563,
  OUTLINE_ATOMIC_SWP8_RELAX = 564,
  OUTLINE_ATOMIC_SWP16_ACQ = 565,
  OUTLINE_ATOMIC_SWP16_ACQ_REL = 566,
  OUTLINE_ATOMIC_SWP16_REL = 567,
  OUTLINE_ATOMIC_SWP16_RELAX = 568,
  POWI_F32 = 569,
  POWI_F64 = 570,
  POWI_F80 = 571,
  POWI_F128 = 572,
  POWI_PPCF128 = 573,
  POW_F32 = 574,
  POW_F64 = 575,
  POW_F80 = 576,
  POW_F128 = 577,
  POW_FINITE_F32 = 578,
  POW_FINITE_F64 = 579,
  POW_FINITE_F80 = 580,
  POW_FINITE_F128 = 581,
  POW_FINITE_PPCF128 = 582,
  POW_PPCF128 = 583,
  REM_F32 = 584,
  REM_F64 = 585,
  REM_F80 = 586,
  REM_F128 = 587,
  REM_PPCF128 = 588,
  RETURN_ADDRESS = 589,
  RINT_F32 = 590,
  RINT_F64 = 591,
  RINT_F80 = 592,
  RINT_F128 = 593,
  RINT_PPCF128 = 594,
  RISCV_FLUSH_ICACHE = 595,
  ROUNDEVEN_F32 = 596,
  ROUNDEVEN_F64 = 597,
  ROUNDEVEN_F80 = 598,
  ROUNDEVEN_F128 = 599,
  ROUNDEVEN_PPCF128 = 600,
  ROUND_F32 = 601,
  ROUND_F64 = 602,
  ROUND_F80 = 603,
  ROUND_F128 = 604,
  ROUND_PPCF128 = 605,
  SAFESTACK_POINTER_ADDRESS = 606,
  SC_MEMCPY = 607,
  SC_MEMMOVE = 608,
  SC_MEMSET = 609,
  SDIVREM_I8 = 610,
  SDIVREM_I16 = 611,
  SDIVREM_I32 = 612,
  SDIVREM_I64 = 613,
  SDIVREM_I128 = 614,
  SDIV_I8 = 615,
  SDIV_I16 = 616,
  SDIV_I32 = 617,
  SDIV_I64 = 618,
  SDIV_I128 = 619,
  SHL_I16 = 620,
  SHL_I32 = 621,
  SHL_I64 = 622,
  SHL_I128 = 623,
  SINCOSPI_F32 = 624,
  SINCOSPI_F64 = 625,
  SINCOSPI_F80 = 626,
  SINCOSPI_F128 = 627,
  SINCOSPI_PPCF128 = 628,
  SINCOS_F32 = 629,
  SINCOS_F64 = 630,
  SINCOS_F80 = 631,
  SINCOS_F128 = 632,
  SINCOS_PPCF128 = 633,
  SINCOS_STRET_F32 = 634,
  SINCOS_STRET_F64 = 635,
  SINH_F32 = 636,
  SINH_F64 = 637,
  SINH_F80 = 638,
  SINH_F128 = 639,
  SINH_PPCF128 = 640,
  SINTTOFP_I32_F16 = 641,
  SINTTOFP_I32_F32 = 642,
  SINTTOFP_I32_F64 = 643,
  SINTTOFP_I32_F80 = 644,
  SINTTOFP_I32_F128 = 645,
  SINTTOFP_I32_PPCF128 = 646,
  SINTTOFP_I64_BF16 = 647,
  SINTTOFP_I64_F16 = 648,
  SINTTOFP_I64_F32 = 649,
  SINTTOFP_I64_F64 = 650,
  SINTTOFP_I64_F80 = 651,
  SINTTOFP_I64_F128 = 652,
  SINTTOFP_I64_PPCF128 = 653,
  SINTTOFP_I128_F16 = 654,
  SINTTOFP_I128_F32 = 655,
  SINTTOFP_I128_F64 = 656,
  SINTTOFP_I128_F80 = 657,
  SINTTOFP_I128_F128 = 658,
  SINTTOFP_I128_PPCF128 = 659,
  SIN_F32 = 660,
  SIN_F64 = 661,
  SIN_F80 = 662,
  SIN_F128 = 663,
  SIN_PPCF128 = 664,
  SQRT_F32 = 665,
  SQRT_F64 = 666,
  SQRT_F80 = 667,
  SQRT_F128 = 668,
  SQRT_PPCF128 = 669,
  SRA_I16 = 670,
  SRA_I32 = 671,
  SRA_I64 = 672,
  SRA_I128 = 673,
  SREM_I8 = 674,
  SREM_I16 = 675,
  SREM_I32 = 676,
  SREM_I64 = 677,
  SREM_I128 = 678,
  SRL_I16 = 679,
  SRL_I32 = 680,
  SRL_I64 = 681,
  SRL_I128 = 682,
  STACKPROTECTOR_CHECK_FAIL = 683,
  STACK_SMASH_HANDLER = 684,
  SUB_F32 = 685,
  SUB_F64 = 686,
  SUB_F80 = 687,
  SUB_F128 = 688,
  SUB_PPCF128 = 689,
  SYNC_FETCH_AND_ADD_1 = 690,
  SYNC_FETCH_AND_ADD_2 = 691,
  SYNC_FETCH_AND_ADD_4 = 692,
  SYNC_FETCH_AND_ADD_8 = 693,
  SYNC_FETCH_AND_ADD_16 = 694,
  SYNC_FETCH_AND_AND_1 = 695,
  SYNC_FETCH_AND_AND_2 = 696,
  SYNC_FETCH_AND_AND_4 = 697,
  SYNC_FETCH_AND_AND_8 = 698,
  SYNC_FETCH_AND_AND_16 = 699,
  SYNC_FETCH_AND_MAX_1 = 700,
  SYNC_FETCH_AND_MAX_2 = 701,
  SYNC_FETCH_AND_MAX_4 = 702,
  SYNC_FETCH_AND_MAX_8 = 703,
  SYNC_FETCH_AND_MAX_16 = 704,
  SYNC_FETCH_AND_MIN_1 = 705,
  SYNC_FETCH_AND_MIN_2 = 706,
  SYNC_FETCH_AND_MIN_4 = 707,
  SYNC_FETCH_AND_MIN_8 = 708,
  SYNC_FETCH_AND_MIN_16 = 709,
  SYNC_FETCH_AND_NAND_1 = 710,
  SYNC_FETCH_AND_NAND_2 = 711,
  SYNC_FETCH_AND_NAND_4 = 712,
  SYNC_FETCH_AND_NAND_8 = 713,
  SYNC_FETCH_AND_NAND_16 = 714,
  SYNC_FETCH_AND_OR_1 = 715,
  SYNC_FETCH_AND_OR_2 = 716,
  SYNC_FETCH_AND_OR_4 = 717,
  SYNC_FETCH_AND_OR_8 = 718,
  SYNC_FETCH_AND_OR_16 = 719,
  SYNC_FETCH_AND_SUB_1 = 720,
  SYNC_FETCH_AND_SUB_2 = 721,
  SYNC_FETCH_AND_SUB_4 = 722,
  SYNC_FETCH_AND_SUB_8 = 723,
  SYNC_FETCH_AND_SUB_16 = 724,
  SYNC_FETCH_AND_UMAX_1 = 725,
  SYNC_FETCH_AND_UMAX_2 = 726,
  SYNC_FETCH_AND_UMAX_4 = 727,
  SYNC_FETCH_AND_UMAX_8 = 728,
  SYNC_FETCH_AND_UMAX_16 = 729,
  SYNC_FETCH_AND_UMIN_1 = 730,
  SYNC_FETCH_AND_UMIN_2 = 731,
  SYNC_FETCH_AND_UMIN_4 = 732,
  SYNC_FETCH_AND_UMIN_8 = 733,
  SYNC_FETCH_AND_UMIN_16 = 734,
  SYNC_FETCH_AND_XOR_1 = 735,
  SYNC_FETCH_AND_XOR_2 = 736,
  SYNC_FETCH_AND_XOR_4 = 737,
  SYNC_FETCH_AND_XOR_8 = 738,
  SYNC_FETCH_AND_XOR_16 = 739,
  SYNC_LOCK_TEST_AND_SET_1 = 740,
  SYNC_LOCK_TEST_AND_SET_2 = 741,
  SYNC_LOCK_TEST_AND_SET_4 = 742,
  SYNC_LOCK_TEST_AND_SET_8 = 743,
  SYNC_LOCK_TEST_AND_SET_16 = 744,
  SYNC_VAL_COMPARE_AND_SWAP_1 = 745,
  SYNC_VAL_COMPARE_AND_SWAP_2 = 746,
  SYNC_VAL_COMPARE_AND_SWAP_4 = 747,
  SYNC_VAL_COMPARE_AND_SWAP_8 = 748,
  SYNC_VAL_COMPARE_AND_SWAP_16 = 749,
  TANH_F32 = 750,
  TANH_F64 = 751,
  TANH_F80 = 752,
  TANH_F128 = 753,
  TANH_PPCF128 = 754,
  TAN_F32 = 755,
  TAN_F64 = 756,
  TAN_F80 = 757,
  TAN_F128 = 758,
  TAN_PPCF128 = 759,
  TRUNC_F32 = 760,
  TRUNC_F64 = 761,
  TRUNC_F80 = 762,
  TRUNC_F128 = 763,
  TRUNC_PPCF128 = 764,
  UDIVREM_I8 = 765,
  UDIVREM_I16 = 766,
  UDIVREM_I32 = 767,
  UDIVREM_I64 = 768,
  UDIVREM_I128 = 769,
  UDIV_I8 = 770,
  UDIV_I16 = 771,
  UDIV_I32 = 772,
  UDIV_I64 = 773,
  UDIV_I128 = 774,
  UINTTOFP_I32_F16 = 775,
  UINTTOFP_I32_F32 = 776,
  UINTTOFP_I32_F64 = 777,
  UINTTOFP_I32_F80 = 778,
  UINTTOFP_I32_F128 = 779,
  UINTTOFP_I32_PPCF128 = 780,
  UINTTOFP_I64_BF16 = 781,
  UINTTOFP_I64_F16 = 782,
  UINTTOFP_I64_F32 = 783,
  UINTTOFP_I64_F64 = 784,
  UINTTOFP_I64_F80 = 785,
  UINTTOFP_I64_F128 = 786,
  UINTTOFP_I64_PPCF128 = 787,
  UINTTOFP_I128_F16 = 788,
  UINTTOFP_I128_F32 = 789,
  UINTTOFP_I128_F64 = 790,
  UINTTOFP_I128_F80 = 791,
  UINTTOFP_I128_F128 = 792,
  UINTTOFP_I128_PPCF128 = 793,
  UNE_F32 = 794,
  UNE_F64 = 795,
  UNE_F128 = 796,
  UNE_PPCF128 = 797,
  UNWIND_CALL_PERSONALITY = 798,
  UNWIND_REGISTER = 799,
  UNWIND_RESUME = 800,
  UNWIND_UNREGISTER = 801,
  UO_F32 = 802,
  UO_F64 = 803,
  UO_F128 = 804,
  UO_PPCF128 = 805,
  UREM_I8 = 806,
  UREM_I16 = 807,
  UREM_I32 = 808,
  UREM_I64 = 809,
  UREM_I128 = 810,
  UNKNOWN_LIBCALL = 811
};

enum LibcallImpl : unsigned short {
  Unsupported = 0,
  arm64ec__Unwind_Resume = 1, // #_Unwind_Resume
  arm64ec___aarch64_cas16_acq = 2, // #__aarch64_cas16_acq
  arm64ec___aarch64_cas16_acq_rel = 3, // #__aarch64_cas16_acq_rel
  arm64ec___aarch64_cas16_rel = 4, // #__aarch64_cas16_rel
  arm64ec___aarch64_cas16_relax = 5, // #__aarch64_cas16_relax
  arm64ec___aarch64_cas1_acq = 6, // #__aarch64_cas1_acq
  arm64ec___aarch64_cas1_acq_rel = 7, // #__aarch64_cas1_acq_rel
  arm64ec___aarch64_cas1_rel = 8, // #__aarch64_cas1_rel
  arm64ec___aarch64_cas1_relax = 9, // #__aarch64_cas1_relax
  arm64ec___aarch64_cas2_acq = 10, // #__aarch64_cas2_acq
  arm64ec___aarch64_cas2_acq_rel = 11, // #__aarch64_cas2_acq_rel
  arm64ec___aarch64_cas2_rel = 12, // #__aarch64_cas2_rel
  arm64ec___aarch64_cas2_relax = 13, // #__aarch64_cas2_relax
  arm64ec___aarch64_cas4_acq = 14, // #__aarch64_cas4_acq
  arm64ec___aarch64_cas4_acq_rel = 15, // #__aarch64_cas4_acq_rel
  arm64ec___aarch64_cas4_rel = 16, // #__aarch64_cas4_rel
  arm64ec___aarch64_cas4_relax = 17, // #__aarch64_cas4_relax
  arm64ec___aarch64_cas8_acq = 18, // #__aarch64_cas8_acq
  arm64ec___aarch64_cas8_acq_rel = 19, // #__aarch64_cas8_acq_rel
  arm64ec___aarch64_cas8_rel = 20, // #__aarch64_cas8_rel
  arm64ec___aarch64_cas8_relax = 21, // #__aarch64_cas8_relax
  arm64ec___aarch64_ldadd1_acq = 22, // #__aarch64_ldadd1_acq
  arm64ec___aarch64_ldadd1_acq_rel = 23, // #__aarch64_ldadd1_acq_rel
  arm64ec___aarch64_ldadd1_rel = 24, // #__aarch64_ldadd1_rel
  arm64ec___aarch64_ldadd1_relax = 25, // #__aarch64_ldadd1_relax
  arm64ec___aarch64_ldadd2_acq = 26, // #__aarch64_ldadd2_acq
  arm64ec___aarch64_ldadd2_acq_rel = 27, // #__aarch64_ldadd2_acq_rel
  arm64ec___aarch64_ldadd2_rel = 28, // #__aarch64_ldadd2_rel
  arm64ec___aarch64_ldadd2_relax = 29, // #__aarch64_ldadd2_relax
  arm64ec___aarch64_ldadd4_acq = 30, // #__aarch64_ldadd4_acq
  arm64ec___aarch64_ldadd4_acq_rel = 31, // #__aarch64_ldadd4_acq_rel
  arm64ec___aarch64_ldadd4_rel = 32, // #__aarch64_ldadd4_rel
  arm64ec___aarch64_ldadd4_relax = 33, // #__aarch64_ldadd4_relax
  arm64ec___aarch64_ldadd8_acq = 34, // #__aarch64_ldadd8_acq
  arm64ec___aarch64_ldadd8_acq_rel = 35, // #__aarch64_ldadd8_acq_rel
  arm64ec___aarch64_ldadd8_rel = 36, // #__aarch64_ldadd8_rel
  arm64ec___aarch64_ldadd8_relax = 37, // #__aarch64_ldadd8_relax
  arm64ec___aarch64_ldclr1_acq = 38, // #__aarch64_ldclr1_acq
  arm64ec___aarch64_ldclr1_acq_rel = 39, // #__aarch64_ldclr1_acq_rel
  arm64ec___aarch64_ldclr1_rel = 40, // #__aarch64_ldclr1_rel
  arm64ec___aarch64_ldclr1_relax = 41, // #__aarch64_ldclr1_relax
  arm64ec___aarch64_ldclr2_acq = 42, // #__aarch64_ldclr2_acq
  arm64ec___aarch64_ldclr2_acq_rel = 43, // #__aarch64_ldclr2_acq_rel
  arm64ec___aarch64_ldclr2_rel = 44, // #__aarch64_ldclr2_rel
  arm64ec___aarch64_ldclr2_relax = 45, // #__aarch64_ldclr2_relax
  arm64ec___aarch64_ldclr4_acq = 46, // #__aarch64_ldclr4_acq
  arm64ec___aarch64_ldclr4_acq_rel = 47, // #__aarch64_ldclr4_acq_rel
  arm64ec___aarch64_ldclr4_rel = 48, // #__aarch64_ldclr4_rel
  arm64ec___aarch64_ldclr4_relax = 49, // #__aarch64_ldclr4_relax
  arm64ec___aarch64_ldclr8_acq = 50, // #__aarch64_ldclr8_acq
  arm64ec___aarch64_ldclr8_acq_rel = 51, // #__aarch64_ldclr8_acq_rel
  arm64ec___aarch64_ldclr8_rel = 52, // #__aarch64_ldclr8_rel
  arm64ec___aarch64_ldclr8_relax = 53, // #__aarch64_ldclr8_relax
  arm64ec___aarch64_ldeor1_acq = 54, // #__aarch64_ldeor1_acq
  arm64ec___aarch64_ldeor1_acq_rel = 55, // #__aarch64_ldeor1_acq_rel
  arm64ec___aarch64_ldeor1_rel = 56, // #__aarch64_ldeor1_rel
  arm64ec___aarch64_ldeor1_relax = 57, // #__aarch64_ldeor1_relax
  arm64ec___aarch64_ldeor2_acq = 58, // #__aarch64_ldeor2_acq
  arm64ec___aarch64_ldeor2_acq_rel = 59, // #__aarch64_ldeor2_acq_rel
  arm64ec___aarch64_ldeor2_rel = 60, // #__aarch64_ldeor2_rel
  arm64ec___aarch64_ldeor2_relax = 61, // #__aarch64_ldeor2_relax
  arm64ec___aarch64_ldeor4_acq = 62, // #__aarch64_ldeor4_acq
  arm64ec___aarch64_ldeor4_acq_rel = 63, // #__aarch64_ldeor4_acq_rel
  arm64ec___aarch64_ldeor4_rel = 64, // #__aarch64_ldeor4_rel
  arm64ec___aarch64_ldeor4_relax = 65, // #__aarch64_ldeor4_relax
  arm64ec___aarch64_ldeor8_acq = 66, // #__aarch64_ldeor8_acq
  arm64ec___aarch64_ldeor8_acq_rel = 67, // #__aarch64_ldeor8_acq_rel
  arm64ec___aarch64_ldeor8_rel = 68, // #__aarch64_ldeor8_rel
  arm64ec___aarch64_ldeor8_relax = 69, // #__aarch64_ldeor8_relax
  arm64ec___aarch64_ldset1_acq = 70, // #__aarch64_ldset1_acq
  arm64ec___aarch64_ldset1_acq_rel = 71, // #__aarch64_ldset1_acq_rel
  arm64ec___aarch64_ldset1_rel = 72, // #__aarch64_ldset1_rel
  arm64ec___aarch64_ldset1_relax = 73, // #__aarch64_ldset1_relax
  arm64ec___aarch64_ldset2_acq = 74, // #__aarch64_ldset2_acq
  arm64ec___aarch64_ldset2_acq_rel = 75, // #__aarch64_ldset2_acq_rel
  arm64ec___aarch64_ldset2_rel = 76, // #__aarch64_ldset2_rel
  arm64ec___aarch64_ldset2_relax = 77, // #__aarch64_ldset2_relax
  arm64ec___aarch64_ldset4_acq = 78, // #__aarch64_ldset4_acq
  arm64ec___aarch64_ldset4_acq_rel = 79, // #__aarch64_ldset4_acq_rel
  arm64ec___aarch64_ldset4_rel = 80, // #__aarch64_ldset4_rel
  arm64ec___aarch64_ldset4_relax = 81, // #__aarch64_ldset4_relax
  arm64ec___aarch64_ldset8_acq = 82, // #__aarch64_ldset8_acq
  arm64ec___aarch64_ldset8_acq_rel = 83, // #__aarch64_ldset8_acq_rel
  arm64ec___aarch64_ldset8_rel = 84, // #__aarch64_ldset8_rel
  arm64ec___aarch64_ldset8_relax = 85, // #__aarch64_ldset8_relax
  arm64ec___aarch64_swp1_acq = 86, // #__aarch64_swp1_acq
  arm64ec___aarch64_swp1_acq_rel = 87, // #__aarch64_swp1_acq_rel
  arm64ec___aarch64_swp1_rel = 88, // #__aarch64_swp1_rel
  arm64ec___aarch64_swp1_relax = 89, // #__aarch64_swp1_relax
  arm64ec___aarch64_swp2_acq = 90, // #__aarch64_swp2_acq
  arm64ec___aarch64_swp2_acq_rel = 91, // #__aarch64_swp2_acq_rel
  arm64ec___aarch64_swp2_rel = 92, // #__aarch64_swp2_rel
  arm64ec___aarch64_swp2_relax = 93, // #__aarch64_swp2_relax
  arm64ec___aarch64_swp4_acq = 94, // #__aarch64_swp4_acq
  arm64ec___aarch64_swp4_acq_rel = 95, // #__aarch64_swp4_acq_rel
  arm64ec___aarch64_swp4_rel = 96, // #__aarch64_swp4_rel
  arm64ec___aarch64_swp4_relax = 97, // #__aarch64_swp4_relax
  arm64ec___aarch64_swp8_acq = 98, // #__aarch64_swp8_acq
  arm64ec___aarch64_swp8_acq_rel = 99, // #__aarch64_swp8_acq_rel
  arm64ec___aarch64_swp8_rel = 100, // #__aarch64_swp8_rel
  arm64ec___aarch64_swp8_relax = 101, // #__aarch64_swp8_relax
  arm64ec___adddf3 = 102, // #__adddf3
  arm64ec___addsf3 = 103, // #__addsf3
  arm64ec___addtf3 = 104, // #__addtf3
  arm64ec___arm_sc_memcpy = 105, // #__arm_sc_memcpy
  arm64ec___arm_sc_memmove = 106, // #__arm_sc_memmove
  arm64ec___arm_sc_memset = 107, // #__arm_sc_memset
  arm64ec___ashldi3 = 108, // #__ashldi3
  arm64ec___ashlhi3 = 109, // #__ashlhi3
  arm64ec___ashlsi3 = 110, // #__ashlsi3
  arm64ec___ashlti3 = 111, // #__ashlti3
  arm64ec___ashrdi3 = 112, // #__ashrdi3
  arm64ec___ashrhi3 = 113, // #__ashrhi3
  arm64ec___ashrsi3 = 114, // #__ashrsi3
  arm64ec___ashrti3 = 115, // #__ashrti3
  arm64ec___atomic_compare_exchange = 116, // #__atomic_compare_exchange
  arm64ec___atomic_compare_exchange_1 = 117, // #__atomic_compare_exchange_1
  arm64ec___atomic_compare_exchange_16 = 118, // #__atomic_compare_exchange_16
  arm64ec___atomic_compare_exchange_2 = 119, // #__atomic_compare_exchange_2
  arm64ec___atomic_compare_exchange_4 = 120, // #__atomic_compare_exchange_4
  arm64ec___atomic_compare_exchange_8 = 121, // #__atomic_compare_exchange_8
  arm64ec___atomic_exchange = 122, // #__atomic_exchange
  arm64ec___atomic_exchange_1 = 123, // #__atomic_exchange_1
  arm64ec___atomic_exchange_16 = 124, // #__atomic_exchange_16
  arm64ec___atomic_exchange_2 = 125, // #__atomic_exchange_2
  arm64ec___atomic_exchange_4 = 126, // #__atomic_exchange_4
  arm64ec___atomic_exchange_8 = 127, // #__atomic_exchange_8
  arm64ec___atomic_fetch_add_1 = 128, // #__atomic_fetch_add_1
  arm64ec___atomic_fetch_add_16 = 129, // #__atomic_fetch_add_16
  arm64ec___atomic_fetch_add_2 = 130, // #__atomic_fetch_add_2
  arm64ec___atomic_fetch_add_4 = 131, // #__atomic_fetch_add_4
  arm64ec___atomic_fetch_add_8 = 132, // #__atomic_fetch_add_8
  arm64ec___atomic_fetch_and_1 = 133, // #__atomic_fetch_and_1
  arm64ec___atomic_fetch_and_16 = 134, // #__atomic_fetch_and_16
  arm64ec___atomic_fetch_and_2 = 135, // #__atomic_fetch_and_2
  arm64ec___atomic_fetch_and_4 = 136, // #__atomic_fetch_and_4
  arm64ec___atomic_fetch_and_8 = 137, // #__atomic_fetch_and_8
  arm64ec___atomic_fetch_nand_1 = 138, // #__atomic_fetch_nand_1
  arm64ec___atomic_fetch_nand_16 = 139, // #__atomic_fetch_nand_16
  arm64ec___atomic_fetch_nand_2 = 140, // #__atomic_fetch_nand_2
  arm64ec___atomic_fetch_nand_4 = 141, // #__atomic_fetch_nand_4
  arm64ec___atomic_fetch_nand_8 = 142, // #__atomic_fetch_nand_8
  arm64ec___atomic_fetch_or_1 = 143, // #__atomic_fetch_or_1
  arm64ec___atomic_fetch_or_16 = 144, // #__atomic_fetch_or_16
  arm64ec___atomic_fetch_or_2 = 145, // #__atomic_fetch_or_2
  arm64ec___atomic_fetch_or_4 = 146, // #__atomic_fetch_or_4
  arm64ec___atomic_fetch_or_8 = 147, // #__atomic_fetch_or_8
  arm64ec___atomic_fetch_sub_1 = 148, // #__atomic_fetch_sub_1
  arm64ec___atomic_fetch_sub_16 = 149, // #__atomic_fetch_sub_16
  arm64ec___atomic_fetch_sub_2 = 150, // #__atomic_fetch_sub_2
  arm64ec___atomic_fetch_sub_4 = 151, // #__atomic_fetch_sub_4
  arm64ec___atomic_fetch_sub_8 = 152, // #__atomic_fetch_sub_8
  arm64ec___atomic_fetch_xor_1 = 153, // #__atomic_fetch_xor_1
  arm64ec___atomic_fetch_xor_16 = 154, // #__atomic_fetch_xor_16
  arm64ec___atomic_fetch_xor_2 = 155, // #__atomic_fetch_xor_2
  arm64ec___atomic_fetch_xor_4 = 156, // #__atomic_fetch_xor_4
  arm64ec___atomic_fetch_xor_8 = 157, // #__atomic_fetch_xor_8
  arm64ec___atomic_load = 158, // #__atomic_load
  arm64ec___atomic_load_1 = 159, // #__atomic_load_1
  arm64ec___atomic_load_16 = 160, // #__atomic_load_16
  arm64ec___atomic_load_2 = 161, // #__atomic_load_2
  arm64ec___atomic_load_4 = 162, // #__atomic_load_4
  arm64ec___atomic_load_8 = 163, // #__atomic_load_8
  arm64ec___atomic_store = 164, // #__atomic_store
  arm64ec___atomic_store_1 = 165, // #__atomic_store_1
  arm64ec___atomic_store_16 = 166, // #__atomic_store_16
  arm64ec___atomic_store_2 = 167, // #__atomic_store_2
  arm64ec___atomic_store_4 = 168, // #__atomic_store_4
  arm64ec___atomic_store_8 = 169, // #__atomic_store_8
  arm64ec___clear_cache = 170, // #__clear_cache
  arm64ec___clzdi2 = 171, // #__clzdi2
  arm64ec___clzsi2 = 172, // #__clzsi2
  arm64ec___clzti2 = 173, // #__clzti2
  arm64ec___cxa_end_cleanup = 174, // #__cxa_end_cleanup
  arm64ec___divdf3 = 175, // #__divdf3
  arm64ec___divdi3 = 176, // #__divdi3
  arm64ec___divhi3 = 177, // #__divhi3
  arm64ec___divqi3 = 178, // #__divqi3
  arm64ec___divsf3 = 179, // #__divsf3
  arm64ec___divsi3 = 180, // #__divsi3
  arm64ec___divtf3 = 181, // #__divtf3
  arm64ec___divti3 = 182, // #__divti3
  arm64ec___eqdf2 = 183, // #__eqdf2
  arm64ec___eqsf2 = 184, // #__eqsf2
  arm64ec___eqtf2 = 185, // #__eqtf2
  arm64ec___exp2_finite = 186, // #__exp2_finite
  arm64ec___exp2f_finite = 187, // #__exp2f_finite
  arm64ec___exp2l_finite_f128 = 188, // #__exp2l_finite
  arm64ec___exp_finite = 189, // #__exp_finite
  arm64ec___expf_finite = 190, // #__expf_finite
  arm64ec___expl_finite_f128 = 191, // #__expl_finite
  arm64ec___extendbfsf2 = 192, // #__extendbfsf2
  arm64ec___extenddftf2 = 193, // #__extenddftf2
  arm64ec___extendhfdf2 = 194, // #__extendhfdf2
  arm64ec___extendhfsf2 = 195, // #__extendhfsf2
  arm64ec___extendhftf2 = 196, // #__extendhftf2
  arm64ec___extendsfdf2 = 197, // #__extendsfdf2
  arm64ec___extendsftf2 = 198, // #__extendsftf2
  arm64ec___fixdfdi = 199, // #__fixdfdi
  arm64ec___fixdfsi = 200, // #__fixdfsi
  arm64ec___fixdfti = 201, // #__fixdfti
  arm64ec___fixhfdi = 202, // #__fixhfdi
  arm64ec___fixhfsi = 203, // #__fixhfsi
  arm64ec___fixhfti = 204, // #__fixhfti
  arm64ec___fixsfdi = 205, // #__fixsfdi
  arm64ec___fixsfsi = 206, // #__fixsfsi
  arm64ec___fixsfti = 207, // #__fixsfti
  arm64ec___fixtfdi_f128 = 208, // #__fixtfdi
  arm64ec___fixtfsi = 209, // #__fixtfsi
  arm64ec___fixtfti_f128 = 210, // #__fixtfti
  arm64ec___fixunsdfdi = 211, // #__fixunsdfdi
  arm64ec___fixunsdfsi = 212, // #__fixunsdfsi
  arm64ec___fixunsdfti = 213, // #__fixunsdfti
  arm64ec___fixunshfdi = 214, // #__fixunshfdi
  arm64ec___fixunshfsi = 215, // #__fixunshfsi
  arm64ec___fixunshfti = 216, // #__fixunshfti
  arm64ec___fixunssfdi = 217, // #__fixunssfdi
  arm64ec___fixunssfsi = 218, // #__fixunssfsi
  arm64ec___fixunssfti = 219, // #__fixunssfti
  arm64ec___fixunstfdi_f128 = 220, // #__fixunstfdi
  arm64ec___fixunstfsi_f128 = 221, // #__fixunstfsi
  arm64ec___fixunstfti_f128 = 222, // #__fixunstfti
  arm64ec___floatdibf = 223, // #__floatdibf
  arm64ec___floatdidf = 224, // #__floatdidf
  arm64ec___floatdihf = 225, // #__floatdihf
  arm64ec___floatdisf = 226, // #__floatdisf
  arm64ec___floatditf_f128 = 227, // #__floatditf
  arm64ec___floatsidf = 228, // #__floatsidf
  arm64ec___floatsihf = 229, // #__floatsihf
  arm64ec___floatsisf = 230, // #__floatsisf
  arm64ec___floatsitf = 231, // #__floatsitf
  arm64ec___floattidf = 232, // #__floattidf
  arm64ec___floattihf = 233, // #__floattihf
  arm64ec___floattisf = 234, // #__floattisf
  arm64ec___floattitf_f128 = 235, // #__floattitf
  arm64ec___floatundibf = 236, // #__floatundibf
  arm64ec___floatundidf = 237, // #__floatundidf
  arm64ec___floatundihf = 238, // #__floatundihf
  arm64ec___floatundisf = 239, // #__floatundisf
  arm64ec___floatunditf_f128 = 240, // #__floatunditf
  arm64ec___floatunsidf = 241, // #__floatunsidf
  arm64ec___floatunsihf = 242, // #__floatunsihf
  arm64ec___floatunsisf = 243, // #__floatunsisf
  arm64ec___floatunsitf = 244, // #__floatunsitf
  arm64ec___floatuntidf = 245, // #__floatuntidf
  arm64ec___floatuntihf = 246, // #__floatuntihf
  arm64ec___floatuntisf = 247, // #__floatuntisf
  arm64ec___floatuntitf_f128 = 248, // #__floatuntitf
  arm64ec___gedf2 = 249, // #__gedf2
  arm64ec___gesf2 = 250, // #__gesf2
  arm64ec___getf2 = 251, // #__getf2
  arm64ec___gtdf2 = 252, // #__gtdf2
  arm64ec___gtsf2 = 253, // #__gtsf2
  arm64ec___gttf2 = 254, // #__gttf2
  arm64ec___ledf2 = 255, // #__ledf2
  arm64ec___lesf2 = 256, // #__lesf2
  arm64ec___letf2 = 257, // #__letf2
  arm64ec___llvm_deoptimize = 258, // #__llvm_deoptimize
  arm64ec___llvm_memcpy_element_unordered_atomic_1 = 259, // #__llvm_memcpy_element_unordered_atomic_1
  arm64ec___llvm_memcpy_element_unordered_atomic_16 = 260, // #__llvm_memcpy_element_unordered_atomic_16
  arm64ec___llvm_memcpy_element_unordered_atomic_2 = 261, // #__llvm_memcpy_element_unordered_atomic_2
  arm64ec___llvm_memcpy_element_unordered_atomic_4 = 262, // #__llvm_memcpy_element_unordered_atomic_4
  arm64ec___llvm_memcpy_element_unordered_atomic_8 = 263, // #__llvm_memcpy_element_unordered_atomic_8
  arm64ec___llvm_memmove_element_unordered_atomic_1 = 264, // #__llvm_memmove_element_unordered_atomic_1
  arm64ec___llvm_memmove_element_unordered_atomic_16 = 265, // #__llvm_memmove_element_unordered_atomic_16
  arm64ec___llvm_memmove_element_unordered_atomic_2 = 266, // #__llvm_memmove_element_unordered_atomic_2
  arm64ec___llvm_memmove_element_unordered_atomic_4 = 267, // #__llvm_memmove_element_unordered_atomic_4
  arm64ec___llvm_memmove_element_unordered_atomic_8 = 268, // #__llvm_memmove_element_unordered_atomic_8
  arm64ec___llvm_memset_element_unordered_atomic_1 = 269, // #__llvm_memset_element_unordered_atomic_1
  arm64ec___llvm_memset_element_unordered_atomic_16 = 270, // #__llvm_memset_element_unordered_atomic_16
  arm64ec___llvm_memset_element_unordered_atomic_2 = 271, // #__llvm_memset_element_unordered_atomic_2
  arm64ec___llvm_memset_element_unordered_atomic_4 = 272, // #__llvm_memset_element_unordered_atomic_4
  arm64ec___llvm_memset_element_unordered_atomic_8 = 273, // #__llvm_memset_element_unordered_atomic_8
  arm64ec___log10_finite = 274, // #__log10_finite
  arm64ec___log10f_finite = 275, // #__log10f_finite
  arm64ec___log10l_finite_f128 = 276, // #__log10l_finite
  arm64ec___log2_finite = 277, // #__log2_finite
  arm64ec___log2f_finite = 278, // #__log2f_finite
  arm64ec___log2l_finite_f128 = 279, // #__log2l_finite
  arm64ec___log_finite = 280, // #__log_finite
  arm64ec___logf_finite = 281, // #__logf_finite
  arm64ec___logl_finite_f128 = 282, // #__logl_finite
  arm64ec___lshrdi3 = 283, // #__lshrdi3
  arm64ec___lshrhi3 = 284, // #__lshrhi3
  arm64ec___lshrsi3 = 285, // #__lshrsi3
  arm64ec___lshrti3 = 286, // #__lshrti3
  arm64ec___ltdf2 = 287, // #__ltdf2
  arm64ec___ltsf2 = 288, // #__ltsf2
  arm64ec___lttf2 = 289, // #__lttf2
  arm64ec___moddi3 = 290, // #__moddi3
  arm64ec___modhi3 = 291, // #__modhi3
  arm64ec___modqi3 = 292, // #__modqi3
  arm64ec___modsi3 = 293, // #__modsi3
  arm64ec___modti3 = 294, // #__modti3
  arm64ec___muldf3 = 295, // #__muldf3
  arm64ec___muldi3 = 296, // #__muldi3
  arm64ec___mulhi3 = 297, // #__mulhi3
  arm64ec___mulosi4 = 298, // #__mulosi4
  arm64ec___mulqi3 = 299, // #__mulqi3
  arm64ec___mulsf3 = 300, // #__mulsf3
  arm64ec___mulsi3 = 301, // #__mulsi3
  arm64ec___multf3 = 302, // #__multf3
  arm64ec___multi3 = 303, // #__multi3
  arm64ec___nedf2 = 304, // #__nedf2
  arm64ec___negdi2 = 305, // #__negdi2
  arm64ec___negsi2 = 306, // #__negsi2
  arm64ec___nesf2 = 307, // #__nesf2
  arm64ec___netf2 = 308, // #__netf2
  arm64ec___popcountdi2 = 309, // #__popcountdi2
  arm64ec___popcountsi2 = 310, // #__popcountsi2
  arm64ec___popcountti2 = 311, // #__popcountti2
  arm64ec___pow_finite = 312, // #__pow_finite
  arm64ec___powf_finite = 313, // #__powf_finite
  arm64ec___powitf2_f128 = 314, // #__powitf2
  arm64ec___powl_finite_f128 = 315, // #__powl_finite
  arm64ec___safestack_pointer_address = 316, // #__safestack_pointer_address
  arm64ec___stack_chk_fail = 317, // #__stack_chk_fail
  arm64ec___subdf3 = 318, // #__subdf3
  arm64ec___subsf3 = 319, // #__subsf3
  arm64ec___subtf3 = 320, // #__subtf3
  arm64ec___sync_fetch_and_add_1 = 321, // #__sync_fetch_and_add_1
  arm64ec___sync_fetch_and_add_16 = 322, // #__sync_fetch_and_add_16
  arm64ec___sync_fetch_and_add_2 = 323, // #__sync_fetch_and_add_2
  arm64ec___sync_fetch_and_add_4 = 324, // #__sync_fetch_and_add_4
  arm64ec___sync_fetch_and_add_8 = 325, // #__sync_fetch_and_add_8
  arm64ec___sync_fetch_and_and_1 = 326, // #__sync_fetch_and_and_1
  arm64ec___sync_fetch_and_and_16 = 327, // #__sync_fetch_and_and_16
  arm64ec___sync_fetch_and_and_2 = 328, // #__sync_fetch_and_and_2
  arm64ec___sync_fetch_and_and_4 = 329, // #__sync_fetch_and_and_4
  arm64ec___sync_fetch_and_and_8 = 330, // #__sync_fetch_and_and_8
  arm64ec___sync_fetch_and_max_1 = 331, // #__sync_fetch_and_max_1
  arm64ec___sync_fetch_and_max_16 = 332, // #__sync_fetch_and_max_16
  arm64ec___sync_fetch_and_max_2 = 333, // #__sync_fetch_and_max_2
  arm64ec___sync_fetch_and_max_4 = 334, // #__sync_fetch_and_max_4
  arm64ec___sync_fetch_and_max_8 = 335, // #__sync_fetch_and_max_8
  arm64ec___sync_fetch_and_min_1 = 336, // #__sync_fetch_and_min_1
  arm64ec___sync_fetch_and_min_16 = 337, // #__sync_fetch_and_min_16
  arm64ec___sync_fetch_and_min_2 = 338, // #__sync_fetch_and_min_2
  arm64ec___sync_fetch_and_min_4 = 339, // #__sync_fetch_and_min_4
  arm64ec___sync_fetch_and_min_8 = 340, // #__sync_fetch_and_min_8
  arm64ec___sync_fetch_and_nand_1 = 341, // #__sync_fetch_and_nand_1
  arm64ec___sync_fetch_and_nand_16 = 342, // #__sync_fetch_and_nand_16
  arm64ec___sync_fetch_and_nand_2 = 343, // #__sync_fetch_and_nand_2
  arm64ec___sync_fetch_and_nand_4 = 344, // #__sync_fetch_and_nand_4
  arm64ec___sync_fetch_and_nand_8 = 345, // #__sync_fetch_and_nand_8
  arm64ec___sync_fetch_and_or_1 = 346, // #__sync_fetch_and_or_1
  arm64ec___sync_fetch_and_or_16 = 347, // #__sync_fetch_and_or_16
  arm64ec___sync_fetch_and_or_2 = 348, // #__sync_fetch_and_or_2
  arm64ec___sync_fetch_and_or_4 = 349, // #__sync_fetch_and_or_4
  arm64ec___sync_fetch_and_or_8 = 350, // #__sync_fetch_and_or_8
  arm64ec___sync_fetch_and_sub_1 = 351, // #__sync_fetch_and_sub_1
  arm64ec___sync_fetch_and_sub_16 = 352, // #__sync_fetch_and_sub_16
  arm64ec___sync_fetch_and_sub_2 = 353, // #__sync_fetch_and_sub_2
  arm64ec___sync_fetch_and_sub_4 = 354, // #__sync_fetch_and_sub_4
  arm64ec___sync_fetch_and_sub_8 = 355, // #__sync_fetch_and_sub_8
  arm64ec___sync_fetch_and_umax_1 = 356, // #__sync_fetch_and_umax_1
  arm64ec___sync_fetch_and_umax_16 = 357, // #__sync_fetch_and_umax_16
  arm64ec___sync_fetch_and_umax_2 = 358, // #__sync_fetch_and_umax_2
  arm64ec___sync_fetch_and_umax_4 = 359, // #__sync_fetch_and_umax_4
  arm64ec___sync_fetch_and_umax_8 = 360, // #__sync_fetch_and_umax_8
  arm64ec___sync_fetch_and_umin_1 = 361, // #__sync_fetch_and_umin_1
  arm64ec___sync_fetch_and_umin_16 = 362, // #__sync_fetch_and_umin_16
  arm64ec___sync_fetch_and_umin_2 = 363, // #__sync_fetch_and_umin_2
  arm64ec___sync_fetch_and_umin_4 = 364, // #__sync_fetch_and_umin_4
  arm64ec___sync_fetch_and_umin_8 = 365, // #__sync_fetch_and_umin_8
  arm64ec___sync_fetch_and_xor_1 = 366, // #__sync_fetch_and_xor_1
  arm64ec___sync_fetch_and_xor_16 = 367, // #__sync_fetch_and_xor_16
  arm64ec___sync_fetch_and_xor_2 = 368, // #__sync_fetch_and_xor_2
  arm64ec___sync_fetch_and_xor_4 = 369, // #__sync_fetch_and_xor_4
  arm64ec___sync_fetch_and_xor_8 = 370, // #__sync_fetch_and_xor_8
  arm64ec___sync_lock_test_and_set_1 = 371, // #__sync_lock_test_and_set_1
  arm64ec___sync_lock_test_and_set_16 = 372, // #__sync_lock_test_and_set_16
  arm64ec___sync_lock_test_and_set_2 = 373, // #__sync_lock_test_and_set_2
  arm64ec___sync_lock_test_and_set_4 = 374, // #__sync_lock_test_and_set_4
  arm64ec___sync_lock_test_and_set_8 = 375, // #__sync_lock_test_and_set_8
  arm64ec___sync_val_compare_and_swap_1 = 376, // #__sync_val_compare_and_swap_1
  arm64ec___sync_val_compare_and_swap_16 = 377, // #__sync_val_compare_and_swap_16
  arm64ec___sync_val_compare_and_swap_2 = 378, // #__sync_val_compare_and_swap_2
  arm64ec___sync_val_compare_and_swap_4 = 379, // #__sync_val_compare_and_swap_4
  arm64ec___sync_val_compare_and_swap_8 = 380, // #__sync_val_compare_and_swap_8
  arm64ec___truncdfbf2 = 381, // #__truncdfbf2
  arm64ec___truncdfhf2 = 382, // #__truncdfhf2
  arm64ec___truncdfsf2 = 383, // #__truncdfsf2
  arm64ec___truncsfbf2 = 384, // #__truncsfbf2
  arm64ec___truncsfhf2 = 385, // #__truncsfhf2
  arm64ec___trunctfbf2 = 386, // #__trunctfbf2
  arm64ec___trunctfdf2 = 387, // #__trunctfdf2
  arm64ec___trunctfhf2_f128 = 388, // #__trunctfhf2
  arm64ec___trunctfsf2 = 389, // #__trunctfsf2
  arm64ec___udivdi3 = 390, // #__udivdi3
  arm64ec___udivhi3 = 391, // #__udivhi3
  arm64ec___udivqi3 = 392, // #__udivqi3
  arm64ec___udivsi3 = 393, // #__udivsi3
  arm64ec___udivti3 = 394, // #__udivti3
  arm64ec___umoddi3 = 395, // #__umoddi3
  arm64ec___umodhi3 = 396, // #__umodhi3
  arm64ec___umodqi3 = 397, // #__umodqi3
  arm64ec___umodsi3 = 398, // #__umodsi3
  arm64ec___umodti3 = 399, // #__umodti3
  arm64ec___unorddf2 = 400, // #__unorddf2
  arm64ec___unordsf2 = 401, // #__unordsf2
  arm64ec___unordtf2 = 402, // #__unordtf2
  arm64ec_acos = 403, // #acos
  arm64ec_acosf = 404, // #acosf
  arm64ec_acos_f128 = 405, // #acosl
  arm64ec_asin = 406, // #asin
  arm64ec_asinf = 407, // #asinf
  arm64ec_asin_f128 = 408, // #asinl
  arm64ec_atan = 409, // #atan
  arm64ec_atan2 = 410, // #atan2
  arm64ec_atan2f = 411, // #atan2f
  arm64ec_atan2_f128 = 412, // #atan2l
  arm64ec_atanf = 413, // #atanf
  arm64ec_atan_f128 = 414, // #atanl
  arm64ec_calloc = 415, // #calloc
  arm64ec_cbrt = 416, // #cbrt
  arm64ec_cbrtf = 417, // #cbrtf
  arm64ec_cbrt_f128 = 418, // #cbrtl
  arm64ec_ceil = 419, // #ceil
  arm64ec_ceilf = 420, // #ceilf
  arm64ec_ceil_f128 = 421, // #ceill
  arm64ec_copysign = 422, // #copysign
  arm64ec_copysignf = 423, // #copysignf
  arm64ec_copysign_f128 = 424, // #copysignl
  arm64ec_cos = 425, // #cos
  arm64ec_cosf = 426, // #cosf
  arm64ec_cosh = 427, // #cosh
  arm64ec_coshf = 428, // #coshf
  arm64ec_cosh_f128 = 429, // #coshl
  arm64ec_cos_f128 = 430, // #cosl
  arm64ec_exp = 431, // #exp
  arm64ec_exp10 = 432, // #exp10
  arm64ec_exp10f = 433, // #exp10f
  arm64ec_exp10l_f128 = 434, // #exp10l
  arm64ec_exp2 = 435, // #exp2
  arm64ec_exp2f = 436, // #exp2f
  arm64ec_exp2_f128 = 437, // #exp2l
  arm64ec_expf = 438, // #expf
  arm64ec_exp_f128 = 439, // #expl
  arm64ec_fegetenv = 440, // #fegetenv
  arm64ec_fegetmode = 441, // #fegetmode
  arm64ec_fesetenv = 442, // #fesetenv
  arm64ec_fesetmode = 443, // #fesetmode
  arm64ec_floor = 444, // #floor
  arm64ec_floorf = 445, // #floorf
  arm64ec_floor_f128 = 446, // #floorl
  arm64ec_fma = 447, // #fma
  arm64ec_fmaf = 448, // #fmaf
  arm64ec_fma_f128 = 449, // #fmal
  arm64ec_fmax = 450, // #fmax
  arm64ec_fmaxf = 451, // #fmaxf
  arm64ec_fmaximum = 452, // #fmaximum
  arm64ec_fmaximum_num = 453, // #fmaximum_num
  arm64ec_fmaximum_numf = 454, // #fmaximum_numf
  arm64ec_fmaximum_num_f128 = 455, // #fmaximum_numl
  arm64ec_fmaximumf = 456, // #fmaximumf
  arm64ec_fmaximum_f128 = 457, // #fmaximuml
  arm64ec_fmax_f128 = 458, // #fmaxl
  arm64ec_fmin = 459, // #fmin
  arm64ec_fminf = 460, // #fminf
  arm64ec_fminimum = 461, // #fminimum
  arm64ec_fminimum_num = 462, // #fminimum_num
  arm64ec_fminimum_numf = 463, // #fminimum_numf
  arm64ec_fminimum_num_f128 = 464, // #fminimum_numl
  arm64ec_fminimumf = 465, // #fminimumf
  arm64ec_fminimum_f128 = 466, // #fminimuml
  arm64ec_fmin_f128 = 467, // #fminl
  arm64ec_fmod = 468, // #fmod
  arm64ec_fmodf = 469, // #fmodf
  arm64ec_fmodl_f128 = 470, // #fmodl
  arm64ec_frexp = 471, // #frexp
  arm64ec_ldexp = 472, // #ldexp
  arm64ec_llrint = 473, // #llrint
  arm64ec_llrintf = 474, // #llrintf
  arm64ec_llrint_f128 = 475, // #llrintl
  arm64ec_llround = 476, // #llround
  arm64ec_llroundf = 477, // #llroundf
  arm64ec_llround_f128 = 478, // #llroundl
  arm64ec_log = 479, // #log
  arm64ec_log10 = 480, // #log10
  arm64ec_log10f = 481, // #log10f
  arm64ec_log10_f128 = 482, // #log10l
  arm64ec_log2 = 483, // #log2
  arm64ec_log2f = 484, // #log2f
  arm64ec_log2_f128 = 485, // #log2l
  arm64ec_logf = 486, // #logf
  arm64ec_log_f128 = 487, // #logl
  arm64ec_lrint = 488, // #lrint
  arm64ec_lrintf = 489, // #lrintf
  arm64ec_lrint_f128 = 490, // #lrintl
  arm64ec_lround = 491, // #lround
  arm64ec_lroundf = 492, // #lroundf
  arm64ec_lround_f128 = 493, // #lroundl
  arm64ec_memcpy = 494, // #memcpy
  arm64ec_memmove = 495, // #memmove
  arm64ec_memset = 496, // #memset
  arm64ec_modf = 497, // #modf
  arm64ec_modff = 498, // #modff
  arm64ec_modf_f128 = 499, // #modfl
  arm64ec_nearbyint = 500, // #nearbyint
  arm64ec_nearbyintf = 501, // #nearbyintf
  arm64ec_nearbyint_f128 = 502, // #nearbyintl
  arm64ec_pow = 503, // #pow
  arm64ec_powf = 504, // #powf
  arm64ec_pow_f128 = 505, // #powl
  arm64ec_rint = 506, // #rint
  arm64ec_rintf = 507, // #rintf
  arm64ec_rint_f128 = 508, // #rintl
  arm64ec_round = 509, // #round
  arm64ec_roundeven = 510, // #roundeven
  arm64ec_roundevenf = 511, // #roundevenf
  arm64ec_roundeven_f128 = 512, // #roundevenl
  arm64ec_roundf = 513, // #roundf
  arm64ec_round_f128 = 514, // #roundl
  arm64ec_sin = 515, // #sin
  arm64ec_sincospi = 516, // #sincospi
  arm64ec_sincospif = 517, // #sincospif
  arm64ec_sincospi_f128 = 518, // #sincospil
  arm64ec_sinf = 519, // #sinf
  arm64ec_sinh = 520, // #sinh
  arm64ec_sinhf = 521, // #sinhf
  arm64ec_sinh_f128 = 522, // #sinhl
  arm64ec_sin_f128 = 523, // #sinl
  arm64ec_sqrt = 524, // #sqrt
  arm64ec_sqrtf = 525, // #sqrtf
  arm64ec_sqrt_f128 = 526, // #sqrtl
  arm64ec_tan = 527, // #tan
  arm64ec_tanf = 528, // #tanf
  arm64ec_tanh = 529, // #tanh
  arm64ec_tanhf = 530, // #tanhf
  arm64ec_tanh_f128 = 531, // #tanhl
  arm64ec_tan_f128 = 532, // #tanl
  arm64ec_trunc = 533, // #trunc
  arm64ec_truncf = 534, // #truncf
  arm64ec_trunc_f128 = 535, // #truncl
  sparc_div = 536, // .div
  sparc_rem = 537, // .rem
  sparc_udiv = 538, // .udiv
  sparc_umul = 539, // .umul
  sparc_urem = 540, // .urem
  zos___DCPY_B = 541, // @@DCPY@B
  zos___EXP2_B = 542, // @@EXP2@B
  zos___FCBT_B = 543, // @@FCBT@B
  zos___FCEL_B = 544, // @@FCEL@B
  zos___FCOS_B = 545, // @@FCOS@B
  zos___FCPY_B = 546, // @@FCPY@B
  zos___FEXP_B = 547, // @@FEXP@B
  zos___FFLR_B = 548, // @@FFLR@B
  zos___FFMD_B = 549, // @@FFMD@B
  zos___FFXP_B = 550, // @@FFXP@B
  zos___FLG1_B = 551, // @@FLG1@B
  zos___FLG2_B = 552, // @@FLG2@B
  zos___FLOG_B = 553, // @@FLOG@B
  zos___FLXP_B = 554, // @@FLXP@B
  zos___FMA_B = 555, // @@FMA@B
  zos___FMAFB = 556, // @@FMAFB
  zos___FMALB = 557, // @@FMALB
  zos___FMAX_B = 558, // @@FMAX@B
  zos___FMAXFB = 559, // @@FMAXFB
  zos___FMAXLB = 560, // @@FMAXLB
  zos___FMIN_B = 561, // @@FMIN@B
  zos___FMINFB = 562, // @@FMINFB
  zos___FMINLB = 563, // @@FMINLB
  zos___FPOW_B = 564, // @@FPOW@B
  zos___FRND_B = 565, // @@FRND@B
  zos___FSIN_B = 566, // @@FSIN@B
  zos___FSQT_B = 567, // @@FSQT@B
  zos___FTRC_B = 568, // @@FTRC@B
  zos___FXP2_B = 569, // @@FXP2@B
  zos___LCBT_B = 570, // @@LCBT@B
  zos___LCEL_B = 571, // @@LCEL@B
  zos___LCOS_B = 572, // @@LCOS@B
  zos___LCPY_B = 573, // @@LCPY@B
  zos___LEXP_B = 574, // @@LEXP@B
  zos___LFLR_B = 575, // @@LFLR@B
  zos___LFMD_B = 576, // @@LFMD@B
  zos___LFXP_B = 577, // @@LFXP@B
  zos___LLG1_B = 578, // @@LLG1@B
  zos___LLG2_B = 579, // @@LLG2@B
  zos___LLOG_B = 580, // @@LLOG@B
  zos___LLRD_B = 581, // @@LLRD@B
  zos___LLRDFB = 582, // @@LLRDFB
  zos___LLRDLB = 583, // @@LLRDLB
  zos___LLRT_B = 584, // @@LLRT@B
  zos___LLRTFB = 585, // @@LLRTFB
  zos___LLRTLB = 586, // @@LLRTLB
  zos___LLXP_B = 587, // @@LLXP@B
  zos___LOG2_B = 588, // @@LOG2@B
  zos___LPOW_B = 589, // @@LPOW@B
  zos___LRND_B = 590, // @@LRND@B
  zos___LRNT_B = 591, // @@LRNT@B
  zos___LRNTFB = 592, // @@LRNTFB
  zos___LRNTLB = 593, // @@LRNTLB
  zos___LSIN_B = 594, // @@LSIN@B
  zos___LSQT_B = 595, // @@LSQT@B
  zos___LTRC_B = 596, // @@LTRC@B
  zos___LXP2_B = 597, // @@LXP2@B
  zos___NBYI_B = 598, // @@NBYI@B
  zos___NBYIFB = 599, // @@NBYIFB
  zos___NBYILB = 600, // @@NBYILB
  zos___RINTFB = 601, // @@RINTFB
  zos___RINTLB = 602, // @@RINTLB
  zos___ROND_B = 603, // @@ROND@B
  zos___ROUN_B = 604, // @@ROUN@B
  zos___ROUNFB = 605, // @@ROUNFB
  zos___ROUNLB = 606, // @@ROUNLB
  zos___SCEL_B = 607, // @@SCEL@B
  zos___SCOS_B = 608, // @@SCOS@B
  zos___SCRT_B = 609, // @@SCRT@B
  zos___SFLR_B = 610, // @@SFLR@B
  zos___SFXP_B = 611, // @@SFXP@B
  zos___SLXP_B = 612, // @@SLXP@B
  zos___SRNT_B = 613, // @@SRNT@B
  zos___SSIN_B = 614, // @@SSIN@B
  zos___TRNC_B = 615, // @@TRNC@B
  zos___WEXP_B = 616, // @@WEXP@B
  zos___WFMD_B = 617, // @@WFMD@B
  zos___WLG1_B = 618, // @@WLG1@B
  zos___WLOG_B = 619, // @@WLOG@B
  zos___WPOW_B = 620, // @@WPOW@B
  zos___WSQT_B = 621, // @@WSQT@B
  _Q_add = 622, // _Q_add
  _Q_div = 623, // _Q_div
  _Q_dtoq = 624, // _Q_dtoq
  _Q_itoq = 625, // _Q_itoq
  _Q_lltoq = 626, // _Q_lltoq
  _Q_mul = 627, // _Q_mul
  _Q_qtod = 628, // _Q_qtod
  _Q_qtoi = 629, // _Q_qtoi
  _Q_qtoll = 630, // _Q_qtoll
  _Q_qtos = 631, // _Q_qtos
  _Q_qtou = 632, // _Q_qtou
  _Q_qtoull = 633, // _Q_qtoull
  _Q_sqrt = 634, // _Q_sqrt
  _Q_stoq = 635, // _Q_stoq
  _Q_sub = 636, // _Q_sub
  _Q_ulltoq = 637, // _Q_ulltoq
  _Q_utoq = 638, // _Q_utoq
  _Qp_add = 639, // _Qp_add
  _Qp_div = 640, // _Qp_div
  _Qp_dtoq = 641, // _Qp_dtoq
  _Qp_itoq = 642, // _Qp_itoq
  _Qp_mul = 643, // _Qp_mul
  _Qp_qtod = 644, // _Qp_qtod
  _Qp_qtoi = 645, // _Qp_qtoi
  _Qp_qtos = 646, // _Qp_qtos
  _Qp_qtoui = 647, // _Qp_qtoui
  _Qp_qtoux = 648, // _Qp_qtoux
  _Qp_qtox = 649, // _Qp_qtox
  _Qp_sqrt = 650, // _Qp_sqrt
  _Qp_stoq = 651, // _Qp_stoq
  _Qp_sub = 652, // _Qp_sub
  _Qp_uitoq = 653, // _Qp_uitoq
  _Qp_uxtoq = 654, // _Qp_uxtoq
  _Qp_xtoq = 655, // _Qp_xtoq
  _Unwind_CallPersonality = 656, // _Unwind_CallPersonality
  _Unwind_Resume = 657, // _Unwind_Resume
  _Unwind_SjLj_Register = 658, // _Unwind_SjLj_Register
  _Unwind_SjLj_Resume = 659, // _Unwind_SjLj_Resume
  _Unwind_SjLj_Unregister = 660, // _Unwind_SjLj_Unregister
  ___bzero = 661, // ___bzero
  ___bzero64 = 662, // ___bzero64
  ___memmove = 663, // ___memmove
  ___memmove64 = 664, // ___memmove64
  ___memset = 665, // ___memset
  ___memset64 = 666, // ___memset64
  __aarch64_cas16_acq = 667, // __aarch64_cas16_acq
  __aarch64_cas16_acq_rel = 668, // __aarch64_cas16_acq_rel
  __aarch64_cas16_rel = 669, // __aarch64_cas16_rel
  __aarch64_cas16_relax = 670, // __aarch64_cas16_relax
  __aarch64_cas1_acq = 671, // __aarch64_cas1_acq
  __aarch64_cas1_acq_rel = 672, // __aarch64_cas1_acq_rel
  __aarch64_cas1_rel = 673, // __aarch64_cas1_rel
  __aarch64_cas1_relax = 674, // __aarch64_cas1_relax
  __aarch64_cas2_acq = 675, // __aarch64_cas2_acq
  __aarch64_cas2_acq_rel = 676, // __aarch64_cas2_acq_rel
  __aarch64_cas2_rel = 677, // __aarch64_cas2_rel
  __aarch64_cas2_relax = 678, // __aarch64_cas2_relax
  __aarch64_cas4_acq = 679, // __aarch64_cas4_acq
  __aarch64_cas4_acq_rel = 680, // __aarch64_cas4_acq_rel
  __aarch64_cas4_rel = 681, // __aarch64_cas4_rel
  __aarch64_cas4_relax = 682, // __aarch64_cas4_relax
  __aarch64_cas8_acq = 683, // __aarch64_cas8_acq
  __aarch64_cas8_acq_rel = 684, // __aarch64_cas8_acq_rel
  __aarch64_cas8_rel = 685, // __aarch64_cas8_rel
  __aarch64_cas8_relax = 686, // __aarch64_cas8_relax
  __aarch64_ldadd1_acq = 687, // __aarch64_ldadd1_acq
  __aarch64_ldadd1_acq_rel = 688, // __aarch64_ldadd1_acq_rel
  __aarch64_ldadd1_rel = 689, // __aarch64_ldadd1_rel
  __aarch64_ldadd1_relax = 690, // __aarch64_ldadd1_relax
  __aarch64_ldadd2_acq = 691, // __aarch64_ldadd2_acq
  __aarch64_ldadd2_acq_rel = 692, // __aarch64_ldadd2_acq_rel
  __aarch64_ldadd2_rel = 693, // __aarch64_ldadd2_rel
  __aarch64_ldadd2_relax = 694, // __aarch64_ldadd2_relax
  __aarch64_ldadd4_acq = 695, // __aarch64_ldadd4_acq
  __aarch64_ldadd4_acq_rel = 696, // __aarch64_ldadd4_acq_rel
  __aarch64_ldadd4_rel = 697, // __aarch64_ldadd4_rel
  __aarch64_ldadd4_relax = 698, // __aarch64_ldadd4_relax
  __aarch64_ldadd8_acq = 699, // __aarch64_ldadd8_acq
  __aarch64_ldadd8_acq_rel = 700, // __aarch64_ldadd8_acq_rel
  __aarch64_ldadd8_rel = 701, // __aarch64_ldadd8_rel
  __aarch64_ldadd8_relax = 702, // __aarch64_ldadd8_relax
  __aarch64_ldclr1_acq = 703, // __aarch64_ldclr1_acq
  __aarch64_ldclr1_acq_rel = 704, // __aarch64_ldclr1_acq_rel
  __aarch64_ldclr1_rel = 705, // __aarch64_ldclr1_rel
  __aarch64_ldclr1_relax = 706, // __aarch64_ldclr1_relax
  __aarch64_ldclr2_acq = 707, // __aarch64_ldclr2_acq
  __aarch64_ldclr2_acq_rel = 708, // __aarch64_ldclr2_acq_rel
  __aarch64_ldclr2_rel = 709, // __aarch64_ldclr2_rel
  __aarch64_ldclr2_relax = 710, // __aarch64_ldclr2_relax
  __aarch64_ldclr4_acq = 711, // __aarch64_ldclr4_acq
  __aarch64_ldclr4_acq_rel = 712, // __aarch64_ldclr4_acq_rel
  __aarch64_ldclr4_rel = 713, // __aarch64_ldclr4_rel
  __aarch64_ldclr4_relax = 714, // __aarch64_ldclr4_relax
  __aarch64_ldclr8_acq = 715, // __aarch64_ldclr8_acq
  __aarch64_ldclr8_acq_rel = 716, // __aarch64_ldclr8_acq_rel
  __aarch64_ldclr8_rel = 717, // __aarch64_ldclr8_rel
  __aarch64_ldclr8_relax = 718, // __aarch64_ldclr8_relax
  __aarch64_ldeor1_acq = 719, // __aarch64_ldeor1_acq
  __aarch64_ldeor1_acq_rel = 720, // __aarch64_ldeor1_acq_rel
  __aarch64_ldeor1_rel = 721, // __aarch64_ldeor1_rel
  __aarch64_ldeor1_relax = 722, // __aarch64_ldeor1_relax
  __aarch64_ldeor2_acq = 723, // __aarch64_ldeor2_acq
  __aarch64_ldeor2_acq_rel = 724, // __aarch64_ldeor2_acq_rel
  __aarch64_ldeor2_rel = 725, // __aarch64_ldeor2_rel
  __aarch64_ldeor2_relax = 726, // __aarch64_ldeor2_relax
  __aarch64_ldeor4_acq = 727, // __aarch64_ldeor4_acq
  __aarch64_ldeor4_acq_rel = 728, // __aarch64_ldeor4_acq_rel
  __aarch64_ldeor4_rel = 729, // __aarch64_ldeor4_rel
  __aarch64_ldeor4_relax = 730, // __aarch64_ldeor4_relax
  __aarch64_ldeor8_acq = 731, // __aarch64_ldeor8_acq
  __aarch64_ldeor8_acq_rel = 732, // __aarch64_ldeor8_acq_rel
  __aarch64_ldeor8_rel = 733, // __aarch64_ldeor8_rel
  __aarch64_ldeor8_relax = 734, // __aarch64_ldeor8_relax
  __aarch64_ldset1_acq = 735, // __aarch64_ldset1_acq
  __aarch64_ldset1_acq_rel = 736, // __aarch64_ldset1_acq_rel
  __aarch64_ldset1_rel = 737, // __aarch64_ldset1_rel
  __aarch64_ldset1_relax = 738, // __aarch64_ldset1_relax
  __aarch64_ldset2_acq = 739, // __aarch64_ldset2_acq
  __aarch64_ldset2_acq_rel = 740, // __aarch64_ldset2_acq_rel
  __aarch64_ldset2_rel = 741, // __aarch64_ldset2_rel
  __aarch64_ldset2_relax = 742, // __aarch64_ldset2_relax
  __aarch64_ldset4_acq = 743, // __aarch64_ldset4_acq
  __aarch64_ldset4_acq_rel = 744, // __aarch64_ldset4_acq_rel
  __aarch64_ldset4_rel = 745, // __aarch64_ldset4_rel
  __aarch64_ldset4_relax = 746, // __aarch64_ldset4_relax
  __aarch64_ldset8_acq = 747, // __aarch64_ldset8_acq
  __aarch64_ldset8_acq_rel = 748, // __aarch64_ldset8_acq_rel
  __aarch64_ldset8_rel = 749, // __aarch64_ldset8_rel
  __aarch64_ldset8_relax = 750, // __aarch64_ldset8_relax
  __aarch64_swp1_acq = 751, // __aarch64_swp1_acq
  __aarch64_swp1_acq_rel = 752, // __aarch64_swp1_acq_rel
  __aarch64_swp1_rel = 753, // __aarch64_swp1_rel
  __aarch64_swp1_relax = 754, // __aarch64_swp1_relax
  __aarch64_swp2_acq = 755, // __aarch64_swp2_acq
  __aarch64_swp2_acq_rel = 756, // __aarch64_swp2_acq_rel
  __aarch64_swp2_rel = 757, // __aarch64_swp2_rel
  __aarch64_swp2_relax = 758, // __aarch64_swp2_relax
  __aarch64_swp4_acq = 759, // __aarch64_swp4_acq
  __aarch64_swp4_acq_rel = 760, // __aarch64_swp4_acq_rel
  __aarch64_swp4_rel = 761, // __aarch64_swp4_rel
  __aarch64_swp4_relax = 762, // __aarch64_swp4_relax
  __aarch64_swp8_acq = 763, // __aarch64_swp8_acq
  __aarch64_swp8_acq_rel = 764, // __aarch64_swp8_acq_rel
  __aarch64_swp8_rel = 765, // __aarch64_swp8_rel
  __aarch64_swp8_relax = 766, // __aarch64_swp8_relax
  __adddf3 = 767, // __adddf3
  __adddf3vfp = 768, // __adddf3vfp
  __addkf3 = 769, // __addkf3
  __addsf3 = 770, // __addsf3
  __addsf3vfp = 771, // __addsf3vfp
  __addtf3 = 772, // __addtf3
  __addxf3 = 773, // __addxf3
  __aeabi_d2f = 774, // __aeabi_d2f
  __aeabi_d2h = 775, // __aeabi_d2h
  __aeabi_d2iz = 776, // __aeabi_d2iz
  __aeabi_d2lz = 777, // __aeabi_d2lz
  __aeabi_d2uiz = 778, // __aeabi_d2uiz
  __aeabi_d2ulz = 779, // __aeabi_d2ulz
  __aeabi_dadd = 780, // __aeabi_dadd
  __aeabi_dcmpeq__oeq = 781, // __aeabi_dcmpeq
  __aeabi_dcmpeq__une = 782, // __aeabi_dcmpeq
  __aeabi_dcmpge = 783, // __aeabi_dcmpge
  __aeabi_dcmpgt = 784, // __aeabi_dcmpgt
  __aeabi_dcmple = 785, // __aeabi_dcmple
  __aeabi_dcmplt = 786, // __aeabi_dcmplt
  __aeabi_dcmpun = 787, // __aeabi_dcmpun
  __aeabi_ddiv = 788, // __aeabi_ddiv
  __aeabi_dmul = 789, // __aeabi_dmul
  __aeabi_dsub = 790, // __aeabi_dsub
  __aeabi_f2d = 791, // __aeabi_f2d
  __aeabi_f2h = 792, // __aeabi_f2h
  __aeabi_f2iz = 793, // __aeabi_f2iz
  __aeabi_f2lz = 794, // __aeabi_f2lz
  __aeabi_f2uiz = 795, // __aeabi_f2uiz
  __aeabi_f2ulz = 796, // __aeabi_f2ulz
  __aeabi_fadd = 797, // __aeabi_fadd
  __aeabi_fcmpeq__oeq = 798, // __aeabi_fcmpeq
  __aeabi_fcmpeq__une = 799, // __aeabi_fcmpeq
  __aeabi_fcmpge = 800, // __aeabi_fcmpge
  __aeabi_fcmpgt = 801, // __aeabi_fcmpgt
  __aeabi_fcmple = 802, // __aeabi_fcmple
  __aeabi_fcmplt = 803, // __aeabi_fcmplt
  __aeabi_fcmpun = 804, // __aeabi_fcmpun
  __aeabi_fdiv = 805, // __aeabi_fdiv
  __aeabi_fmul = 806, // __aeabi_fmul
  __aeabi_fsub = 807, // __aeabi_fsub
  __aeabi_h2f = 808, // __aeabi_h2f
  __aeabi_i2d = 809, // __aeabi_i2d
  __aeabi_i2f = 810, // __aeabi_i2f
  __aeabi_idiv__i16 = 811, // __aeabi_idiv
  __aeabi_idiv__i32 = 812, // __aeabi_idiv
  __aeabi_idiv__i8 = 813, // __aeabi_idiv
  __aeabi_idivmod = 814, // __aeabi_idivmod
  __aeabi_l2d = 815, // __aeabi_l2d
  __aeabi_l2f = 816, // __aeabi_l2f
  __aeabi_lasr = 817, // __aeabi_lasr
  __aeabi_ldivmod = 818, // __aeabi_ldivmod
  __aeabi_llsl = 819, // __aeabi_llsl
  __aeabi_llsr = 820, // __aeabi_llsr
  __aeabi_lmul = 821, // __aeabi_lmul
  __aeabi_memclr = 822, // __aeabi_memclr
  __aeabi_memclr4 = 823, // __aeabi_memclr4
  __aeabi_memclr8 = 824, // __aeabi_memclr8
  __aeabi_memcpy = 825, // __aeabi_memcpy
  __aeabi_memcpy4 = 826, // __aeabi_memcpy4
  __aeabi_memcpy8 = 827, // __aeabi_memcpy8
  __aeabi_memmove = 828, // __aeabi_memmove
  __aeabi_memmove4 = 829, // __aeabi_memmove4
  __aeabi_memmove8 = 830, // __aeabi_memmove8
  __aeabi_memset = 831, // __aeabi_memset
  __aeabi_memset4 = 832, // __aeabi_memset4
  __aeabi_memset8 = 833, // __aeabi_memset8
  __aeabi_ui2d = 834, // __aeabi_ui2d
  __aeabi_ui2f = 835, // __aeabi_ui2f
  __aeabi_uidiv__i16 = 836, // __aeabi_uidiv
  __aeabi_uidiv__i32 = 837, // __aeabi_uidiv
  __aeabi_uidiv__i8 = 838, // __aeabi_uidiv
  __aeabi_uidivmod = 839, // __aeabi_uidivmod
  __aeabi_ul2d = 840, // __aeabi_ul2d
  __aeabi_ul2f = 841, // __aeabi_ul2f
  __aeabi_uldivmod = 842, // __aeabi_uldivmod
  __arm_sc_memcpy = 843, // __arm_sc_memcpy
  __arm_sc_memmove = 844, // __arm_sc_memmove
  __arm_sc_memset = 845, // __arm_sc_memset
  __ashldi3 = 846, // __ashldi3
  __ashlhi3 = 847, // __ashlhi3
  __ashlsi3 = 848, // __ashlsi3
  __ashlti3 = 849, // __ashlti3
  __ashrdi3 = 850, // __ashrdi3
  __ashrhi3 = 851, // __ashrhi3
  __ashrsi3 = 852, // __ashrsi3
  __ashrti3 = 853, // __ashrti3
  __atomic_compare_exchange = 854, // __atomic_compare_exchange
  __atomic_compare_exchange_1 = 855, // __atomic_compare_exchange_1
  __atomic_compare_exchange_16 = 856, // __atomic_compare_exchange_16
  __atomic_compare_exchange_2 = 857, // __atomic_compare_exchange_2
  __atomic_compare_exchange_4 = 858, // __atomic_compare_exchange_4
  __atomic_compare_exchange_8 = 859, // __atomic_compare_exchange_8
  __atomic_exchange = 860, // __atomic_exchange
  __atomic_exchange_1 = 861, // __atomic_exchange_1
  __atomic_exchange_16 = 862, // __atomic_exchange_16
  __atomic_exchange_2 = 863, // __atomic_exchange_2
  __atomic_exchange_4 = 864, // __atomic_exchange_4
  __atomic_exchange_8 = 865, // __atomic_exchange_8
  __atomic_fetch_add_1 = 866, // __atomic_fetch_add_1
  __atomic_fetch_add_16 = 867, // __atomic_fetch_add_16
  __atomic_fetch_add_2 = 868, // __atomic_fetch_add_2
  __atomic_fetch_add_4 = 869, // __atomic_fetch_add_4
  __atomic_fetch_add_8 = 870, // __atomic_fetch_add_8
  __atomic_fetch_and_1 = 871, // __atomic_fetch_and_1
  __atomic_fetch_and_16 = 872, // __atomic_fetch_and_16
  __atomic_fetch_and_2 = 873, // __atomic_fetch_and_2
  __atomic_fetch_and_4 = 874, // __atomic_fetch_and_4
  __atomic_fetch_and_8 = 875, // __atomic_fetch_and_8
  __atomic_fetch_nand_1 = 876, // __atomic_fetch_nand_1
  __atomic_fetch_nand_16 = 877, // __atomic_fetch_nand_16
  __atomic_fetch_nand_2 = 878, // __atomic_fetch_nand_2
  __atomic_fetch_nand_4 = 879, // __atomic_fetch_nand_4
  __atomic_fetch_nand_8 = 880, // __atomic_fetch_nand_8
  __atomic_fetch_or_1 = 881, // __atomic_fetch_or_1
  __atomic_fetch_or_16 = 882, // __atomic_fetch_or_16
  __atomic_fetch_or_2 = 883, // __atomic_fetch_or_2
  __atomic_fetch_or_4 = 884, // __atomic_fetch_or_4
  __atomic_fetch_or_8 = 885, // __atomic_fetch_or_8
  __atomic_fetch_sub_1 = 886, // __atomic_fetch_sub_1
  __atomic_fetch_sub_16 = 887, // __atomic_fetch_sub_16
  __atomic_fetch_sub_2 = 888, // __atomic_fetch_sub_2
  __atomic_fetch_sub_4 = 889, // __atomic_fetch_sub_4
  __atomic_fetch_sub_8 = 890, // __atomic_fetch_sub_8
  __atomic_fetch_xor_1 = 891, // __atomic_fetch_xor_1
  __atomic_fetch_xor_16 = 892, // __atomic_fetch_xor_16
  __atomic_fetch_xor_2 = 893, // __atomic_fetch_xor_2
  __atomic_fetch_xor_4 = 894, // __atomic_fetch_xor_4
  __atomic_fetch_xor_8 = 895, // __atomic_fetch_xor_8
  __atomic_load = 896, // __atomic_load
  __atomic_load_1 = 897, // __atomic_load_1
  __atomic_load_16 = 898, // __atomic_load_16
  __atomic_load_2 = 899, // __atomic_load_2
  __atomic_load_4 = 900, // __atomic_load_4
  __atomic_load_8 = 901, // __atomic_load_8
  __atomic_store = 902, // __atomic_store
  __atomic_store_1 = 903, // __atomic_store_1
  __atomic_store_16 = 904, // __atomic_store_16
  __atomic_store_2 = 905, // __atomic_store_2
  __atomic_store_4 = 906, // __atomic_store_4
  __atomic_store_8 = 907, // __atomic_store_8
  __bzero = 908, // __bzero
  __clear_cache = 909, // __clear_cache
  __clzdi2 = 910, // __clzdi2
  __clzsi2 = 911, // __clzsi2
  __clzti2 = 912, // __clzti2
  __cxa_end_cleanup = 913, // __cxa_end_cleanup
  __divdf3 = 914, // __divdf3
  __divdf3vfp = 915, // __divdf3vfp
  __divdi3 = 916, // __divdi3
  __divhi3 = 917, // __divhi3
  __divkf3 = 918, // __divkf3
  __divmodhi4 = 919, // __divmodhi4
  __divmodqi4 = 920, // __divmodqi4
  __divmodsi4 = 921, // __divmodsi4
  __divqi3 = 922, // __divqi3
  __divsf3 = 923, // __divsf3
  __divsf3vfp = 924, // __divsf3vfp
  __divsi3 = 925, // __divsi3
  __divtf3 = 926, // __divtf3
  __divti3 = 927, // __divti3
  __divxf3 = 928, // __divxf3
  __dtoi64 = 929, // __dtoi64
  __dtou64 = 930, // __dtou64
  __eqdf2 = 931, // __eqdf2
  __eqdf2vfp = 932, // __eqdf2vfp
  __eqkf2 = 933, // __eqkf2
  __eqsf2 = 934, // __eqsf2
  __eqsf2vfp = 935, // __eqsf2vfp
  __eqtf2 = 936, // __eqtf2
  __exp10 = 937, // __exp10
  __exp10f = 938, // __exp10f
  __exp10f128_finite = 939, // __exp10f128_finite
  __exp2_finite = 940, // __exp2_finite
  __exp2f128_finite = 941, // __exp2f128_finite
  __exp2f_finite = 942, // __exp2f_finite
  __exp2l_finite_f128 = 943, // __exp2l_finite
  __exp2l_finite_f80 = 944, // __exp2l_finite
  __exp2l_finite_ppcf128 = 945, // __exp2l_finite
  __exp_finite = 946, // __exp_finite
  __expf128_finite = 947, // __expf128_finite
  __expf_finite = 948, // __expf_finite
  __expl_finite_f128 = 949, // __expl_finite
  __expl_finite_f80 = 950, // __expl_finite
  __expl_finite_ppcf128 = 951, // __expl_finite
  __extendbfsf2 = 952, // __extendbfsf2
  __extenddfkf2 = 953, // __extenddfkf2
  __extenddftf2 = 954, // __extenddftf2
  __extendhfdf2 = 955, // __extendhfdf2
  __extendhfsf2 = 956, // __extendhfsf2
  __extendhftf2 = 957, // __extendhftf2
  __extendhfxf2 = 958, // __extendhfxf2
  __extendkftf2 = 959, // __extendkftf2
  __extendsfdf2 = 960, // __extendsfdf2
  __extendsfdf2vfp = 961, // __extendsfdf2vfp
  __extendsfkf2 = 962, // __extendsfkf2
  __extendsftf2 = 963, // __extendsftf2
  __extendxftf2 = 964, // __extendxftf2
  __fixdfdi = 965, // __fixdfdi
  __fixdfsi = 966, // __fixdfsi
  __fixdfsivfp = 967, // __fixdfsivfp
  __fixdfti = 968, // __fixdfti
  __fixhfdi = 969, // __fixhfdi
  __fixhfsi = 970, // __fixhfsi
  __fixhfti = 971, // __fixhfti
  __fixkfdi = 972, // __fixkfdi
  __fixkfsi = 973, // __fixkfsi
  __fixkfti = 974, // __fixkfti
  __fixsfdi = 975, // __fixsfdi
  __fixsfsi = 976, // __fixsfsi
  __fixsfsivfp = 977, // __fixsfsivfp
  __fixsfti = 978, // __fixsfti
  __fixtfdi_f128 = 979, // __fixtfdi
  __fixtfdi_ppcf128 = 980, // __fixtfdi
  __fixtfsi = 981, // __fixtfsi
  __fixtfti_f128 = 982, // __fixtfti
  __fixtfti_ppcf128 = 983, // __fixtfti
  __fixunsdfdi = 984, // __fixunsdfdi
  __fixunsdfsi = 985, // __fixunsdfsi
  __fixunsdfsivfp = 986, // __fixunsdfsivfp
  __fixunsdfti = 987, // __fixunsdfti
  __fixunshfdi = 988, // __fixunshfdi
  __fixunshfsi = 989, // __fixunshfsi
  __fixunshfti = 990, // __fixunshfti
  __fixunskfdi = 991, // __fixunskfdi
  __fixunskfsi = 992, // __fixunskfsi
  __fixunskfti = 993, // __fixunskfti
  __fixunssfdi = 994, // __fixunssfdi
  __fixunssfsi = 995, // __fixunssfsi
  __fixunssfsivfp = 996, // __fixunssfsivfp
  __fixunssfti = 997, // __fixunssfti
  __fixunstfdi_f128 = 998, // __fixunstfdi
  __fixunstfdi_ppcf128 = 999, // __fixunstfdi
  __fixunstfsi_f128 = 1000, // __fixunstfsi
  __fixunstfsi_ppcf128 = 1001, // __fixunstfsi
  __fixunstfti_f128 = 1002, // __fixunstfti
  __fixunstfti_ppcf128 = 1003, // __fixunstfti
  __fixunsxfdi = 1004, // __fixunsxfdi
  __fixunsxfsi = 1005, // __fixunsxfsi
  __fixunsxfti = 1006, // __fixunsxfti
  __fixxfdi = 1007, // __fixxfdi
  __fixxfsi = 1008, // __fixxfsi
  __fixxfti = 1009, // __fixxfti
  __floatdibf = 1010, // __floatdibf
  __floatdidf = 1011, // __floatdidf
  __floatdihf = 1012, // __floatdihf
  __floatdikf = 1013, // __floatdikf
  __floatdisf = 1014, // __floatdisf
  __floatditf_f128 = 1015, // __floatditf
  __floatditf_ppcf128 = 1016, // __floatditf
  __floatdixf = 1017, // __floatdixf
  __floatsidf = 1018, // __floatsidf
  __floatsidfvfp = 1019, // __floatsidfvfp
  __floatsihf = 1020, // __floatsihf
  __floatsikf = 1021, // __floatsikf
  __floatsisf = 1022, // __floatsisf
  __floatsisfvfp = 1023, // __floatsisfvfp
  __floatsitf = 1024, // __floatsitf
  __floatsixf = 1025, // __floatsixf
  __floattidf = 1026, // __floattidf
  __floattihf = 1027, // __floattihf
  __floattikf = 1028, // __floattikf
  __floattisf = 1029, // __floattisf
  __floattitf_f128 = 1030, // __floattitf
  __floattitf_ppcf128 = 1031, // __floattitf
  __floattixf = 1032, // __floattixf
  __floatundibf = 1033, // __floatundibf
  __floatundidf = 1034, // __floatundidf
  __floatundihf = 1035, // __floatundihf
  __floatundikf = 1036, // __floatundikf
  __floatundisf = 1037, // __floatundisf
  __floatunditf_f128 = 1038, // __floatunditf
  __floatunditf_ppcf128 = 1039, // __floatunditf
  __floatundixf = 1040, // __floatundixf
  __floatunsidf = 1041, // __floatunsidf
  __floatunsihf = 1042, // __floatunsihf
  __floatunsikf = 1043, // __floatunsikf
  __floatunsisf = 1044, // __floatunsisf
  __floatunsitf = 1045, // __floatunsitf
  __floatunsixf = 1046, // __floatunsixf
  __floatunssidfvfp = 1047, // __floatunssidfvfp
  __floatunssisfvfp = 1048, // __floatunssisfvfp
  __floatuntidf = 1049, // __floatuntidf
  __floatuntihf = 1050, // __floatuntihf
  __floatuntikf = 1051, // __floatuntikf
  __floatuntisf = 1052, // __floatuntisf
  __floatuntitf_f128 = 1053, // __floatuntitf
  __floatuntitf_ppcf128 = 1054, // __floatuntitf
  __floatuntixf = 1055, // __floatuntixf
  __gcc_dtoq = 1056, // __gcc_dtoq
  __gcc_itoq = 1057, // __gcc_itoq
  __gcc_qadd = 1058, // __gcc_qadd
  __gcc_qdiv = 1059, // __gcc_qdiv
  __gcc_qeq = 1060, // __gcc_qeq
  __gcc_qge = 1061, // __gcc_qge
  __gcc_qgt = 1062, // __gcc_qgt
  __gcc_qle = 1063, // __gcc_qle
  __gcc_qlt = 1064, // __gcc_qlt
  __gcc_qmul = 1065, // __gcc_qmul
  __gcc_qne = 1066, // __gcc_qne
  __gcc_qsub = 1067, // __gcc_qsub
  __gcc_qtod = 1068, // __gcc_qtod
  __gcc_qtos = 1069, // __gcc_qtos
  __gcc_qtou = 1070, // __gcc_qtou
  __gcc_qunord = 1071, // __gcc_qunord
  __gcc_stoq = 1072, // __gcc_stoq
  __gcc_utoq = 1073, // __gcc_utoq
  __gedf2 = 1074, // __gedf2
  __gedf2vfp = 1075, // __gedf2vfp
  __gekf2 = 1076, // __gekf2
  __gesf2 = 1077, // __gesf2
  __gesf2vfp = 1078, // __gesf2vfp
  __getf2 = 1079, // __getf2
  __gnu_f2h_ieee = 1080, // __gnu_f2h_ieee
  __gnu_h2f_ieee = 1081, // __gnu_h2f_ieee
  __gtdf2 = 1082, // __gtdf2
  __gtdf2vfp = 1083, // __gtdf2vfp
  __gtkf2 = 1084, // __gtkf2
  __gtsf2 = 1085, // __gtsf2
  __gtsf2vfp = 1086, // __gtsf2vfp
  __gttf2 = 1087, // __gttf2
  __hexagon_adddf3 = 1088, // __hexagon_adddf3
  __hexagon_divdf3 = 1089, // __hexagon_divdf3
  __hexagon_divdi3 = 1090, // __hexagon_divdi3
  __hexagon_divsf3 = 1091, // __hexagon_divsf3
  __hexagon_divsi3 = 1092, // __hexagon_divsi3
  __hexagon_fast2_sqrtdf2 = 1093, // __hexagon_fast2_sqrtdf2
  __hexagon_fast2_sqrtf = 1094, // __hexagon_fast2_sqrtf
  __hexagon_fast_adddf3 = 1095, // __hexagon_fast_adddf3
  __hexagon_fast_divdf3 = 1096, // __hexagon_fast_divdf3
  __hexagon_fast_divsf3 = 1097, // __hexagon_fast_divsf3
  __hexagon_fast_muldf3 = 1098, // __hexagon_fast_muldf3
  __hexagon_fast_subdf3 = 1099, // __hexagon_fast_subdf3
  __hexagon_memcpy_likely_aligned_min32bytes_mult8bytes = 1100, // __hexagon_memcpy_likely_aligned_min32bytes_mult8bytes
  __hexagon_moddi3 = 1101, // __hexagon_moddi3
  __hexagon_modsi3 = 1102, // __hexagon_modsi3
  __hexagon_muldf3 = 1103, // __hexagon_muldf3
  __hexagon_sqrtf = 1104, // __hexagon_sqrtf
  __hexagon_subdf3 = 1105, // __hexagon_subdf3
  __hexagon_udivdi3 = 1106, // __hexagon_udivdi3
  __hexagon_udivsi3 = 1107, // __hexagon_udivsi3
  __hexagon_umoddi3 = 1108, // __hexagon_umoddi3
  __hexagon_umodsi3 = 1109, // __hexagon_umodsi3
  __i64tod = 1110, // __i64tod
  __i64tos = 1111, // __i64tos
  __ledf2 = 1112, // __ledf2
  __ledf2vfp = 1113, // __ledf2vfp
  __lekf2 = 1114, // __lekf2
  __lesf2 = 1115, // __lesf2
  __lesf2vfp = 1116, // __lesf2vfp
  __letf2 = 1117, // __letf2
  __llvm_deoptimize = 1118, // __llvm_deoptimize
  __llvm_memcpy_element_unordered_atomic_1 = 1119, // __llvm_memcpy_element_unordered_atomic_1
  __llvm_memcpy_element_unordered_atomic_16 = 1120, // __llvm_memcpy_element_unordered_atomic_16
  __llvm_memcpy_element_unordered_atomic_2 = 1121, // __llvm_memcpy_element_unordered_atomic_2
  __llvm_memcpy_element_unordered_atomic_4 = 1122, // __llvm_memcpy_element_unordered_atomic_4
  __llvm_memcpy_element_unordered_atomic_8 = 1123, // __llvm_memcpy_element_unordered_atomic_8
  __llvm_memmove_element_unordered_atomic_1 = 1124, // __llvm_memmove_element_unordered_atomic_1
  __llvm_memmove_element_unordered_atomic_16 = 1125, // __llvm_memmove_element_unordered_atomic_16
  __llvm_memmove_element_unordered_atomic_2 = 1126, // __llvm_memmove_element_unordered_atomic_2
  __llvm_memmove_element_unordered_atomic_4 = 1127, // __llvm_memmove_element_unordered_atomic_4
  __llvm_memmove_element_unordered_atomic_8 = 1128, // __llvm_memmove_element_unordered_atomic_8
  __llvm_memset_element_unordered_atomic_1 = 1129, // __llvm_memset_element_unordered_atomic_1
  __llvm_memset_element_unordered_atomic_16 = 1130, // __llvm_memset_element_unordered_atomic_16
  __llvm_memset_element_unordered_atomic_2 = 1131, // __llvm_memset_element_unordered_atomic_2
  __llvm_memset_element_unordered_atomic_4 = 1132, // __llvm_memset_element_unordered_atomic_4
  __llvm_memset_element_unordered_atomic_8 = 1133, // __llvm_memset_element_unordered_atomic_8
  __log10_finite = 1134, // __log10_finite
  __log10f128_finite = 1135, // __log10f128_finite
  __log10f_finite = 1136, // __log10f_finite
  __log10l_finite_f128 = 1137, // __log10l_finite
  __log10l_finite_f80 = 1138, // __log10l_finite
  __log10l_finite_ppcf128 = 1139, // __log10l_finite
  __log2_finite = 1140, // __log2_finite
  __log2f128_finite = 1141, // __log2f128_finite
  __log2f_finite = 1142, // __log2f_finite
  __log2l_finite_f128 = 1143, // __log2l_finite
  __log2l_finite_f80 = 1144, // __log2l_finite
  __log2l_finite_ppcf128 = 1145, // __log2l_finite
  __log_finite = 1146, // __log_finite
  __logf128_finite = 1147, // __logf128_finite
  __logf_finite = 1148, // __logf_finite
  __logl_finite_f128 = 1149, // __logl_finite
  __logl_finite_f80 = 1150, // __logl_finite
  __logl_finite_ppcf128 = 1151, // __logl_finite
  __lshrdi3 = 1152, // __lshrdi3
  __lshrhi3 = 1153, // __lshrhi3
  __lshrsi3 = 1154, // __lshrsi3
  __lshrti3 = 1155, // __lshrti3
  __ltdf2 = 1156, // __ltdf2
  __ltdf2vfp = 1157, // __ltdf2vfp
  __ltkf2 = 1158, // __ltkf2
  __ltsf2 = 1159, // __ltsf2
  __ltsf2vfp = 1160, // __ltsf2vfp
  __lttf2 = 1161, // __lttf2
  __memcpy_4 = 1162, // __memcpy_4
  __mips16_adddf3 = 1163, // __mips16_adddf3
  __mips16_addsf3 = 1164, // __mips16_addsf3
  __mips16_divdf3 = 1165, // __mips16_divdf3
  __mips16_divsf3 = 1166, // __mips16_divsf3
  __mips16_eqdf2 = 1167, // __mips16_eqdf2
  __mips16_eqsf2 = 1168, // __mips16_eqsf2
  __mips16_extendsfdf2 = 1169, // __mips16_extendsfdf2
  __mips16_fix_truncdfsi = 1170, // __mips16_fix_truncdfsi
  __mips16_fix_truncsfsi = 1171, // __mips16_fix_truncsfsi
  __mips16_floatsidf = 1172, // __mips16_floatsidf
  __mips16_floatsisf = 1173, // __mips16_floatsisf
  __mips16_floatunsidf = 1174, // __mips16_floatunsidf
  __mips16_floatunsisf = 1175, // __mips16_floatunsisf
  __mips16_gedf2 = 1176, // __mips16_gedf2
  __mips16_gesf2 = 1177, // __mips16_gesf2
  __mips16_gtdf2 = 1178, // __mips16_gtdf2
  __mips16_gtsf2 = 1179, // __mips16_gtsf2
  __mips16_ledf2 = 1180, // __mips16_ledf2
  __mips16_lesf2 = 1181, // __mips16_lesf2
  __mips16_ltdf2 = 1182, // __mips16_ltdf2
  __mips16_ltsf2 = 1183, // __mips16_ltsf2
  __mips16_muldf3 = 1184, // __mips16_muldf3
  __mips16_mulsf3 = 1185, // __mips16_mulsf3
  __mips16_nedf2 = 1186, // __mips16_nedf2
  __mips16_nesf2 = 1187, // __mips16_nesf2
  __mips16_ret_dc = 1188, // __mips16_ret_dc
  __mips16_ret_df = 1189, // __mips16_ret_df
  __mips16_ret_sc = 1190, // __mips16_ret_sc
  __mips16_ret_sf = 1191, // __mips16_ret_sf
  __mips16_subdf3 = 1192, // __mips16_subdf3
  __mips16_subsf3 = 1193, // __mips16_subsf3
  __mips16_truncdfsf2 = 1194, // __mips16_truncdfsf2
  __mips16_unorddf2 = 1195, // __mips16_unorddf2
  __mips16_unordsf2 = 1196, // __mips16_unordsf2
  __moddi3 = 1197, // __moddi3
  __modhi3 = 1198, // __modhi3
  __modqi3 = 1199, // __modqi3
  __modsi3 = 1200, // __modsi3
  __modti3 = 1201, // __modti3
  __mspabi_addd = 1202, // __mspabi_addd
  __mspabi_addf = 1203, // __mspabi_addf
  __mspabi_cmpd__oeq = 1204, // __mspabi_cmpd
  __mspabi_cmpd__oge = 1205, // __mspabi_cmpd
  __mspabi_cmpd__ogt = 1206, // __mspabi_cmpd
  __mspabi_cmpd__ole = 1207, // __mspabi_cmpd
  __mspabi_cmpd__olt = 1208, // __mspabi_cmpd
  __mspabi_cmpd__une = 1209, // __mspabi_cmpd
  __mspabi_cmpf__oeq = 1210, // __mspabi_cmpf
  __mspabi_cmpf__oge = 1211, // __mspabi_cmpf
  __mspabi_cmpf__ogt = 1212, // __mspabi_cmpf
  __mspabi_cmpf__ole = 1213, // __mspabi_cmpf
  __mspabi_cmpf__olt = 1214, // __mspabi_cmpf
  __mspabi_cmpf__une = 1215, // __mspabi_cmpf
  __mspabi_cvtdf = 1216, // __mspabi_cvtdf
  __mspabi_cvtfd = 1217, // __mspabi_cvtfd
  __mspabi_divd = 1218, // __mspabi_divd
  __mspabi_divf = 1219, // __mspabi_divf
  __mspabi_divi = 1220, // __mspabi_divi
  __mspabi_divli = 1221, // __mspabi_divli
  __mspabi_divlli = 1222, // __mspabi_divlli
  __mspabi_divu = 1223, // __mspabi_divu
  __mspabi_divul = 1224, // __mspabi_divul
  __mspabi_divull = 1225, // __mspabi_divull
  __mspabi_fixdli = 1226, // __mspabi_fixdli
  __mspabi_fixdlli = 1227, // __mspabi_fixdlli
  __mspabi_fixdul = 1228, // __mspabi_fixdul
  __mspabi_fixdull = 1229, // __mspabi_fixdull
  __mspabi_fixfli = 1230, // __mspabi_fixfli
  __mspabi_fixflli = 1231, // __mspabi_fixflli
  __mspabi_fixful = 1232, // __mspabi_fixful
  __mspabi_fixfull = 1233, // __mspabi_fixfull
  __mspabi_fltlid = 1234, // __mspabi_fltlid
  __mspabi_fltlif = 1235, // __mspabi_fltlif
  __mspabi_fltllid = 1236, // __mspabi_fltllid
  __mspabi_fltllif = 1237, // __mspabi_fltllif
  __mspabi_fltuld = 1238, // __mspabi_fltuld
  __mspabi_fltulf = 1239, // __mspabi_fltulf
  __mspabi_fltulld = 1240, // __mspabi_fltulld
  __mspabi_fltullf = 1241, // __mspabi_fltullf
  __mspabi_mpyd = 1242, // __mspabi_mpyd
  __mspabi_mpyf = 1243, // __mspabi_mpyf
  __mspabi_mpyi = 1244, // __mspabi_mpyi
  __mspabi_mpyi_f5hw = 1245, // __mspabi_mpyi_f5hw
  __mspabi_mpyi_hw = 1246, // __mspabi_mpyi_hw
  __mspabi_mpyl = 1247, // __mspabi_mpyl
  __mspabi_mpyl_f5hw = 1248, // __mspabi_mpyl_f5hw
  __mspabi_mpyl_hw = 1249, // __mspabi_mpyl_hw
  __mspabi_mpyl_hw32 = 1250, // __mspabi_mpyl_hw32
  __mspabi_mpyll = 1251, // __mspabi_mpyll
  __mspabi_mpyll_f5hw = 1252, // __mspabi_mpyll_f5hw
  __mspabi_mpyll_hw = 1253, // __mspabi_mpyll_hw
  __mspabi_mpyll_hw32 = 1254, // __mspabi_mpyll_hw32
  __mspabi_remi = 1255, // __mspabi_remi
  __mspabi_remli = 1256, // __mspabi_remli
  __mspabi_remlli = 1257, // __mspabi_remlli
  __mspabi_remu = 1258, // __mspabi_remu
  __mspabi_remul = 1259, // __mspabi_remul
  __mspabi_remull = 1260, // __mspabi_remull
  __mspabi_slll = 1261, // __mspabi_slll
  __mspabi_sral = 1262, // __mspabi_sral
  __mspabi_srll = 1263, // __mspabi_srll
  __mspabi_subd = 1264, // __mspabi_subd
  __mspabi_subf = 1265, // __mspabi_subf
  __muldf3 = 1266, // __muldf3
  __muldf3vfp = 1267, // __muldf3vfp
  __muldi3 = 1268, // __muldi3
  __mulhi3 = 1269, // __mulhi3
  __mulkf3 = 1270, // __mulkf3
  __mulodi4 = 1271, // __mulodi4
  __mulosi4 = 1272, // __mulosi4
  __muloti4 = 1273, // __muloti4
  __mulqi3 = 1274, // __mulqi3
  __mulsf3 = 1275, // __mulsf3
  __mulsf3vfp = 1276, // __mulsf3vfp
  __mulsi3 = 1277, // __mulsi3
  __multf3 = 1278, // __multf3
  __multi3 = 1279, // __multi3
  __mulxf3 = 1280, // __mulxf3
  __nedf2 = 1281, // __nedf2
  __nedf2vfp = 1282, // __nedf2vfp
  __negdi2 = 1283, // __negdi2
  __negsi2 = 1284, // __negsi2
  __nekf2 = 1285, // __nekf2
  __nesf2 = 1286, // __nesf2
  __nesf2vfp = 1287, // __nesf2vfp
  __netf2 = 1288, // __netf2
  __popcountdi2 = 1289, // __popcountdi2
  __popcountsi2 = 1290, // __popcountsi2
  __popcountti2 = 1291, // __popcountti2
  __pow_finite = 1292, // __pow_finite
  __powf128_finite = 1293, // __powf128_finite
  __powf_finite = 1294, // __powf_finite
  __powidf2 = 1295, // __powidf2
  __powikf2 = 1296, // __powikf2
  __powisf2 = 1297, // __powisf2
  __powitf2_f128 = 1298, // __powitf2
  __powitf2_ppc128 = 1299, // __powitf2
  __powixf2 = 1300, // __powixf2
  __powl_finite_f128 = 1301, // __powl_finite
  __powl_finite_f80 = 1302, // __powl_finite
  __powl_finite_ppcf128 = 1303, // __powl_finite
  __riscv_flush_icache = 1304, // __riscv_flush_icache
  __rt_sdiv = 1305, // __rt_sdiv
  __rt_sdiv64 = 1306, // __rt_sdiv64
  __rt_udiv = 1307, // __rt_udiv
  __rt_udiv64 = 1308, // __rt_udiv64
  __safestack_pointer_address = 1309, // __safestack_pointer_address
  __sincos_stret = 1310, // __sincos_stret
  __sincosf_stret = 1311, // __sincosf_stret
  __stack_chk_fail = 1312, // __stack_chk_fail
  __stack_smash_handler = 1313, // __stack_smash_handler
  __stoi64 = 1314, // __stoi64
  __stou64 = 1315, // __stou64
  __subdf3 = 1316, // __subdf3
  __subdf3vfp = 1317, // __subdf3vfp
  __subkf3 = 1318, // __subkf3
  __subsf3 = 1319, // __subsf3
  __subsf3vfp = 1320, // __subsf3vfp
  __subtf3 = 1321, // __subtf3
  __subxf3 = 1322, // __subxf3
  __sync_fetch_and_add_1 = 1323, // __sync_fetch_and_add_1
  __sync_fetch_and_add_16 = 1324, // __sync_fetch_and_add_16
  __sync_fetch_and_add_2 = 1325, // __sync_fetch_and_add_2
  __sync_fetch_and_add_4 = 1326, // __sync_fetch_and_add_4
  __sync_fetch_and_add_8 = 1327, // __sync_fetch_and_add_8
  __sync_fetch_and_and_1 = 1328, // __sync_fetch_and_and_1
  __sync_fetch_and_and_16 = 1329, // __sync_fetch_and_and_16
  __sync_fetch_and_and_2 = 1330, // __sync_fetch_and_and_2
  __sync_fetch_and_and_4 = 1331, // __sync_fetch_and_and_4
  __sync_fetch_and_and_8 = 1332, // __sync_fetch_and_and_8
  __sync_fetch_and_max_1 = 1333, // __sync_fetch_and_max_1
  __sync_fetch_and_max_16 = 1334, // __sync_fetch_and_max_16
  __sync_fetch_and_max_2 = 1335, // __sync_fetch_and_max_2
  __sync_fetch_and_max_4 = 1336, // __sync_fetch_and_max_4
  __sync_fetch_and_max_8 = 1337, // __sync_fetch_and_max_8
  __sync_fetch_and_min_1 = 1338, // __sync_fetch_and_min_1
  __sync_fetch_and_min_16 = 1339, // __sync_fetch_and_min_16
  __sync_fetch_and_min_2 = 1340, // __sync_fetch_and_min_2
  __sync_fetch_and_min_4 = 1341, // __sync_fetch_and_min_4
  __sync_fetch_and_min_8 = 1342, // __sync_fetch_and_min_8
  __sync_fetch_and_nand_1 = 1343, // __sync_fetch_and_nand_1
  __sync_fetch_and_nand_16 = 1344, // __sync_fetch_and_nand_16
  __sync_fetch_and_nand_2 = 1345, // __sync_fetch_and_nand_2
  __sync_fetch_and_nand_4 = 1346, // __sync_fetch_and_nand_4
  __sync_fetch_and_nand_8 = 1347, // __sync_fetch_and_nand_8
  __sync_fetch_and_or_1 = 1348, // __sync_fetch_and_or_1
  __sync_fetch_and_or_16 = 1349, // __sync_fetch_and_or_16
  __sync_fetch_and_or_2 = 1350, // __sync_fetch_and_or_2
  __sync_fetch_and_or_4 = 1351, // __sync_fetch_and_or_4
  __sync_fetch_and_or_8 = 1352, // __sync_fetch_and_or_8
  __sync_fetch_and_sub_1 = 1353, // __sync_fetch_and_sub_1
  __sync_fetch_and_sub_16 = 1354, // __sync_fetch_and_sub_16
  __sync_fetch_and_sub_2 = 1355, // __sync_fetch_and_sub_2
  __sync_fetch_and_sub_4 = 1356, // __sync_fetch_and_sub_4
  __sync_fetch_and_sub_8 = 1357, // __sync_fetch_and_sub_8
  __sync_fetch_and_umax_1 = 1358, // __sync_fetch_and_umax_1
  __sync_fetch_and_umax_16 = 1359, // __sync_fetch_and_umax_16
  __sync_fetch_and_umax_2 = 1360, // __sync_fetch_and_umax_2
  __sync_fetch_and_umax_4 = 1361, // __sync_fetch_and_umax_4
  __sync_fetch_and_umax_8 = 1362, // __sync_fetch_and_umax_8
  __sync_fetch_and_umin_1 = 1363, // __sync_fetch_and_umin_1
  __sync_fetch_and_umin_16 = 1364, // __sync_fetch_and_umin_16
  __sync_fetch_and_umin_2 = 1365, // __sync_fetch_and_umin_2
  __sync_fetch_and_umin_4 = 1366, // __sync_fetch_and_umin_4
  __sync_fetch_and_umin_8 = 1367, // __sync_fetch_and_umin_8
  __sync_fetch_and_xor_1 = 1368, // __sync_fetch_and_xor_1
  __sync_fetch_and_xor_16 = 1369, // __sync_fetch_and_xor_16
  __sync_fetch_and_xor_2 = 1370, // __sync_fetch_and_xor_2
  __sync_fetch_and_xor_4 = 1371, // __sync_fetch_and_xor_4
  __sync_fetch_and_xor_8 = 1372, // __sync_fetch_and_xor_8
  __sync_lock_test_and_set_1 = 1373, // __sync_lock_test_and_set_1
  __sync_lock_test_and_set_16 = 1374, // __sync_lock_test_and_set_16
  __sync_lock_test_and_set_2 = 1375, // __sync_lock_test_and_set_2
  __sync_lock_test_and_set_4 = 1376, // __sync_lock_test_and_set_4
  __sync_lock_test_and_set_8 = 1377, // __sync_lock_test_and_set_8
  __sync_val_compare_and_swap_1 = 1378, // __sync_val_compare_and_swap_1
  __sync_val_compare_and_swap_16 = 1379, // __sync_val_compare_and_swap_16
  __sync_val_compare_and_swap_2 = 1380, // __sync_val_compare_and_swap_2
  __sync_val_compare_and_swap_4 = 1381, // __sync_val_compare_and_swap_4
  __sync_val_compare_and_swap_8 = 1382, // __sync_val_compare_and_swap_8
  __truncdfbf2 = 1383, // __truncdfbf2
  __truncdfhf2 = 1384, // __truncdfhf2
  __truncdfsf2 = 1385, // __truncdfsf2
  __truncdfsf2vfp = 1386, // __truncdfsf2vfp
  __trunckfdf2 = 1387, // __trunckfdf2
  __trunckfhf2 = 1388, // __trunckfhf2
  __trunckfsf2 = 1389, // __trunckfsf2
  __truncsfbf2 = 1390, // __truncsfbf2
  __truncsfhf2 = 1391, // __truncsfhf2
  __trunctfbf2 = 1392, // __trunctfbf2
  __trunctfdf2 = 1393, // __trunctfdf2
  __trunctfhf2_f128 = 1394, // __trunctfhf2
  __trunctfhf2_ppcf128 = 1395, // __trunctfhf2
  __trunctfkf2 = 1396, // __trunctfkf2
  __trunctfsf2 = 1397, // __trunctfsf2
  __trunctfxf2 = 1398, // __trunctfxf2
  __truncxfbf2 = 1399, // __truncxfbf2
  __truncxfdf2 = 1400, // __truncxfdf2
  __truncxfhf2 = 1401, // __truncxfhf2
  __truncxfsf2 = 1402, // __truncxfsf2
  __u64tod = 1403, // __u64tod
  __u64tos = 1404, // __u64tos
  __udivdi3 = 1405, // __udivdi3
  __udivhi3 = 1406, // __udivhi3
  __udivmodhi4 = 1407, // __udivmodhi4
  __udivmodqi4 = 1408, // __udivmodqi4
  __udivmodsi4 = 1409, // __udivmodsi4
  __udivqi3 = 1410, // __udivqi3
  __udivsi3 = 1411, // __udivsi3
  __udivti3 = 1412, // __udivti3
  __umoddi3 = 1413, // __umoddi3
  __umodhi3 = 1414, // __umodhi3
  __umodqi3 = 1415, // __umodqi3
  __umodsi3 = 1416, // __umodsi3
  __umodti3 = 1417, // __umodti3
  __unorddf2 = 1418, // __unorddf2
  __unorddf2vfp = 1419, // __unorddf2vfp
  __unordkf2 = 1420, // __unordkf2
  __unordsf2 = 1421, // __unordsf2
  __unordsf2vfp = 1422, // __unordsf2vfp
  __unordtf2 = 1423, // __unordtf2
  _alldiv = 1424, // _alldiv
  _allmul = 1425, // _allmul
  _allrem = 1426, // _allrem
  _aulldiv = 1427, // _aulldiv
  _aullrem = 1428, // _aullrem
  acos = 1429, // acos
  acosf = 1430, // acosf
  acosf128 = 1431, // acosf128
  acos_f128 = 1432, // acosl
  acos_f80 = 1433, // acosl
  acos_ppcf128 = 1434, // acosl
  asin = 1435, // asin
  asinf = 1436, // asinf
  asinf128 = 1437, // asinf128
  asin_f128 = 1438, // asinl
  asin_f80 = 1439, // asinl
  asin_ppcf128 = 1440, // asinl
  atan = 1441, // atan
  atan2 = 1442, // atan2
  atan2f = 1443, // atan2f
  atan2f128 = 1444, // atan2f128
  atan2_f128 = 1445, // atan2l
  atan2_f80 = 1446, // atan2l
  atan2_ppcf128 = 1447, // atan2l
  atanf = 1448, // atanf
  atanf128 = 1449, // atanf128
  atan_f128 = 1450, // atanl
  atan_f80 = 1451, // atanl
  atan_ppcf128 = 1452, // atanl
  bzero = 1453, // bzero
  calloc = 1454, // calloc
  cbrt = 1455, // cbrt
  cbrtf = 1456, // cbrtf
  cbrtf128 = 1457, // cbrtf128
  cbrt_f128 = 1458, // cbrtl
  cbrt_f80 = 1459, // cbrtl
  cbrt_ppcf128 = 1460, // cbrtl
  ceil = 1461, // ceil
  ceilf = 1462, // ceilf
  ceilf128 = 1463, // ceilf128
  ceil_f128 = 1464, // ceill
  ceil_f80 = 1465, // ceill
  ceil_ppcf128 = 1466, // ceill
  copysign = 1467, // copysign
  copysignf = 1468, // copysignf
  copysignf128 = 1469, // copysignf128
  copysign_f128 = 1470, // copysignl
  copysign_f80 = 1471, // copysignl
  copysign_ppcf128 = 1472, // copysignl
  avr_cos = 1473, // cos
  cos = 1474, // cos
  cosf = 1475, // cosf
  cosf128 = 1476, // cosf128
  cosh = 1477, // cosh
  coshf = 1478, // coshf
  coshf128 = 1479, // coshf128
  cosh_f128 = 1480, // coshl
  cosh_f80 = 1481, // coshl
  cosh_ppcf128 = 1482, // coshl
  cos_f128 = 1483, // cosl
  cos_f80 = 1484, // cosl
  cos_ppcf128 = 1485, // cosl
  emscripten_return_address = 1486, // emscripten_return_address
  exp = 1487, // exp
  exp10 = 1488, // exp10
  exp10f = 1489, // exp10f
  exp10f128 = 1490, // exp10f128
  exp10l_f128 = 1491, // exp10l
  exp10l_f80 = 1492, // exp10l
  exp10l_ppcf128 = 1493, // exp10l
  exp2 = 1494, // exp2
  exp2f = 1495, // exp2f
  exp2f128 = 1496, // exp2f128
  exp2_f128 = 1497, // exp2l
  exp2_f80 = 1498, // exp2l
  exp2_ppcf128 = 1499, // exp2l
  expf = 1500, // expf
  expf128 = 1501, // expf128
  exp_f128 = 1502, // expl
  exp_f80 = 1503, // expl
  exp_ppcf128 = 1504, // expl
  fegetenv = 1505, // fegetenv
  fegetmode = 1506, // fegetmode
  fesetenv = 1507, // fesetenv
  fesetmode = 1508, // fesetmode
  floor = 1509, // floor
  floorf = 1510, // floorf
  floorf128 = 1511, // floorf128
  floor_f128 = 1512, // floorl
  floor_f80 = 1513, // floorl
  floor_ppcf128 = 1514, // floorl
  fma = 1515, // fma
  fmaf = 1516, // fmaf
  fmaf128 = 1517, // fmaf128
  fma_f128 = 1518, // fmal
  fma_f80 = 1519, // fmal
  fma_ppcf128 = 1520, // fmal
  fmax = 1521, // fmax
  fmaxf = 1522, // fmaxf
  fmaxf128 = 1523, // fmaxf128
  fmaximum = 1524, // fmaximum
  fmaximum_num = 1525, // fmaximum_num
  fmaximum_numf = 1526, // fmaximum_numf
  fmaximum_numf128 = 1527, // fmaximum_numf128
  fmaximum_num_f128 = 1528, // fmaximum_numl
  fmaximum_num_f80 = 1529, // fmaximum_numl
  fmaximum_num_ppcf128 = 1530, // fmaximum_numl
  fmaximumf = 1531, // fmaximumf
  fmaximumf128 = 1532, // fmaximumf128
  fmaximum_f128 = 1533, // fmaximuml
  fmaximum_f80 = 1534, // fmaximuml
  fmaximum_ppcf128 = 1535, // fmaximuml
  fmax_f128 = 1536, // fmaxl
  fmax_f80 = 1537, // fmaxl
  fmax_ppcf128 = 1538, // fmaxl
  fmin = 1539, // fmin
  fminf = 1540, // fminf
  fminf128 = 1541, // fminf128
  fminimum = 1542, // fminimum
  fminimum_num = 1543, // fminimum_num
  fminimum_numf = 1544, // fminimum_numf
  fminimum_numf128 = 1545, // fminimum_numf128
  fminimum_num_f128 = 1546, // fminimum_numl
  fminimum_num_f80 = 1547, // fminimum_numl
  fminimum_num_ppcf128 = 1548, // fminimum_numl
  fminimumf = 1549, // fminimumf
  fminimumf128 = 1550, // fminimumf128
  fminimum_f128 = 1551, // fminimuml
  fminimum_f80 = 1552, // fminimuml
  fminimum_ppcf128 = 1553, // fminimuml
  fmin_f128 = 1554, // fminl
  fmin_f80 = 1555, // fminl
  fmin_ppcf128 = 1556, // fminl
  fmod = 1557, // fmod
  fmodf = 1558, // fmodf
  fmodf128 = 1559, // fmodf128
  fmodl_f128 = 1560, // fmodl
  fmodl_f80 = 1561, // fmodl
  fmodl_ppc128 = 1562, // fmodl
  frexp = 1563, // frexp
  frexpf = 1564, // frexpf
  frexpf128 = 1565, // frexpf128
  frexp_f128 = 1566, // frexpl
  frexp_f80 = 1567, // frexpl
  frexp_ppcf128 = 1568, // frexpl
  ldexp = 1569, // ldexp
  ldexpf = 1570, // ldexpf
  ldexpf128 = 1571, // ldexpf128
  ldexp_f128 = 1572, // ldexpl
  ldexp_f80 = 1573, // ldexpl
  ldexp_ppcf128 = 1574, // ldexpl
  llrint = 1575, // llrint
  llrintf = 1576, // llrintf
  llrintf128 = 1577, // llrintf128
  llrint_f128 = 1578, // llrintl
  llrint_f80 = 1579, // llrintl
  llrint_ppcf128 = 1580, // llrintl
  llround = 1581, // llround
  llroundf = 1582, // llroundf
  llroundf128 = 1583, // llroundf128
  llround_f128 = 1584, // llroundl
  llround_f80 = 1585, // llroundl
  llround_ppcf128 = 1586, // llroundl
  log = 1587, // log
  log10 = 1588, // log10
  log10f = 1589, // log10f
  log10f128 = 1590, // log10f128
  log10_f128 = 1591, // log10l
  log10_f80 = 1592, // log10l
  log10_ppcf128 = 1593, // log10l
  log2 = 1594, // log2
  log2f = 1595, // log2f
  log2f128 = 1596, // log2f128
  log2_f128 = 1597, // log2l
  log2_f80 = 1598, // log2l
  log2_ppcf128 = 1599, // log2l
  logf = 1600, // logf
  logf128 = 1601, // logf128
  log_f128 = 1602, // logl
  log_f80 = 1603, // logl
  log_ppcf128 = 1604, // logl
  lrint = 1605, // lrint
  lrintf = 1606, // lrintf
  lrintf128 = 1607, // lrintf128
  lrint_f128 = 1608, // lrintl
  lrint_f80 = 1609, // lrintl
  lrint_ppcf128 = 1610, // lrintl
  lround = 1611, // lround
  lroundf = 1612, // lroundf
  lroundf128 = 1613, // lroundf128
  lround_f128 = 1614, // lroundl
  lround_f80 = 1615, // lroundl
  lround_ppcf128 = 1616, // lroundl
  memcpy = 1617, // memcpy
  memmove = 1618, // memmove
  memset = 1619, // memset
  modf = 1620, // modf
  modff = 1621, // modff
  modff128 = 1622, // modff128
  modf_f128 = 1623, // modfl
  modf_f80 = 1624, // modfl
  modf_ppcf128 = 1625, // modfl
  nearbyint = 1626, // nearbyint
  nearbyintf = 1627, // nearbyintf
  nearbyintf128 = 1628, // nearbyintf128
  nearbyint_f128 = 1629, // nearbyintl
  nearbyint_f80 = 1630, // nearbyintl
  nearbyint_ppcf128 = 1631, // nearbyintl
  objc_autorelease = 1632, // objc_autorelease
  objc_autoreleasePoolPop = 1633, // objc_autoreleasePoolPop
  objc_autoreleasePoolPush = 1634, // objc_autoreleasePoolPush
  objc_autoreleaseReturnValue = 1635, // objc_autoreleaseReturnValue
  objc_claimAutoreleasedReturnValue = 1636, // objc_claimAutoreleasedReturnValue
  objc_copyWeak = 1637, // objc_copyWeak
  objc_destroyWeak = 1638, // objc_destroyWeak
  objc_initWeak = 1639, // objc_initWeak
  objc_loadWeak = 1640, // objc_loadWeak
  objc_loadWeakRetained = 1641, // objc_loadWeakRetained
  objc_moveWeak = 1642, // objc_moveWeak
  objc_release = 1643, // objc_release
  objc_retain = 1644, // objc_retain
  objc_retainAutorelease = 1645, // objc_retainAutorelease
  objc_retainAutoreleaseReturnValue = 1646, // objc_retainAutoreleaseReturnValue
  objc_retainAutoreleasedReturnValue = 1647, // objc_retainAutoreleasedReturnValue
  objc_retainBlock = 1648, // objc_retainBlock
  objc_retain_autorelease = 1649, // objc_retain_autorelease
  objc_retainedObject = 1650, // objc_retainedObject
  objc_storeStrong = 1651, // objc_storeStrong
  objc_storeWeak = 1652, // objc_storeWeak
  objc_sync_enter = 1653, // objc_sync_enter
  objc_sync_exit = 1654, // objc_sync_exit
  objc_unretainedObject = 1655, // objc_unretainedObject
  objc_unretainedPointer = 1656, // objc_unretainedPointer
  objc_unsafeClaimAutoreleasedReturnValue = 1657, // objc_unsafeClaimAutoreleasedReturnValue
  pow = 1658, // pow
  powf = 1659, // powf
  powf128 = 1660, // powf128
  pow_f128 = 1661, // powl
  pow_f80 = 1662, // powl
  pow_ppcf128 = 1663, // powl
  rint = 1664, // rint
  rintf = 1665, // rintf
  rintf128 = 1666, // rintf128
  rint_f128 = 1667, // rintl
  rint_f80 = 1668, // rintl
  rint_ppcf128 = 1669, // rintl
  round = 1670, // round
  roundeven = 1671, // roundeven
  roundevenf = 1672, // roundevenf
  roundevenf128 = 1673, // roundevenf128
  roundeven_f128 = 1674, // roundevenl
  roundeven_f80 = 1675, // roundevenl
  roundeven_ppcf128 = 1676, // roundevenl
  roundf = 1677, // roundf
  roundf128 = 1678, // roundf128
  round_f128 = 1679, // roundl
  round_f80 = 1680, // roundl
  round_ppcf128 = 1681, // roundl
  avr_sin = 1682, // sin
  sin = 1683, // sin
  sincos = 1684, // sincos
  sincosf = 1685, // sincosf
  sincosf128 = 1686, // sincosf128
  sincos_f128 = 1687, // sincosl
  sincos_f80 = 1688, // sincosl
  sincos_ppcf128 = 1689, // sincosl
  sincospi = 1690, // sincospi
  sincospif = 1691, // sincospif
  sincospi_f128 = 1692, // sincospil
  sincospi_f80 = 1693, // sincospil
  sincospi_ppcf128 = 1694, // sincospil
  sinf = 1695, // sinf
  sinf128 = 1696, // sinf128
  sinh = 1697, // sinh
  sinhf = 1698, // sinhf
  sinhf128 = 1699, // sinhf128
  sinh_f128 = 1700, // sinhl
  sinh_f80 = 1701, // sinhl
  sinh_ppcf128 = 1702, // sinhl
  sin_f128 = 1703, // sinl
  sin_f80 = 1704, // sinl
  sin_ppcf128 = 1705, // sinl
  sqrt = 1706, // sqrt
  sqrtf = 1707, // sqrtf
  sqrtf128 = 1708, // sqrtf128
  sqrt_f128 = 1709, // sqrtl
  sqrt_f80 = 1710, // sqrtl
  sqrt_ppcf128 = 1711, // sqrtl
  tan = 1712, // tan
  tanf = 1713, // tanf
  tanf128 = 1714, // tanf128
  tanh = 1715, // tanh
  tanhf = 1716, // tanhf
  tanhf128 = 1717, // tanhf128
  tanh_f128 = 1718, // tanhl
  tanh_f80 = 1719, // tanhl
  tanh_ppcf128 = 1720, // tanhl
  tan_f128 = 1721, // tanl
  tan_f80 = 1722, // tanl
  tan_ppcf128 = 1723, // tanl
  trunc = 1724, // trunc
  truncf = 1725, // truncf
  truncf128 = 1726, // truncf128
  trunc_f128 = 1727, // truncl
  trunc_f80 = 1728, // truncl
  trunc_ppcf128 = 1729, // truncl
  NumLibcallImpls = 1730
};
} // End namespace RTLIB
} // End namespace llvm
#endif

#ifdef GET_INIT_RUNTIME_LIBCALL_NAMES
const RTLIB::LibcallImpl llvm::RTLIB::RuntimeLibcallsInfo::DefaultLibcallImpls[RTLIB::UNKNOWN_LIBCALL + 1] = {
  RTLIB::acosf, // RTLIB::ACOS_F32
  RTLIB::acos, // RTLIB::ACOS_F64
  RTLIB::acos_f80, // RTLIB::ACOS_F80
  RTLIB::acos_f128, // RTLIB::ACOS_F128
  RTLIB::acos_ppcf128, // RTLIB::ACOS_PPCF128
  RTLIB::__addsf3, // RTLIB::ADD_F32
  RTLIB::__adddf3, // RTLIB::ADD_F64
  RTLIB::__addxf3, // RTLIB::ADD_F80
  RTLIB::__addtf3, // RTLIB::ADD_F128
  RTLIB::__gcc_qadd, // RTLIB::ADD_PPCF128
  RTLIB::Unsupported, // RTLIB::AEABI_MEMCLR
  RTLIB::Unsupported, // RTLIB::AEABI_MEMCLR4
  RTLIB::Unsupported, // RTLIB::AEABI_MEMCLR8
  RTLIB::Unsupported, // RTLIB::AEABI_MEMCPY4
  RTLIB::Unsupported, // RTLIB::AEABI_MEMCPY8
  RTLIB::Unsupported, // RTLIB::AEABI_MEMMOVE4
  RTLIB::Unsupported, // RTLIB::AEABI_MEMMOVE8
  RTLIB::Unsupported, // RTLIB::AEABI_MEMSET4
  RTLIB::Unsupported, // RTLIB::AEABI_MEMSET8
  RTLIB::asinf, // RTLIB::ASIN_F32
  RTLIB::asin, // RTLIB::ASIN_F64
  RTLIB::asin_f80, // RTLIB::ASIN_F80
  RTLIB::asin_f128, // RTLIB::ASIN_F128
  RTLIB::asin_ppcf128, // RTLIB::ASIN_PPCF128
  RTLIB::atan2f, // RTLIB::ATAN2_F32
  RTLIB::atan2, // RTLIB::ATAN2_F64
  RTLIB::atan2_f80, // RTLIB::ATAN2_F80
  RTLIB::atan2_f128, // RTLIB::ATAN2_F128
  RTLIB::atan2_ppcf128, // RTLIB::ATAN2_PPCF128
  RTLIB::atanf, // RTLIB::ATAN_F32
  RTLIB::atan, // RTLIB::ATAN_F64
  RTLIB::atan_f80, // RTLIB::ATAN_F80
  RTLIB::atan_f128, // RTLIB::ATAN_F128
  RTLIB::atan_ppcf128, // RTLIB::ATAN_PPCF128
  RTLIB::__atomic_compare_exchange, // RTLIB::ATOMIC_COMPARE_EXCHANGE
  RTLIB::__atomic_compare_exchange_1, // RTLIB::ATOMIC_COMPARE_EXCHANGE_1
  RTLIB::__atomic_compare_exchange_2, // RTLIB::ATOMIC_COMPARE_EXCHANGE_2
  RTLIB::__atomic_compare_exchange_4, // RTLIB::ATOMIC_COMPARE_EXCHANGE_4
  RTLIB::__atomic_compare_exchange_8, // RTLIB::ATOMIC_COMPARE_EXCHANGE_8
  RTLIB::__atomic_compare_exchange_16, // RTLIB::ATOMIC_COMPARE_EXCHANGE_16
  RTLIB::__atomic_exchange, // RTLIB::ATOMIC_EXCHANGE
  RTLIB::__atomic_exchange_1, // RTLIB::ATOMIC_EXCHANGE_1
  RTLIB::__atomic_exchange_2, // RTLIB::ATOMIC_EXCHANGE_2
  RTLIB::__atomic_exchange_4, // RTLIB::ATOMIC_EXCHANGE_4
  RTLIB::__atomic_exchange_8, // RTLIB::ATOMIC_EXCHANGE_8
  RTLIB::__atomic_exchange_16, // RTLIB::ATOMIC_EXCHANGE_16
  RTLIB::__atomic_fetch_add_1, // RTLIB::ATOMIC_FETCH_ADD_1
  RTLIB::__atomic_fetch_add_2, // RTLIB::ATOMIC_FETCH_ADD_2
  RTLIB::__atomic_fetch_add_4, // RTLIB::ATOMIC_FETCH_ADD_4
  RTLIB::__atomic_fetch_add_8, // RTLIB::ATOMIC_FETCH_ADD_8
  RTLIB::__atomic_fetch_add_16, // RTLIB::ATOMIC_FETCH_ADD_16
  RTLIB::__atomic_fetch_and_1, // RTLIB::ATOMIC_FETCH_AND_1
  RTLIB::__atomic_fetch_and_2, // RTLIB::ATOMIC_FETCH_AND_2
  RTLIB::__atomic_fetch_and_4, // RTLIB::ATOMIC_FETCH_AND_4
  RTLIB::__atomic_fetch_and_8, // RTLIB::ATOMIC_FETCH_AND_8
  RTLIB::__atomic_fetch_and_16, // RTLIB::ATOMIC_FETCH_AND_16
  RTLIB::__atomic_fetch_nand_1, // RTLIB::ATOMIC_FETCH_NAND_1
  RTLIB::__atomic_fetch_nand_2, // RTLIB::ATOMIC_FETCH_NAND_2
  RTLIB::__atomic_fetch_nand_4, // RTLIB::ATOMIC_FETCH_NAND_4
  RTLIB::__atomic_fetch_nand_8, // RTLIB::ATOMIC_FETCH_NAND_8
  RTLIB::__atomic_fetch_nand_16, // RTLIB::ATOMIC_FETCH_NAND_16
  RTLIB::__atomic_fetch_or_1, // RTLIB::ATOMIC_FETCH_OR_1
  RTLIB::__atomic_fetch_or_2, // RTLIB::ATOMIC_FETCH_OR_2
  RTLIB::__atomic_fetch_or_4, // RTLIB::ATOMIC_FETCH_OR_4
  RTLIB::__atomic_fetch_or_8, // RTLIB::ATOMIC_FETCH_OR_8
  RTLIB::__atomic_fetch_or_16, // RTLIB::ATOMIC_FETCH_OR_16
  RTLIB::__atomic_fetch_sub_1, // RTLIB::ATOMIC_FETCH_SUB_1
  RTLIB::__atomic_fetch_sub_2, // RTLIB::ATOMIC_FETCH_SUB_2
  RTLIB::__atomic_fetch_sub_4, // RTLIB::ATOMIC_FETCH_SUB_4
  RTLIB::__atomic_fetch_sub_8, // RTLIB::ATOMIC_FETCH_SUB_8
  RTLIB::__atomic_fetch_sub_16, // RTLIB::ATOMIC_FETCH_SUB_16
  RTLIB::__atomic_fetch_xor_1, // RTLIB::ATOMIC_FETCH_XOR_1
  RTLIB::__atomic_fetch_xor_2, // RTLIB::ATOMIC_FETCH_XOR_2
  RTLIB::__atomic_fetch_xor_4, // RTLIB::ATOMIC_FETCH_XOR_4
  RTLIB::__atomic_fetch_xor_8, // RTLIB::ATOMIC_FETCH_XOR_8
  RTLIB::__atomic_fetch_xor_16, // RTLIB::ATOMIC_FETCH_XOR_16
  RTLIB::__atomic_load, // RTLIB::ATOMIC_LOAD
  RTLIB::__atomic_load_1, // RTLIB::ATOMIC_LOAD_1
  RTLIB::__atomic_load_2, // RTLIB::ATOMIC_LOAD_2
  RTLIB::__atomic_load_4, // RTLIB::ATOMIC_LOAD_4
  RTLIB::__atomic_load_8, // RTLIB::ATOMIC_LOAD_8
  RTLIB::__atomic_load_16, // RTLIB::ATOMIC_LOAD_16
  RTLIB::__atomic_store, // RTLIB::ATOMIC_STORE
  RTLIB::__atomic_store_1, // RTLIB::ATOMIC_STORE_1
  RTLIB::__atomic_store_2, // RTLIB::ATOMIC_STORE_2
  RTLIB::__atomic_store_4, // RTLIB::ATOMIC_STORE_4
  RTLIB::__atomic_store_8, // RTLIB::ATOMIC_STORE_8
  RTLIB::__atomic_store_16, // RTLIB::ATOMIC_STORE_16
  RTLIB::Unsupported, // RTLIB::BZERO
  RTLIB::calloc, // RTLIB::CALLOC
  RTLIB::cbrtf, // RTLIB::CBRT_F32
  RTLIB::cbrt, // RTLIB::CBRT_F64
  RTLIB::cbrt_f80, // RTLIB::CBRT_F80
  RTLIB::cbrt_f128, // RTLIB::CBRT_F128
  RTLIB::cbrt_ppcf128, // RTLIB::CBRT_PPCF128
  RTLIB::ceilf, // RTLIB::CEIL_F32
  RTLIB::ceil, // RTLIB::CEIL_F64
  RTLIB::ceil_f80, // RTLIB::CEIL_F80
  RTLIB::ceil_f128, // RTLIB::CEIL_F128
  RTLIB::ceil_ppcf128, // RTLIB::CEIL_PPCF128
  RTLIB::__clear_cache, // RTLIB::CLEAR_CACHE
  RTLIB::__extendkftf2, // RTLIB::CONVERT_F128_PPCF128
  RTLIB::__trunctfkf2, // RTLIB::CONVERT_PPCF128_F128
  RTLIB::copysignf, // RTLIB::COPYSIGN_F32
  RTLIB::copysign, // RTLIB::COPYSIGN_F64
  RTLIB::copysign_f80, // RTLIB::COPYSIGN_F80
  RTLIB::copysign_f128, // RTLIB::COPYSIGN_F128
  RTLIB::copysign_ppcf128, // RTLIB::COPYSIGN_PPCF128
  RTLIB::coshf, // RTLIB::COSH_F32
  RTLIB::cosh, // RTLIB::COSH_F64
  RTLIB::cosh_f80, // RTLIB::COSH_F80
  RTLIB::cosh_f128, // RTLIB::COSH_F128
  RTLIB::cosh_ppcf128, // RTLIB::COSH_PPCF128
  RTLIB::cosf, // RTLIB::COS_F32
  RTLIB::cos, // RTLIB::COS_F64
  RTLIB::cos_f80, // RTLIB::COS_F80
  RTLIB::cos_f128, // RTLIB::COS_F128
  RTLIB::cos_ppcf128, // RTLIB::COS_PPCF128
  RTLIB::__clzsi2, // RTLIB::CTLZ_I32
  RTLIB::__clzdi2, // RTLIB::CTLZ_I64
  RTLIB::__clzti2, // RTLIB::CTLZ_I128
  RTLIB::__popcountsi2, // RTLIB::CTPOP_I32
  RTLIB::__popcountdi2, // RTLIB::CTPOP_I64
  RTLIB::__popcountti2, // RTLIB::CTPOP_I128
  RTLIB::__cxa_end_cleanup, // RTLIB::CXA_END_CLEANUP
  RTLIB::__llvm_deoptimize, // RTLIB::DEOPTIMIZE
  RTLIB::__divsf3, // RTLIB::DIV_F32
  RTLIB::__divdf3, // RTLIB::DIV_F64
  RTLIB::__divxf3, // RTLIB::DIV_F80
  RTLIB::__divtf3, // RTLIB::DIV_F128
  RTLIB::__gcc_qdiv, // RTLIB::DIV_PPCF128
  RTLIB::exp2f, // RTLIB::EXP2_F32
  RTLIB::exp2, // RTLIB::EXP2_F64
  RTLIB::exp2_f80, // RTLIB::EXP2_F80
  RTLIB::exp2_f128, // RTLIB::EXP2_F128
  RTLIB::__exp2f_finite, // RTLIB::EXP2_FINITE_F32
  RTLIB::__exp2_finite, // RTLIB::EXP2_FINITE_F64
  RTLIB::__exp2l_finite_f80, // RTLIB::EXP2_FINITE_F80
  RTLIB::__exp2l_finite_f128, // RTLIB::EXP2_FINITE_F128
  RTLIB::__exp2l_finite_ppcf128, // RTLIB::EXP2_FINITE_PPCF128
  RTLIB::exp2_ppcf128, // RTLIB::EXP2_PPCF128
  RTLIB::exp10f, // RTLIB::EXP10_F32
  RTLIB::exp10, // RTLIB::EXP10_F64
  RTLIB::exp10l_f80, // RTLIB::EXP10_F80
  RTLIB::exp10l_f128, // RTLIB::EXP10_F128
  RTLIB::Unsupported, // RTLIB::EXP10_FINITE_F32
  RTLIB::Unsupported, // RTLIB::EXP10_FINITE_F64
  RTLIB::Unsupported, // RTLIB::EXP10_FINITE_F80
  RTLIB::Unsupported, // RTLIB::EXP10_FINITE_F128
  RTLIB::Unsupported, // RTLIB::EXP10_FINITE_PPCF128
  RTLIB::exp10l_ppcf128, // RTLIB::EXP10_PPCF128
  RTLIB::expf, // RTLIB::EXP_F32
  RTLIB::exp, // RTLIB::EXP_F64
  RTLIB::exp_f80, // RTLIB::EXP_F80
  RTLIB::exp_f128, // RTLIB::EXP_F128
  RTLIB::__expf_finite, // RTLIB::EXP_FINITE_F32
  RTLIB::__exp_finite, // RTLIB::EXP_FINITE_F64
  RTLIB::__expl_finite_f80, // RTLIB::EXP_FINITE_F80
  RTLIB::__expl_finite_f128, // RTLIB::EXP_FINITE_F128
  RTLIB::__expl_finite_ppcf128, // RTLIB::EXP_FINITE_PPCF128
  RTLIB::exp_ppcf128, // RTLIB::EXP_PPCF128
  RTLIB::Unsupported, // RTLIB::FAST_ADD_F32
  RTLIB::Unsupported, // RTLIB::FAST_ADD_F64
  RTLIB::Unsupported, // RTLIB::FAST_ADD_F80
  RTLIB::Unsupported, // RTLIB::FAST_ADD_F128
  RTLIB::Unsupported, // RTLIB::FAST_ADD_PPCF128
  RTLIB::Unsupported, // RTLIB::FAST_DIV_F32
  RTLIB::Unsupported, // RTLIB::FAST_DIV_F64
  RTLIB::Unsupported, // RTLIB::FAST_DIV_F80
  RTLIB::Unsupported, // RTLIB::FAST_DIV_F128
  RTLIB::Unsupported, // RTLIB::FAST_DIV_PPCF128
  RTLIB::Unsupported, // RTLIB::FAST_MUL_F32
  RTLIB::Unsupported, // RTLIB::FAST_MUL_F64
  RTLIB::Unsupported, // RTLIB::FAST_MUL_F80
  RTLIB::Unsupported, // RTLIB::FAST_MUL_F128
  RTLIB::Unsupported, // RTLIB::FAST_MUL_PPCF128
  RTLIB::Unsupported, // RTLIB::FAST_SQRT_F32
  RTLIB::Unsupported, // RTLIB::FAST_SQRT_F64
  RTLIB::Unsupported, // RTLIB::FAST_SQRT_F80
  RTLIB::Unsupported, // RTLIB::FAST_SQRT_F128
  RTLIB::Unsupported, // RTLIB::FAST_SQRT_PPCF128
  RTLIB::Unsupported, // RTLIB::FAST_SUB_F32
  RTLIB::Unsupported, // RTLIB::FAST_SUB_F64
  RTLIB::Unsupported, // RTLIB::FAST_SUB_F80
  RTLIB::Unsupported, // RTLIB::FAST_SUB_F128
  RTLIB::Unsupported, // RTLIB::FAST_SUB_PPCF128
  RTLIB::fegetenv, // RTLIB::FEGETENV
  RTLIB::fegetmode, // RTLIB::FEGETMODE
  RTLIB::fesetenv, // RTLIB::FESETENV
  RTLIB::fesetmode, // RTLIB::FESETMODE
  RTLIB::floorf, // RTLIB::FLOOR_F32
  RTLIB::floor, // RTLIB::FLOOR_F64
  RTLIB::floor_f80, // RTLIB::FLOOR_F80
  RTLIB::floor_f128, // RTLIB::FLOOR_F128
  RTLIB::floor_ppcf128, // RTLIB::FLOOR_PPCF128
  RTLIB::fmaximumf, // RTLIB::FMAXIMUM_F32
  RTLIB::fmaximum, // RTLIB::FMAXIMUM_F64
  RTLIB::fmaximum_f80, // RTLIB::FMAXIMUM_F80
  RTLIB::fmaximum_f128, // RTLIB::FMAXIMUM_F128
  RTLIB::fmaximum_numf, // RTLIB::FMAXIMUM_NUM_F32
  RTLIB::fmaximum_num, // RTLIB::FMAXIMUM_NUM_F64
  RTLIB::fmaximum_num_f80, // RTLIB::FMAXIMUM_NUM_F80
  RTLIB::fmaximum_num_f128, // RTLIB::FMAXIMUM_NUM_F128
  RTLIB::fmaximum_num_ppcf128, // RTLIB::FMAXIMUM_NUM_PPCF128
  RTLIB::fmaximum_ppcf128, // RTLIB::FMAXIMUM_PPCF128
  RTLIB::fmaxf, // RTLIB::FMAX_F32
  RTLIB::fmax, // RTLIB::FMAX_F64
  RTLIB::fmax_f80, // RTLIB::FMAX_F80
  RTLIB::fmax_f128, // RTLIB::FMAX_F128
  RTLIB::fmax_ppcf128, // RTLIB::FMAX_PPCF128
  RTLIB::fmaf, // RTLIB::FMA_F32
  RTLIB::fma, // RTLIB::FMA_F64
  RTLIB::fma_f80, // RTLIB::FMA_F80
  RTLIB::fma_f128, // RTLIB::FMA_F128
  RTLIB::fma_ppcf128, // RTLIB::FMA_PPCF128
  RTLIB::fminimumf, // RTLIB::FMINIMUM_F32
  RTLIB::fminimum, // RTLIB::FMINIMUM_F64
  RTLIB::fminimum_f80, // RTLIB::FMINIMUM_F80
  RTLIB::fminimum_f128, // RTLIB::FMINIMUM_F128
  RTLIB::fminimum_numf, // RTLIB::FMINIMUM_NUM_F32
  RTLIB::fminimum_num, // RTLIB::FMINIMUM_NUM_F64
  RTLIB::fminimum_num_f80, // RTLIB::FMINIMUM_NUM_F80
  RTLIB::fminimum_num_f128, // RTLIB::FMINIMUM_NUM_F128
  RTLIB::fminimum_num_ppcf128, // RTLIB::FMINIMUM_NUM_PPCF128
  RTLIB::fminimum_ppcf128, // RTLIB::FMINIMUM_PPCF128
  RTLIB::fminf, // RTLIB::FMIN_F32
  RTLIB::fmin, // RTLIB::FMIN_F64
  RTLIB::fmin_f80, // RTLIB::FMIN_F80
  RTLIB::fmin_f128, // RTLIB::FMIN_F128
  RTLIB::fmin_ppcf128, // RTLIB::FMIN_PPCF128
  RTLIB::__extendbfsf2, // RTLIB::FPEXT_BF16_F32
  RTLIB::__extendhfsf2, // RTLIB::FPEXT_F16_F32
  RTLIB::__extendhfdf2, // RTLIB::FPEXT_F16_F64
  RTLIB::__extendhfxf2, // RTLIB::FPEXT_F16_F80
  RTLIB::__extendhftf2, // RTLIB::FPEXT_F16_F128
  RTLIB::__extendsfdf2, // RTLIB::FPEXT_F32_F64
  RTLIB::__extendsftf2, // RTLIB::FPEXT_F32_F128
  RTLIB::__gcc_stoq, // RTLIB::FPEXT_F32_PPCF128
  RTLIB::__extenddftf2, // RTLIB::FPEXT_F64_F128
  RTLIB::__gcc_dtoq, // RTLIB::FPEXT_F64_PPCF128
  RTLIB::__extendxftf2, // RTLIB::FPEXT_F80_F128
  RTLIB::__truncsfbf2, // RTLIB::FPROUND_F32_BF16
  RTLIB::__truncsfhf2, // RTLIB::FPROUND_F32_F16
  RTLIB::__truncdfbf2, // RTLIB::FPROUND_F64_BF16
  RTLIB::__truncdfhf2, // RTLIB::FPROUND_F64_F16
  RTLIB::__truncdfsf2, // RTLIB::FPROUND_F64_F32
  RTLIB::__truncxfbf2, // RTLIB::FPROUND_F80_BF16
  RTLIB::__truncxfhf2, // RTLIB::FPROUND_F80_F16
  RTLIB::__truncxfsf2, // RTLIB::FPROUND_F80_F32
  RTLIB::__truncxfdf2, // RTLIB::FPROUND_F80_F64
  RTLIB::__trunctfbf2, // RTLIB::FPROUND_F128_BF16
  RTLIB::__trunctfhf2_f128, // RTLIB::FPROUND_F128_F16
  RTLIB::__trunctfsf2, // RTLIB::FPROUND_F128_F32
  RTLIB::__trunctfdf2, // RTLIB::FPROUND_F128_F64
  RTLIB::__trunctfxf2, // RTLIB::FPROUND_F128_F80
  RTLIB::__trunctfhf2_ppcf128, // RTLIB::FPROUND_PPCF128_F16
  RTLIB::__gcc_qtos, // RTLIB::FPROUND_PPCF128_F32
  RTLIB::__gcc_qtod, // RTLIB::FPROUND_PPCF128_F64
  RTLIB::__fixhfsi, // RTLIB::FPTOSINT_F16_I32
  RTLIB::__fixhfdi, // RTLIB::FPTOSINT_F16_I64
  RTLIB::__fixhfti, // RTLIB::FPTOSINT_F16_I128
  RTLIB::__fixsfsi, // RTLIB::FPTOSINT_F32_I32
  RTLIB::__fixsfdi, // RTLIB::FPTOSINT_F32_I64
  RTLIB::__fixsfti, // RTLIB::FPTOSINT_F32_I128
  RTLIB::__fixdfsi, // RTLIB::FPTOSINT_F64_I32
  RTLIB::__fixdfdi, // RTLIB::FPTOSINT_F64_I64
  RTLIB::__fixdfti, // RTLIB::FPTOSINT_F64_I128
  RTLIB::__fixxfsi, // RTLIB::FPTOSINT_F80_I32
  RTLIB::__fixxfdi, // RTLIB::FPTOSINT_F80_I64
  RTLIB::__fixxfti, // RTLIB::FPTOSINT_F80_I128
  RTLIB::__fixtfsi, // RTLIB::FPTOSINT_F128_I32
  RTLIB::__fixtfdi_f128, // RTLIB::FPTOSINT_F128_I64
  RTLIB::__fixtfti_f128, // RTLIB::FPTOSINT_F128_I128
  RTLIB::__gcc_qtou, // RTLIB::FPTOSINT_PPCF128_I32
  RTLIB::__fixtfdi_ppcf128, // RTLIB::FPTOSINT_PPCF128_I64
  RTLIB::__fixtfti_ppcf128, // RTLIB::FPTOSINT_PPCF128_I128
  RTLIB::__fixunshfsi, // RTLIB::FPTOUINT_F16_I32
  RTLIB::__fixunshfdi, // RTLIB::FPTOUINT_F16_I64
  RTLIB::__fixunshfti, // RTLIB::FPTOUINT_F16_I128
  RTLIB::__fixunssfsi, // RTLIB::FPTOUINT_F32_I32
  RTLIB::__fixunssfdi, // RTLIB::FPTOUINT_F32_I64
  RTLIB::__fixunssfti, // RTLIB::FPTOUINT_F32_I128
  RTLIB::__fixunsdfsi, // RTLIB::FPTOUINT_F64_I32
  RTLIB::__fixunsdfdi, // RTLIB::FPTOUINT_F64_I64
  RTLIB::__fixunsdfti, // RTLIB::FPTOUINT_F64_I128
  RTLIB::__fixunsxfsi, // RTLIB::FPTOUINT_F80_I32
  RTLIB::__fixunsxfdi, // RTLIB::FPTOUINT_F80_I64
  RTLIB::__fixunsxfti, // RTLIB::FPTOUINT_F80_I128
  RTLIB::__fixunstfsi_f128, // RTLIB::FPTOUINT_F128_I32
  RTLIB::__fixunstfdi_f128, // RTLIB::FPTOUINT_F128_I64
  RTLIB::__fixunstfti_f128, // RTLIB::FPTOUINT_F128_I128
  RTLIB::__fixunstfsi_ppcf128, // RTLIB::FPTOUINT_PPCF128_I32
  RTLIB::__fixunstfdi_ppcf128, // RTLIB::FPTOUINT_PPCF128_I64
  RTLIB::__fixunstfti_ppcf128, // RTLIB::FPTOUINT_PPCF128_I128
  RTLIB::frexpf, // RTLIB::FREXP_F32
  RTLIB::frexp, // RTLIB::FREXP_F64
  RTLIB::frexp_f80, // RTLIB::FREXP_F80
  RTLIB::frexp_f128, // RTLIB::FREXP_F128
  RTLIB::frexp_ppcf128, // RTLIB::FREXP_PPCF128
  RTLIB::Unsupported, // RTLIB::HEXAGON_MEMCPY_LIKELY_ALIGNED_MIN32BYTES_MULT8BYTES
  RTLIB::ldexpf, // RTLIB::LDEXP_F32
  RTLIB::ldexp, // RTLIB::LDEXP_F64
  RTLIB::ldexp_f80, // RTLIB::LDEXP_F80
  RTLIB::ldexp_f128, // RTLIB::LDEXP_F128
  RTLIB::ldexp_ppcf128, // RTLIB::LDEXP_PPCF128
  RTLIB::llrintf, // RTLIB::LLRINT_F32
  RTLIB::llrint, // RTLIB::LLRINT_F64
  RTLIB::llrint_f80, // RTLIB::LLRINT_F80
  RTLIB::llrint_f128, // RTLIB::LLRINT_F128
  RTLIB::llrint_ppcf128, // RTLIB::LLRINT_PPCF128
  RTLIB::llroundf, // RTLIB::LLROUND_F32
  RTLIB::llround, // RTLIB::LLROUND_F64
  RTLIB::llround_f80, // RTLIB::LLROUND_F80
  RTLIB::llround_f128, // RTLIB::LLROUND_F128
  RTLIB::llround_ppcf128, // RTLIB::LLROUND_PPCF128
  RTLIB::log2f, // RTLIB::LOG2_F32
  RTLIB::log2, // RTLIB::LOG2_F64
  RTLIB::log2_f80, // RTLIB::LOG2_F80
  RTLIB::log2_f128, // RTLIB::LOG2_F128
  RTLIB::__log2f_finite, // RTLIB::LOG2_FINITE_F32
  RTLIB::__log2_finite, // RTLIB::LOG2_FINITE_F64
  RTLIB::__log2l_finite_f80, // RTLIB::LOG2_FINITE_F80
  RTLIB::__log2l_finite_f128, // RTLIB::LOG2_FINITE_F128
  RTLIB::__log2l_finite_ppcf128, // RTLIB::LOG2_FINITE_PPCF128
  RTLIB::log2_ppcf128, // RTLIB::LOG2_PPCF128
  RTLIB::log10f, // RTLIB::LOG10_F32
  RTLIB::log10, // RTLIB::LOG10_F64
  RTLIB::log10_f80, // RTLIB::LOG10_F80
  RTLIB::log10_f128, // RTLIB::LOG10_F128
  RTLIB::__log10f_finite, // RTLIB::LOG10_FINITE_F32
  RTLIB::__log10_finite, // RTLIB::LOG10_FINITE_F64
  RTLIB::__log10l_finite_f80, // RTLIB::LOG10_FINITE_F80
  RTLIB::__log10l_finite_f128, // RTLIB::LOG10_FINITE_F128
  RTLIB::__log10l_finite_ppcf128, // RTLIB::LOG10_FINITE_PPCF128
  RTLIB::log10_ppcf128, // RTLIB::LOG10_PPCF128
  RTLIB::logf, // RTLIB::LOG_F32
  RTLIB::log, // RTLIB::LOG_F64
  RTLIB::log_f80, // RTLIB::LOG_F80
  RTLIB::log_f128, // RTLIB::LOG_F128
  RTLIB::__logf_finite, // RTLIB::LOG_FINITE_F32
  RTLIB::__log_finite, // RTLIB::LOG_FINITE_F64
  RTLIB::__logl_finite_f80, // RTLIB::LOG_FINITE_F80
  RTLIB::__logl_finite_f128, // RTLIB::LOG_FINITE_F128
  RTLIB::__logl_finite_ppcf128, // RTLIB::LOG_FINITE_PPCF128
  RTLIB::log_ppcf128, // RTLIB::LOG_PPCF128
  RTLIB::lrintf, // RTLIB::LRINT_F32
  RTLIB::lrint, // RTLIB::LRINT_F64
  RTLIB::lrint_f80, // RTLIB::LRINT_F80
  RTLIB::lrint_f128, // RTLIB::LRINT_F128
  RTLIB::lrint_ppcf128, // RTLIB::LRINT_PPCF128
  RTLIB::lroundf, // RTLIB::LROUND_F32
  RTLIB::lround, // RTLIB::LROUND_F64
  RTLIB::lround_f80, // RTLIB::LROUND_F80
  RTLIB::lround_f128, // RTLIB::LROUND_F128
  RTLIB::lround_ppcf128, // RTLIB::LROUND_PPCF128
  RTLIB::memcpy, // RTLIB::MEMCPY
  RTLIB::Unsupported, // RTLIB::MEMCPY_ALIGN_4
  RTLIB::__llvm_memcpy_element_unordered_atomic_1, // RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1
  RTLIB::__llvm_memcpy_element_unordered_atomic_2, // RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2
  RTLIB::__llvm_memcpy_element_unordered_atomic_4, // RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4
  RTLIB::__llvm_memcpy_element_unordered_atomic_8, // RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8
  RTLIB::__llvm_memcpy_element_unordered_atomic_16, // RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16
  RTLIB::memmove, // RTLIB::MEMMOVE
  RTLIB::__llvm_memmove_element_unordered_atomic_1, // RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1
  RTLIB::__llvm_memmove_element_unordered_atomic_2, // RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2
  RTLIB::__llvm_memmove_element_unordered_atomic_4, // RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4
  RTLIB::__llvm_memmove_element_unordered_atomic_8, // RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8
  RTLIB::__llvm_memmove_element_unordered_atomic_16, // RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16
  RTLIB::memset, // RTLIB::MEMSET
  RTLIB::__llvm_memset_element_unordered_atomic_1, // RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1
  RTLIB::__llvm_memset_element_unordered_atomic_2, // RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2
  RTLIB::__llvm_memset_element_unordered_atomic_4, // RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4
  RTLIB::__llvm_memset_element_unordered_atomic_8, // RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8
  RTLIB::__llvm_memset_element_unordered_atomic_16, // RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16
  RTLIB::Unsupported, // RTLIB::MIPS16_RET_DC
  RTLIB::Unsupported, // RTLIB::MIPS16_RET_DF
  RTLIB::Unsupported, // RTLIB::MIPS16_RET_SC
  RTLIB::Unsupported, // RTLIB::MIPS16_RET_SF
  RTLIB::modff, // RTLIB::MODF_F32
  RTLIB::modf, // RTLIB::MODF_F64
  RTLIB::modf_f80, // RTLIB::MODF_F80
  RTLIB::modf_f128, // RTLIB::MODF_F128
  RTLIB::modf_ppcf128, // RTLIB::MODF_PPCF128
  RTLIB::__mulosi4, // RTLIB::MULO_I32
  RTLIB::Unsupported, // RTLIB::MULO_I64
  RTLIB::Unsupported, // RTLIB::MULO_I128
  RTLIB::__mulsf3, // RTLIB::MUL_F32
  RTLIB::__muldf3, // RTLIB::MUL_F64
  RTLIB::__mulxf3, // RTLIB::MUL_F80
  RTLIB::__multf3, // RTLIB::MUL_F128
  RTLIB::__mulqi3, // RTLIB::MUL_I8
  RTLIB::__mulhi3, // RTLIB::MUL_I16
  RTLIB::__mulsi3, // RTLIB::MUL_I32
  RTLIB::__muldi3, // RTLIB::MUL_I64
  RTLIB::Unsupported, // RTLIB::MUL_I128
  RTLIB::__gcc_qmul, // RTLIB::MUL_PPCF128
  RTLIB::nearbyintf, // RTLIB::NEARBYINT_F32
  RTLIB::nearbyint, // RTLIB::NEARBYINT_F64
  RTLIB::nearbyint_f80, // RTLIB::NEARBYINT_F80
  RTLIB::nearbyint_f128, // RTLIB::NEARBYINT_F128
  RTLIB::nearbyint_ppcf128, // RTLIB::NEARBYINT_PPCF128
  RTLIB::__negsi2, // RTLIB::NEG_I32
  RTLIB::__negdi2, // RTLIB::NEG_I64
  RTLIB::Unsupported, // RTLIB::OBJC_AUTORELEASE
  RTLIB::Unsupported, // RTLIB::OBJC_AUTORELEASEPOOLPOP
  RTLIB::Unsupported, // RTLIB::OBJC_AUTORELEASEPOOLPUSH
  RTLIB::Unsupported, // RTLIB::OBJC_AUTORELEASERETURNVALUE
  RTLIB::Unsupported, // RTLIB::OBJC_CLAIMAUTORELEASEDRETURNVALUE
  RTLIB::Unsupported, // RTLIB::OBJC_COPYWEAK
  RTLIB::Unsupported, // RTLIB::OBJC_DESTROYWEAK
  RTLIB::Unsupported, // RTLIB::OBJC_INITWEAK
  RTLIB::Unsupported, // RTLIB::OBJC_LOADWEAK
  RTLIB::Unsupported, // RTLIB::OBJC_LOADWEAKRETAINED
  RTLIB::Unsupported, // RTLIB::OBJC_MOVEWEAK
  RTLIB::Unsupported, // RTLIB::OBJC_RELEASE
  RTLIB::Unsupported, // RTLIB::OBJC_RETAIN
  RTLIB::Unsupported, // RTLIB::OBJC_RETAINAUTORELEASE
  RTLIB::Unsupported, // RTLIB::OBJC_RETAINAUTORELEASEDRETURNVALUE
  RTLIB::Unsupported, // RTLIB::OBJC_RETAINAUTORELEASERETURNVALUE
  RTLIB::Unsupported, // RTLIB::OBJC_RETAINBLOCK
  RTLIB::Unsupported, // RTLIB::OBJC_RETAINEDOBJECT
  RTLIB::Unsupported, // RTLIB::OBJC_RETAIN_AUTORELEASE
  RTLIB::Unsupported, // RTLIB::OBJC_STORESTRONG
  RTLIB::Unsupported, // RTLIB::OBJC_STOREWEAK
  RTLIB::Unsupported, // RTLIB::OBJC_SYNC_ENTER
  RTLIB::Unsupported, // RTLIB::OBJC_SYNC_EXIT
  RTLIB::Unsupported, // RTLIB::OBJC_UNRETAINEDOBJECT
  RTLIB::Unsupported, // RTLIB::OBJC_UNRETAINEDPOINTER
  RTLIB::Unsupported, // RTLIB::OBJC_UNSAFECLAIMAUTORELEASEDRETURNVALUE
  RTLIB::__eqsf2, // RTLIB::OEQ_F32
  RTLIB::__eqdf2, // RTLIB::OEQ_F64
  RTLIB::__eqtf2, // RTLIB::OEQ_F128
  RTLIB::__gcc_qeq, // RTLIB::OEQ_PPCF128
  RTLIB::__gesf2, // RTLIB::OGE_F32
  RTLIB::__gedf2, // RTLIB::OGE_F64
  RTLIB::__getf2, // RTLIB::OGE_F128
  RTLIB::__gcc_qge, // RTLIB::OGE_PPCF128
  RTLIB::__gtsf2, // RTLIB::OGT_F32
  RTLIB::__gtdf2, // RTLIB::OGT_F64
  RTLIB::__gttf2, // RTLIB::OGT_F128
  RTLIB::__gcc_qgt, // RTLIB::OGT_PPCF128
  RTLIB::__lesf2, // RTLIB::OLE_F32
  RTLIB::__ledf2, // RTLIB::OLE_F64
  RTLIB::__letf2, // RTLIB::OLE_F128
  RTLIB::__gcc_qle, // RTLIB::OLE_PPCF128
  RTLIB::__ltsf2, // RTLIB::OLT_F32
  RTLIB::__ltdf2, // RTLIB::OLT_F64
  RTLIB::__lttf2, // RTLIB::OLT_F128
  RTLIB::__gcc_qlt, // RTLIB::OLT_PPCF128
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS1_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS1_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS1_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS1_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS2_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS2_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS2_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS2_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS4_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS4_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS4_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS4_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS8_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS8_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS8_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS8_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS16_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS16_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS16_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS16_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD1_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD1_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD2_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD2_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD4_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD4_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD8_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD8_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD16_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD16_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD16_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD16_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR1_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR1_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR2_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR2_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR4_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR4_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR8_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR8_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR16_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR16_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR16_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR16_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR1_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR1_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR2_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR2_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR4_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR4_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR8_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR8_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR16_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR16_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR16_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR16_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET1_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET1_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET2_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET2_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET4_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET4_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET8_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET8_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET16_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET16_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET16_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET16_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP1_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP1_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP1_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP1_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP2_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP2_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP2_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP2_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP4_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP4_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP4_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP4_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP8_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP8_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP8_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP8_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP16_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP16_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP16_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP16_RELAX
  RTLIB::__powisf2, // RTLIB::POWI_F32
  RTLIB::__powidf2, // RTLIB::POWI_F64
  RTLIB::__powixf2, // RTLIB::POWI_F80
  RTLIB::__powitf2_f128, // RTLIB::POWI_F128
  RTLIB::__powitf2_ppc128, // RTLIB::POWI_PPCF128
  RTLIB::powf, // RTLIB::POW_F32
  RTLIB::pow, // RTLIB::POW_F64
  RTLIB::pow_f80, // RTLIB::POW_F80
  RTLIB::pow_f128, // RTLIB::POW_F128
  RTLIB::__powf_finite, // RTLIB::POW_FINITE_F32
  RTLIB::__pow_finite, // RTLIB::POW_FINITE_F64
  RTLIB::__powl_finite_f80, // RTLIB::POW_FINITE_F80
  RTLIB::__powl_finite_f128, // RTLIB::POW_FINITE_F128
  RTLIB::__powl_finite_ppcf128, // RTLIB::POW_FINITE_PPCF128
  RTLIB::pow_ppcf128, // RTLIB::POW_PPCF128
  RTLIB::fmodf, // RTLIB::REM_F32
  RTLIB::fmod, // RTLIB::REM_F64
  RTLIB::fmodl_f80, // RTLIB::REM_F80
  RTLIB::fmodl_f128, // RTLIB::REM_F128
  RTLIB::fmodl_ppc128, // RTLIB::REM_PPCF128
  RTLIB::Unsupported, // RTLIB::RETURN_ADDRESS
  RTLIB::rintf, // RTLIB::RINT_F32
  RTLIB::rint, // RTLIB::RINT_F64
  RTLIB::rint_f80, // RTLIB::RINT_F80
  RTLIB::rint_f128, // RTLIB::RINT_F128
  RTLIB::rint_ppcf128, // RTLIB::RINT_PPCF128
  RTLIB::Unsupported, // RTLIB::RISCV_FLUSH_ICACHE
  RTLIB::roundevenf, // RTLIB::ROUNDEVEN_F32
  RTLIB::roundeven, // RTLIB::ROUNDEVEN_F64
  RTLIB::roundeven_f80, // RTLIB::ROUNDEVEN_F80
  RTLIB::roundeven_f128, // RTLIB::ROUNDEVEN_F128
  RTLIB::roundeven_ppcf128, // RTLIB::ROUNDEVEN_PPCF128
  RTLIB::roundf, // RTLIB::ROUND_F32
  RTLIB::round, // RTLIB::ROUND_F64
  RTLIB::round_f80, // RTLIB::ROUND_F80
  RTLIB::round_f128, // RTLIB::ROUND_F128
  RTLIB::round_ppcf128, // RTLIB::ROUND_PPCF128
  RTLIB::__safestack_pointer_address, // RTLIB::SAFESTACK_POINTER_ADDRESS
  RTLIB::Unsupported, // RTLIB::SC_MEMCPY
  RTLIB::Unsupported, // RTLIB::SC_MEMMOVE
  RTLIB::Unsupported, // RTLIB::SC_MEMSET
  RTLIB::Unsupported, // RTLIB::SDIVREM_I8
  RTLIB::Unsupported, // RTLIB::SDIVREM_I16
  RTLIB::Unsupported, // RTLIB::SDIVREM_I32
  RTLIB::Unsupported, // RTLIB::SDIVREM_I64
  RTLIB::Unsupported, // RTLIB::SDIVREM_I128
  RTLIB::__divqi3, // RTLIB::SDIV_I8
  RTLIB::__divhi3, // RTLIB::SDIV_I16
  RTLIB::__divsi3, // RTLIB::SDIV_I32
  RTLIB::__divdi3, // RTLIB::SDIV_I64
  RTLIB::__divti3, // RTLIB::SDIV_I128
  RTLIB::__ashlhi3, // RTLIB::SHL_I16
  RTLIB::__ashlsi3, // RTLIB::SHL_I32
  RTLIB::__ashldi3, // RTLIB::SHL_I64
  RTLIB::Unsupported, // RTLIB::SHL_I128
  RTLIB::sincospif, // RTLIB::SINCOSPI_F32
  RTLIB::sincospi, // RTLIB::SINCOSPI_F64
  RTLIB::sincospi_f80, // RTLIB::SINCOSPI_F80
  RTLIB::sincospi_f128, // RTLIB::SINCOSPI_F128
  RTLIB::sincospi_ppcf128, // RTLIB::SINCOSPI_PPCF128
  RTLIB::Unsupported, // RTLIB::SINCOS_F32
  RTLIB::Unsupported, // RTLIB::SINCOS_F64
  RTLIB::Unsupported, // RTLIB::SINCOS_F80
  RTLIB::Unsupported, // RTLIB::SINCOS_F128
  RTLIB::Unsupported, // RTLIB::SINCOS_PPCF128
  RTLIB::Unsupported, // RTLIB::SINCOS_STRET_F32
  RTLIB::Unsupported, // RTLIB::SINCOS_STRET_F64
  RTLIB::sinhf, // RTLIB::SINH_F32
  RTLIB::sinh, // RTLIB::SINH_F64
  RTLIB::sinh_f80, // RTLIB::SINH_F80
  RTLIB::sinh_f128, // RTLIB::SINH_F128
  RTLIB::sinh_ppcf128, // RTLIB::SINH_PPCF128
  RTLIB::__floatsihf, // RTLIB::SINTTOFP_I32_F16
  RTLIB::__floatsisf, // RTLIB::SINTTOFP_I32_F32
  RTLIB::__floatsidf, // RTLIB::SINTTOFP_I32_F64
  RTLIB::__floatsixf, // RTLIB::SINTTOFP_I32_F80
  RTLIB::__floatsitf, // RTLIB::SINTTOFP_I32_F128
  RTLIB::__gcc_itoq, // RTLIB::SINTTOFP_I32_PPCF128
  RTLIB::__floatdibf, // RTLIB::SINTTOFP_I64_BF16
  RTLIB::__floatdihf, // RTLIB::SINTTOFP_I64_F16
  RTLIB::__floatdisf, // RTLIB::SINTTOFP_I64_F32
  RTLIB::__floatdidf, // RTLIB::SINTTOFP_I64_F64
  RTLIB::__floatdixf, // RTLIB::SINTTOFP_I64_F80
  RTLIB::__floatditf_f128, // RTLIB::SINTTOFP_I64_F128
  RTLIB::__floatditf_ppcf128, // RTLIB::SINTTOFP_I64_PPCF128
  RTLIB::__floattihf, // RTLIB::SINTTOFP_I128_F16
  RTLIB::__floattisf, // RTLIB::SINTTOFP_I128_F32
  RTLIB::__floattidf, // RTLIB::SINTTOFP_I128_F64
  RTLIB::__floattixf, // RTLIB::SINTTOFP_I128_F80
  RTLIB::__floattitf_f128, // RTLIB::SINTTOFP_I128_F128
  RTLIB::__floattitf_ppcf128, // RTLIB::SINTTOFP_I128_PPCF128
  RTLIB::sinf, // RTLIB::SIN_F32
  RTLIB::sin, // RTLIB::SIN_F64
  RTLIB::sin_f80, // RTLIB::SIN_F80
  RTLIB::sin_f128, // RTLIB::SIN_F128
  RTLIB::sin_ppcf128, // RTLIB::SIN_PPCF128
  RTLIB::sqrtf, // RTLIB::SQRT_F32
  RTLIB::sqrt, // RTLIB::SQRT_F64
  RTLIB::sqrt_f80, // RTLIB::SQRT_F80
  RTLIB::sqrt_f128, // RTLIB::SQRT_F128
  RTLIB::sqrt_ppcf128, // RTLIB::SQRT_PPCF128
  RTLIB::__ashrhi3, // RTLIB::SRA_I16
  RTLIB::__ashrsi3, // RTLIB::SRA_I32
  RTLIB::__ashrdi3, // RTLIB::SRA_I64
  RTLIB::Unsupported, // RTLIB::SRA_I128
  RTLIB::__modqi3, // RTLIB::SREM_I8
  RTLIB::__modhi3, // RTLIB::SREM_I16
  RTLIB::__modsi3, // RTLIB::SREM_I32
  RTLIB::__moddi3, // RTLIB::SREM_I64
  RTLIB::__modti3, // RTLIB::SREM_I128
  RTLIB::__lshrhi3, // RTLIB::SRL_I16
  RTLIB::__lshrsi3, // RTLIB::SRL_I32
  RTLIB::__lshrdi3, // RTLIB::SRL_I64
  RTLIB::Unsupported, // RTLIB::SRL_I128
  RTLIB::__stack_chk_fail, // RTLIB::STACKPROTECTOR_CHECK_FAIL
  RTLIB::Unsupported, // RTLIB::STACK_SMASH_HANDLER
  RTLIB::__subsf3, // RTLIB::SUB_F32
  RTLIB::__subdf3, // RTLIB::SUB_F64
  RTLIB::__subxf3, // RTLIB::SUB_F80
  RTLIB::__subtf3, // RTLIB::SUB_F128
  RTLIB::__gcc_qsub, // RTLIB::SUB_PPCF128
  RTLIB::__sync_fetch_and_add_1, // RTLIB::SYNC_FETCH_AND_ADD_1
  RTLIB::__sync_fetch_and_add_2, // RTLIB::SYNC_FETCH_AND_ADD_2
  RTLIB::__sync_fetch_and_add_4, // RTLIB::SYNC_FETCH_AND_ADD_4
  RTLIB::__sync_fetch_and_add_8, // RTLIB::SYNC_FETCH_AND_ADD_8
  RTLIB::__sync_fetch_and_add_16, // RTLIB::SYNC_FETCH_AND_ADD_16
  RTLIB::__sync_fetch_and_and_1, // RTLIB::SYNC_FETCH_AND_AND_1
  RTLIB::__sync_fetch_and_and_2, // RTLIB::SYNC_FETCH_AND_AND_2
  RTLIB::__sync_fetch_and_and_4, // RTLIB::SYNC_FETCH_AND_AND_4
  RTLIB::__sync_fetch_and_and_8, // RTLIB::SYNC_FETCH_AND_AND_8
  RTLIB::__sync_fetch_and_and_16, // RTLIB::SYNC_FETCH_AND_AND_16
  RTLIB::__sync_fetch_and_max_1, // RTLIB::SYNC_FETCH_AND_MAX_1
  RTLIB::__sync_fetch_and_max_2, // RTLIB::SYNC_FETCH_AND_MAX_2
  RTLIB::__sync_fetch_and_max_4, // RTLIB::SYNC_FETCH_AND_MAX_4
  RTLIB::__sync_fetch_and_max_8, // RTLIB::SYNC_FETCH_AND_MAX_8
  RTLIB::__sync_fetch_and_max_16, // RTLIB::SYNC_FETCH_AND_MAX_16
  RTLIB::__sync_fetch_and_min_1, // RTLIB::SYNC_FETCH_AND_MIN_1
  RTLIB::__sync_fetch_and_min_2, // RTLIB::SYNC_FETCH_AND_MIN_2
  RTLIB::__sync_fetch_and_min_4, // RTLIB::SYNC_FETCH_AND_MIN_4
  RTLIB::__sync_fetch_and_min_8, // RTLIB::SYNC_FETCH_AND_MIN_8
  RTLIB::__sync_fetch_and_min_16, // RTLIB::SYNC_FETCH_AND_MIN_16
  RTLIB::__sync_fetch_and_nand_1, // RTLIB::SYNC_FETCH_AND_NAND_1
  RTLIB::__sync_fetch_and_nand_2, // RTLIB::SYNC_FETCH_AND_NAND_2
  RTLIB::__sync_fetch_and_nand_4, // RTLIB::SYNC_FETCH_AND_NAND_4
  RTLIB::__sync_fetch_and_nand_8, // RTLIB::SYNC_FETCH_AND_NAND_8
  RTLIB::__sync_fetch_and_nand_16, // RTLIB::SYNC_FETCH_AND_NAND_16
  RTLIB::__sync_fetch_and_or_1, // RTLIB::SYNC_FETCH_AND_OR_1
  RTLIB::__sync_fetch_and_or_2, // RTLIB::SYNC_FETCH_AND_OR_2
  RTLIB::__sync_fetch_and_or_4, // RTLIB::SYNC_FETCH_AND_OR_4
  RTLIB::__sync_fetch_and_or_8, // RTLIB::SYNC_FETCH_AND_OR_8
  RTLIB::__sync_fetch_and_or_16, // RTLIB::SYNC_FETCH_AND_OR_16
  RTLIB::__sync_fetch_and_sub_1, // RTLIB::SYNC_FETCH_AND_SUB_1
  RTLIB::__sync_fetch_and_sub_2, // RTLIB::SYNC_FETCH_AND_SUB_2
  RTLIB::__sync_fetch_and_sub_4, // RTLIB::SYNC_FETCH_AND_SUB_4
  RTLIB::__sync_fetch_and_sub_8, // RTLIB::SYNC_FETCH_AND_SUB_8
  RTLIB::__sync_fetch_and_sub_16, // RTLIB::SYNC_FETCH_AND_SUB_16
  RTLIB::__sync_fetch_and_umax_1, // RTLIB::SYNC_FETCH_AND_UMAX_1
  RTLIB::__sync_fetch_and_umax_2, // RTLIB::SYNC_FETCH_AND_UMAX_2
  RTLIB::__sync_fetch_and_umax_4, // RTLIB::SYNC_FETCH_AND_UMAX_4
  RTLIB::__sync_fetch_and_umax_8, // RTLIB::SYNC_FETCH_AND_UMAX_8
  RTLIB::__sync_fetch_and_umax_16, // RTLIB::SYNC_FETCH_AND_UMAX_16
  RTLIB::__sync_fetch_and_umin_1, // RTLIB::SYNC_FETCH_AND_UMIN_1
  RTLIB::__sync_fetch_and_umin_2, // RTLIB::SYNC_FETCH_AND_UMIN_2
  RTLIB::__sync_fetch_and_umin_4, // RTLIB::SYNC_FETCH_AND_UMIN_4
  RTLIB::__sync_fetch_and_umin_8, // RTLIB::SYNC_FETCH_AND_UMIN_8
  RTLIB::__sync_fetch_and_umin_16, // RTLIB::SYNC_FETCH_AND_UMIN_16
  RTLIB::__sync_fetch_and_xor_1, // RTLIB::SYNC_FETCH_AND_XOR_1
  RTLIB::__sync_fetch_and_xor_2, // RTLIB::SYNC_FETCH_AND_XOR_2
  RTLIB::__sync_fetch_and_xor_4, // RTLIB::SYNC_FETCH_AND_XOR_4
  RTLIB::__sync_fetch_and_xor_8, // RTLIB::SYNC_FETCH_AND_XOR_8
  RTLIB::__sync_fetch_and_xor_16, // RTLIB::SYNC_FETCH_AND_XOR_16
  RTLIB::__sync_lock_test_and_set_1, // RTLIB::SYNC_LOCK_TEST_AND_SET_1
  RTLIB::__sync_lock_test_and_set_2, // RTLIB::SYNC_LOCK_TEST_AND_SET_2
  RTLIB::__sync_lock_test_and_set_4, // RTLIB::SYNC_LOCK_TEST_AND_SET_4
  RTLIB::__sync_lock_test_and_set_8, // RTLIB::SYNC_LOCK_TEST_AND_SET_8
  RTLIB::__sync_lock_test_and_set_16, // RTLIB::SYNC_LOCK_TEST_AND_SET_16
  RTLIB::__sync_val_compare_and_swap_1, // RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1
  RTLIB::__sync_val_compare_and_swap_2, // RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2
  RTLIB::__sync_val_compare_and_swap_4, // RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4
  RTLIB::__sync_val_compare_and_swap_8, // RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8
  RTLIB::__sync_val_compare_and_swap_16, // RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16
  RTLIB::tanhf, // RTLIB::TANH_F32
  RTLIB::tanh, // RTLIB::TANH_F64
  RTLIB::tanh_f80, // RTLIB::TANH_F80
  RTLIB::tanh_f128, // RTLIB::TANH_F128
  RTLIB::tanh_ppcf128, // RTLIB::TANH_PPCF128
  RTLIB::tanf, // RTLIB::TAN_F32
  RTLIB::tan, // RTLIB::TAN_F64
  RTLIB::tan_f80, // RTLIB::TAN_F80
  RTLIB::tan_f128, // RTLIB::TAN_F128
  RTLIB::tan_ppcf128, // RTLIB::TAN_PPCF128
  RTLIB::truncf, // RTLIB::TRUNC_F32
  RTLIB::trunc, // RTLIB::TRUNC_F64
  RTLIB::trunc_f80, // RTLIB::TRUNC_F80
  RTLIB::trunc_f128, // RTLIB::TRUNC_F128
  RTLIB::trunc_ppcf128, // RTLIB::TRUNC_PPCF128
  RTLIB::Unsupported, // RTLIB::UDIVREM_I8
  RTLIB::Unsupported, // RTLIB::UDIVREM_I16
  RTLIB::Unsupported, // RTLIB::UDIVREM_I32
  RTLIB::Unsupported, // RTLIB::UDIVREM_I64
  RTLIB::Unsupported, // RTLIB::UDIVREM_I128
  RTLIB::__udivqi3, // RTLIB::UDIV_I8
  RTLIB::__udivhi3, // RTLIB::UDIV_I16
  RTLIB::__udivsi3, // RTLIB::UDIV_I32
  RTLIB::__udivdi3, // RTLIB::UDIV_I64
  RTLIB::__udivti3, // RTLIB::UDIV_I128
  RTLIB::__floatunsihf, // RTLIB::UINTTOFP_I32_F16
  RTLIB::__floatunsisf, // RTLIB::UINTTOFP_I32_F32
  RTLIB::__floatunsidf, // RTLIB::UINTTOFP_I32_F64
  RTLIB::__floatunsixf, // RTLIB::UINTTOFP_I32_F80
  RTLIB::__floatunsitf, // RTLIB::UINTTOFP_I32_F128
  RTLIB::__gcc_utoq, // RTLIB::UINTTOFP_I32_PPCF128
  RTLIB::__floatundibf, // RTLIB::UINTTOFP_I64_BF16
  RTLIB::__floatundihf, // RTLIB::UINTTOFP_I64_F16
  RTLIB::__floatundisf, // RTLIB::UINTTOFP_I64_F32
  RTLIB::__floatundidf, // RTLIB::UINTTOFP_I64_F64
  RTLIB::__floatundixf, // RTLIB::UINTTOFP_I64_F80
  RTLIB::__floatunditf_f128, // RTLIB::UINTTOFP_I64_F128
  RTLIB::__floatunditf_ppcf128, // RTLIB::UINTTOFP_I64_PPCF128
  RTLIB::__floatuntihf, // RTLIB::UINTTOFP_I128_F16
  RTLIB::__floatuntisf, // RTLIB::UINTTOFP_I128_F32
  RTLIB::__floatuntidf, // RTLIB::UINTTOFP_I128_F64
  RTLIB::__floatuntixf, // RTLIB::UINTTOFP_I128_F80
  RTLIB::__floatuntitf_f128, // RTLIB::UINTTOFP_I128_F128
  RTLIB::__floatuntitf_ppcf128, // RTLIB::UINTTOFP_I128_PPCF128
  RTLIB::__nesf2, // RTLIB::UNE_F32
  RTLIB::__nedf2, // RTLIB::UNE_F64
  RTLIB::__netf2, // RTLIB::UNE_F128
  RTLIB::__gcc_qne, // RTLIB::UNE_PPCF128
  RTLIB::Unsupported, // RTLIB::UNWIND_CALL_PERSONALITY
  RTLIB::Unsupported, // RTLIB::UNWIND_REGISTER
  RTLIB::_Unwind_Resume, // RTLIB::UNWIND_RESUME
  RTLIB::Unsupported, // RTLIB::UNWIND_UNREGISTER
  RTLIB::__unordsf2, // RTLIB::UO_F32
  RTLIB::__unorddf2, // RTLIB::UO_F64
  RTLIB::__unordtf2, // RTLIB::UO_F128
  RTLIB::__gcc_qunord, // RTLIB::UO_PPCF128
  RTLIB::__umodqi3, // RTLIB::UREM_I8
  RTLIB::__umodhi3, // RTLIB::UREM_I16
  RTLIB::__umodsi3, // RTLIB::UREM_I32
  RTLIB::__umoddi3, // RTLIB::UREM_I64
  RTLIB::__umodti3, // RTLIB::UREM_I128
  RTLIB::Unsupported
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
 constexpr char RTLIB::RuntimeLibcallsInfo::RuntimeLibcallImplNameTableStorage[] =
  "\0"
  "#_Unwind_Resume\0"
  "#__aarch64_cas16_acq\0"
  "#__aarch64_cas16_acq_rel\0"
  "#__aarch64_cas16_rel\0"
  "#__aarch64_cas16_relax\0"
  "#__aarch64_cas1_acq\0"
  "#__aarch64_cas1_acq_rel\0"
  "#__aarch64_cas1_rel\0"
  "#__aarch64_cas1_relax\0"
  "#__aarch64_cas2_acq\0"
  "#__aarch64_cas2_acq_rel\0"
  "#__aarch64_cas2_rel\0"
  "#__aarch64_cas2_relax\0"
  "#__aarch64_cas4_acq\0"
  "#__aarch64_cas4_acq_rel\0"
  "#__aarch64_cas4_rel\0"
  "#__aarch64_cas4_relax\0"
  "#__aarch64_cas8_acq\0"
  "#__aarch64_cas8_acq_rel\0"
  "#__aarch64_cas8_rel\0"
  "#__aarch64_cas8_relax\0"
  "#__aarch64_ldadd1_acq\0"
  "#__aarch64_ldadd1_acq_rel\0"
  "#__aarch64_ldadd1_rel\0"
  "#__aarch64_ldadd1_relax\0"
  "#__aarch64_ldadd2_acq\0"
  "#__aarch64_ldadd2_acq_rel\0"
  "#__aarch64_ldadd2_rel\0"
  "#__aarch64_ldadd2_relax\0"
  "#__aarch64_ldadd4_acq\0"
  "#__aarch64_ldadd4_acq_rel\0"
  "#__aarch64_ldadd4_rel\0"
  "#__aarch64_ldadd4_relax\0"
  "#__aarch64_ldadd8_acq\0"
  "#__aarch64_ldadd8_acq_rel\0"
  "#__aarch64_ldadd8_rel\0"
  "#__aarch64_ldadd8_relax\0"
  "#__aarch64_ldclr1_acq\0"
  "#__aarch64_ldclr1_acq_rel\0"
  "#__aarch64_ldclr1_rel\0"
  "#__aarch64_ldclr1_relax\0"
  "#__aarch64_ldclr2_acq\0"
  "#__aarch64_ldclr2_acq_rel\0"
  "#__aarch64_ldclr2_rel\0"
  "#__aarch64_ldclr2_relax\0"
  "#__aarch64_ldclr4_acq\0"
  "#__aarch64_ldclr4_acq_rel\0"
  "#__aarch64_ldclr4_rel\0"
  "#__aarch64_ldclr4_relax\0"
  "#__aarch64_ldclr8_acq\0"
  "#__aarch64_ldclr8_acq_rel\0"
  "#__aarch64_ldclr8_rel\0"
  "#__aarch64_ldclr8_relax\0"
  "#__aarch64_ldeor1_acq\0"
  "#__aarch64_ldeor1_acq_rel\0"
  "#__aarch64_ldeor1_rel\0"
  "#__aarch64_ldeor1_relax\0"
  "#__aarch64_ldeor2_acq\0"
  "#__aarch64_ldeor2_acq_rel\0"
  "#__aarch64_ldeor2_rel\0"
  "#__aarch64_ldeor2_relax\0"
  "#__aarch64_ldeor4_acq\0"
  "#__aarch64_ldeor4_acq_rel\0"
  "#__aarch64_ldeor4_rel\0"
  "#__aarch64_ldeor4_relax\0"
  "#__aarch64_ldeor8_acq\0"
  "#__aarch64_ldeor8_acq_rel\0"
  "#__aarch64_ldeor8_rel\0"
  "#__aarch64_ldeor8_relax\0"
  "#__aarch64_ldset1_acq\0"
  "#__aarch64_ldset1_acq_rel\0"
  "#__aarch64_ldset1_rel\0"
  "#__aarch64_ldset1_relax\0"
  "#__aarch64_ldset2_acq\0"
  "#__aarch64_ldset2_acq_rel\0"
  "#__aarch64_ldset2_rel\0"
  "#__aarch64_ldset2_relax\0"
  "#__aarch64_ldset4_acq\0"
  "#__aarch64_ldset4_acq_rel\0"
  "#__aarch64_ldset4_rel\0"
  "#__aarch64_ldset4_relax\0"
  "#__aarch64_ldset8_acq\0"
  "#__aarch64_ldset8_acq_rel\0"
  "#__aarch64_ldset8_rel\0"
  "#__aarch64_ldset8_relax\0"
  "#__aarch64_swp1_acq\0"
  "#__aarch64_swp1_acq_rel\0"
  "#__aarch64_swp1_rel\0"
  "#__aarch64_swp1_relax\0"
  "#__aarch64_swp2_acq\0"
  "#__aarch64_swp2_acq_rel\0"
  "#__aarch64_swp2_rel\0"
  "#__aarch64_swp2_relax\0"
  "#__aarch64_swp4_acq\0"
  "#__aarch64_swp4_acq_rel\0"
  "#__aarch64_swp4_rel\0"
  "#__aarch64_swp4_relax\0"
  "#__aarch64_swp8_acq\0"
  "#__aarch64_swp8_acq_rel\0"
  "#__aarch64_swp8_rel\0"
  "#__aarch64_swp8_relax\0"
  "#__adddf3\0"
  "#__addsf3\0"
  "#__addtf3\0"
  "#__arm_sc_memcpy\0"
  "#__arm_sc_memmove\0"
  "#__arm_sc_memset\0"
  "#__ashldi3\0"
  "#__ashlhi3\0"
  "#__ashlsi3\0"
  "#__ashlti3\0"
  "#__ashrdi3\0"
  "#__ashrhi3\0"
  "#__ashrsi3\0"
  "#__ashrti3\0"
  "#__atomic_compare_exchange\0"
  "#__atomic_compare_exchange_1\0"
  "#__atomic_compare_exchange_16\0"
  "#__atomic_compare_exchange_2\0"
  "#__atomic_compare_exchange_4\0"
  "#__atomic_compare_exchange_8\0"
  "#__atomic_exchange\0"
  "#__atomic_exchange_1\0"
  "#__atomic_exchange_16\0"
  "#__atomic_exchange_2\0"
  "#__atomic_exchange_4\0"
  "#__atomic_exchange_8\0"
  "#__atomic_fetch_add_1\0"
  "#__atomic_fetch_add_16\0"
  "#__atomic_fetch_add_2\0"
  "#__atomic_fetch_add_4\0"
  "#__atomic_fetch_add_8\0"
  "#__atomic_fetch_and_1\0"
  "#__atomic_fetch_and_16\0"
  "#__atomic_fetch_and_2\0"
  "#__atomic_fetch_and_4\0"
  "#__atomic_fetch_and_8\0"
  "#__atomic_fetch_nand_1\0"
  "#__atomic_fetch_nand_16\0"
  "#__atomic_fetch_nand_2\0"
  "#__atomic_fetch_nand_4\0"
  "#__atomic_fetch_nand_8\0"
  "#__atomic_fetch_or_1\0"
  "#__atomic_fetch_or_16\0"
  "#__atomic_fetch_or_2\0"
  "#__atomic_fetch_or_4\0"
  "#__atomic_fetch_or_8\0"
  "#__atomic_fetch_sub_1\0"
  "#__atomic_fetch_sub_16\0"
  "#__atomic_fetch_sub_2\0"
  "#__atomic_fetch_sub_4\0"
  "#__atomic_fetch_sub_8\0"
  "#__atomic_fetch_xor_1\0"
  "#__atomic_fetch_xor_16\0"
  "#__atomic_fetch_xor_2\0"
  "#__atomic_fetch_xor_4\0"
  "#__atomic_fetch_xor_8\0"
  "#__atomic_load\0"
  "#__atomic_load_1\0"
  "#__atomic_load_16\0"
  "#__atomic_load_2\0"
  "#__atomic_load_4\0"
  "#__atomic_load_8\0"
  "#__atomic_store\0"
  "#__atomic_store_1\0"
  "#__atomic_store_16\0"
  "#__atomic_store_2\0"
  "#__atomic_store_4\0"
  "#__atomic_store_8\0"
  "#__clear_cache\0"
  "#__clzdi2\0"
  "#__clzsi2\0"
  "#__clzti2\0"
  "#__cxa_end_cleanup\0"
  "#__divdf3\0"
  "#__divdi3\0"
  "#__divhi3\0"
  "#__divqi3\0"
  "#__divsf3\0"
  "#__divsi3\0"
  "#__divtf3\0"
  "#__divti3\0"
  "#__eqdf2\0"
  "#__eqsf2\0"
  "#__eqtf2\0"
  "#__exp2_finite\0"
  "#__exp2f_finite\0"
  "#__exp2l_finite\0"
  "#__exp_finite\0"
  "#__expf_finite\0"
  "#__expl_finite\0"
  "#__extendbfsf2\0"
  "#__extenddftf2\0"
  "#__extendhfdf2\0"
  "#__extendhfsf2\0"
  "#__extendhftf2\0"
  "#__extendsfdf2\0"
  "#__extendsftf2\0"
  "#__fixdfdi\0"
  "#__fixdfsi\0"
  "#__fixdfti\0"
  "#__fixhfdi\0"
  "#__fixhfsi\0"
  "#__fixhfti\0"
  "#__fixsfdi\0"
  "#__fixsfsi\0"
  "#__fixsfti\0"
  "#__fixtfdi\0"
  "#__fixtfsi\0"
  "#__fixtfti\0"
  "#__fixunsdfdi\0"
  "#__fixunsdfsi\0"
  "#__fixunsdfti\0"
  "#__fixunshfdi\0"
  "#__fixunshfsi\0"
  "#__fixunshfti\0"
  "#__fixunssfdi\0"
  "#__fixunssfsi\0"
  "#__fixunssfti\0"
  "#__fixunstfdi\0"
  "#__fixunstfsi\0"
  "#__fixunstfti\0"
  "#__floatdibf\0"
  "#__floatdidf\0"
  "#__floatdihf\0"
  "#__floatdisf\0"
  "#__floatditf\0"
  "#__floatsidf\0"
  "#__floatsihf\0"
  "#__floatsisf\0"
  "#__floatsitf\0"
  "#__floattidf\0"
  "#__floattihf\0"
  "#__floattisf\0"
  "#__floattitf\0"
  "#__floatundibf\0"
  "#__floatundidf\0"
  "#__floatundihf\0"
  "#__floatundisf\0"
  "#__floatunditf\0"
  "#__floatunsidf\0"
  "#__floatunsihf\0"
  "#__floatunsisf\0"
  "#__floatunsitf\0"
  "#__floatuntidf\0"
  "#__floatuntihf\0"
  "#__floatuntisf\0"
  "#__floatuntitf\0"
  "#__gedf2\0"
  "#__gesf2\0"
  "#__getf2\0"
  "#__gtdf2\0"
  "#__gtsf2\0"
  "#__gttf2\0"
  "#__ledf2\0"
  "#__lesf2\0"
  "#__letf2\0"
  "#__llvm_deoptimize\0"
  "#__llvm_memcpy_element_unordered_atomic_1\0"
  "#__llvm_memcpy_element_unordered_atomic_16\0"
  "#__llvm_memcpy_element_unordered_atomic_2\0"
  "#__llvm_memcpy_element_unordered_atomic_4\0"
  "#__llvm_memcpy_element_unordered_atomic_8\0"
  "#__llvm_memmove_element_unordered_atomic_1\0"
  "#__llvm_memmove_element_unordered_atomic_16\0"
  "#__llvm_memmove_element_unordered_atomic_2\0"
  "#__llvm_memmove_element_unordered_atomic_4\0"
  "#__llvm_memmove_element_unordered_atomic_8\0"
  "#__llvm_memset_element_unordered_atomic_1\0"
  "#__llvm_memset_element_unordered_atomic_16\0"
  "#__llvm_memset_element_unordered_atomic_2\0"
  "#__llvm_memset_element_unordered_atomic_4\0"
  "#__llvm_memset_element_unordered_atomic_8\0"
  "#__log10_finite\0"
  "#__log10f_finite\0"
  "#__log10l_finite\0"
  "#__log2_finite\0"
  "#__log2f_finite\0"
  "#__log2l_finite\0"
  "#__log_finite\0"
  "#__logf_finite\0"
  "#__logl_finite\0"
  "#__lshrdi3\0"
  "#__lshrhi3\0"
  "#__lshrsi3\0"
  "#__lshrti3\0"
  "#__ltdf2\0"
  "#__ltsf2\0"
  "#__lttf2\0"
  "#__moddi3\0"
  "#__modhi3\0"
  "#__modqi3\0"
  "#__modsi3\0"
  "#__modti3\0"
  "#__muldf3\0"
  "#__muldi3\0"
  "#__mulhi3\0"
  "#__mulosi4\0"
  "#__mulqi3\0"
  "#__mulsf3\0"
  "#__mulsi3\0"
  "#__multf3\0"
  "#__multi3\0"
  "#__nedf2\0"
  "#__negdi2\0"
  "#__negsi2\0"
  "#__nesf2\0"
  "#__netf2\0"
  "#__popcountdi2\0"
  "#__popcountsi2\0"
  "#__popcountti2\0"
  "#__pow_finite\0"
  "#__powf_finite\0"
  "#__powitf2\0"
  "#__powl_finite\0"
  "#__safestack_pointer_address\0"
  "#__stack_chk_fail\0"
  "#__subdf3\0"
  "#__subsf3\0"
  "#__subtf3\0"
  "#__sync_fetch_and_add_1\0"
  "#__sync_fetch_and_add_16\0"
  "#__sync_fetch_and_add_2\0"
  "#__sync_fetch_and_add_4\0"
  "#__sync_fetch_and_add_8\0"
  "#__sync_fetch_and_and_1\0"
  "#__sync_fetch_and_and_16\0"
  "#__sync_fetch_and_and_2\0"
  "#__sync_fetch_and_and_4\0"
  "#__sync_fetch_and_and_8\0"
  "#__sync_fetch_and_max_1\0"
  "#__sync_fetch_and_max_16\0"
  "#__sync_fetch_and_max_2\0"
  "#__sync_fetch_and_max_4\0"
  "#__sync_fetch_and_max_8\0"
  "#__sync_fetch_and_min_1\0"
  "#__sync_fetch_and_min_16\0"
  "#__sync_fetch_and_min_2\0"
  "#__sync_fetch_and_min_4\0"
  "#__sync_fetch_and_min_8\0"
  "#__sync_fetch_and_nand_1\0"
  "#__sync_fetch_and_nand_16\0"
  "#__sync_fetch_and_nand_2\0"
  "#__sync_fetch_and_nand_4\0"
  "#__sync_fetch_and_nand_8\0"
  "#__sync_fetch_and_or_1\0"
  "#__sync_fetch_and_or_16\0"
  "#__sync_fetch_and_or_2\0"
  "#__sync_fetch_and_or_4\0"
  "#__sync_fetch_and_or_8\0"
  "#__sync_fetch_and_sub_1\0"
  "#__sync_fetch_and_sub_16\0"
  "#__sync_fetch_and_sub_2\0"
  "#__sync_fetch_and_sub_4\0"
  "#__sync_fetch_and_sub_8\0"
  "#__sync_fetch_and_umax_1\0"
  "#__sync_fetch_and_umax_16\0"
  "#__sync_fetch_and_umax_2\0"
  "#__sync_fetch_and_umax_4\0"
  "#__sync_fetch_and_umax_8\0"
  "#__sync_fetch_and_umin_1\0"
  "#__sync_fetch_and_umin_16\0"
  "#__sync_fetch_and_umin_2\0"
  "#__sync_fetch_and_umin_4\0"
  "#__sync_fetch_and_umin_8\0"
  "#__sync_fetch_and_xor_1\0"
  "#__sync_fetch_and_xor_16\0"
  "#__sync_fetch_and_xor_2\0"
  "#__sync_fetch_and_xor_4\0"
  "#__sync_fetch_and_xor_8\0"
  "#__sync_lock_test_and_set_1\0"
  "#__sync_lock_test_and_set_16\0"
  "#__sync_lock_test_and_set_2\0"
  "#__sync_lock_test_and_set_4\0"
  "#__sync_lock_test_and_set_8\0"
  "#__sync_val_compare_and_swap_1\0"
  "#__sync_val_compare_and_swap_16\0"
  "#__sync_val_compare_and_swap_2\0"
  "#__sync_val_compare_and_swap_4\0"
  "#__sync_val_compare_and_swap_8\0"
  "#__truncdfbf2\0"
  "#__truncdfhf2\0"
  "#__truncdfsf2\0"
  "#__truncsfbf2\0"
  "#__truncsfhf2\0"
  "#__trunctfbf2\0"
  "#__trunctfdf2\0"
  "#__trunctfhf2\0"
  "#__trunctfsf2\0"
  "#__udivdi3\0"
  "#__udivhi3\0"
  "#__udivqi3\0"
  "#__udivsi3\0"
  "#__udivti3\0"
  "#__umoddi3\0"
  "#__umodhi3\0"
  "#__umodqi3\0"
  "#__umodsi3\0"
  "#__umodti3\0"
  "#__unorddf2\0"
  "#__unordsf2\0"
  "#__unordtf2\0"
  "#acos\0"
  "#acosf\0"
  "#acosl\0"
  "#asin\0"
  "#asinf\0"
  "#asinl\0"
  "#atan\0"
  "#atan2\0"
  "#atan2f\0"
  "#atan2l\0"
  "#atanf\0"
  "#atanl\0"
  "#calloc\0"
  "#cbrt\0"
  "#cbrtf\0"
  "#cbrtl\0"
  "#ceil\0"
  "#ceilf\0"
  "#ceill\0"
  "#copysign\0"
  "#copysignf\0"
  "#copysignl\0"
  "#cos\0"
  "#cosf\0"
  "#cosh\0"
  "#coshf\0"
  "#coshl\0"
  "#cosl\0"
  "#exp\0"
  "#exp10\0"
  "#exp10f\0"
  "#exp10l\0"
  "#exp2\0"
  "#exp2f\0"
  "#exp2l\0"
  "#expf\0"
  "#expl\0"
  "#fegetenv\0"
  "#fegetmode\0"
  "#fesetenv\0"
  "#fesetmode\0"
  "#floor\0"
  "#floorf\0"
  "#floorl\0"
  "#fma\0"
  "#fmaf\0"
  "#fmal\0"
  "#fmax\0"
  "#fmaxf\0"
  "#fmaximum\0"
  "#fmaximum_num\0"
  "#fmaximum_numf\0"
  "#fmaximum_numl\0"
  "#fmaximumf\0"
  "#fmaximuml\0"
  "#fmaxl\0"
  "#fmin\0"
  "#fminf\0"
  "#fminimum\0"
  "#fminimum_num\0"
  "#fminimum_numf\0"
  "#fminimum_numl\0"
  "#fminimumf\0"
  "#fminimuml\0"
  "#fminl\0"
  "#fmod\0"
  "#fmodf\0"
  "#fmodl\0"
  "#frexp\0"
  "#ldexp\0"
  "#llrint\0"
  "#llrintf\0"
  "#llrintl\0"
  "#llround\0"
  "#llroundf\0"
  "#llroundl\0"
  "#log\0"
  "#log10\0"
  "#log10f\0"
  "#log10l\0"
  "#log2\0"
  "#log2f\0"
  "#log2l\0"
  "#logf\0"
  "#logl\0"
  "#lrint\0"
  "#lrintf\0"
  "#lrintl\0"
  "#lround\0"
  "#lroundf\0"
  "#lroundl\0"
  "#memcpy\0"
  "#memmove\0"
  "#memset\0"
  "#modf\0"
  "#modff\0"
  "#modfl\0"
  "#nearbyint\0"
  "#nearbyintf\0"
  "#nearbyintl\0"
  "#pow\0"
  "#powf\0"
  "#powl\0"
  "#rint\0"
  "#rintf\0"
  "#rintl\0"
  "#round\0"
  "#roundeven\0"
  "#roundevenf\0"
  "#roundevenl\0"
  "#roundf\0"
  "#roundl\0"
  "#sin\0"
  "#sincospi\0"
  "#sincospif\0"
  "#sincospil\0"
  "#sinf\0"
  "#sinh\0"
  "#sinhf\0"
  "#sinhl\0"
  "#sinl\0"
  "#sqrt\0"
  "#sqrtf\0"
  "#sqrtl\0"
  "#tan\0"
  "#tanf\0"
  "#tanh\0"
  "#tanhf\0"
  "#tanhl\0"
  "#tanl\0"
  "#trunc\0"
  "#truncf\0"
  "#truncl\0"
  ".div\0"
  ".rem\0"
  ".udiv\0"
  ".umul\0"
  ".urem\0"
  "@@DCPY@B\0"
  "@@EXP2@B\0"
  "@@FCBT@B\0"
  "@@FCEL@B\0"
  "@@FCOS@B\0"
  "@@FCPY@B\0"
  "@@FEXP@B\0"
  "@@FFLR@B\0"
  "@@FFMD@B\0"
  "@@FFXP@B\0"
  "@@FLG1@B\0"
  "@@FLG2@B\0"
  "@@FLOG@B\0"
  "@@FLXP@B\0"
  "@@FMA@B\0"
  "@@FMAFB\0"
  "@@FMALB\0"
  "@@FMAX@B\0"
  "@@FMAXFB\0"
  "@@FMAXLB\0"
  "@@FMIN@B\0"
  "@@FMINFB\0"
  "@@FMINLB\0"
  "@@FPOW@B\0"
  "@@FRND@B\0"
  "@@FSIN@B\0"
  "@@FSQT@B\0"
  "@@FTRC@B\0"
  "@@FXP2@B\0"
  "@@LCBT@B\0"
  "@@LCEL@B\0"
  "@@LCOS@B\0"
  "@@LCPY@B\0"
  "@@LEXP@B\0"
  "@@LFLR@B\0"
  "@@LFMD@B\0"
  "@@LFXP@B\0"
  "@@LLG1@B\0"
  "@@LLG2@B\0"
  "@@LLOG@B\0"
  "@@LLRD@B\0"
  "@@LLRDFB\0"
  "@@LLRDLB\0"
  "@@LLRT@B\0"
  "@@LLRTFB\0"
  "@@LLRTLB\0"
  "@@LLXP@B\0"
  "@@LOG2@B\0"
  "@@LPOW@B\0"
  "@@LRND@B\0"
  "@@LRNT@B\0"
  "@@LRNTFB\0"
  "@@LRNTLB\0"
  "@@LSIN@B\0"
  "@@LSQT@B\0"
  "@@LTRC@B\0"
  "@@LXP2@B\0"
  "@@NBYI@B\0"
  "@@NBYIFB\0"
  "@@NBYILB\0"
  "@@RINTFB\0"
  "@@RINTLB\0"
  "@@ROND@B\0"
  "@@ROUN@B\0"
  "@@ROUNFB\0"
  "@@ROUNLB\0"
  "@@SCEL@B\0"
  "@@SCOS@B\0"
  "@@SCRT@B\0"
  "@@SFLR@B\0"
  "@@SFXP@B\0"
  "@@SLXP@B\0"
  "@@SRNT@B\0"
  "@@SSIN@B\0"
  "@@TRNC@B\0"
  "@@WEXP@B\0"
  "@@WFMD@B\0"
  "@@WLG1@B\0"
  "@@WLOG@B\0"
  "@@WPOW@B\0"
  "@@WSQT@B\0"
  "_Q_add\0"
  "_Q_div\0"
  "_Q_dtoq\0"
  "_Q_itoq\0"
  "_Q_lltoq\0"
  "_Q_mul\0"
  "_Q_qtod\0"
  "_Q_qtoi\0"
  "_Q_qtoll\0"
  "_Q_qtos\0"
  "_Q_qtou\0"
  "_Q_qtoull\0"
  "_Q_sqrt\0"
  "_Q_stoq\0"
  "_Q_sub\0"
  "_Q_ulltoq\0"
  "_Q_utoq\0"
  "_Qp_add\0"
  "_Qp_div\0"
  "_Qp_dtoq\0"
  "_Qp_itoq\0"
  "_Qp_mul\0"
  "_Qp_qtod\0"
  "_Qp_qtoi\0"
  "_Qp_qtos\0"
  "_Qp_qtoui\0"
  "_Qp_qtoux\0"
  "_Qp_qtox\0"
  "_Qp_sqrt\0"
  "_Qp_stoq\0"
  "_Qp_sub\0"
  "_Qp_uitoq\0"
  "_Qp_uxtoq\0"
  "_Qp_xtoq\0"
  "_Unwind_CallPersonality\0"
  "_Unwind_Resume\0"
  "_Unwind_SjLj_Register\0"
  "_Unwind_SjLj_Resume\0"
  "_Unwind_SjLj_Unregister\0"
  "___bzero\0"
  "___bzero64\0"
  "___memmove\0"
  "___memmove64\0"
  "___memset\0"
  "___memset64\0"
  "__aarch64_cas16_acq\0"
  "__aarch64_cas16_acq_rel\0"
  "__aarch64_cas16_rel\0"
  "__aarch64_cas16_relax\0"
  "__aarch64_cas1_acq\0"
  "__aarch64_cas1_acq_rel\0"
  "__aarch64_cas1_rel\0"
  "__aarch64_cas1_relax\0"
  "__aarch64_cas2_acq\0"
  "__aarch64_cas2_acq_rel\0"
  "__aarch64_cas2_rel\0"
  "__aarch64_cas2_relax\0"
  "__aarch64_cas4_acq\0"
  "__aarch64_cas4_acq_rel\0"
  "__aarch64_cas4_rel\0"
  "__aarch64_cas4_relax\0"
  "__aarch64_cas8_acq\0"
  "__aarch64_cas8_acq_rel\0"
  "__aarch64_cas8_rel\0"
  "__aarch64_cas8_relax\0"
  "__aarch64_ldadd1_acq\0"
  "__aarch64_ldadd1_acq_rel\0"
  "__aarch64_ldadd1_rel\0"
  "__aarch64_ldadd1_relax\0"
  "__aarch64_ldadd2_acq\0"
  "__aarch64_ldadd2_acq_rel\0"
  "__aarch64_ldadd2_rel\0"
  "__aarch64_ldadd2_relax\0"
  "__aarch64_ldadd4_acq\0"
  "__aarch64_ldadd4_acq_rel\0"
  "__aarch64_ldadd4_rel\0"
  "__aarch64_ldadd4_relax\0"
  "__aarch64_ldadd8_acq\0"
  "__aarch64_ldadd8_acq_rel\0"
  "__aarch64_ldadd8_rel\0"
  "__aarch64_ldadd8_relax\0"
  "__aarch64_ldclr1_acq\0"
  "__aarch64_ldclr1_acq_rel\0"
  "__aarch64_ldclr1_rel\0"
  "__aarch64_ldclr1_relax\0"
  "__aarch64_ldclr2_acq\0"
  "__aarch64_ldclr2_acq_rel\0"
  "__aarch64_ldclr2_rel\0"
  "__aarch64_ldclr2_relax\0"
  "__aarch64_ldclr4_acq\0"
  "__aarch64_ldclr4_acq_rel\0"
  "__aarch64_ldclr4_rel\0"
  "__aarch64_ldclr4_relax\0"
  "__aarch64_ldclr8_acq\0"
  "__aarch64_ldclr8_acq_rel\0"
  "__aarch64_ldclr8_rel\0"
  "__aarch64_ldclr8_relax\0"
  "__aarch64_ldeor1_acq\0"
  "__aarch64_ldeor1_acq_rel\0"
  "__aarch64_ldeor1_rel\0"
  "__aarch64_ldeor1_relax\0"
  "__aarch64_ldeor2_acq\0"
  "__aarch64_ldeor2_acq_rel\0"
  "__aarch64_ldeor2_rel\0"
  "__aarch64_ldeor2_relax\0"
  "__aarch64_ldeor4_acq\0"
  "__aarch64_ldeor4_acq_rel\0"
  "__aarch64_ldeor4_rel\0"
  "__aarch64_ldeor4_relax\0"
  "__aarch64_ldeor8_acq\0"
  "__aarch64_ldeor8_acq_rel\0"
  "__aarch64_ldeor8_rel\0"
  "__aarch64_ldeor8_relax\0"
  "__aarch64_ldset1_acq\0"
  "__aarch64_ldset1_acq_rel\0"
  "__aarch64_ldset1_rel\0"
  "__aarch64_ldset1_relax\0"
  "__aarch64_ldset2_acq\0"
  "__aarch64_ldset2_acq_rel\0"
  "__aarch64_ldset2_rel\0"
  "__aarch64_ldset2_relax\0"
  "__aarch64_ldset4_acq\0"
  "__aarch64_ldset4_acq_rel\0"
  "__aarch64_ldset4_rel\0"
  "__aarch64_ldset4_relax\0"
  "__aarch64_ldset8_acq\0"
  "__aarch64_ldset8_acq_rel\0"
  "__aarch64_ldset8_rel\0"
  "__aarch64_ldset8_relax\0"
  "__aarch64_swp1_acq\0"
  "__aarch64_swp1_acq_rel\0"
  "__aarch64_swp1_rel\0"
  "__aarch64_swp1_relax\0"
  "__aarch64_swp2_acq\0"
  "__aarch64_swp2_acq_rel\0"
  "__aarch64_swp2_rel\0"
  "__aarch64_swp2_relax\0"
  "__aarch64_swp4_acq\0"
  "__aarch64_swp4_acq_rel\0"
  "__aarch64_swp4_rel\0"
  "__aarch64_swp4_relax\0"
  "__aarch64_swp8_acq\0"
  "__aarch64_swp8_acq_rel\0"
  "__aarch64_swp8_rel\0"
  "__aarch64_swp8_relax\0"
  "__adddf3\0"
  "__adddf3vfp\0"
  "__addkf3\0"
  "__addsf3\0"
  "__addsf3vfp\0"
  "__addtf3\0"
  "__addxf3\0"
  "__aeabi_d2f\0"
  "__aeabi_d2h\0"
  "__aeabi_d2iz\0"
  "__aeabi_d2lz\0"
  "__aeabi_d2uiz\0"
  "__aeabi_d2ulz\0"
  "__aeabi_dadd\0"
  "__aeabi_dcmpeq\0"
  "__aeabi_dcmpge\0"
  "__aeabi_dcmpgt\0"
  "__aeabi_dcmple\0"
  "__aeabi_dcmplt\0"
  "__aeabi_dcmpun\0"
  "__aeabi_ddiv\0"
  "__aeabi_dmul\0"
  "__aeabi_dsub\0"
  "__aeabi_f2d\0"
  "__aeabi_f2h\0"
  "__aeabi_f2iz\0"
  "__aeabi_f2lz\0"
  "__aeabi_f2uiz\0"
  "__aeabi_f2ulz\0"
  "__aeabi_fadd\0"
  "__aeabi_fcmpeq\0"
  "__aeabi_fcmpge\0"
  "__aeabi_fcmpgt\0"
  "__aeabi_fcmple\0"
  "__aeabi_fcmplt\0"
  "__aeabi_fcmpun\0"
  "__aeabi_fdiv\0"
  "__aeabi_fmul\0"
  "__aeabi_fsub\0"
  "__aeabi_h2f\0"
  "__aeabi_i2d\0"
  "__aeabi_i2f\0"
  "__aeabi_idiv\0"
  "__aeabi_idivmod\0"
  "__aeabi_l2d\0"
  "__aeabi_l2f\0"
  "__aeabi_lasr\0"
  "__aeabi_ldivmod\0"
  "__aeabi_llsl\0"
  "__aeabi_llsr\0"
  "__aeabi_lmul\0"
  "__aeabi_memclr\0"
  "__aeabi_memclr4\0"
  "__aeabi_memclr8\0"
  "__aeabi_memcpy\0"
  "__aeabi_memcpy4\0"
  "__aeabi_memcpy8\0"
  "__aeabi_memmove\0"
  "__aeabi_memmove4\0"
  "__aeabi_memmove8\0"
  "__aeabi_memset\0"
  "__aeabi_memset4\0"
  "__aeabi_memset8\0"
  "__aeabi_ui2d\0"
  "__aeabi_ui2f\0"
  "__aeabi_uidiv\0"
  "__aeabi_uidivmod\0"
  "__aeabi_ul2d\0"
  "__aeabi_ul2f\0"
  "__aeabi_uldivmod\0"
  "__arm_sc_memcpy\0"
  "__arm_sc_memmove\0"
  "__arm_sc_memset\0"
  "__ashldi3\0"
  "__ashlhi3\0"
  "__ashlsi3\0"
  "__ashlti3\0"
  "__ashrdi3\0"
  "__ashrhi3\0"
  "__ashrsi3\0"
  "__ashrti3\0"
  "__atomic_compare_exchange\0"
  "__atomic_compare_exchange_1\0"
  "__atomic_compare_exchange_16\0"
  "__atomic_compare_exchange_2\0"
  "__atomic_compare_exchange_4\0"
  "__atomic_compare_exchange_8\0"
  "__atomic_exchange\0"
  "__atomic_exchange_1\0"
  "__atomic_exchange_16\0"
  "__atomic_exchange_2\0"
  "__atomic_exchange_4\0"
  "__atomic_exchange_8\0"
  "__atomic_fetch_add_1\0"
  "__atomic_fetch_add_16\0"
  "__atomic_fetch_add_2\0"
  "__atomic_fetch_add_4\0"
  "__atomic_fetch_add_8\0"
  "__atomic_fetch_and_1\0"
  "__atomic_fetch_and_16\0"
  "__atomic_fetch_and_2\0"
  "__atomic_fetch_and_4\0"
  "__atomic_fetch_and_8\0"
  "__atomic_fetch_nand_1\0"
  "__atomic_fetch_nand_16\0"
  "__atomic_fetch_nand_2\0"
  "__atomic_fetch_nand_4\0"
  "__atomic_fetch_nand_8\0"
  "__atomic_fetch_or_1\0"
  "__atomic_fetch_or_16\0"
  "__atomic_fetch_or_2\0"
  "__atomic_fetch_or_4\0"
  "__atomic_fetch_or_8\0"
  "__atomic_fetch_sub_1\0"
  "__atomic_fetch_sub_16\0"
  "__atomic_fetch_sub_2\0"
  "__atomic_fetch_sub_4\0"
  "__atomic_fetch_sub_8\0"
  "__atomic_fetch_xor_1\0"
  "__atomic_fetch_xor_16\0"
  "__atomic_fetch_xor_2\0"
  "__atomic_fetch_xor_4\0"
  "__atomic_fetch_xor_8\0"
  "__atomic_load\0"
  "__atomic_load_1\0"
  "__atomic_load_16\0"
  "__atomic_load_2\0"
  "__atomic_load_4\0"
  "__atomic_load_8\0"
  "__atomic_store\0"
  "__atomic_store_1\0"
  "__atomic_store_16\0"
  "__atomic_store_2\0"
  "__atomic_store_4\0"
  "__atomic_store_8\0"
  "__bzero\0"
  "__clear_cache\0"
  "__clzdi2\0"
  "__clzsi2\0"
  "__clzti2\0"
  "__cxa_end_cleanup\0"
  "__divdf3\0"
  "__divdf3vfp\0"
  "__divdi3\0"
  "__divhi3\0"
  "__divkf3\0"
  "__divmodhi4\0"
  "__divmodqi4\0"
  "__divmodsi4\0"
  "__divqi3\0"
  "__divsf3\0"
  "__divsf3vfp\0"
  "__divsi3\0"
  "__divtf3\0"
  "__divti3\0"
  "__divxf3\0"
  "__dtoi64\0"
  "__dtou64\0"
  "__eqdf2\0"
  "__eqdf2vfp\0"
  "__eqkf2\0"
  "__eqsf2\0"
  "__eqsf2vfp\0"
  "__eqtf2\0"
  "__exp10\0"
  "__exp10f\0"
  "__exp10f128_finite\0"
  "__exp2_finite\0"
  "__exp2f128_finite\0"
  "__exp2f_finite\0"
  "__exp2l_finite\0"
  "__exp_finite\0"
  "__expf128_finite\0"
  "__expf_finite\0"
  "__expl_finite\0"
  "__extendbfsf2\0"
  "__extenddfkf2\0"
  "__extenddftf2\0"
  "__extendhfdf2\0"
  "__extendhfsf2\0"
  "__extendhftf2\0"
  "__extendhfxf2\0"
  "__extendkftf2\0"
  "__extendsfdf2\0"
  "__extendsfdf2vfp\0"
  "__extendsfkf2\0"
  "__extendsftf2\0"
  "__extendxftf2\0"
  "__fixdfdi\0"
  "__fixdfsi\0"
  "__fixdfsivfp\0"
  "__fixdfti\0"
  "__fixhfdi\0"
  "__fixhfsi\0"
  "__fixhfti\0"
  "__fixkfdi\0"
  "__fixkfsi\0"
  "__fixkfti\0"
  "__fixsfdi\0"
  "__fixsfsi\0"
  "__fixsfsivfp\0"
  "__fixsfti\0"
  "__fixtfdi\0"
  "__fixtfsi\0"
  "__fixtfti\0"
  "__fixunsdfdi\0"
  "__fixunsdfsi\0"
  "__fixunsdfsivfp\0"
  "__fixunsdfti\0"
  "__fixunshfdi\0"
  "__fixunshfsi\0"
  "__fixunshfti\0"
  "__fixunskfdi\0"
  "__fixunskfsi\0"
  "__fixunskfti\0"
  "__fixunssfdi\0"
  "__fixunssfsi\0"
  "__fixunssfsivfp\0"
  "__fixunssfti\0"
  "__fixunstfdi\0"
  "__fixunstfsi\0"
  "__fixunstfti\0"
  "__fixunsxfdi\0"
  "__fixunsxfsi\0"
  "__fixunsxfti\0"
  "__fixxfdi\0"
  "__fixxfsi\0"
  "__fixxfti\0"
  "__floatdibf\0"
  "__floatdidf\0"
  "__floatdihf\0"
  "__floatdikf\0"
  "__floatdisf\0"
  "__floatditf\0"
  "__floatdixf\0"
  "__floatsidf\0"
  "__floatsidfvfp\0"
  "__floatsihf\0"
  "__floatsikf\0"
  "__floatsisf\0"
  "__floatsisfvfp\0"
  "__floatsitf\0"
  "__floatsixf\0"
  "__floattidf\0"
  "__floattihf\0"
  "__floattikf\0"
  "__floattisf\0"
  "__floattitf\0"
  "__floattixf\0"
  "__floatundibf\0"
  "__floatundidf\0"
  "__floatundihf\0"
  "__floatundikf\0"
  "__floatundisf\0"
  "__floatunditf\0"
  "__floatundixf\0"
  "__floatunsidf\0"
  "__floatunsihf\0"
  "__floatunsikf\0"
  "__floatunsisf\0"
  "__floatunsitf\0"
  "__floatunsixf\0"
  "__floatunssidfvfp\0"
  "__floatunssisfvfp\0"
  "__floatuntidf\0"
  "__floatuntihf\0"
  "__floatuntikf\0"
  "__floatuntisf\0"
  "__floatuntitf\0"
  "__floatuntixf\0"
  "__gcc_dtoq\0"
  "__gcc_itoq\0"
  "__gcc_qadd\0"
  "__gcc_qdiv\0"
  "__gcc_qeq\0"
  "__gcc_qge\0"
  "__gcc_qgt\0"
  "__gcc_qle\0"
  "__gcc_qlt\0"
  "__gcc_qmul\0"
  "__gcc_qne\0"
  "__gcc_qsub\0"
  "__gcc_qtod\0"
  "__gcc_qtos\0"
  "__gcc_qtou\0"
  "__gcc_qunord\0"
  "__gcc_stoq\0"
  "__gcc_utoq\0"
  "__gedf2\0"
  "__gedf2vfp\0"
  "__gekf2\0"
  "__gesf2\0"
  "__gesf2vfp\0"
  "__getf2\0"
  "__gnu_f2h_ieee\0"
  "__gnu_h2f_ieee\0"
  "__gtdf2\0"
  "__gtdf2vfp\0"
  "__gtkf2\0"
  "__gtsf2\0"
  "__gtsf2vfp\0"
  "__gttf2\0"
  "__hexagon_adddf3\0"
  "__hexagon_divdf3\0"
  "__hexagon_divdi3\0"
  "__hexagon_divsf3\0"
  "__hexagon_divsi3\0"
  "__hexagon_fast2_sqrtdf2\0"
  "__hexagon_fast2_sqrtf\0"
  "__hexagon_fast_adddf3\0"
  "__hexagon_fast_divdf3\0"
  "__hexagon_fast_divsf3\0"
  "__hexagon_fast_muldf3\0"
  "__hexagon_fast_subdf3\0"
  "__hexagon_memcpy_likely_aligned_min32bytes_mult8bytes\0"
  "__hexagon_moddi3\0"
  "__hexagon_modsi3\0"
  "__hexagon_muldf3\0"
  "__hexagon_sqrtf\0"
  "__hexagon_subdf3\0"
  "__hexagon_udivdi3\0"
  "__hexagon_udivsi3\0"
  "__hexagon_umoddi3\0"
  "__hexagon_umodsi3\0"
  "__i64tod\0"
  "__i64tos\0"
  "__ledf2\0"
  "__ledf2vfp\0"
  "__lekf2\0"
  "__lesf2\0"
  "__lesf2vfp\0"
  "__letf2\0"
  "__llvm_deoptimize\0"
  "__llvm_memcpy_element_unordered_atomic_1\0"
  "__llvm_memcpy_element_unordered_atomic_16\0"
  "__llvm_memcpy_element_unordered_atomic_2\0"
  "__llvm_memcpy_element_unordered_atomic_4\0"
  "__llvm_memcpy_element_unordered_atomic_8\0"
  "__llvm_memmove_element_unordered_atomic_1\0"
  "__llvm_memmove_element_unordered_atomic_16\0"
  "__llvm_memmove_element_unordered_atomic_2\0"
  "__llvm_memmove_element_unordered_atomic_4\0"
  "__llvm_memmove_element_unordered_atomic_8\0"
  "__llvm_memset_element_unordered_atomic_1\0"
  "__llvm_memset_element_unordered_atomic_16\0"
  "__llvm_memset_element_unordered_atomic_2\0"
  "__llvm_memset_element_unordered_atomic_4\0"
  "__llvm_memset_element_unordered_atomic_8\0"
  "__log10_finite\0"
  "__log10f128_finite\0"
  "__log10f_finite\0"
  "__log10l_finite\0"
  "__log2_finite\0"
  "__log2f128_finite\0"
  "__log2f_finite\0"
  "__log2l_finite\0"
  "__log_finite\0"
  "__logf128_finite\0"
  "__logf_finite\0"
  "__logl_finite\0"
  "__lshrdi3\0"
  "__lshrhi3\0"
  "__lshrsi3\0"
  "__lshrti3\0"
  "__ltdf2\0"
  "__ltdf2vfp\0"
  "__ltkf2\0"
  "__ltsf2\0"
  "__ltsf2vfp\0"
  "__lttf2\0"
  "__memcpy_4\0"
  "__mips16_adddf3\0"
  "__mips16_addsf3\0"
  "__mips16_divdf3\0"
  "__mips16_divsf3\0"
  "__mips16_eqdf2\0"
  "__mips16_eqsf2\0"
  "__mips16_extendsfdf2\0"
  "__mips16_fix_truncdfsi\0"
  "__mips16_fix_truncsfsi\0"
  "__mips16_floatsidf\0"
  "__mips16_floatsisf\0"
  "__mips16_floatunsidf\0"
  "__mips16_floatunsisf\0"
  "__mips16_gedf2\0"
  "__mips16_gesf2\0"
  "__mips16_gtdf2\0"
  "__mips16_gtsf2\0"
  "__mips16_ledf2\0"
  "__mips16_lesf2\0"
  "__mips16_ltdf2\0"
  "__mips16_ltsf2\0"
  "__mips16_muldf3\0"
  "__mips16_mulsf3\0"
  "__mips16_nedf2\0"
  "__mips16_nesf2\0"
  "__mips16_ret_dc\0"
  "__mips16_ret_df\0"
  "__mips16_ret_sc\0"
  "__mips16_ret_sf\0"
  "__mips16_subdf3\0"
  "__mips16_subsf3\0"
  "__mips16_truncdfsf2\0"
  "__mips16_unorddf2\0"
  "__mips16_unordsf2\0"
  "__moddi3\0"
  "__modhi3\0"
  "__modqi3\0"
  "__modsi3\0"
  "__modti3\0"
  "__mspabi_addd\0"
  "__mspabi_addf\0"
  "__mspabi_cmpd\0"
  "__mspabi_cmpf\0"
  "__mspabi_cvtdf\0"
  "__mspabi_cvtfd\0"
  "__mspabi_divd\0"
  "__mspabi_divf\0"
  "__mspabi_divi\0"
  "__mspabi_divli\0"
  "__mspabi_divlli\0"
  "__mspabi_divu\0"
  "__mspabi_divul\0"
  "__mspabi_divull\0"
  "__mspabi_fixdli\0"
  "__mspabi_fixdlli\0"
  "__mspabi_fixdul\0"
  "__mspabi_fixdull\0"
  "__mspabi_fixfli\0"
  "__mspabi_fixflli\0"
  "__mspabi_fixful\0"
  "__mspabi_fixfull\0"
  "__mspabi_fltlid\0"
  "__mspabi_fltlif\0"
  "__mspabi_fltllid\0"
  "__mspabi_fltllif\0"
  "__mspabi_fltuld\0"
  "__mspabi_fltulf\0"
  "__mspabi_fltulld\0"
  "__mspabi_fltullf\0"
  "__mspabi_mpyd\0"
  "__mspabi_mpyf\0"
  "__mspabi_mpyi\0"
  "__mspabi_mpyi_f5hw\0"
  "__mspabi_mpyi_hw\0"
  "__mspabi_mpyl\0"
  "__mspabi_mpyl_f5hw\0"
  "__mspabi_mpyl_hw\0"
  "__mspabi_mpyl_hw32\0"
  "__mspabi_mpyll\0"
  "__mspabi_mpyll_f5hw\0"
  "__mspabi_mpyll_hw\0"
  "__mspabi_mpyll_hw32\0"
  "__mspabi_remi\0"
  "__mspabi_remli\0"
  "__mspabi_remlli\0"
  "__mspabi_remu\0"
  "__mspabi_remul\0"
  "__mspabi_remull\0"
  "__mspabi_slll\0"
  "__mspabi_sral\0"
  "__mspabi_srll\0"
  "__mspabi_subd\0"
  "__mspabi_subf\0"
  "__muldf3\0"
  "__muldf3vfp\0"
  "__muldi3\0"
  "__mulhi3\0"
  "__mulkf3\0"
  "__mulodi4\0"
  "__mulosi4\0"
  "__muloti4\0"
  "__mulqi3\0"
  "__mulsf3\0"
  "__mulsf3vfp\0"
  "__mulsi3\0"
  "__multf3\0"
  "__multi3\0"
  "__mulxf3\0"
  "__nedf2\0"
  "__nedf2vfp\0"
  "__negdi2\0"
  "__negsi2\0"
  "__nekf2\0"
  "__nesf2\0"
  "__nesf2vfp\0"
  "__netf2\0"
  "__popcountdi2\0"
  "__popcountsi2\0"
  "__popcountti2\0"
  "__pow_finite\0"
  "__powf128_finite\0"
  "__powf_finite\0"
  "__powidf2\0"
  "__powikf2\0"
  "__powisf2\0"
  "__powitf2\0"
  "__powixf2\0"
  "__powl_finite\0"
  "__riscv_flush_icache\0"
  "__rt_sdiv\0"
  "__rt_sdiv64\0"
  "__rt_udiv\0"
  "__rt_udiv64\0"
  "__safestack_pointer_address\0"
  "__sincos_stret\0"
  "__sincosf_stret\0"
  "__stack_chk_fail\0"
  "__stack_smash_handler\0"
  "__stoi64\0"
  "__stou64\0"
  "__subdf3\0"
  "__subdf3vfp\0"
  "__subkf3\0"
  "__subsf3\0"
  "__subsf3vfp\0"
  "__subtf3\0"
  "__subxf3\0"
  "__sync_fetch_and_add_1\0"
  "__sync_fetch_and_add_16\0"
  "__sync_fetch_and_add_2\0"
  "__sync_fetch_and_add_4\0"
  "__sync_fetch_and_add_8\0"
  "__sync_fetch_and_and_1\0"
  "__sync_fetch_and_and_16\0"
  "__sync_fetch_and_and_2\0"
  "__sync_fetch_and_and_4\0"
  "__sync_fetch_and_and_8\0"
  "__sync_fetch_and_max_1\0"
  "__sync_fetch_and_max_16\0"
  "__sync_fetch_and_max_2\0"
  "__sync_fetch_and_max_4\0"
  "__sync_fetch_and_max_8\0"
  "__sync_fetch_and_min_1\0"
  "__sync_fetch_and_min_16\0"
  "__sync_fetch_and_min_2\0"
  "__sync_fetch_and_min_4\0"
  "__sync_fetch_and_min_8\0"
  "__sync_fetch_and_nand_1\0"
  "__sync_fetch_and_nand_16\0"
  "__sync_fetch_and_nand_2\0"
  "__sync_fetch_and_nand_4\0"
  "__sync_fetch_and_nand_8\0"
  "__sync_fetch_and_or_1\0"
  "__sync_fetch_and_or_16\0"
  "__sync_fetch_and_or_2\0"
  "__sync_fetch_and_or_4\0"
  "__sync_fetch_and_or_8\0"
  "__sync_fetch_and_sub_1\0"
  "__sync_fetch_and_sub_16\0"
  "__sync_fetch_and_sub_2\0"
  "__sync_fetch_and_sub_4\0"
  "__sync_fetch_and_sub_8\0"
  "__sync_fetch_and_umax_1\0"
  "__sync_fetch_and_umax_16\0"
  "__sync_fetch_and_umax_2\0"
  "__sync_fetch_and_umax_4\0"
  "__sync_fetch_and_umax_8\0"
  "__sync_fetch_and_umin_1\0"
  "__sync_fetch_and_umin_16\0"
  "__sync_fetch_and_umin_2\0"
  "__sync_fetch_and_umin_4\0"
  "__sync_fetch_and_umin_8\0"
  "__sync_fetch_and_xor_1\0"
  "__sync_fetch_and_xor_16\0"
  "__sync_fetch_and_xor_2\0"
  "__sync_fetch_and_xor_4\0"
  "__sync_fetch_and_xor_8\0"
  "__sync_lock_test_and_set_1\0"
  "__sync_lock_test_and_set_16\0"
  "__sync_lock_test_and_set_2\0"
  "__sync_lock_test_and_set_4\0"
  "__sync_lock_test_and_set_8\0"
  "__sync_val_compare_and_swap_1\0"
  "__sync_val_compare_and_swap_16\0"
  "__sync_val_compare_and_swap_2\0"
  "__sync_val_compare_and_swap_4\0"
  "__sync_val_compare_and_swap_8\0"
  "__truncdfbf2\0"
  "__truncdfhf2\0"
  "__truncdfsf2\0"
  "__truncdfsf2vfp\0"
  "__trunckfdf2\0"
  "__trunckfhf2\0"
  "__trunckfsf2\0"
  "__truncsfbf2\0"
  "__truncsfhf2\0"
  "__trunctfbf2\0"
  "__trunctfdf2\0"
  "__trunctfhf2\0"
  "__trunctfkf2\0"
  "__trunctfsf2\0"
  "__trunctfxf2\0"
  "__truncxfbf2\0"
  "__truncxfdf2\0"
  "__truncxfhf2\0"
  "__truncxfsf2\0"
  "__u64tod\0"
  "__u64tos\0"
  "__udivdi3\0"
  "__udivhi3\0"
  "__udivmodhi4\0"
  "__udivmodqi4\0"
  "__udivmodsi4\0"
  "__udivqi3\0"
  "__udivsi3\0"
  "__udivti3\0"
  "__umoddi3\0"
  "__umodhi3\0"
  "__umodqi3\0"
  "__umodsi3\0"
  "__umodti3\0"
  "__unorddf2\0"
  "__unorddf2vfp\0"
  "__unordkf2\0"
  "__unordsf2\0"
  "__unordsf2vfp\0"
  "__unordtf2\0"
  "_alldiv\0"
  "_allmul\0"
  "_allrem\0"
  "_aulldiv\0"
  "_aullrem\0"
  "acos\0"
  "acosf\0"
  "acosf128\0"
  "acosl\0"
  "asin\0"
  "asinf\0"
  "asinf128\0"
  "asinl\0"
  "atan\0"
  "atan2\0"
  "atan2f\0"
  "atan2f128\0"
  "atan2l\0"
  "atanf\0"
  "atanf128\0"
  "atanl\0"
  "bzero\0"
  "calloc\0"
  "cbrt\0"
  "cbrtf\0"
  "cbrtf128\0"
  "cbrtl\0"
  "ceil\0"
  "ceilf\0"
  "ceilf128\0"
  "ceill\0"
  "copysign\0"
  "copysignf\0"
  "copysignf128\0"
  "copysignl\0"
  "cos\0"
  "cosf\0"
  "cosf128\0"
  "cosh\0"
  "coshf\0"
  "coshf128\0"
  "coshl\0"
  "cosl\0"
  "emscripten_return_address\0"
  "exp\0"
  "exp10\0"
  "exp10f\0"
  "exp10f128\0"
  "exp10l\0"
  "exp2\0"
  "exp2f\0"
  "exp2f128\0"
  "exp2l\0"
  "expf\0"
  "expf128\0"
  "expl\0"
  "fegetenv\0"
  "fegetmode\0"
  "fesetenv\0"
  "fesetmode\0"
  "floor\0"
  "floorf\0"
  "floorf128\0"
  "floorl\0"
  "fma\0"
  "fmaf\0"
  "fmaf128\0"
  "fmal\0"
  "fmax\0"
  "fmaxf\0"
  "fmaxf128\0"
  "fmaximum\0"
  "fmaximum_num\0"
  "fmaximum_numf\0"
  "fmaximum_numf128\0"
  "fmaximum_numl\0"
  "fmaximumf\0"
  "fmaximumf128\0"
  "fmaximuml\0"
  "fmaxl\0"
  "fmin\0"
  "fminf\0"
  "fminf128\0"
  "fminimum\0"
  "fminimum_num\0"
  "fminimum_numf\0"
  "fminimum_numf128\0"
  "fminimum_numl\0"
  "fminimumf\0"
  "fminimumf128\0"
  "fminimuml\0"
  "fminl\0"
  "fmod\0"
  "fmodf\0"
  "fmodf128\0"
  "fmodl\0"
  "frexp\0"
  "frexpf\0"
  "frexpf128\0"
  "frexpl\0"
  "ldexp\0"
  "ldexpf\0"
  "ldexpf128\0"
  "ldexpl\0"
  "llrint\0"
  "llrintf\0"
  "llrintf128\0"
  "llrintl\0"
  "llround\0"
  "llroundf\0"
  "llroundf128\0"
  "llroundl\0"
  "log\0"
  "log10\0"
  "log10f\0"
  "log10f128\0"
  "log10l\0"
  "log2\0"
  "log2f\0"
  "log2f128\0"
  "log2l\0"
  "logf\0"
  "logf128\0"
  "logl\0"
  "lrint\0"
  "lrintf\0"
  "lrintf128\0"
  "lrintl\0"
  "lround\0"
  "lroundf\0"
  "lroundf128\0"
  "lroundl\0"
  "memcpy\0"
  "memmove\0"
  "memset\0"
  "modf\0"
  "modff\0"
  "modff128\0"
  "modfl\0"
  "nearbyint\0"
  "nearbyintf\0"
  "nearbyintf128\0"
  "nearbyintl\0"
  "objc_autorelease\0"
  "objc_autoreleasePoolPop\0"
  "objc_autoreleasePoolPush\0"
  "objc_autoreleaseReturnValue\0"
  "objc_claimAutoreleasedReturnValue\0"
  "objc_copyWeak\0"
  "objc_destroyWeak\0"
  "objc_initWeak\0"
  "objc_loadWeak\0"
  "objc_loadWeakRetained\0"
  "objc_moveWeak\0"
  "objc_release\0"
  "objc_retain\0"
  "objc_retainAutorelease\0"
  "objc_retainAutoreleaseReturnValue\0"
  "objc_retainAutoreleasedReturnValue\0"
  "objc_retainBlock\0"
  "objc_retain_autorelease\0"
  "objc_retainedObject\0"
  "objc_storeStrong\0"
  "objc_storeWeak\0"
  "objc_sync_enter\0"
  "objc_sync_exit\0"
  "objc_unretainedObject\0"
  "objc_unretainedPointer\0"
  "objc_unsafeClaimAutoreleasedReturnValue\0"
  "pow\0"
  "powf\0"
  "powf128\0"
  "powl\0"
  "rint\0"
  "rintf\0"
  "rintf128\0"
  "rintl\0"
  "round\0"
  "roundeven\0"
  "roundevenf\0"
  "roundevenf128\0"
  "roundevenl\0"
  "roundf\0"
  "roundf128\0"
  "roundl\0"
  "sin\0"
  "sincos\0"
  "sincosf\0"
  "sincosf128\0"
  "sincosl\0"
  "sincospi\0"
  "sincospif\0"
  "sincospil\0"
  "sinf\0"
  "sinf128\0"
  "sinh\0"
  "sinhf\0"
  "sinhf128\0"
  "sinhl\0"
  "sinl\0"
  "sqrt\0"
  "sqrtf\0"
  "sqrtf128\0"
  "sqrtl\0"
  "tan\0"
  "tanf\0"
  "tanf128\0"
  "tanh\0"
  "tanhf\0"
  "tanhf128\0"
  "tanhl\0"
  "tanl\0"
  "trunc\0"
  "truncf\0"
  "truncf128\0"
  "truncl\0"
  ;
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

const llvm::StringTable
RTLIB::RuntimeLibcallsInfo::RuntimeLibcallImplNameTable = RuntimeLibcallImplNameTableStorage;

const uint16_t RTLIB::RuntimeLibcallsInfo::RuntimeLibcallNameOffsetTable[] = {
  0, // 
  1, // #_Unwind_Resume
  17, // #__aarch64_cas16_acq
  38, // #__aarch64_cas16_acq_rel
  63, // #__aarch64_cas16_rel
  84, // #__aarch64_cas16_relax
  107, // #__aarch64_cas1_acq
  127, // #__aarch64_cas1_acq_rel
  151, // #__aarch64_cas1_rel
  171, // #__aarch64_cas1_relax
  193, // #__aarch64_cas2_acq
  213, // #__aarch64_cas2_acq_rel
  237, // #__aarch64_cas2_rel
  257, // #__aarch64_cas2_relax
  279, // #__aarch64_cas4_acq
  299, // #__aarch64_cas4_acq_rel
  323, // #__aarch64_cas4_rel
  343, // #__aarch64_cas4_relax
  365, // #__aarch64_cas8_acq
  385, // #__aarch64_cas8_acq_rel
  409, // #__aarch64_cas8_rel
  429, // #__aarch64_cas8_relax
  451, // #__aarch64_ldadd1_acq
  473, // #__aarch64_ldadd1_acq_rel
  499, // #__aarch64_ldadd1_rel
  521, // #__aarch64_ldadd1_relax
  545, // #__aarch64_ldadd2_acq
  567, // #__aarch64_ldadd2_acq_rel
  593, // #__aarch64_ldadd2_rel
  615, // #__aarch64_ldadd2_relax
  639, // #__aarch64_ldadd4_acq
  661, // #__aarch64_ldadd4_acq_rel
  687, // #__aarch64_ldadd4_rel
  709, // #__aarch64_ldadd4_relax
  733, // #__aarch64_ldadd8_acq
  755, // #__aarch64_ldadd8_acq_rel
  781, // #__aarch64_ldadd8_rel
  803, // #__aarch64_ldadd8_relax
  827, // #__aarch64_ldclr1_acq
  849, // #__aarch64_ldclr1_acq_rel
  875, // #__aarch64_ldclr1_rel
  897, // #__aarch64_ldclr1_relax
  921, // #__aarch64_ldclr2_acq
  943, // #__aarch64_ldclr2_acq_rel
  969, // #__aarch64_ldclr2_rel
  991, // #__aarch64_ldclr2_relax
  1015, // #__aarch64_ldclr4_acq
  1037, // #__aarch64_ldclr4_acq_rel
  1063, // #__aarch64_ldclr4_rel
  1085, // #__aarch64_ldclr4_relax
  1109, // #__aarch64_ldclr8_acq
  1131, // #__aarch64_ldclr8_acq_rel
  1157, // #__aarch64_ldclr8_rel
  1179, // #__aarch64_ldclr8_relax
  1203, // #__aarch64_ldeor1_acq
  1225, // #__aarch64_ldeor1_acq_rel
  1251, // #__aarch64_ldeor1_rel
  1273, // #__aarch64_ldeor1_relax
  1297, // #__aarch64_ldeor2_acq
  1319, // #__aarch64_ldeor2_acq_rel
  1345, // #__aarch64_ldeor2_rel
  1367, // #__aarch64_ldeor2_relax
  1391, // #__aarch64_ldeor4_acq
  1413, // #__aarch64_ldeor4_acq_rel
  1439, // #__aarch64_ldeor4_rel
  1461, // #__aarch64_ldeor4_relax
  1485, // #__aarch64_ldeor8_acq
  1507, // #__aarch64_ldeor8_acq_rel
  1533, // #__aarch64_ldeor8_rel
  1555, // #__aarch64_ldeor8_relax
  1579, // #__aarch64_ldset1_acq
  1601, // #__aarch64_ldset1_acq_rel
  1627, // #__aarch64_ldset1_rel
  1649, // #__aarch64_ldset1_relax
  1673, // #__aarch64_ldset2_acq
  1695, // #__aarch64_ldset2_acq_rel
  1721, // #__aarch64_ldset2_rel
  1743, // #__aarch64_ldset2_relax
  1767, // #__aarch64_ldset4_acq
  1789, // #__aarch64_ldset4_acq_rel
  1815, // #__aarch64_ldset4_rel
  1837, // #__aarch64_ldset4_relax
  1861, // #__aarch64_ldset8_acq
  1883, // #__aarch64_ldset8_acq_rel
  1909, // #__aarch64_ldset8_rel
  1931, // #__aarch64_ldset8_relax
  1955, // #__aarch64_swp1_acq
  1975, // #__aarch64_swp1_acq_rel
  1999, // #__aarch64_swp1_rel
  2019, // #__aarch64_swp1_relax
  2041, // #__aarch64_swp2_acq
  2061, // #__aarch64_swp2_acq_rel
  2085, // #__aarch64_swp2_rel
  2105, // #__aarch64_swp2_relax
  2127, // #__aarch64_swp4_acq
  2147, // #__aarch64_swp4_acq_rel
  2171, // #__aarch64_swp4_rel
  2191, // #__aarch64_swp4_relax
  2213, // #__aarch64_swp8_acq
  2233, // #__aarch64_swp8_acq_rel
  2257, // #__aarch64_swp8_rel
  2277, // #__aarch64_swp8_relax
  2299, // #__adddf3
  2309, // #__addsf3
  2319, // #__addtf3
  2329, // #__arm_sc_memcpy
  2346, // #__arm_sc_memmove
  2364, // #__arm_sc_memset
  2381, // #__ashldi3
  2392, // #__ashlhi3
  2403, // #__ashlsi3
  2414, // #__ashlti3
  2425, // #__ashrdi3
  2436, // #__ashrhi3
  2447, // #__ashrsi3
  2458, // #__ashrti3
  2469, // #__atomic_compare_exchange
  2496, // #__atomic_compare_exchange_1
  2525, // #__atomic_compare_exchange_16
  2555, // #__atomic_compare_exchange_2
  2584, // #__atomic_compare_exchange_4
  2613, // #__atomic_compare_exchange_8
  2642, // #__atomic_exchange
  2661, // #__atomic_exchange_1
  2682, // #__atomic_exchange_16
  2704, // #__atomic_exchange_2
  2725, // #__atomic_exchange_4
  2746, // #__atomic_exchange_8
  2767, // #__atomic_fetch_add_1
  2789, // #__atomic_fetch_add_16
  2812, // #__atomic_fetch_add_2
  2834, // #__atomic_fetch_add_4
  2856, // #__atomic_fetch_add_8
  2878, // #__atomic_fetch_and_1
  2900, // #__atomic_fetch_and_16
  2923, // #__atomic_fetch_and_2
  2945, // #__atomic_fetch_and_4
  2967, // #__atomic_fetch_and_8
  2989, // #__atomic_fetch_nand_1
  3012, // #__atomic_fetch_nand_16
  3036, // #__atomic_fetch_nand_2
  3059, // #__atomic_fetch_nand_4
  3082, // #__atomic_fetch_nand_8
  3105, // #__atomic_fetch_or_1
  3126, // #__atomic_fetch_or_16
  3148, // #__atomic_fetch_or_2
  3169, // #__atomic_fetch_or_4
  3190, // #__atomic_fetch_or_8
  3211, // #__atomic_fetch_sub_1
  3233, // #__atomic_fetch_sub_16
  3256, // #__atomic_fetch_sub_2
  3278, // #__atomic_fetch_sub_4
  3300, // #__atomic_fetch_sub_8
  3322, // #__atomic_fetch_xor_1
  3344, // #__atomic_fetch_xor_16
  3367, // #__atomic_fetch_xor_2
  3389, // #__atomic_fetch_xor_4
  3411, // #__atomic_fetch_xor_8
  3433, // #__atomic_load
  3448, // #__atomic_load_1
  3465, // #__atomic_load_16
  3483, // #__atomic_load_2
  3500, // #__atomic_load_4
  3517, // #__atomic_load_8
  3534, // #__atomic_store
  3550, // #__atomic_store_1
  3568, // #__atomic_store_16
  3587, // #__atomic_store_2
  3605, // #__atomic_store_4
  3623, // #__atomic_store_8
  3641, // #__clear_cache
  3656, // #__clzdi2
  3666, // #__clzsi2
  3676, // #__clzti2
  3686, // #__cxa_end_cleanup
  3705, // #__divdf3
  3715, // #__divdi3
  3725, // #__divhi3
  3735, // #__divqi3
  3745, // #__divsf3
  3755, // #__divsi3
  3765, // #__divtf3
  3775, // #__divti3
  3785, // #__eqdf2
  3794, // #__eqsf2
  3803, // #__eqtf2
  3812, // #__exp2_finite
  3827, // #__exp2f_finite
  3843, // #__exp2l_finite
  3859, // #__exp_finite
  3873, // #__expf_finite
  3888, // #__expl_finite
  3903, // #__extendbfsf2
  3918, // #__extenddftf2
  3933, // #__extendhfdf2
  3948, // #__extendhfsf2
  3963, // #__extendhftf2
  3978, // #__extendsfdf2
  3993, // #__extendsftf2
  4008, // #__fixdfdi
  4019, // #__fixdfsi
  4030, // #__fixdfti
  4041, // #__fixhfdi
  4052, // #__fixhfsi
  4063, // #__fixhfti
  4074, // #__fixsfdi
  4085, // #__fixsfsi
  4096, // #__fixsfti
  4107, // #__fixtfdi
  4118, // #__fixtfsi
  4129, // #__fixtfti
  4140, // #__fixunsdfdi
  4154, // #__fixunsdfsi
  4168, // #__fixunsdfti
  4182, // #__fixunshfdi
  4196, // #__fixunshfsi
  4210, // #__fixunshfti
  4224, // #__fixunssfdi
  4238, // #__fixunssfsi
  4252, // #__fixunssfti
  4266, // #__fixunstfdi
  4280, // #__fixunstfsi
  4294, // #__fixunstfti
  4308, // #__floatdibf
  4321, // #__floatdidf
  4334, // #__floatdihf
  4347, // #__floatdisf
  4360, // #__floatditf
  4373, // #__floatsidf
  4386, // #__floatsihf
  4399, // #__floatsisf
  4412, // #__floatsitf
  4425, // #__floattidf
  4438, // #__floattihf
  4451, // #__floattisf
  4464, // #__floattitf
  4477, // #__floatundibf
  4492, // #__floatundidf
  4507, // #__floatundihf
  4522, // #__floatundisf
  4537, // #__floatunditf
  4552, // #__floatunsidf
  4567, // #__floatunsihf
  4582, // #__floatunsisf
  4597, // #__floatunsitf
  4612, // #__floatuntidf
  4627, // #__floatuntihf
  4642, // #__floatuntisf
  4657, // #__floatuntitf
  4672, // #__gedf2
  4681, // #__gesf2
  4690, // #__getf2
  4699, // #__gtdf2
  4708, // #__gtsf2
  4717, // #__gttf2
  4726, // #__ledf2
  4735, // #__lesf2
  4744, // #__letf2
  4753, // #__llvm_deoptimize
  4772, // #__llvm_memcpy_element_unordered_atomic_1
  4814, // #__llvm_memcpy_element_unordered_atomic_16
  4857, // #__llvm_memcpy_element_unordered_atomic_2
  4899, // #__llvm_memcpy_element_unordered_atomic_4
  4941, // #__llvm_memcpy_element_unordered_atomic_8
  4983, // #__llvm_memmove_element_unordered_atomic_1
  5026, // #__llvm_memmove_element_unordered_atomic_16
  5070, // #__llvm_memmove_element_unordered_atomic_2
  5113, // #__llvm_memmove_element_unordered_atomic_4
  5156, // #__llvm_memmove_element_unordered_atomic_8
  5199, // #__llvm_memset_element_unordered_atomic_1
  5241, // #__llvm_memset_element_unordered_atomic_16
  5284, // #__llvm_memset_element_unordered_atomic_2
  5326, // #__llvm_memset_element_unordered_atomic_4
  5368, // #__llvm_memset_element_unordered_atomic_8
  5410, // #__log10_finite
  5426, // #__log10f_finite
  5443, // #__log10l_finite
  5460, // #__log2_finite
  5475, // #__log2f_finite
  5491, // #__log2l_finite
  5507, // #__log_finite
  5521, // #__logf_finite
  5536, // #__logl_finite
  5551, // #__lshrdi3
  5562, // #__lshrhi3
  5573, // #__lshrsi3
  5584, // #__lshrti3
  5595, // #__ltdf2
  5604, // #__ltsf2
  5613, // #__lttf2
  5622, // #__moddi3
  5632, // #__modhi3
  5642, // #__modqi3
  5652, // #__modsi3
  5662, // #__modti3
  5672, // #__muldf3
  5682, // #__muldi3
  5692, // #__mulhi3
  5702, // #__mulosi4
  5713, // #__mulqi3
  5723, // #__mulsf3
  5733, // #__mulsi3
  5743, // #__multf3
  5753, // #__multi3
  5763, // #__nedf2
  5772, // #__negdi2
  5782, // #__negsi2
  5792, // #__nesf2
  5801, // #__netf2
  5810, // #__popcountdi2
  5825, // #__popcountsi2
  5840, // #__popcountti2
  5855, // #__pow_finite
  5869, // #__powf_finite
  5884, // #__powitf2
  5895, // #__powl_finite
  5910, // #__safestack_pointer_address
  5939, // #__stack_chk_fail
  5957, // #__subdf3
  5967, // #__subsf3
  5977, // #__subtf3
  5987, // #__sync_fetch_and_add_1
  6011, // #__sync_fetch_and_add_16
  6036, // #__sync_fetch_and_add_2
  6060, // #__sync_fetch_and_add_4
  6084, // #__sync_fetch_and_add_8
  6108, // #__sync_fetch_and_and_1
  6132, // #__sync_fetch_and_and_16
  6157, // #__sync_fetch_and_and_2
  6181, // #__sync_fetch_and_and_4
  6205, // #__sync_fetch_and_and_8
  6229, // #__sync_fetch_and_max_1
  6253, // #__sync_fetch_and_max_16
  6278, // #__sync_fetch_and_max_2
  6302, // #__sync_fetch_and_max_4
  6326, // #__sync_fetch_and_max_8
  6350, // #__sync_fetch_and_min_1
  6374, // #__sync_fetch_and_min_16
  6399, // #__sync_fetch_and_min_2
  6423, // #__sync_fetch_and_min_4
  6447, // #__sync_fetch_and_min_8
  6471, // #__sync_fetch_and_nand_1
  6496, // #__sync_fetch_and_nand_16
  6522, // #__sync_fetch_and_nand_2
  6547, // #__sync_fetch_and_nand_4
  6572, // #__sync_fetch_and_nand_8
  6597, // #__sync_fetch_and_or_1
  6620, // #__sync_fetch_and_or_16
  6644, // #__sync_fetch_and_or_2
  6667, // #__sync_fetch_and_or_4
  6690, // #__sync_fetch_and_or_8
  6713, // #__sync_fetch_and_sub_1
  6737, // #__sync_fetch_and_sub_16
  6762, // #__sync_fetch_and_sub_2
  6786, // #__sync_fetch_and_sub_4
  6810, // #__sync_fetch_and_sub_8
  6834, // #__sync_fetch_and_umax_1
  6859, // #__sync_fetch_and_umax_16
  6885, // #__sync_fetch_and_umax_2
  6910, // #__sync_fetch_and_umax_4
  6935, // #__sync_fetch_and_umax_8
  6960, // #__sync_fetch_and_umin_1
  6985, // #__sync_fetch_and_umin_16
  7011, // #__sync_fetch_and_umin_2
  7036, // #__sync_fetch_and_umin_4
  7061, // #__sync_fetch_and_umin_8
  7086, // #__sync_fetch_and_xor_1
  7110, // #__sync_fetch_and_xor_16
  7135, // #__sync_fetch_and_xor_2
  7159, // #__sync_fetch_and_xor_4
  7183, // #__sync_fetch_and_xor_8
  7207, // #__sync_lock_test_and_set_1
  7235, // #__sync_lock_test_and_set_16
  7264, // #__sync_lock_test_and_set_2
  7292, // #__sync_lock_test_and_set_4
  7320, // #__sync_lock_test_and_set_8
  7348, // #__sync_val_compare_and_swap_1
  7379, // #__sync_val_compare_and_swap_16
  7411, // #__sync_val_compare_and_swap_2
  7442, // #__sync_val_compare_and_swap_4
  7473, // #__sync_val_compare_and_swap_8
  7504, // #__truncdfbf2
  7518, // #__truncdfhf2
  7532, // #__truncdfsf2
  7546, // #__truncsfbf2
  7560, // #__truncsfhf2
  7574, // #__trunctfbf2
  7588, // #__trunctfdf2
  7602, // #__trunctfhf2
  7616, // #__trunctfsf2
  7630, // #__udivdi3
  7641, // #__udivhi3
  7652, // #__udivqi3
  7663, // #__udivsi3
  7674, // #__udivti3
  7685, // #__umoddi3
  7696, // #__umodhi3
  7707, // #__umodqi3
  7718, // #__umodsi3
  7729, // #__umodti3
  7740, // #__unorddf2
  7752, // #__unordsf2
  7764, // #__unordtf2
  7776, // #acos
  7782, // #acosf
  7789, // #acosl
  7796, // #asin
  7802, // #asinf
  7809, // #asinl
  7816, // #atan
  7822, // #atan2
  7829, // #atan2f
  7837, // #atan2l
  7845, // #atanf
  7852, // #atanl
  7859, // #calloc
  7867, // #cbrt
  7873, // #cbrtf
  7880, // #cbrtl
  7887, // #ceil
  7893, // #ceilf
  7900, // #ceill
  7907, // #copysign
  7917, // #copysignf
  7928, // #copysignl
  7939, // #cos
  7944, // #cosf
  7950, // #cosh
  7956, // #coshf
  7963, // #coshl
  7970, // #cosl
  7976, // #exp
  7981, // #exp10
  7988, // #exp10f
  7996, // #exp10l
  8004, // #exp2
  8010, // #exp2f
  8017, // #exp2l
  8024, // #expf
  8030, // #expl
  8036, // #fegetenv
  8046, // #fegetmode
  8057, // #fesetenv
  8067, // #fesetmode
  8078, // #floor
  8085, // #floorf
  8093, // #floorl
  8101, // #fma
  8106, // #fmaf
  8112, // #fmal
  8118, // #fmax
  8124, // #fmaxf
  8131, // #fmaximum
  8141, // #fmaximum_num
  8155, // #fmaximum_numf
  8170, // #fmaximum_numl
  8185, // #fmaximumf
  8196, // #fmaximuml
  8207, // #fmaxl
  8214, // #fmin
  8220, // #fminf
  8227, // #fminimum
  8237, // #fminimum_num
  8251, // #fminimum_numf
  8266, // #fminimum_numl
  8281, // #fminimumf
  8292, // #fminimuml
  8303, // #fminl
  8310, // #fmod
  8316, // #fmodf
  8323, // #fmodl
  8330, // #frexp
  8337, // #ldexp
  8344, // #llrint
  8352, // #llrintf
  8361, // #llrintl
  8370, // #llround
  8379, // #llroundf
  8389, // #llroundl
  8399, // #log
  8404, // #log10
  8411, // #log10f
  8419, // #log10l
  8427, // #log2
  8433, // #log2f
  8440, // #log2l
  8447, // #logf
  8453, // #logl
  8459, // #lrint
  8466, // #lrintf
  8474, // #lrintl
  8482, // #lround
  8490, // #lroundf
  8499, // #lroundl
  8508, // #memcpy
  8516, // #memmove
  8525, // #memset
  8533, // #modf
  8539, // #modff
  8546, // #modfl
  8553, // #nearbyint
  8564, // #nearbyintf
  8576, // #nearbyintl
  8588, // #pow
  8593, // #powf
  8599, // #powl
  8605, // #rint
  8611, // #rintf
  8618, // #rintl
  8625, // #round
  8632, // #roundeven
  8643, // #roundevenf
  8655, // #roundevenl
  8667, // #roundf
  8675, // #roundl
  8683, // #sin
  8688, // #sincospi
  8698, // #sincospif
  8709, // #sincospil
  8720, // #sinf
  8726, // #sinh
  8732, // #sinhf
  8739, // #sinhl
  8746, // #sinl
  8752, // #sqrt
  8758, // #sqrtf
  8765, // #sqrtl
  8772, // #tan
  8777, // #tanf
  8783, // #tanh
  8789, // #tanhf
  8796, // #tanhl
  8803, // #tanl
  8809, // #trunc
  8816, // #truncf
  8824, // #truncl
  8832, // .div
  8837, // .rem
  8842, // .udiv
  8848, // .umul
  8854, // .urem
  8860, // @@DCPY@B
  8869, // @@EXP2@B
  8878, // @@FCBT@B
  8887, // @@FCEL@B
  8896, // @@FCOS@B
  8905, // @@FCPY@B
  8914, // @@FEXP@B
  8923, // @@FFLR@B
  8932, // @@FFMD@B
  8941, // @@FFXP@B
  8950, // @@FLG1@B
  8959, // @@FLG2@B
  8968, // @@FLOG@B
  8977, // @@FLXP@B
  8986, // @@FMA@B
  8994, // @@FMAFB
  9002, // @@FMALB
  9010, // @@FMAX@B
  9019, // @@FMAXFB
  9028, // @@FMAXLB
  9037, // @@FMIN@B
  9046, // @@FMINFB
  9055, // @@FMINLB
  9064, // @@FPOW@B
  9073, // @@FRND@B
  9082, // @@FSIN@B
  9091, // @@FSQT@B
  9100, // @@FTRC@B
  9109, // @@FXP2@B
  9118, // @@LCBT@B
  9127, // @@LCEL@B
  9136, // @@LCOS@B
  9145, // @@LCPY@B
  9154, // @@LEXP@B
  9163, // @@LFLR@B
  9172, // @@LFMD@B
  9181, // @@LFXP@B
  9190, // @@LLG1@B
  9199, // @@LLG2@B
  9208, // @@LLOG@B
  9217, // @@LLRD@B
  9226, // @@LLRDFB
  9235, // @@LLRDLB
  9244, // @@LLRT@B
  9253, // @@LLRTFB
  9262, // @@LLRTLB
  9271, // @@LLXP@B
  9280, // @@LOG2@B
  9289, // @@LPOW@B
  9298, // @@LRND@B
  9307, // @@LRNT@B
  9316, // @@LRNTFB
  9325, // @@LRNTLB
  9334, // @@LSIN@B
  9343, // @@LSQT@B
  9352, // @@LTRC@B
  9361, // @@LXP2@B
  9370, // @@NBYI@B
  9379, // @@NBYIFB
  9388, // @@NBYILB
  9397, // @@RINTFB
  9406, // @@RINTLB
  9415, // @@ROND@B
  9424, // @@ROUN@B
  9433, // @@ROUNFB
  9442, // @@ROUNLB
  9451, // @@SCEL@B
  9460, // @@SCOS@B
  9469, // @@SCRT@B
  9478, // @@SFLR@B
  9487, // @@SFXP@B
  9496, // @@SLXP@B
  9505, // @@SRNT@B
  9514, // @@SSIN@B
  9523, // @@TRNC@B
  9532, // @@WEXP@B
  9541, // @@WFMD@B
  9550, // @@WLG1@B
  9559, // @@WLOG@B
  9568, // @@WPOW@B
  9577, // @@WSQT@B
  9586, // _Q_add
  9593, // _Q_div
  9600, // _Q_dtoq
  9608, // _Q_itoq
  9616, // _Q_lltoq
  9625, // _Q_mul
  9632, // _Q_qtod
  9640, // _Q_qtoi
  9648, // _Q_qtoll
  9657, // _Q_qtos
  9665, // _Q_qtou
  9673, // _Q_qtoull
  9683, // _Q_sqrt
  9691, // _Q_stoq
  9699, // _Q_sub
  9706, // _Q_ulltoq
  9716, // _Q_utoq
  9724, // _Qp_add
  9732, // _Qp_div
  9740, // _Qp_dtoq
  9749, // _Qp_itoq
  9758, // _Qp_mul
  9766, // _Qp_qtod
  9775, // _Qp_qtoi
  9784, // _Qp_qtos
  9793, // _Qp_qtoui
  9803, // _Qp_qtoux
  9813, // _Qp_qtox
  9822, // _Qp_sqrt
  9831, // _Qp_stoq
  9840, // _Qp_sub
  9848, // _Qp_uitoq
  9858, // _Qp_uxtoq
  9868, // _Qp_xtoq
  9877, // _Unwind_CallPersonality
  9901, // _Unwind_Resume
  9916, // _Unwind_SjLj_Register
  9938, // _Unwind_SjLj_Resume
  9958, // _Unwind_SjLj_Unregister
  9982, // ___bzero
  9991, // ___bzero64
  10002, // ___memmove
  10013, // ___memmove64
  10026, // ___memset
  10036, // ___memset64
  10048, // __aarch64_cas16_acq
  10068, // __aarch64_cas16_acq_rel
  10092, // __aarch64_cas16_rel
  10112, // __aarch64_cas16_relax
  10134, // __aarch64_cas1_acq
  10153, // __aarch64_cas1_acq_rel
  10176, // __aarch64_cas1_rel
  10195, // __aarch64_cas1_relax
  10216, // __aarch64_cas2_acq
  10235, // __aarch64_cas2_acq_rel
  10258, // __aarch64_cas2_rel
  10277, // __aarch64_cas2_relax
  10298, // __aarch64_cas4_acq
  10317, // __aarch64_cas4_acq_rel
  10340, // __aarch64_cas4_rel
  10359, // __aarch64_cas4_relax
  10380, // __aarch64_cas8_acq
  10399, // __aarch64_cas8_acq_rel
  10422, // __aarch64_cas8_rel
  10441, // __aarch64_cas8_relax
  10462, // __aarch64_ldadd1_acq
  10483, // __aarch64_ldadd1_acq_rel
  10508, // __aarch64_ldadd1_rel
  10529, // __aarch64_ldadd1_relax
  10552, // __aarch64_ldadd2_acq
  10573, // __aarch64_ldadd2_acq_rel
  10598, // __aarch64_ldadd2_rel
  10619, // __aarch64_ldadd2_relax
  10642, // __aarch64_ldadd4_acq
  10663, // __aarch64_ldadd4_acq_rel
  10688, // __aarch64_ldadd4_rel
  10709, // __aarch64_ldadd4_relax
  10732, // __aarch64_ldadd8_acq
  10753, // __aarch64_ldadd8_acq_rel
  10778, // __aarch64_ldadd8_rel
  10799, // __aarch64_ldadd8_relax
  10822, // __aarch64_ldclr1_acq
  10843, // __aarch64_ldclr1_acq_rel
  10868, // __aarch64_ldclr1_rel
  10889, // __aarch64_ldclr1_relax
  10912, // __aarch64_ldclr2_acq
  10933, // __aarch64_ldclr2_acq_rel
  10958, // __aarch64_ldclr2_rel
  10979, // __aarch64_ldclr2_relax
  11002, // __aarch64_ldclr4_acq
  11023, // __aarch64_ldclr4_acq_rel
  11048, // __aarch64_ldclr4_rel
  11069, // __aarch64_ldclr4_relax
  11092, // __aarch64_ldclr8_acq
  11113, // __aarch64_ldclr8_acq_rel
  11138, // __aarch64_ldclr8_rel
  11159, // __aarch64_ldclr8_relax
  11182, // __aarch64_ldeor1_acq
  11203, // __aarch64_ldeor1_acq_rel
  11228, // __aarch64_ldeor1_rel
  11249, // __aarch64_ldeor1_relax
  11272, // __aarch64_ldeor2_acq
  11293, // __aarch64_ldeor2_acq_rel
  11318, // __aarch64_ldeor2_rel
  11339, // __aarch64_ldeor2_relax
  11362, // __aarch64_ldeor4_acq
  11383, // __aarch64_ldeor4_acq_rel
  11408, // __aarch64_ldeor4_rel
  11429, // __aarch64_ldeor4_relax
  11452, // __aarch64_ldeor8_acq
  11473, // __aarch64_ldeor8_acq_rel
  11498, // __aarch64_ldeor8_rel
  11519, // __aarch64_ldeor8_relax
  11542, // __aarch64_ldset1_acq
  11563, // __aarch64_ldset1_acq_rel
  11588, // __aarch64_ldset1_rel
  11609, // __aarch64_ldset1_relax
  11632, // __aarch64_ldset2_acq
  11653, // __aarch64_ldset2_acq_rel
  11678, // __aarch64_ldset2_rel
  11699, // __aarch64_ldset2_relax
  11722, // __aarch64_ldset4_acq
  11743, // __aarch64_ldset4_acq_rel
  11768, // __aarch64_ldset4_rel
  11789, // __aarch64_ldset4_relax
  11812, // __aarch64_ldset8_acq
  11833, // __aarch64_ldset8_acq_rel
  11858, // __aarch64_ldset8_rel
  11879, // __aarch64_ldset8_relax
  11902, // __aarch64_swp1_acq
  11921, // __aarch64_swp1_acq_rel
  11944, // __aarch64_swp1_rel
  11963, // __aarch64_swp1_relax
  11984, // __aarch64_swp2_acq
  12003, // __aarch64_swp2_acq_rel
  12026, // __aarch64_swp2_rel
  12045, // __aarch64_swp2_relax
  12066, // __aarch64_swp4_acq
  12085, // __aarch64_swp4_acq_rel
  12108, // __aarch64_swp4_rel
  12127, // __aarch64_swp4_relax
  12148, // __aarch64_swp8_acq
  12167, // __aarch64_swp8_acq_rel
  12190, // __aarch64_swp8_rel
  12209, // __aarch64_swp8_relax
  12230, // __adddf3
  12239, // __adddf3vfp
  12251, // __addkf3
  12260, // __addsf3
  12269, // __addsf3vfp
  12281, // __addtf3
  12290, // __addxf3
  12299, // __aeabi_d2f
  12311, // __aeabi_d2h
  12323, // __aeabi_d2iz
  12336, // __aeabi_d2lz
  12349, // __aeabi_d2uiz
  12363, // __aeabi_d2ulz
  12377, // __aeabi_dadd
  12390, // __aeabi_dcmpeq
  12390, // __aeabi_dcmpeq
  12405, // __aeabi_dcmpge
  12420, // __aeabi_dcmpgt
  12435, // __aeabi_dcmple
  12450, // __aeabi_dcmplt
  12465, // __aeabi_dcmpun
  12480, // __aeabi_ddiv
  12493, // __aeabi_dmul
  12506, // __aeabi_dsub
  12519, // __aeabi_f2d
  12531, // __aeabi_f2h
  12543, // __aeabi_f2iz
  12556, // __aeabi_f2lz
  12569, // __aeabi_f2uiz
  12583, // __aeabi_f2ulz
  12597, // __aeabi_fadd
  12610, // __aeabi_fcmpeq
  12610, // __aeabi_fcmpeq
  12625, // __aeabi_fcmpge
  12640, // __aeabi_fcmpgt
  12655, // __aeabi_fcmple
  12670, // __aeabi_fcmplt
  12685, // __aeabi_fcmpun
  12700, // __aeabi_fdiv
  12713, // __aeabi_fmul
  12726, // __aeabi_fsub
  12739, // __aeabi_h2f
  12751, // __aeabi_i2d
  12763, // __aeabi_i2f
  12775, // __aeabi_idiv
  12775, // __aeabi_idiv
  12775, // __aeabi_idiv
  12788, // __aeabi_idivmod
  12804, // __aeabi_l2d
  12816, // __aeabi_l2f
  12828, // __aeabi_lasr
  12841, // __aeabi_ldivmod
  12857, // __aeabi_llsl
  12870, // __aeabi_llsr
  12883, // __aeabi_lmul
  12896, // __aeabi_memclr
  12911, // __aeabi_memclr4
  12927, // __aeabi_memclr8
  12943, // __aeabi_memcpy
  12958, // __aeabi_memcpy4
  12974, // __aeabi_memcpy8
  12990, // __aeabi_memmove
  13006, // __aeabi_memmove4
  13023, // __aeabi_memmove8
  13040, // __aeabi_memset
  13055, // __aeabi_memset4
  13071, // __aeabi_memset8
  13087, // __aeabi_ui2d
  13100, // __aeabi_ui2f
  13113, // __aeabi_uidiv
  13113, // __aeabi_uidiv
  13113, // __aeabi_uidiv
  13127, // __aeabi_uidivmod
  13144, // __aeabi_ul2d
  13157, // __aeabi_ul2f
  13170, // __aeabi_uldivmod
  13187, // __arm_sc_memcpy
  13203, // __arm_sc_memmove
  13220, // __arm_sc_memset
  13236, // __ashldi3
  13246, // __ashlhi3
  13256, // __ashlsi3
  13266, // __ashlti3
  13276, // __ashrdi3
  13286, // __ashrhi3
  13296, // __ashrsi3
  13306, // __ashrti3
  13316, // __atomic_compare_exchange
  13342, // __atomic_compare_exchange_1
  13370, // __atomic_compare_exchange_16
  13399, // __atomic_compare_exchange_2
  13427, // __atomic_compare_exchange_4
  13455, // __atomic_compare_exchange_8
  13483, // __atomic_exchange
  13501, // __atomic_exchange_1
  13521, // __atomic_exchange_16
  13542, // __atomic_exchange_2
  13562, // __atomic_exchange_4
  13582, // __atomic_exchange_8
  13602, // __atomic_fetch_add_1
  13623, // __atomic_fetch_add_16
  13645, // __atomic_fetch_add_2
  13666, // __atomic_fetch_add_4
  13687, // __atomic_fetch_add_8
  13708, // __atomic_fetch_and_1
  13729, // __atomic_fetch_and_16
  13751, // __atomic_fetch_and_2
  13772, // __atomic_fetch_and_4
  13793, // __atomic_fetch_and_8
  13814, // __atomic_fetch_nand_1
  13836, // __atomic_fetch_nand_16
  13859, // __atomic_fetch_nand_2
  13881, // __atomic_fetch_nand_4
  13903, // __atomic_fetch_nand_8
  13925, // __atomic_fetch_or_1
  13945, // __atomic_fetch_or_16
  13966, // __atomic_fetch_or_2
  13986, // __atomic_fetch_or_4
  14006, // __atomic_fetch_or_8
  14026, // __atomic_fetch_sub_1
  14047, // __atomic_fetch_sub_16
  14069, // __atomic_fetch_sub_2
  14090, // __atomic_fetch_sub_4
  14111, // __atomic_fetch_sub_8
  14132, // __atomic_fetch_xor_1
  14153, // __atomic_fetch_xor_16
  14175, // __atomic_fetch_xor_2
  14196, // __atomic_fetch_xor_4
  14217, // __atomic_fetch_xor_8
  14238, // __atomic_load
  14252, // __atomic_load_1
  14268, // __atomic_load_16
  14285, // __atomic_load_2
  14301, // __atomic_load_4
  14317, // __atomic_load_8
  14333, // __atomic_store
  14348, // __atomic_store_1
  14365, // __atomic_store_16
  14383, // __atomic_store_2
  14400, // __atomic_store_4
  14417, // __atomic_store_8
  14434, // __bzero
  14442, // __clear_cache
  14456, // __clzdi2
  14465, // __clzsi2
  14474, // __clzti2
  14483, // __cxa_end_cleanup
  14501, // __divdf3
  14510, // __divdf3vfp
  14522, // __divdi3
  14531, // __divhi3
  14540, // __divkf3
  14549, // __divmodhi4
  14561, // __divmodqi4
  14573, // __divmodsi4
  14585, // __divqi3
  14594, // __divsf3
  14603, // __divsf3vfp
  14615, // __divsi3
  14624, // __divtf3
  14633, // __divti3
  14642, // __divxf3
  14651, // __dtoi64
  14660, // __dtou64
  14669, // __eqdf2
  14677, // __eqdf2vfp
  14688, // __eqkf2
  14696, // __eqsf2
  14704, // __eqsf2vfp
  14715, // __eqtf2
  14723, // __exp10
  14731, // __exp10f
  14740, // __exp10f128_finite
  14759, // __exp2_finite
  14773, // __exp2f128_finite
  14791, // __exp2f_finite
  14806, // __exp2l_finite
  14806, // __exp2l_finite
  14806, // __exp2l_finite
  14821, // __exp_finite
  14834, // __expf128_finite
  14851, // __expf_finite
  14865, // __expl_finite
  14865, // __expl_finite
  14865, // __expl_finite
  14879, // __extendbfsf2
  14893, // __extenddfkf2
  14907, // __extenddftf2
  14921, // __extendhfdf2
  14935, // __extendhfsf2
  14949, // __extendhftf2
  14963, // __extendhfxf2
  14977, // __extendkftf2
  14991, // __extendsfdf2
  15005, // __extendsfdf2vfp
  15022, // __extendsfkf2
  15036, // __extendsftf2
  15050, // __extendxftf2
  15064, // __fixdfdi
  15074, // __fixdfsi
  15084, // __fixdfsivfp
  15097, // __fixdfti
  15107, // __fixhfdi
  15117, // __fixhfsi
  15127, // __fixhfti
  15137, // __fixkfdi
  15147, // __fixkfsi
  15157, // __fixkfti
  15167, // __fixsfdi
  15177, // __fixsfsi
  15187, // __fixsfsivfp
  15200, // __fixsfti
  15210, // __fixtfdi
  15210, // __fixtfdi
  15220, // __fixtfsi
  15230, // __fixtfti
  15230, // __fixtfti
  15240, // __fixunsdfdi
  15253, // __fixunsdfsi
  15266, // __fixunsdfsivfp
  15282, // __fixunsdfti
  15295, // __fixunshfdi
  15308, // __fixunshfsi
  15321, // __fixunshfti
  15334, // __fixunskfdi
  15347, // __fixunskfsi
  15360, // __fixunskfti
  15373, // __fixunssfdi
  15386, // __fixunssfsi
  15399, // __fixunssfsivfp
  15415, // __fixunssfti
  15428, // __fixunstfdi
  15428, // __fixunstfdi
  15441, // __fixunstfsi
  15441, // __fixunstfsi
  15454, // __fixunstfti
  15454, // __fixunstfti
  15467, // __fixunsxfdi
  15480, // __fixunsxfsi
  15493, // __fixunsxfti
  15506, // __fixxfdi
  15516, // __fixxfsi
  15526, // __fixxfti
  15536, // __floatdibf
  15548, // __floatdidf
  15560, // __floatdihf
  15572, // __floatdikf
  15584, // __floatdisf
  15596, // __floatditf
  15596, // __floatditf
  15608, // __floatdixf
  15620, // __floatsidf
  15632, // __floatsidfvfp
  15647, // __floatsihf
  15659, // __floatsikf
  15671, // __floatsisf
  15683, // __floatsisfvfp
  15698, // __floatsitf
  15710, // __floatsixf
  15722, // __floattidf
  15734, // __floattihf
  15746, // __floattikf
  15758, // __floattisf
  15770, // __floattitf
  15770, // __floattitf
  15782, // __floattixf
  15794, // __floatundibf
  15808, // __floatundidf
  15822, // __floatundihf
  15836, // __floatundikf
  15850, // __floatundisf
  15864, // __floatunditf
  15864, // __floatunditf
  15878, // __floatundixf
  15892, // __floatunsidf
  15906, // __floatunsihf
  15920, // __floatunsikf
  15934, // __floatunsisf
  15948, // __floatunsitf
  15962, // __floatunsixf
  15976, // __floatunssidfvfp
  15994, // __floatunssisfvfp
  16012, // __floatuntidf
  16026, // __floatuntihf
  16040, // __floatuntikf
  16054, // __floatuntisf
  16068, // __floatuntitf
  16068, // __floatuntitf
  16082, // __floatuntixf
  16096, // __gcc_dtoq
  16107, // __gcc_itoq
  16118, // __gcc_qadd
  16129, // __gcc_qdiv
  16140, // __gcc_qeq
  16150, // __gcc_qge
  16160, // __gcc_qgt
  16170, // __gcc_qle
  16180, // __gcc_qlt
  16190, // __gcc_qmul
  16201, // __gcc_qne
  16211, // __gcc_qsub
  16222, // __gcc_qtod
  16233, // __gcc_qtos
  16244, // __gcc_qtou
  16255, // __gcc_qunord
  16268, // __gcc_stoq
  16279, // __gcc_utoq
  16290, // __gedf2
  16298, // __gedf2vfp
  16309, // __gekf2
  16317, // __gesf2
  16325, // __gesf2vfp
  16336, // __getf2
  16344, // __gnu_f2h_ieee
  16359, // __gnu_h2f_ieee
  16374, // __gtdf2
  16382, // __gtdf2vfp
  16393, // __gtkf2
  16401, // __gtsf2
  16409, // __gtsf2vfp
  16420, // __gttf2
  16428, // __hexagon_adddf3
  16445, // __hexagon_divdf3
  16462, // __hexagon_divdi3
  16479, // __hexagon_divsf3
  16496, // __hexagon_divsi3
  16513, // __hexagon_fast2_sqrtdf2
  16537, // __hexagon_fast2_sqrtf
  16559, // __hexagon_fast_adddf3
  16581, // __hexagon_fast_divdf3
  16603, // __hexagon_fast_divsf3
  16625, // __hexagon_fast_muldf3
  16647, // __hexagon_fast_subdf3
  16669, // __hexagon_memcpy_likely_aligned_min32bytes_mult8bytes
  16723, // __hexagon_moddi3
  16740, // __hexagon_modsi3
  16757, // __hexagon_muldf3
  16774, // __hexagon_sqrtf
  16790, // __hexagon_subdf3
  16807, // __hexagon_udivdi3
  16825, // __hexagon_udivsi3
  16843, // __hexagon_umoddi3
  16861, // __hexagon_umodsi3
  16879, // __i64tod
  16888, // __i64tos
  16897, // __ledf2
  16905, // __ledf2vfp
  16916, // __lekf2
  16924, // __lesf2
  16932, // __lesf2vfp
  16943, // __letf2
  16951, // __llvm_deoptimize
  16969, // __llvm_memcpy_element_unordered_atomic_1
  17010, // __llvm_memcpy_element_unordered_atomic_16
  17052, // __llvm_memcpy_element_unordered_atomic_2
  17093, // __llvm_memcpy_element_unordered_atomic_4
  17134, // __llvm_memcpy_element_unordered_atomic_8
  17175, // __llvm_memmove_element_unordered_atomic_1
  17217, // __llvm_memmove_element_unordered_atomic_16
  17260, // __llvm_memmove_element_unordered_atomic_2
  17302, // __llvm_memmove_element_unordered_atomic_4
  17344, // __llvm_memmove_element_unordered_atomic_8
  17386, // __llvm_memset_element_unordered_atomic_1
  17427, // __llvm_memset_element_unordered_atomic_16
  17469, // __llvm_memset_element_unordered_atomic_2
  17510, // __llvm_memset_element_unordered_atomic_4
  17551, // __llvm_memset_element_unordered_atomic_8
  17592, // __log10_finite
  17607, // __log10f128_finite
  17626, // __log10f_finite
  17642, // __log10l_finite
  17642, // __log10l_finite
  17642, // __log10l_finite
  17658, // __log2_finite
  17672, // __log2f128_finite
  17690, // __log2f_finite
  17705, // __log2l_finite
  17705, // __log2l_finite
  17705, // __log2l_finite
  17720, // __log_finite
  17733, // __logf128_finite
  17750, // __logf_finite
  17764, // __logl_finite
  17764, // __logl_finite
  17764, // __logl_finite
  17778, // __lshrdi3
  17788, // __lshrhi3
  17798, // __lshrsi3
  17808, // __lshrti3
  17818, // __ltdf2
  17826, // __ltdf2vfp
  17837, // __ltkf2
  17845, // __ltsf2
  17853, // __ltsf2vfp
  17864, // __lttf2
  17872, // __memcpy_4
  17883, // __mips16_adddf3
  17899, // __mips16_addsf3
  17915, // __mips16_divdf3
  17931, // __mips16_divsf3
  17947, // __mips16_eqdf2
  17962, // __mips16_eqsf2
  17977, // __mips16_extendsfdf2
  17998, // __mips16_fix_truncdfsi
  18021, // __mips16_fix_truncsfsi
  18044, // __mips16_floatsidf
  18063, // __mips16_floatsisf
  18082, // __mips16_floatunsidf
  18103, // __mips16_floatunsisf
  18124, // __mips16_gedf2
  18139, // __mips16_gesf2
  18154, // __mips16_gtdf2
  18169, // __mips16_gtsf2
  18184, // __mips16_ledf2
  18199, // __mips16_lesf2
  18214, // __mips16_ltdf2
  18229, // __mips16_ltsf2
  18244, // __mips16_muldf3
  18260, // __mips16_mulsf3
  18276, // __mips16_nedf2
  18291, // __mips16_nesf2
  18306, // __mips16_ret_dc
  18322, // __mips16_ret_df
  18338, // __mips16_ret_sc
  18354, // __mips16_ret_sf
  18370, // __mips16_subdf3
  18386, // __mips16_subsf3
  18402, // __mips16_truncdfsf2
  18422, // __mips16_unorddf2
  18440, // __mips16_unordsf2
  18458, // __moddi3
  18467, // __modhi3
  18476, // __modqi3
  18485, // __modsi3
  18494, // __modti3
  18503, // __mspabi_addd
  18517, // __mspabi_addf
  18531, // __mspabi_cmpd
  18531, // __mspabi_cmpd
  18531, // __mspabi_cmpd
  18531, // __mspabi_cmpd
  18531, // __mspabi_cmpd
  18531, // __mspabi_cmpd
  18545, // __mspabi_cmpf
  18545, // __mspabi_cmpf
  18545, // __mspabi_cmpf
  18545, // __mspabi_cmpf
  18545, // __mspabi_cmpf
  18545, // __mspabi_cmpf
  18559, // __mspabi_cvtdf
  18574, // __mspabi_cvtfd
  18589, // __mspabi_divd
  18603, // __mspabi_divf
  18617, // __mspabi_divi
  18631, // __mspabi_divli
  18646, // __mspabi_divlli
  18662, // __mspabi_divu
  18676, // __mspabi_divul
  18691, // __mspabi_divull
  18707, // __mspabi_fixdli
  18723, // __mspabi_fixdlli
  18740, // __mspabi_fixdul
  18756, // __mspabi_fixdull
  18773, // __mspabi_fixfli
  18789, // __mspabi_fixflli
  18806, // __mspabi_fixful
  18822, // __mspabi_fixfull
  18839, // __mspabi_fltlid
  18855, // __mspabi_fltlif
  18871, // __mspabi_fltllid
  18888, // __mspabi_fltllif
  18905, // __mspabi_fltuld
  18921, // __mspabi_fltulf
  18937, // __mspabi_fltulld
  18954, // __mspabi_fltullf
  18971, // __mspabi_mpyd
  18985, // __mspabi_mpyf
  18999, // __mspabi_mpyi
  19013, // __mspabi_mpyi_f5hw
  19032, // __mspabi_mpyi_hw
  19049, // __mspabi_mpyl
  19063, // __mspabi_mpyl_f5hw
  19082, // __mspabi_mpyl_hw
  19099, // __mspabi_mpyl_hw32
  19118, // __mspabi_mpyll
  19133, // __mspabi_mpyll_f5hw
  19153, // __mspabi_mpyll_hw
  19171, // __mspabi_mpyll_hw32
  19191, // __mspabi_remi
  19205, // __mspabi_remli
  19220, // __mspabi_remlli
  19236, // __mspabi_remu
  19250, // __mspabi_remul
  19265, // __mspabi_remull
  19281, // __mspabi_slll
  19295, // __mspabi_sral
  19309, // __mspabi_srll
  19323, // __mspabi_subd
  19337, // __mspabi_subf
  19351, // __muldf3
  19360, // __muldf3vfp
  19372, // __muldi3
  19381, // __mulhi3
  19390, // __mulkf3
  19399, // __mulodi4
  19409, // __mulosi4
  19419, // __muloti4
  19429, // __mulqi3
  19438, // __mulsf3
  19447, // __mulsf3vfp
  19459, // __mulsi3
  19468, // __multf3
  19477, // __multi3
  19486, // __mulxf3
  19495, // __nedf2
  19503, // __nedf2vfp
  19514, // __negdi2
  19523, // __negsi2
  19532, // __nekf2
  19540, // __nesf2
  19548, // __nesf2vfp
  19559, // __netf2
  19567, // __popcountdi2
  19581, // __popcountsi2
  19595, // __popcountti2
  19609, // __pow_finite
  19622, // __powf128_finite
  19639, // __powf_finite
  19653, // __powidf2
  19663, // __powikf2
  19673, // __powisf2
  19683, // __powitf2
  19683, // __powitf2
  19693, // __powixf2
  19703, // __powl_finite
  19703, // __powl_finite
  19703, // __powl_finite
  19717, // __riscv_flush_icache
  19738, // __rt_sdiv
  19748, // __rt_sdiv64
  19760, // __rt_udiv
  19770, // __rt_udiv64
  19782, // __safestack_pointer_address
  19810, // __sincos_stret
  19825, // __sincosf_stret
  19841, // __stack_chk_fail
  19858, // __stack_smash_handler
  19880, // __stoi64
  19889, // __stou64
  19898, // __subdf3
  19907, // __subdf3vfp
  19919, // __subkf3
  19928, // __subsf3
  19937, // __subsf3vfp
  19949, // __subtf3
  19958, // __subxf3
  19967, // __sync_fetch_and_add_1
  19990, // __sync_fetch_and_add_16
  20014, // __sync_fetch_and_add_2
  20037, // __sync_fetch_and_add_4
  20060, // __sync_fetch_and_add_8
  20083, // __sync_fetch_and_and_1
  20106, // __sync_fetch_and_and_16
  20130, // __sync_fetch_and_and_2
  20153, // __sync_fetch_and_and_4
  20176, // __sync_fetch_and_and_8
  20199, // __sync_fetch_and_max_1
  20222, // __sync_fetch_and_max_16
  20246, // __sync_fetch_and_max_2
  20269, // __sync_fetch_and_max_4
  20292, // __sync_fetch_and_max_8
  20315, // __sync_fetch_and_min_1
  20338, // __sync_fetch_and_min_16
  20362, // __sync_fetch_and_min_2
  20385, // __sync_fetch_and_min_4
  20408, // __sync_fetch_and_min_8
  20431, // __sync_fetch_and_nand_1
  20455, // __sync_fetch_and_nand_16
  20480, // __sync_fetch_and_nand_2
  20504, // __sync_fetch_and_nand_4
  20528, // __sync_fetch_and_nand_8
  20552, // __sync_fetch_and_or_1
  20574, // __sync_fetch_and_or_16
  20597, // __sync_fetch_and_or_2
  20619, // __sync_fetch_and_or_4
  20641, // __sync_fetch_and_or_8
  20663, // __sync_fetch_and_sub_1
  20686, // __sync_fetch_and_sub_16
  20710, // __sync_fetch_and_sub_2
  20733, // __sync_fetch_and_sub_4
  20756, // __sync_fetch_and_sub_8
  20779, // __sync_fetch_and_umax_1
  20803, // __sync_fetch_and_umax_16
  20828, // __sync_fetch_and_umax_2
  20852, // __sync_fetch_and_umax_4
  20876, // __sync_fetch_and_umax_8
  20900, // __sync_fetch_and_umin_1
  20924, // __sync_fetch_and_umin_16
  20949, // __sync_fetch_and_umin_2
  20973, // __sync_fetch_and_umin_4
  20997, // __sync_fetch_and_umin_8
  21021, // __sync_fetch_and_xor_1
  21044, // __sync_fetch_and_xor_16
  21068, // __sync_fetch_and_xor_2
  21091, // __sync_fetch_and_xor_4
  21114, // __sync_fetch_and_xor_8
  21137, // __sync_lock_test_and_set_1
  21164, // __sync_lock_test_and_set_16
  21192, // __sync_lock_test_and_set_2
  21219, // __sync_lock_test_and_set_4
  21246, // __sync_lock_test_and_set_8
  21273, // __sync_val_compare_and_swap_1
  21303, // __sync_val_compare_and_swap_16
  21334, // __sync_val_compare_and_swap_2
  21364, // __sync_val_compare_and_swap_4
  21394, // __sync_val_compare_and_swap_8
  21424, // __truncdfbf2
  21437, // __truncdfhf2
  21450, // __truncdfsf2
  21463, // __truncdfsf2vfp
  21479, // __trunckfdf2
  21492, // __trunckfhf2
  21505, // __trunckfsf2
  21518, // __truncsfbf2
  21531, // __truncsfhf2
  21544, // __trunctfbf2
  21557, // __trunctfdf2
  21570, // __trunctfhf2
  21570, // __trunctfhf2
  21583, // __trunctfkf2
  21596, // __trunctfsf2
  21609, // __trunctfxf2
  21622, // __truncxfbf2
  21635, // __truncxfdf2
  21648, // __truncxfhf2
  21661, // __truncxfsf2
  21674, // __u64tod
  21683, // __u64tos
  21692, // __udivdi3
  21702, // __udivhi3
  21712, // __udivmodhi4
  21725, // __udivmodqi4
  21738, // __udivmodsi4
  21751, // __udivqi3
  21761, // __udivsi3
  21771, // __udivti3
  21781, // __umoddi3
  21791, // __umodhi3
  21801, // __umodqi3
  21811, // __umodsi3
  21821, // __umodti3
  21831, // __unorddf2
  21842, // __unorddf2vfp
  21856, // __unordkf2
  21867, // __unordsf2
  21878, // __unordsf2vfp
  21892, // __unordtf2
  21903, // _alldiv
  21911, // _allmul
  21919, // _allrem
  21927, // _aulldiv
  21936, // _aullrem
  21945, // acos
  21950, // acosf
  21956, // acosf128
  21965, // acosl
  21965, // acosl
  21965, // acosl
  21971, // asin
  21976, // asinf
  21982, // asinf128
  21991, // asinl
  21991, // asinl
  21991, // asinl
  21997, // atan
  22002, // atan2
  22008, // atan2f
  22015, // atan2f128
  22025, // atan2l
  22025, // atan2l
  22025, // atan2l
  22032, // atanf
  22038, // atanf128
  22047, // atanl
  22047, // atanl
  22047, // atanl
  22053, // bzero
  22059, // calloc
  22066, // cbrt
  22071, // cbrtf
  22077, // cbrtf128
  22086, // cbrtl
  22086, // cbrtl
  22086, // cbrtl
  22092, // ceil
  22097, // ceilf
  22103, // ceilf128
  22112, // ceill
  22112, // ceill
  22112, // ceill
  22118, // copysign
  22127, // copysignf
  22137, // copysignf128
  22150, // copysignl
  22150, // copysignl
  22150, // copysignl
  22160, // cos
  22160, // cos
  22164, // cosf
  22169, // cosf128
  22177, // cosh
  22182, // coshf
  22188, // coshf128
  22197, // coshl
  22197, // coshl
  22197, // coshl
  22203, // cosl
  22203, // cosl
  22203, // cosl
  22208, // emscripten_return_address
  22234, // exp
  22238, // exp10
  22244, // exp10f
  22251, // exp10f128
  22261, // exp10l
  22261, // exp10l
  22261, // exp10l
  22268, // exp2
  22273, // exp2f
  22279, // exp2f128
  22288, // exp2l
  22288, // exp2l
  22288, // exp2l
  22294, // expf
  22299, // expf128
  22307, // expl
  22307, // expl
  22307, // expl
  22312, // fegetenv
  22321, // fegetmode
  22331, // fesetenv
  22340, // fesetmode
  22350, // floor
  22356, // floorf
  22363, // floorf128
  22373, // floorl
  22373, // floorl
  22373, // floorl
  22380, // fma
  22384, // fmaf
  22389, // fmaf128
  22397, // fmal
  22397, // fmal
  22397, // fmal
  22402, // fmax
  22407, // fmaxf
  22413, // fmaxf128
  22422, // fmaximum
  22431, // fmaximum_num
  22444, // fmaximum_numf
  22458, // fmaximum_numf128
  22475, // fmaximum_numl
  22475, // fmaximum_numl
  22475, // fmaximum_numl
  22489, // fmaximumf
  22499, // fmaximumf128
  22512, // fmaximuml
  22512, // fmaximuml
  22512, // fmaximuml
  22522, // fmaxl
  22522, // fmaxl
  22522, // fmaxl
  22528, // fmin
  22533, // fminf
  22539, // fminf128
  22548, // fminimum
  22557, // fminimum_num
  22570, // fminimum_numf
  22584, // fminimum_numf128
  22601, // fminimum_numl
  22601, // fminimum_numl
  22601, // fminimum_numl
  22615, // fminimumf
  22625, // fminimumf128
  22638, // fminimuml
  22638, // fminimuml
  22638, // fminimuml
  22648, // fminl
  22648, // fminl
  22648, // fminl
  22654, // fmod
  22659, // fmodf
  22665, // fmodf128
  22674, // fmodl
  22674, // fmodl
  22674, // fmodl
  22680, // frexp
  22686, // frexpf
  22693, // frexpf128
  22703, // frexpl
  22703, // frexpl
  22703, // frexpl
  22710, // ldexp
  22716, // ldexpf
  22723, // ldexpf128
  22733, // ldexpl
  22733, // ldexpl
  22733, // ldexpl
  22740, // llrint
  22747, // llrintf
  22755, // llrintf128
  22766, // llrintl
  22766, // llrintl
  22766, // llrintl
  22774, // llround
  22782, // llroundf
  22791, // llroundf128
  22803, // llroundl
  22803, // llroundl
  22803, // llroundl
  22812, // log
  22816, // log10
  22822, // log10f
  22829, // log10f128
  22839, // log10l
  22839, // log10l
  22839, // log10l
  22846, // log2
  22851, // log2f
  22857, // log2f128
  22866, // log2l
  22866, // log2l
  22866, // log2l
  22872, // logf
  22877, // logf128
  22885, // logl
  22885, // logl
  22885, // logl
  22890, // lrint
  22896, // lrintf
  22903, // lrintf128
  22913, // lrintl
  22913, // lrintl
  22913, // lrintl
  22920, // lround
  22927, // lroundf
  22935, // lroundf128
  22946, // lroundl
  22946, // lroundl
  22946, // lroundl
  22954, // memcpy
  22961, // memmove
  22969, // memset
  22976, // modf
  22981, // modff
  22987, // modff128
  22996, // modfl
  22996, // modfl
  22996, // modfl
  23002, // nearbyint
  23012, // nearbyintf
  23023, // nearbyintf128
  23037, // nearbyintl
  23037, // nearbyintl
  23037, // nearbyintl
  23048, // objc_autorelease
  23065, // objc_autoreleasePoolPop
  23089, // objc_autoreleasePoolPush
  23114, // objc_autoreleaseReturnValue
  23142, // objc_claimAutoreleasedReturnValue
  23176, // objc_copyWeak
  23190, // objc_destroyWeak
  23207, // objc_initWeak
  23221, // objc_loadWeak
  23235, // objc_loadWeakRetained
  23257, // objc_moveWeak
  23271, // objc_release
  23284, // objc_retain
  23296, // objc_retainAutorelease
  23319, // objc_retainAutoreleaseReturnValue
  23353, // objc_retainAutoreleasedReturnValue
  23388, // objc_retainBlock
  23405, // objc_retain_autorelease
  23429, // objc_retainedObject
  23449, // objc_storeStrong
  23466, // objc_storeWeak
  23481, // objc_sync_enter
  23497, // objc_sync_exit
  23512, // objc_unretainedObject
  23534, // objc_unretainedPointer
  23557, // objc_unsafeClaimAutoreleasedReturnValue
  23597, // pow
  23601, // powf
  23606, // powf128
  23614, // powl
  23614, // powl
  23614, // powl
  23619, // rint
  23624, // rintf
  23630, // rintf128
  23639, // rintl
  23639, // rintl
  23639, // rintl
  23645, // round
  23651, // roundeven
  23661, // roundevenf
  23672, // roundevenf128
  23686, // roundevenl
  23686, // roundevenl
  23686, // roundevenl
  23697, // roundf
  23704, // roundf128
  23714, // roundl
  23714, // roundl
  23714, // roundl
  23721, // sin
  23721, // sin
  23725, // sincos
  23732, // sincosf
  23740, // sincosf128
  23751, // sincosl
  23751, // sincosl
  23751, // sincosl
  23759, // sincospi
  23768, // sincospif
  23778, // sincospil
  23778, // sincospil
  23778, // sincospil
  23788, // sinf
  23793, // sinf128
  23801, // sinh
  23806, // sinhf
  23812, // sinhf128
  23821, // sinhl
  23821, // sinhl
  23821, // sinhl
  23827, // sinl
  23827, // sinl
  23827, // sinl
  23832, // sqrt
  23837, // sqrtf
  23843, // sqrtf128
  23852, // sqrtl
  23852, // sqrtl
  23852, // sqrtl
  23858, // tan
  23862, // tanf
  23867, // tanf128
  23875, // tanh
  23880, // tanhf
  23886, // tanhf128
  23895, // tanhl
  23895, // tanhl
  23895, // tanhl
  23901, // tanl
  23901, // tanl
  23901, // tanl
  23906, // trunc
  23912, // truncf
  23919, // truncf128
  23929, // truncl
  23929, // truncl
  23929, // truncl
};
const RTLIB::Libcall llvm::RTLIB::RuntimeLibcallsInfo::ImplToLibcall[RTLIB::NumLibcallImpls] = {
  RTLIB::UNKNOWN_LIBCALL, // RTLIB::Unsupported
  RTLIB::UNWIND_RESUME, // RTLIB::arm64ec__Unwind_Resume
  RTLIB::OUTLINE_ATOMIC_CAS16_ACQ, // RTLIB::arm64ec___aarch64_cas16_acq
  RTLIB::OUTLINE_ATOMIC_CAS16_ACQ_REL, // RTLIB::arm64ec___aarch64_cas16_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS16_REL, // RTLIB::arm64ec___aarch64_cas16_rel
  RTLIB::OUTLINE_ATOMIC_CAS16_RELAX, // RTLIB::arm64ec___aarch64_cas16_relax
  RTLIB::OUTLINE_ATOMIC_CAS1_ACQ, // RTLIB::arm64ec___aarch64_cas1_acq
  RTLIB::OUTLINE_ATOMIC_CAS1_ACQ_REL, // RTLIB::arm64ec___aarch64_cas1_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS1_REL, // RTLIB::arm64ec___aarch64_cas1_rel
  RTLIB::OUTLINE_ATOMIC_CAS1_RELAX, // RTLIB::arm64ec___aarch64_cas1_relax
  RTLIB::OUTLINE_ATOMIC_CAS2_ACQ, // RTLIB::arm64ec___aarch64_cas2_acq
  RTLIB::OUTLINE_ATOMIC_CAS2_ACQ_REL, // RTLIB::arm64ec___aarch64_cas2_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS2_REL, // RTLIB::arm64ec___aarch64_cas2_rel
  RTLIB::OUTLINE_ATOMIC_CAS2_RELAX, // RTLIB::arm64ec___aarch64_cas2_relax
  RTLIB::OUTLINE_ATOMIC_CAS4_ACQ, // RTLIB::arm64ec___aarch64_cas4_acq
  RTLIB::OUTLINE_ATOMIC_CAS4_ACQ_REL, // RTLIB::arm64ec___aarch64_cas4_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS4_REL, // RTLIB::arm64ec___aarch64_cas4_rel
  RTLIB::OUTLINE_ATOMIC_CAS4_RELAX, // RTLIB::arm64ec___aarch64_cas4_relax
  RTLIB::OUTLINE_ATOMIC_CAS8_ACQ, // RTLIB::arm64ec___aarch64_cas8_acq
  RTLIB::OUTLINE_ATOMIC_CAS8_ACQ_REL, // RTLIB::arm64ec___aarch64_cas8_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS8_REL, // RTLIB::arm64ec___aarch64_cas8_rel
  RTLIB::OUTLINE_ATOMIC_CAS8_RELAX, // RTLIB::arm64ec___aarch64_cas8_relax
  RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ, // RTLIB::arm64ec___aarch64_ldadd1_acq
  RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ_REL, // RTLIB::arm64ec___aarch64_ldadd1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD1_REL, // RTLIB::arm64ec___aarch64_ldadd1_rel
  RTLIB::OUTLINE_ATOMIC_LDADD1_RELAX, // RTLIB::arm64ec___aarch64_ldadd1_relax
  RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ, // RTLIB::arm64ec___aarch64_ldadd2_acq
  RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ_REL, // RTLIB::arm64ec___aarch64_ldadd2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD2_REL, // RTLIB::arm64ec___aarch64_ldadd2_rel
  RTLIB::OUTLINE_ATOMIC_LDADD2_RELAX, // RTLIB::arm64ec___aarch64_ldadd2_relax
  RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ, // RTLIB::arm64ec___aarch64_ldadd4_acq
  RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ_REL, // RTLIB::arm64ec___aarch64_ldadd4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD4_REL, // RTLIB::arm64ec___aarch64_ldadd4_rel
  RTLIB::OUTLINE_ATOMIC_LDADD4_RELAX, // RTLIB::arm64ec___aarch64_ldadd4_relax
  RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ, // RTLIB::arm64ec___aarch64_ldadd8_acq
  RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ_REL, // RTLIB::arm64ec___aarch64_ldadd8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD8_REL, // RTLIB::arm64ec___aarch64_ldadd8_rel
  RTLIB::OUTLINE_ATOMIC_LDADD8_RELAX, // RTLIB::arm64ec___aarch64_ldadd8_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ, // RTLIB::arm64ec___aarch64_ldclr1_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ_REL, // RTLIB::arm64ec___aarch64_ldclr1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR1_REL, // RTLIB::arm64ec___aarch64_ldclr1_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR1_RELAX, // RTLIB::arm64ec___aarch64_ldclr1_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ, // RTLIB::arm64ec___aarch64_ldclr2_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ_REL, // RTLIB::arm64ec___aarch64_ldclr2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR2_REL, // RTLIB::arm64ec___aarch64_ldclr2_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR2_RELAX, // RTLIB::arm64ec___aarch64_ldclr2_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ, // RTLIB::arm64ec___aarch64_ldclr4_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ_REL, // RTLIB::arm64ec___aarch64_ldclr4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR4_REL, // RTLIB::arm64ec___aarch64_ldclr4_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR4_RELAX, // RTLIB::arm64ec___aarch64_ldclr4_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ, // RTLIB::arm64ec___aarch64_ldclr8_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ_REL, // RTLIB::arm64ec___aarch64_ldclr8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR8_REL, // RTLIB::arm64ec___aarch64_ldclr8_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR8_RELAX, // RTLIB::arm64ec___aarch64_ldclr8_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ, // RTLIB::arm64ec___aarch64_ldeor1_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ_REL, // RTLIB::arm64ec___aarch64_ldeor1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR1_REL, // RTLIB::arm64ec___aarch64_ldeor1_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR1_RELAX, // RTLIB::arm64ec___aarch64_ldeor1_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ, // RTLIB::arm64ec___aarch64_ldeor2_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ_REL, // RTLIB::arm64ec___aarch64_ldeor2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR2_REL, // RTLIB::arm64ec___aarch64_ldeor2_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR2_RELAX, // RTLIB::arm64ec___aarch64_ldeor2_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ, // RTLIB::arm64ec___aarch64_ldeor4_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ_REL, // RTLIB::arm64ec___aarch64_ldeor4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR4_REL, // RTLIB::arm64ec___aarch64_ldeor4_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR4_RELAX, // RTLIB::arm64ec___aarch64_ldeor4_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ, // RTLIB::arm64ec___aarch64_ldeor8_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ_REL, // RTLIB::arm64ec___aarch64_ldeor8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR8_REL, // RTLIB::arm64ec___aarch64_ldeor8_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR8_RELAX, // RTLIB::arm64ec___aarch64_ldeor8_relax
  RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ, // RTLIB::arm64ec___aarch64_ldset1_acq
  RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ_REL, // RTLIB::arm64ec___aarch64_ldset1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET1_REL, // RTLIB::arm64ec___aarch64_ldset1_rel
  RTLIB::OUTLINE_ATOMIC_LDSET1_RELAX, // RTLIB::arm64ec___aarch64_ldset1_relax
  RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ, // RTLIB::arm64ec___aarch64_ldset2_acq
  RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ_REL, // RTLIB::arm64ec___aarch64_ldset2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET2_REL, // RTLIB::arm64ec___aarch64_ldset2_rel
  RTLIB::OUTLINE_ATOMIC_LDSET2_RELAX, // RTLIB::arm64ec___aarch64_ldset2_relax
  RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ, // RTLIB::arm64ec___aarch64_ldset4_acq
  RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ_REL, // RTLIB::arm64ec___aarch64_ldset4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET4_REL, // RTLIB::arm64ec___aarch64_ldset4_rel
  RTLIB::OUTLINE_ATOMIC_LDSET4_RELAX, // RTLIB::arm64ec___aarch64_ldset4_relax
  RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ, // RTLIB::arm64ec___aarch64_ldset8_acq
  RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ_REL, // RTLIB::arm64ec___aarch64_ldset8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET8_REL, // RTLIB::arm64ec___aarch64_ldset8_rel
  RTLIB::OUTLINE_ATOMIC_LDSET8_RELAX, // RTLIB::arm64ec___aarch64_ldset8_relax
  RTLIB::OUTLINE_ATOMIC_SWP1_ACQ, // RTLIB::arm64ec___aarch64_swp1_acq
  RTLIB::OUTLINE_ATOMIC_SWP1_ACQ_REL, // RTLIB::arm64ec___aarch64_swp1_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP1_REL, // RTLIB::arm64ec___aarch64_swp1_rel
  RTLIB::OUTLINE_ATOMIC_SWP1_RELAX, // RTLIB::arm64ec___aarch64_swp1_relax
  RTLIB::OUTLINE_ATOMIC_SWP2_ACQ, // RTLIB::arm64ec___aarch64_swp2_acq
  RTLIB::OUTLINE_ATOMIC_SWP2_ACQ_REL, // RTLIB::arm64ec___aarch64_swp2_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP2_REL, // RTLIB::arm64ec___aarch64_swp2_rel
  RTLIB::OUTLINE_ATOMIC_SWP2_RELAX, // RTLIB::arm64ec___aarch64_swp2_relax
  RTLIB::OUTLINE_ATOMIC_SWP4_ACQ, // RTLIB::arm64ec___aarch64_swp4_acq
  RTLIB::OUTLINE_ATOMIC_SWP4_ACQ_REL, // RTLIB::arm64ec___aarch64_swp4_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP4_REL, // RTLIB::arm64ec___aarch64_swp4_rel
  RTLIB::OUTLINE_ATOMIC_SWP4_RELAX, // RTLIB::arm64ec___aarch64_swp4_relax
  RTLIB::OUTLINE_ATOMIC_SWP8_ACQ, // RTLIB::arm64ec___aarch64_swp8_acq
  RTLIB::OUTLINE_ATOMIC_SWP8_ACQ_REL, // RTLIB::arm64ec___aarch64_swp8_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP8_REL, // RTLIB::arm64ec___aarch64_swp8_rel
  RTLIB::OUTLINE_ATOMIC_SWP8_RELAX, // RTLIB::arm64ec___aarch64_swp8_relax
  RTLIB::ADD_F64, // RTLIB::arm64ec___adddf3
  RTLIB::ADD_F32, // RTLIB::arm64ec___addsf3
  RTLIB::ADD_F128, // RTLIB::arm64ec___addtf3
  RTLIB::SC_MEMCPY, // RTLIB::arm64ec___arm_sc_memcpy
  RTLIB::SC_MEMMOVE, // RTLIB::arm64ec___arm_sc_memmove
  RTLIB::SC_MEMSET, // RTLIB::arm64ec___arm_sc_memset
  RTLIB::SHL_I64, // RTLIB::arm64ec___ashldi3
  RTLIB::SHL_I16, // RTLIB::arm64ec___ashlhi3
  RTLIB::SHL_I32, // RTLIB::arm64ec___ashlsi3
  RTLIB::SHL_I128, // RTLIB::arm64ec___ashlti3
  RTLIB::SRA_I64, // RTLIB::arm64ec___ashrdi3
  RTLIB::SRA_I16, // RTLIB::arm64ec___ashrhi3
  RTLIB::SRA_I32, // RTLIB::arm64ec___ashrsi3
  RTLIB::SRA_I128, // RTLIB::arm64ec___ashrti3
  RTLIB::ATOMIC_COMPARE_EXCHANGE, // RTLIB::arm64ec___atomic_compare_exchange
  RTLIB::ATOMIC_COMPARE_EXCHANGE_1, // RTLIB::arm64ec___atomic_compare_exchange_1
  RTLIB::ATOMIC_COMPARE_EXCHANGE_16, // RTLIB::arm64ec___atomic_compare_exchange_16
  RTLIB::ATOMIC_COMPARE_EXCHANGE_2, // RTLIB::arm64ec___atomic_compare_exchange_2
  RTLIB::ATOMIC_COMPARE_EXCHANGE_4, // RTLIB::arm64ec___atomic_compare_exchange_4
  RTLIB::ATOMIC_COMPARE_EXCHANGE_8, // RTLIB::arm64ec___atomic_compare_exchange_8
  RTLIB::ATOMIC_EXCHANGE, // RTLIB::arm64ec___atomic_exchange
  RTLIB::ATOMIC_EXCHANGE_1, // RTLIB::arm64ec___atomic_exchange_1
  RTLIB::ATOMIC_EXCHANGE_16, // RTLIB::arm64ec___atomic_exchange_16
  RTLIB::ATOMIC_EXCHANGE_2, // RTLIB::arm64ec___atomic_exchange_2
  RTLIB::ATOMIC_EXCHANGE_4, // RTLIB::arm64ec___atomic_exchange_4
  RTLIB::ATOMIC_EXCHANGE_8, // RTLIB::arm64ec___atomic_exchange_8
  RTLIB::ATOMIC_FETCH_ADD_1, // RTLIB::arm64ec___atomic_fetch_add_1
  RTLIB::ATOMIC_FETCH_ADD_16, // RTLIB::arm64ec___atomic_fetch_add_16
  RTLIB::ATOMIC_FETCH_ADD_2, // RTLIB::arm64ec___atomic_fetch_add_2
  RTLIB::ATOMIC_FETCH_ADD_4, // RTLIB::arm64ec___atomic_fetch_add_4
  RTLIB::ATOMIC_FETCH_ADD_8, // RTLIB::arm64ec___atomic_fetch_add_8
  RTLIB::ATOMIC_FETCH_AND_1, // RTLIB::arm64ec___atomic_fetch_and_1
  RTLIB::ATOMIC_FETCH_AND_16, // RTLIB::arm64ec___atomic_fetch_and_16
  RTLIB::ATOMIC_FETCH_AND_2, // RTLIB::arm64ec___atomic_fetch_and_2
  RTLIB::ATOMIC_FETCH_AND_4, // RTLIB::arm64ec___atomic_fetch_and_4
  RTLIB::ATOMIC_FETCH_AND_8, // RTLIB::arm64ec___atomic_fetch_and_8
  RTLIB::ATOMIC_FETCH_NAND_1, // RTLIB::arm64ec___atomic_fetch_nand_1
  RTLIB::ATOMIC_FETCH_NAND_16, // RTLIB::arm64ec___atomic_fetch_nand_16
  RTLIB::ATOMIC_FETCH_NAND_2, // RTLIB::arm64ec___atomic_fetch_nand_2
  RTLIB::ATOMIC_FETCH_NAND_4, // RTLIB::arm64ec___atomic_fetch_nand_4
  RTLIB::ATOMIC_FETCH_NAND_8, // RTLIB::arm64ec___atomic_fetch_nand_8
  RTLIB::ATOMIC_FETCH_OR_1, // RTLIB::arm64ec___atomic_fetch_or_1
  RTLIB::ATOMIC_FETCH_OR_16, // RTLIB::arm64ec___atomic_fetch_or_16
  RTLIB::ATOMIC_FETCH_OR_2, // RTLIB::arm64ec___atomic_fetch_or_2
  RTLIB::ATOMIC_FETCH_OR_4, // RTLIB::arm64ec___atomic_fetch_or_4
  RTLIB::ATOMIC_FETCH_OR_8, // RTLIB::arm64ec___atomic_fetch_or_8
  RTLIB::ATOMIC_FETCH_SUB_1, // RTLIB::arm64ec___atomic_fetch_sub_1
  RTLIB::ATOMIC_FETCH_SUB_16, // RTLIB::arm64ec___atomic_fetch_sub_16
  RTLIB::ATOMIC_FETCH_SUB_2, // RTLIB::arm64ec___atomic_fetch_sub_2
  RTLIB::ATOMIC_FETCH_SUB_4, // RTLIB::arm64ec___atomic_fetch_sub_4
  RTLIB::ATOMIC_FETCH_SUB_8, // RTLIB::arm64ec___atomic_fetch_sub_8
  RTLIB::ATOMIC_FETCH_XOR_1, // RTLIB::arm64ec___atomic_fetch_xor_1
  RTLIB::ATOMIC_FETCH_XOR_16, // RTLIB::arm64ec___atomic_fetch_xor_16
  RTLIB::ATOMIC_FETCH_XOR_2, // RTLIB::arm64ec___atomic_fetch_xor_2
  RTLIB::ATOMIC_FETCH_XOR_4, // RTLIB::arm64ec___atomic_fetch_xor_4
  RTLIB::ATOMIC_FETCH_XOR_8, // RTLIB::arm64ec___atomic_fetch_xor_8
  RTLIB::ATOMIC_LOAD, // RTLIB::arm64ec___atomic_load
  RTLIB::ATOMIC_LOAD_1, // RTLIB::arm64ec___atomic_load_1
  RTLIB::ATOMIC_LOAD_16, // RTLIB::arm64ec___atomic_load_16
  RTLIB::ATOMIC_LOAD_2, // RTLIB::arm64ec___atomic_load_2
  RTLIB::ATOMIC_LOAD_4, // RTLIB::arm64ec___atomic_load_4
  RTLIB::ATOMIC_LOAD_8, // RTLIB::arm64ec___atomic_load_8
  RTLIB::ATOMIC_STORE, // RTLIB::arm64ec___atomic_store
  RTLIB::ATOMIC_STORE_1, // RTLIB::arm64ec___atomic_store_1
  RTLIB::ATOMIC_STORE_16, // RTLIB::arm64ec___atomic_store_16
  RTLIB::ATOMIC_STORE_2, // RTLIB::arm64ec___atomic_store_2
  RTLIB::ATOMIC_STORE_4, // RTLIB::arm64ec___atomic_store_4
  RTLIB::ATOMIC_STORE_8, // RTLIB::arm64ec___atomic_store_8
  RTLIB::CLEAR_CACHE, // RTLIB::arm64ec___clear_cache
  RTLIB::CTLZ_I64, // RTLIB::arm64ec___clzdi2
  RTLIB::CTLZ_I32, // RTLIB::arm64ec___clzsi2
  RTLIB::CTLZ_I128, // RTLIB::arm64ec___clzti2
  RTLIB::CXA_END_CLEANUP, // RTLIB::arm64ec___cxa_end_cleanup
  RTLIB::DIV_F64, // RTLIB::arm64ec___divdf3
  RTLIB::SDIV_I64, // RTLIB::arm64ec___divdi3
  RTLIB::SDIV_I16, // RTLIB::arm64ec___divhi3
  RTLIB::SDIV_I8, // RTLIB::arm64ec___divqi3
  RTLIB::DIV_F32, // RTLIB::arm64ec___divsf3
  RTLIB::SDIV_I32, // RTLIB::arm64ec___divsi3
  RTLIB::DIV_F128, // RTLIB::arm64ec___divtf3
  RTLIB::SDIV_I128, // RTLIB::arm64ec___divti3
  RTLIB::OEQ_F64, // RTLIB::arm64ec___eqdf2
  RTLIB::OEQ_F32, // RTLIB::arm64ec___eqsf2
  RTLIB::OEQ_F128, // RTLIB::arm64ec___eqtf2
  RTLIB::EXP2_FINITE_F64, // RTLIB::arm64ec___exp2_finite
  RTLIB::EXP2_FINITE_F32, // RTLIB::arm64ec___exp2f_finite
  RTLIB::EXP2_FINITE_F128, // RTLIB::arm64ec___exp2l_finite_f128
  RTLIB::EXP_FINITE_F64, // RTLIB::arm64ec___exp_finite
  RTLIB::EXP_FINITE_F32, // RTLIB::arm64ec___expf_finite
  RTLIB::EXP_FINITE_F128, // RTLIB::arm64ec___expl_finite_f128
  RTLIB::FPEXT_BF16_F32, // RTLIB::arm64ec___extendbfsf2
  RTLIB::FPEXT_F64_F128, // RTLIB::arm64ec___extenddftf2
  RTLIB::FPEXT_F16_F64, // RTLIB::arm64ec___extendhfdf2
  RTLIB::FPEXT_F16_F32, // RTLIB::arm64ec___extendhfsf2
  RTLIB::FPEXT_F16_F128, // RTLIB::arm64ec___extendhftf2
  RTLIB::FPEXT_F32_F64, // RTLIB::arm64ec___extendsfdf2
  RTLIB::FPEXT_F32_F128, // RTLIB::arm64ec___extendsftf2
  RTLIB::FPTOSINT_F64_I64, // RTLIB::arm64ec___fixdfdi
  RTLIB::FPTOSINT_F64_I32, // RTLIB::arm64ec___fixdfsi
  RTLIB::FPTOSINT_F64_I128, // RTLIB::arm64ec___fixdfti
  RTLIB::FPTOSINT_F16_I64, // RTLIB::arm64ec___fixhfdi
  RTLIB::FPTOSINT_F16_I32, // RTLIB::arm64ec___fixhfsi
  RTLIB::FPTOSINT_F16_I128, // RTLIB::arm64ec___fixhfti
  RTLIB::FPTOSINT_F32_I64, // RTLIB::arm64ec___fixsfdi
  RTLIB::FPTOSINT_F32_I32, // RTLIB::arm64ec___fixsfsi
  RTLIB::FPTOSINT_F32_I128, // RTLIB::arm64ec___fixsfti
  RTLIB::FPTOSINT_F128_I64, // RTLIB::arm64ec___fixtfdi_f128
  RTLIB::FPTOSINT_F128_I32, // RTLIB::arm64ec___fixtfsi
  RTLIB::FPTOSINT_F128_I128, // RTLIB::arm64ec___fixtfti_f128
  RTLIB::FPTOUINT_F64_I64, // RTLIB::arm64ec___fixunsdfdi
  RTLIB::FPTOUINT_F64_I32, // RTLIB::arm64ec___fixunsdfsi
  RTLIB::FPTOUINT_F64_I128, // RTLIB::arm64ec___fixunsdfti
  RTLIB::FPTOUINT_F16_I64, // RTLIB::arm64ec___fixunshfdi
  RTLIB::FPTOUINT_F16_I32, // RTLIB::arm64ec___fixunshfsi
  RTLIB::FPTOUINT_F16_I128, // RTLIB::arm64ec___fixunshfti
  RTLIB::FPTOUINT_F32_I64, // RTLIB::arm64ec___fixunssfdi
  RTLIB::FPTOUINT_F32_I32, // RTLIB::arm64ec___fixunssfsi
  RTLIB::FPTOUINT_F32_I128, // RTLIB::arm64ec___fixunssfti
  RTLIB::FPTOUINT_F128_I64, // RTLIB::arm64ec___fixunstfdi_f128
  RTLIB::FPTOUINT_F128_I32, // RTLIB::arm64ec___fixunstfsi_f128
  RTLIB::FPTOUINT_F128_I128, // RTLIB::arm64ec___fixunstfti_f128
  RTLIB::SINTTOFP_I64_BF16, // RTLIB::arm64ec___floatdibf
  RTLIB::SINTTOFP_I64_F64, // RTLIB::arm64ec___floatdidf
  RTLIB::SINTTOFP_I64_F16, // RTLIB::arm64ec___floatdihf
  RTLIB::SINTTOFP_I64_F32, // RTLIB::arm64ec___floatdisf
  RTLIB::SINTTOFP_I64_F128, // RTLIB::arm64ec___floatditf_f128
  RTLIB::SINTTOFP_I32_F64, // RTLIB::arm64ec___floatsidf
  RTLIB::SINTTOFP_I32_F16, // RTLIB::arm64ec___floatsihf
  RTLIB::SINTTOFP_I32_F32, // RTLIB::arm64ec___floatsisf
  RTLIB::SINTTOFP_I32_F128, // RTLIB::arm64ec___floatsitf
  RTLIB::SINTTOFP_I128_F64, // RTLIB::arm64ec___floattidf
  RTLIB::SINTTOFP_I128_F16, // RTLIB::arm64ec___floattihf
  RTLIB::SINTTOFP_I128_F32, // RTLIB::arm64ec___floattisf
  RTLIB::SINTTOFP_I128_F128, // RTLIB::arm64ec___floattitf_f128
  RTLIB::UINTTOFP_I64_BF16, // RTLIB::arm64ec___floatundibf
  RTLIB::UINTTOFP_I64_F64, // RTLIB::arm64ec___floatundidf
  RTLIB::UINTTOFP_I64_F16, // RTLIB::arm64ec___floatundihf
  RTLIB::UINTTOFP_I64_F32, // RTLIB::arm64ec___floatundisf
  RTLIB::UINTTOFP_I64_F128, // RTLIB::arm64ec___floatunditf_f128
  RTLIB::UINTTOFP_I32_F64, // RTLIB::arm64ec___floatunsidf
  RTLIB::UINTTOFP_I32_F16, // RTLIB::arm64ec___floatunsihf
  RTLIB::UINTTOFP_I32_F32, // RTLIB::arm64ec___floatunsisf
  RTLIB::UINTTOFP_I32_F128, // RTLIB::arm64ec___floatunsitf
  RTLIB::UINTTOFP_I128_F64, // RTLIB::arm64ec___floatuntidf
  RTLIB::UINTTOFP_I128_F16, // RTLIB::arm64ec___floatuntihf
  RTLIB::UINTTOFP_I128_F32, // RTLIB::arm64ec___floatuntisf
  RTLIB::UINTTOFP_I128_F128, // RTLIB::arm64ec___floatuntitf_f128
  RTLIB::OGE_F64, // RTLIB::arm64ec___gedf2
  RTLIB::OGE_F32, // RTLIB::arm64ec___gesf2
  RTLIB::OGE_F128, // RTLIB::arm64ec___getf2
  RTLIB::OGT_F64, // RTLIB::arm64ec___gtdf2
  RTLIB::OGT_F32, // RTLIB::arm64ec___gtsf2
  RTLIB::OGT_F128, // RTLIB::arm64ec___gttf2
  RTLIB::OLE_F64, // RTLIB::arm64ec___ledf2
  RTLIB::OLE_F32, // RTLIB::arm64ec___lesf2
  RTLIB::OLE_F128, // RTLIB::arm64ec___letf2
  RTLIB::DEOPTIMIZE, // RTLIB::arm64ec___llvm_deoptimize
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_1
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_16
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_2
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_4
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_8
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_1
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_16
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_2
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_4
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_8
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_1
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_16
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_2
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_4
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_8
  RTLIB::LOG10_FINITE_F64, // RTLIB::arm64ec___log10_finite
  RTLIB::LOG10_FINITE_F32, // RTLIB::arm64ec___log10f_finite
  RTLIB::LOG10_FINITE_F128, // RTLIB::arm64ec___log10l_finite_f128
  RTLIB::LOG2_FINITE_F64, // RTLIB::arm64ec___log2_finite
  RTLIB::LOG2_FINITE_F32, // RTLIB::arm64ec___log2f_finite
  RTLIB::LOG2_FINITE_F128, // RTLIB::arm64ec___log2l_finite_f128
  RTLIB::LOG_FINITE_F64, // RTLIB::arm64ec___log_finite
  RTLIB::LOG_FINITE_F32, // RTLIB::arm64ec___logf_finite
  RTLIB::LOG_FINITE_F128, // RTLIB::arm64ec___logl_finite_f128
  RTLIB::SRL_I64, // RTLIB::arm64ec___lshrdi3
  RTLIB::SRL_I16, // RTLIB::arm64ec___lshrhi3
  RTLIB::SRL_I32, // RTLIB::arm64ec___lshrsi3
  RTLIB::SRL_I128, // RTLIB::arm64ec___lshrti3
  RTLIB::OLT_F64, // RTLIB::arm64ec___ltdf2
  RTLIB::OLT_F32, // RTLIB::arm64ec___ltsf2
  RTLIB::OLT_F128, // RTLIB::arm64ec___lttf2
  RTLIB::SREM_I64, // RTLIB::arm64ec___moddi3
  RTLIB::SREM_I16, // RTLIB::arm64ec___modhi3
  RTLIB::SREM_I8, // RTLIB::arm64ec___modqi3
  RTLIB::SREM_I32, // RTLIB::arm64ec___modsi3
  RTLIB::SREM_I128, // RTLIB::arm64ec___modti3
  RTLIB::MUL_F64, // RTLIB::arm64ec___muldf3
  RTLIB::MUL_I64, // RTLIB::arm64ec___muldi3
  RTLIB::MUL_I16, // RTLIB::arm64ec___mulhi3
  RTLIB::MULO_I32, // RTLIB::arm64ec___mulosi4
  RTLIB::MUL_I8, // RTLIB::arm64ec___mulqi3
  RTLIB::MUL_F32, // RTLIB::arm64ec___mulsf3
  RTLIB::MUL_I32, // RTLIB::arm64ec___mulsi3
  RTLIB::MUL_F128, // RTLIB::arm64ec___multf3
  RTLIB::MUL_I128, // RTLIB::arm64ec___multi3
  RTLIB::UNE_F64, // RTLIB::arm64ec___nedf2
  RTLIB::NEG_I64, // RTLIB::arm64ec___negdi2
  RTLIB::NEG_I32, // RTLIB::arm64ec___negsi2
  RTLIB::UNE_F32, // RTLIB::arm64ec___nesf2
  RTLIB::UNE_F128, // RTLIB::arm64ec___netf2
  RTLIB::CTPOP_I64, // RTLIB::arm64ec___popcountdi2
  RTLIB::CTPOP_I32, // RTLIB::arm64ec___popcountsi2
  RTLIB::CTPOP_I128, // RTLIB::arm64ec___popcountti2
  RTLIB::POW_FINITE_F64, // RTLIB::arm64ec___pow_finite
  RTLIB::POW_FINITE_F32, // RTLIB::arm64ec___powf_finite
  RTLIB::POWI_F128, // RTLIB::arm64ec___powitf2_f128
  RTLIB::POW_FINITE_F128, // RTLIB::arm64ec___powl_finite_f128
  RTLIB::SAFESTACK_POINTER_ADDRESS, // RTLIB::arm64ec___safestack_pointer_address
  RTLIB::STACKPROTECTOR_CHECK_FAIL, // RTLIB::arm64ec___stack_chk_fail
  RTLIB::SUB_F64, // RTLIB::arm64ec___subdf3
  RTLIB::SUB_F32, // RTLIB::arm64ec___subsf3
  RTLIB::SUB_F128, // RTLIB::arm64ec___subtf3
  RTLIB::SYNC_FETCH_AND_ADD_1, // RTLIB::arm64ec___sync_fetch_and_add_1
  RTLIB::SYNC_FETCH_AND_ADD_16, // RTLIB::arm64ec___sync_fetch_and_add_16
  RTLIB::SYNC_FETCH_AND_ADD_2, // RTLIB::arm64ec___sync_fetch_and_add_2
  RTLIB::SYNC_FETCH_AND_ADD_4, // RTLIB::arm64ec___sync_fetch_and_add_4
  RTLIB::SYNC_FETCH_AND_ADD_8, // RTLIB::arm64ec___sync_fetch_and_add_8
  RTLIB::SYNC_FETCH_AND_AND_1, // RTLIB::arm64ec___sync_fetch_and_and_1
  RTLIB::SYNC_FETCH_AND_AND_16, // RTLIB::arm64ec___sync_fetch_and_and_16
  RTLIB::SYNC_FETCH_AND_AND_2, // RTLIB::arm64ec___sync_fetch_and_and_2
  RTLIB::SYNC_FETCH_AND_AND_4, // RTLIB::arm64ec___sync_fetch_and_and_4
  RTLIB::SYNC_FETCH_AND_AND_8, // RTLIB::arm64ec___sync_fetch_and_and_8
  RTLIB::SYNC_FETCH_AND_MAX_1, // RTLIB::arm64ec___sync_fetch_and_max_1
  RTLIB::SYNC_FETCH_AND_MAX_16, // RTLIB::arm64ec___sync_fetch_and_max_16
  RTLIB::SYNC_FETCH_AND_MAX_2, // RTLIB::arm64ec___sync_fetch_and_max_2
  RTLIB::SYNC_FETCH_AND_MAX_4, // RTLIB::arm64ec___sync_fetch_and_max_4
  RTLIB::SYNC_FETCH_AND_MAX_8, // RTLIB::arm64ec___sync_fetch_and_max_8
  RTLIB::SYNC_FETCH_AND_MIN_1, // RTLIB::arm64ec___sync_fetch_and_min_1
  RTLIB::SYNC_FETCH_AND_MIN_16, // RTLIB::arm64ec___sync_fetch_and_min_16
  RTLIB::SYNC_FETCH_AND_MIN_2, // RTLIB::arm64ec___sync_fetch_and_min_2
  RTLIB::SYNC_FETCH_AND_MIN_4, // RTLIB::arm64ec___sync_fetch_and_min_4
  RTLIB::SYNC_FETCH_AND_MIN_8, // RTLIB::arm64ec___sync_fetch_and_min_8
  RTLIB::SYNC_FETCH_AND_NAND_1, // RTLIB::arm64ec___sync_fetch_and_nand_1
  RTLIB::SYNC_FETCH_AND_NAND_16, // RTLIB::arm64ec___sync_fetch_and_nand_16
  RTLIB::SYNC_FETCH_AND_NAND_2, // RTLIB::arm64ec___sync_fetch_and_nand_2
  RTLIB::SYNC_FETCH_AND_NAND_4, // RTLIB::arm64ec___sync_fetch_and_nand_4
  RTLIB::SYNC_FETCH_AND_NAND_8, // RTLIB::arm64ec___sync_fetch_and_nand_8
  RTLIB::SYNC_FETCH_AND_OR_1, // RTLIB::arm64ec___sync_fetch_and_or_1
  RTLIB::SYNC_FETCH_AND_OR_16, // RTLIB::arm64ec___sync_fetch_and_or_16
  RTLIB::SYNC_FETCH_AND_OR_2, // RTLIB::arm64ec___sync_fetch_and_or_2
  RTLIB::SYNC_FETCH_AND_OR_4, // RTLIB::arm64ec___sync_fetch_and_or_4
  RTLIB::SYNC_FETCH_AND_OR_8, // RTLIB::arm64ec___sync_fetch_and_or_8
  RTLIB::SYNC_FETCH_AND_SUB_1, // RTLIB::arm64ec___sync_fetch_and_sub_1
  RTLIB::SYNC_FETCH_AND_SUB_16, // RTLIB::arm64ec___sync_fetch_and_sub_16
  RTLIB::SYNC_FETCH_AND_SUB_2, // RTLIB::arm64ec___sync_fetch_and_sub_2
  RTLIB::SYNC_FETCH_AND_SUB_4, // RTLIB::arm64ec___sync_fetch_and_sub_4
  RTLIB::SYNC_FETCH_AND_SUB_8, // RTLIB::arm64ec___sync_fetch_and_sub_8
  RTLIB::SYNC_FETCH_AND_UMAX_1, // RTLIB::arm64ec___sync_fetch_and_umax_1
  RTLIB::SYNC_FETCH_AND_UMAX_16, // RTLIB::arm64ec___sync_fetch_and_umax_16
  RTLIB::SYNC_FETCH_AND_UMAX_2, // RTLIB::arm64ec___sync_fetch_and_umax_2
  RTLIB::SYNC_FETCH_AND_UMAX_4, // RTLIB::arm64ec___sync_fetch_and_umax_4
  RTLIB::SYNC_FETCH_AND_UMAX_8, // RTLIB::arm64ec___sync_fetch_and_umax_8
  RTLIB::SYNC_FETCH_AND_UMIN_1, // RTLIB::arm64ec___sync_fetch_and_umin_1
  RTLIB::SYNC_FETCH_AND_UMIN_16, // RTLIB::arm64ec___sync_fetch_and_umin_16
  RTLIB::SYNC_FETCH_AND_UMIN_2, // RTLIB::arm64ec___sync_fetch_and_umin_2
  RTLIB::SYNC_FETCH_AND_UMIN_4, // RTLIB::arm64ec___sync_fetch_and_umin_4
  RTLIB::SYNC_FETCH_AND_UMIN_8, // RTLIB::arm64ec___sync_fetch_and_umin_8
  RTLIB::SYNC_FETCH_AND_XOR_1, // RTLIB::arm64ec___sync_fetch_and_xor_1
  RTLIB::SYNC_FETCH_AND_XOR_16, // RTLIB::arm64ec___sync_fetch_and_xor_16
  RTLIB::SYNC_FETCH_AND_XOR_2, // RTLIB::arm64ec___sync_fetch_and_xor_2
  RTLIB::SYNC_FETCH_AND_XOR_4, // RTLIB::arm64ec___sync_fetch_and_xor_4
  RTLIB::SYNC_FETCH_AND_XOR_8, // RTLIB::arm64ec___sync_fetch_and_xor_8
  RTLIB::SYNC_LOCK_TEST_AND_SET_1, // RTLIB::arm64ec___sync_lock_test_and_set_1
  RTLIB::SYNC_LOCK_TEST_AND_SET_16, // RTLIB::arm64ec___sync_lock_test_and_set_16
  RTLIB::SYNC_LOCK_TEST_AND_SET_2, // RTLIB::arm64ec___sync_lock_test_and_set_2
  RTLIB::SYNC_LOCK_TEST_AND_SET_4, // RTLIB::arm64ec___sync_lock_test_and_set_4
  RTLIB::SYNC_LOCK_TEST_AND_SET_8, // RTLIB::arm64ec___sync_lock_test_and_set_8
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, // RTLIB::arm64ec___sync_val_compare_and_swap_1
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, // RTLIB::arm64ec___sync_val_compare_and_swap_16
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, // RTLIB::arm64ec___sync_val_compare_and_swap_2
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, // RTLIB::arm64ec___sync_val_compare_and_swap_4
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, // RTLIB::arm64ec___sync_val_compare_and_swap_8
  RTLIB::FPROUND_F64_BF16, // RTLIB::arm64ec___truncdfbf2
  RTLIB::FPROUND_F64_F16, // RTLIB::arm64ec___truncdfhf2
  RTLIB::FPROUND_F64_F32, // RTLIB::arm64ec___truncdfsf2
  RTLIB::FPROUND_F32_BF16, // RTLIB::arm64ec___truncsfbf2
  RTLIB::FPROUND_F32_F16, // RTLIB::arm64ec___truncsfhf2
  RTLIB::FPROUND_F128_BF16, // RTLIB::arm64ec___trunctfbf2
  RTLIB::FPROUND_F128_F64, // RTLIB::arm64ec___trunctfdf2
  RTLIB::FPROUND_F128_F16, // RTLIB::arm64ec___trunctfhf2_f128
  RTLIB::FPROUND_F128_F32, // RTLIB::arm64ec___trunctfsf2
  RTLIB::UDIV_I64, // RTLIB::arm64ec___udivdi3
  RTLIB::UDIV_I16, // RTLIB::arm64ec___udivhi3
  RTLIB::UDIV_I8, // RTLIB::arm64ec___udivqi3
  RTLIB::UDIV_I32, // RTLIB::arm64ec___udivsi3
  RTLIB::UDIV_I128, // RTLIB::arm64ec___udivti3
  RTLIB::UREM_I64, // RTLIB::arm64ec___umoddi3
  RTLIB::UREM_I16, // RTLIB::arm64ec___umodhi3
  RTLIB::UREM_I8, // RTLIB::arm64ec___umodqi3
  RTLIB::UREM_I32, // RTLIB::arm64ec___umodsi3
  RTLIB::UREM_I128, // RTLIB::arm64ec___umodti3
  RTLIB::UO_F64, // RTLIB::arm64ec___unorddf2
  RTLIB::UO_F32, // RTLIB::arm64ec___unordsf2
  RTLIB::UO_F128, // RTLIB::arm64ec___unordtf2
  RTLIB::ACOS_F64, // RTLIB::arm64ec_acos
  RTLIB::ACOS_F32, // RTLIB::arm64ec_acosf
  RTLIB::ACOS_F128, // RTLIB::arm64ec_acos_f128
  RTLIB::ASIN_F64, // RTLIB::arm64ec_asin
  RTLIB::ASIN_F32, // RTLIB::arm64ec_asinf
  RTLIB::ASIN_F128, // RTLIB::arm64ec_asin_f128
  RTLIB::ATAN_F64, // RTLIB::arm64ec_atan
  RTLIB::ATAN2_F64, // RTLIB::arm64ec_atan2
  RTLIB::ATAN2_F32, // RTLIB::arm64ec_atan2f
  RTLIB::ATAN2_F128, // RTLIB::arm64ec_atan2_f128
  RTLIB::ATAN_F32, // RTLIB::arm64ec_atanf
  RTLIB::ATAN_F128, // RTLIB::arm64ec_atan_f128
  RTLIB::CALLOC, // RTLIB::arm64ec_calloc
  RTLIB::CBRT_F64, // RTLIB::arm64ec_cbrt
  RTLIB::CBRT_F32, // RTLIB::arm64ec_cbrtf
  RTLIB::CBRT_F128, // RTLIB::arm64ec_cbrt_f128
  RTLIB::CEIL_F64, // RTLIB::arm64ec_ceil
  RTLIB::CEIL_F32, // RTLIB::arm64ec_ceilf
  RTLIB::CEIL_F128, // RTLIB::arm64ec_ceil_f128
  RTLIB::COPYSIGN_F64, // RTLIB::arm64ec_copysign
  RTLIB::COPYSIGN_F32, // RTLIB::arm64ec_copysignf
  RTLIB::COPYSIGN_F128, // RTLIB::arm64ec_copysign_f128
  RTLIB::COS_F64, // RTLIB::arm64ec_cos
  RTLIB::COS_F32, // RTLIB::arm64ec_cosf
  RTLIB::COSH_F64, // RTLIB::arm64ec_cosh
  RTLIB::COSH_F32, // RTLIB::arm64ec_coshf
  RTLIB::COSH_F128, // RTLIB::arm64ec_cosh_f128
  RTLIB::COS_F128, // RTLIB::arm64ec_cos_f128
  RTLIB::EXP_F64, // RTLIB::arm64ec_exp
  RTLIB::EXP10_F64, // RTLIB::arm64ec_exp10
  RTLIB::EXP10_F32, // RTLIB::arm64ec_exp10f
  RTLIB::EXP10_F128, // RTLIB::arm64ec_exp10l_f128
  RTLIB::EXP2_F64, // RTLIB::arm64ec_exp2
  RTLIB::EXP2_F32, // RTLIB::arm64ec_exp2f
  RTLIB::EXP2_F128, // RTLIB::arm64ec_exp2_f128
  RTLIB::EXP_F32, // RTLIB::arm64ec_expf
  RTLIB::EXP_F128, // RTLIB::arm64ec_exp_f128
  RTLIB::FEGETENV, // RTLIB::arm64ec_fegetenv
  RTLIB::FEGETMODE, // RTLIB::arm64ec_fegetmode
  RTLIB::FESETENV, // RTLIB::arm64ec_fesetenv
  RTLIB::FESETMODE, // RTLIB::arm64ec_fesetmode
  RTLIB::FLOOR_F64, // RTLIB::arm64ec_floor
  RTLIB::FLOOR_F32, // RTLIB::arm64ec_floorf
  RTLIB::FLOOR_F128, // RTLIB::arm64ec_floor_f128
  RTLIB::FMA_F64, // RTLIB::arm64ec_fma
  RTLIB::FMA_F32, // RTLIB::arm64ec_fmaf
  RTLIB::FMA_F128, // RTLIB::arm64ec_fma_f128
  RTLIB::FMAX_F64, // RTLIB::arm64ec_fmax
  RTLIB::FMAX_F32, // RTLIB::arm64ec_fmaxf
  RTLIB::FMAXIMUM_F64, // RTLIB::arm64ec_fmaximum
  RTLIB::FMAXIMUM_NUM_F64, // RTLIB::arm64ec_fmaximum_num
  RTLIB::FMAXIMUM_NUM_F32, // RTLIB::arm64ec_fmaximum_numf
  RTLIB::FMAXIMUM_NUM_F128, // RTLIB::arm64ec_fmaximum_num_f128
  RTLIB::FMAXIMUM_F32, // RTLIB::arm64ec_fmaximumf
  RTLIB::FMAXIMUM_F128, // RTLIB::arm64ec_fmaximum_f128
  RTLIB::FMAX_F128, // RTLIB::arm64ec_fmax_f128
  RTLIB::FMIN_F64, // RTLIB::arm64ec_fmin
  RTLIB::FMIN_F32, // RTLIB::arm64ec_fminf
  RTLIB::FMINIMUM_F64, // RTLIB::arm64ec_fminimum
  RTLIB::FMINIMUM_NUM_F64, // RTLIB::arm64ec_fminimum_num
  RTLIB::FMINIMUM_NUM_F32, // RTLIB::arm64ec_fminimum_numf
  RTLIB::FMINIMUM_NUM_F128, // RTLIB::arm64ec_fminimum_num_f128
  RTLIB::FMINIMUM_F32, // RTLIB::arm64ec_fminimumf
  RTLIB::FMINIMUM_F128, // RTLIB::arm64ec_fminimum_f128
  RTLIB::FMIN_F128, // RTLIB::arm64ec_fmin_f128
  RTLIB::REM_F64, // RTLIB::arm64ec_fmod
  RTLIB::REM_F32, // RTLIB::arm64ec_fmodf
  RTLIB::REM_F128, // RTLIB::arm64ec_fmodl_f128
  RTLIB::FREXP_F64, // RTLIB::arm64ec_frexp
  RTLIB::LDEXP_F64, // RTLIB::arm64ec_ldexp
  RTLIB::LLRINT_F64, // RTLIB::arm64ec_llrint
  RTLIB::LLRINT_F32, // RTLIB::arm64ec_llrintf
  RTLIB::LLRINT_F128, // RTLIB::arm64ec_llrint_f128
  RTLIB::LLROUND_F64, // RTLIB::arm64ec_llround
  RTLIB::LLROUND_F32, // RTLIB::arm64ec_llroundf
  RTLIB::LLROUND_F128, // RTLIB::arm64ec_llround_f128
  RTLIB::LOG_F64, // RTLIB::arm64ec_log
  RTLIB::LOG10_F64, // RTLIB::arm64ec_log10
  RTLIB::LOG10_F32, // RTLIB::arm64ec_log10f
  RTLIB::LOG10_F128, // RTLIB::arm64ec_log10_f128
  RTLIB::LOG2_F64, // RTLIB::arm64ec_log2
  RTLIB::LOG2_F32, // RTLIB::arm64ec_log2f
  RTLIB::LOG2_F128, // RTLIB::arm64ec_log2_f128
  RTLIB::LOG_F32, // RTLIB::arm64ec_logf
  RTLIB::LOG_F128, // RTLIB::arm64ec_log_f128
  RTLIB::LRINT_F64, // RTLIB::arm64ec_lrint
  RTLIB::LRINT_F32, // RTLIB::arm64ec_lrintf
  RTLIB::LRINT_F128, // RTLIB::arm64ec_lrint_f128
  RTLIB::LROUND_F64, // RTLIB::arm64ec_lround
  RTLIB::LROUND_F32, // RTLIB::arm64ec_lroundf
  RTLIB::LROUND_F128, // RTLIB::arm64ec_lround_f128
  RTLIB::MEMCPY, // RTLIB::arm64ec_memcpy
  RTLIB::MEMMOVE, // RTLIB::arm64ec_memmove
  RTLIB::MEMSET, // RTLIB::arm64ec_memset
  RTLIB::MODF_F64, // RTLIB::arm64ec_modf
  RTLIB::MODF_F32, // RTLIB::arm64ec_modff
  RTLIB::MODF_F128, // RTLIB::arm64ec_modf_f128
  RTLIB::NEARBYINT_F64, // RTLIB::arm64ec_nearbyint
  RTLIB::NEARBYINT_F32, // RTLIB::arm64ec_nearbyintf
  RTLIB::NEARBYINT_F128, // RTLIB::arm64ec_nearbyint_f128
  RTLIB::POW_F64, // RTLIB::arm64ec_pow
  RTLIB::POW_F32, // RTLIB::arm64ec_powf
  RTLIB::POW_F128, // RTLIB::arm64ec_pow_f128
  RTLIB::RINT_F64, // RTLIB::arm64ec_rint
  RTLIB::RINT_F32, // RTLIB::arm64ec_rintf
  RTLIB::RINT_F128, // RTLIB::arm64ec_rint_f128
  RTLIB::ROUND_F64, // RTLIB::arm64ec_round
  RTLIB::ROUNDEVEN_F64, // RTLIB::arm64ec_roundeven
  RTLIB::ROUNDEVEN_F32, // RTLIB::arm64ec_roundevenf
  RTLIB::ROUNDEVEN_F128, // RTLIB::arm64ec_roundeven_f128
  RTLIB::ROUND_F32, // RTLIB::arm64ec_roundf
  RTLIB::ROUND_F128, // RTLIB::arm64ec_round_f128
  RTLIB::SIN_F64, // RTLIB::arm64ec_sin
  RTLIB::SINCOSPI_F64, // RTLIB::arm64ec_sincospi
  RTLIB::SINCOSPI_F32, // RTLIB::arm64ec_sincospif
  RTLIB::SINCOSPI_F128, // RTLIB::arm64ec_sincospi_f128
  RTLIB::SIN_F32, // RTLIB::arm64ec_sinf
  RTLIB::SINH_F64, // RTLIB::arm64ec_sinh
  RTLIB::SINH_F32, // RTLIB::arm64ec_sinhf
  RTLIB::SINH_F128, // RTLIB::arm64ec_sinh_f128
  RTLIB::SIN_F128, // RTLIB::arm64ec_sin_f128
  RTLIB::SQRT_F64, // RTLIB::arm64ec_sqrt
  RTLIB::SQRT_F32, // RTLIB::arm64ec_sqrtf
  RTLIB::SQRT_F128, // RTLIB::arm64ec_sqrt_f128
  RTLIB::TAN_F64, // RTLIB::arm64ec_tan
  RTLIB::TAN_F32, // RTLIB::arm64ec_tanf
  RTLIB::TANH_F64, // RTLIB::arm64ec_tanh
  RTLIB::TANH_F32, // RTLIB::arm64ec_tanhf
  RTLIB::TANH_F128, // RTLIB::arm64ec_tanh_f128
  RTLIB::TAN_F128, // RTLIB::arm64ec_tan_f128
  RTLIB::TRUNC_F64, // RTLIB::arm64ec_trunc
  RTLIB::TRUNC_F32, // RTLIB::arm64ec_truncf
  RTLIB::TRUNC_F128, // RTLIB::arm64ec_trunc_f128
  RTLIB::SDIV_I32, // RTLIB::sparc_div
  RTLIB::SREM_I32, // RTLIB::sparc_rem
  RTLIB::UDIV_I32, // RTLIB::sparc_udiv
  RTLIB::MUL_I32, // RTLIB::sparc_umul
  RTLIB::UREM_I32, // RTLIB::sparc_urem
  RTLIB::COPYSIGN_F64, // RTLIB::zos___DCPY_B
  RTLIB::EXP2_F64, // RTLIB::zos___EXP2_B
  RTLIB::CBRT_F32, // RTLIB::zos___FCBT_B
  RTLIB::CEIL_F32, // RTLIB::zos___FCEL_B
  RTLIB::COS_F32, // RTLIB::zos___FCOS_B
  RTLIB::COPYSIGN_F32, // RTLIB::zos___FCPY_B
  RTLIB::EXP_F32, // RTLIB::zos___FEXP_B
  RTLIB::FLOOR_F32, // RTLIB::zos___FFLR_B
  RTLIB::REM_F32, // RTLIB::zos___FFMD_B
  RTLIB::FREXP_F32, // RTLIB::zos___FFXP_B
  RTLIB::LOG10_F32, // RTLIB::zos___FLG1_B
  RTLIB::LOG2_F32, // RTLIB::zos___FLG2_B
  RTLIB::LOG_F32, // RTLIB::zos___FLOG_B
  RTLIB::LDEXP_F32, // RTLIB::zos___FLXP_B
  RTLIB::FMA_F64, // RTLIB::zos___FMA_B
  RTLIB::FMA_F32, // RTLIB::zos___FMAFB
  RTLIB::FMA_F128, // RTLIB::zos___FMALB
  RTLIB::FMAX_F64, // RTLIB::zos___FMAX_B
  RTLIB::FMAX_F32, // RTLIB::zos___FMAXFB
  RTLIB::FMAX_F128, // RTLIB::zos___FMAXLB
  RTLIB::FMIN_F64, // RTLIB::zos___FMIN_B
  RTLIB::FMIN_F32, // RTLIB::zos___FMINFB
  RTLIB::FMIN_F128, // RTLIB::zos___FMINLB
  RTLIB::POW_F32, // RTLIB::zos___FPOW_B
  RTLIB::LROUND_F32, // RTLIB::zos___FRND_B
  RTLIB::SIN_F32, // RTLIB::zos___FSIN_B
  RTLIB::SQRT_F32, // RTLIB::zos___FSQT_B
  RTLIB::TRUNC_F32, // RTLIB::zos___FTRC_B
  RTLIB::EXP2_F32, // RTLIB::zos___FXP2_B
  RTLIB::CBRT_F128, // RTLIB::zos___LCBT_B
  RTLIB::CEIL_F128, // RTLIB::zos___LCEL_B
  RTLIB::COS_F128, // RTLIB::zos___LCOS_B
  RTLIB::COPYSIGN_F128, // RTLIB::zos___LCPY_B
  RTLIB::EXP_F128, // RTLIB::zos___LEXP_B
  RTLIB::FLOOR_F128, // RTLIB::zos___LFLR_B
  RTLIB::REM_F128, // RTLIB::zos___LFMD_B
  RTLIB::FREXP_F128, // RTLIB::zos___LFXP_B
  RTLIB::LOG10_F128, // RTLIB::zos___LLG1_B
  RTLIB::LOG2_F128, // RTLIB::zos___LLG2_B
  RTLIB::LOG_F128, // RTLIB::zos___LLOG_B
  RTLIB::LLROUND_F64, // RTLIB::zos___LLRD_B
  RTLIB::LLROUND_F32, // RTLIB::zos___LLRDFB
  RTLIB::LLROUND_F128, // RTLIB::zos___LLRDLB
  RTLIB::LLRINT_F64, // RTLIB::zos___LLRT_B
  RTLIB::LLRINT_F32, // RTLIB::zos___LLRTFB
  RTLIB::LLRINT_F128, // RTLIB::zos___LLRTLB
  RTLIB::LDEXP_F128, // RTLIB::zos___LLXP_B
  RTLIB::LOG2_F64, // RTLIB::zos___LOG2_B
  RTLIB::POW_F128, // RTLIB::zos___LPOW_B
  RTLIB::LROUND_F128, // RTLIB::zos___LRND_B
  RTLIB::LRINT_F64, // RTLIB::zos___LRNT_B
  RTLIB::LRINT_F32, // RTLIB::zos___LRNTFB
  RTLIB::LRINT_F128, // RTLIB::zos___LRNTLB
  RTLIB::SIN_F128, // RTLIB::zos___LSIN_B
  RTLIB::SQRT_F128, // RTLIB::zos___LSQT_B
  RTLIB::TRUNC_F128, // RTLIB::zos___LTRC_B
  RTLIB::EXP2_F128, // RTLIB::zos___LXP2_B
  RTLIB::NEARBYINT_F64, // RTLIB::zos___NBYI_B
  RTLIB::NEARBYINT_F32, // RTLIB::zos___NBYIFB
  RTLIB::NEARBYINT_F128, // RTLIB::zos___NBYILB
  RTLIB::RINT_F32, // RTLIB::zos___RINTFB
  RTLIB::RINT_F128, // RTLIB::zos___RINTLB
  RTLIB::LROUND_F64, // RTLIB::zos___ROND_B
  RTLIB::ROUND_F64, // RTLIB::zos___ROUN_B
  RTLIB::ROUND_F32, // RTLIB::zos___ROUNFB
  RTLIB::ROUND_F128, // RTLIB::zos___ROUNLB
  RTLIB::CEIL_F64, // RTLIB::zos___SCEL_B
  RTLIB::COS_F64, // RTLIB::zos___SCOS_B
  RTLIB::CBRT_F64, // RTLIB::zos___SCRT_B
  RTLIB::FLOOR_F64, // RTLIB::zos___SFLR_B
  RTLIB::FREXP_F64, // RTLIB::zos___SFXP_B
  RTLIB::LDEXP_F64, // RTLIB::zos___SLXP_B
  RTLIB::RINT_F64, // RTLIB::zos___SRNT_B
  RTLIB::SIN_F64, // RTLIB::zos___SSIN_B
  RTLIB::TRUNC_F64, // RTLIB::zos___TRNC_B
  RTLIB::EXP_F64, // RTLIB::zos___WEXP_B
  RTLIB::REM_F64, // RTLIB::zos___WFMD_B
  RTLIB::LOG10_F64, // RTLIB::zos___WLG1_B
  RTLIB::LOG_F64, // RTLIB::zos___WLOG_B
  RTLIB::POW_F64, // RTLIB::zos___WPOW_B
  RTLIB::SQRT_F64, // RTLIB::zos___WSQT_B
  RTLIB::ADD_F128, // RTLIB::_Q_add
  RTLIB::DIV_F128, // RTLIB::_Q_div
  RTLIB::FPEXT_F64_F128, // RTLIB::_Q_dtoq
  RTLIB::SINTTOFP_I32_F128, // RTLIB::_Q_itoq
  RTLIB::SINTTOFP_I64_F128, // RTLIB::_Q_lltoq
  RTLIB::MUL_F128, // RTLIB::_Q_mul
  RTLIB::FPROUND_F128_F64, // RTLIB::_Q_qtod
  RTLIB::FPTOSINT_F128_I32, // RTLIB::_Q_qtoi
  RTLIB::FPTOSINT_F128_I64, // RTLIB::_Q_qtoll
  RTLIB::FPROUND_F128_F32, // RTLIB::_Q_qtos
  RTLIB::FPTOUINT_F128_I32, // RTLIB::_Q_qtou
  RTLIB::FPTOUINT_F128_I64, // RTLIB::_Q_qtoull
  RTLIB::SQRT_F128, // RTLIB::_Q_sqrt
  RTLIB::FPEXT_F32_F128, // RTLIB::_Q_stoq
  RTLIB::SUB_F128, // RTLIB::_Q_sub
  RTLIB::UINTTOFP_I64_F128, // RTLIB::_Q_ulltoq
  RTLIB::UINTTOFP_I32_F128, // RTLIB::_Q_utoq
  RTLIB::ADD_F128, // RTLIB::_Qp_add
  RTLIB::DIV_F128, // RTLIB::_Qp_div
  RTLIB::FPEXT_F64_F128, // RTLIB::_Qp_dtoq
  RTLIB::SINTTOFP_I32_F128, // RTLIB::_Qp_itoq
  RTLIB::MUL_F128, // RTLIB::_Qp_mul
  RTLIB::FPROUND_F128_F64, // RTLIB::_Qp_qtod
  RTLIB::FPTOSINT_F128_I32, // RTLIB::_Qp_qtoi
  RTLIB::FPROUND_F128_F32, // RTLIB::_Qp_qtos
  RTLIB::FPTOUINT_F128_I32, // RTLIB::_Qp_qtoui
  RTLIB::FPTOUINT_F128_I64, // RTLIB::_Qp_qtoux
  RTLIB::FPTOSINT_F128_I64, // RTLIB::_Qp_qtox
  RTLIB::SQRT_F128, // RTLIB::_Qp_sqrt
  RTLIB::FPEXT_F32_F128, // RTLIB::_Qp_stoq
  RTLIB::SUB_F128, // RTLIB::_Qp_sub
  RTLIB::UINTTOFP_I32_F128, // RTLIB::_Qp_uitoq
  RTLIB::UINTTOFP_I64_F128, // RTLIB::_Qp_uxtoq
  RTLIB::SINTTOFP_I64_F128, // RTLIB::_Qp_xtoq
  RTLIB::UNWIND_CALL_PERSONALITY, // RTLIB::_Unwind_CallPersonality
  RTLIB::UNWIND_RESUME, // RTLIB::_Unwind_Resume
  RTLIB::UNWIND_REGISTER, // RTLIB::_Unwind_SjLj_Register
  RTLIB::UNWIND_RESUME, // RTLIB::_Unwind_SjLj_Resume
  RTLIB::UNWIND_UNREGISTER, // RTLIB::_Unwind_SjLj_Unregister
  RTLIB::BZERO, // RTLIB::___bzero
  RTLIB::BZERO, // RTLIB::___bzero64
  RTLIB::MEMMOVE, // RTLIB::___memmove
  RTLIB::MEMCPY, // RTLIB::___memmove64
  RTLIB::MEMSET, // RTLIB::___memset
  RTLIB::MEMSET, // RTLIB::___memset64
  RTLIB::OUTLINE_ATOMIC_CAS16_ACQ, // RTLIB::__aarch64_cas16_acq
  RTLIB::OUTLINE_ATOMIC_CAS16_ACQ_REL, // RTLIB::__aarch64_cas16_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS16_REL, // RTLIB::__aarch64_cas16_rel
  RTLIB::OUTLINE_ATOMIC_CAS16_RELAX, // RTLIB::__aarch64_cas16_relax
  RTLIB::OUTLINE_ATOMIC_CAS1_ACQ, // RTLIB::__aarch64_cas1_acq
  RTLIB::OUTLINE_ATOMIC_CAS1_ACQ_REL, // RTLIB::__aarch64_cas1_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS1_REL, // RTLIB::__aarch64_cas1_rel
  RTLIB::OUTLINE_ATOMIC_CAS1_RELAX, // RTLIB::__aarch64_cas1_relax
  RTLIB::OUTLINE_ATOMIC_CAS2_ACQ, // RTLIB::__aarch64_cas2_acq
  RTLIB::OUTLINE_ATOMIC_CAS2_ACQ_REL, // RTLIB::__aarch64_cas2_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS2_REL, // RTLIB::__aarch64_cas2_rel
  RTLIB::OUTLINE_ATOMIC_CAS2_RELAX, // RTLIB::__aarch64_cas2_relax
  RTLIB::OUTLINE_ATOMIC_CAS4_ACQ, // RTLIB::__aarch64_cas4_acq
  RTLIB::OUTLINE_ATOMIC_CAS4_ACQ_REL, // RTLIB::__aarch64_cas4_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS4_REL, // RTLIB::__aarch64_cas4_rel
  RTLIB::OUTLINE_ATOMIC_CAS4_RELAX, // RTLIB::__aarch64_cas4_relax
  RTLIB::OUTLINE_ATOMIC_CAS8_ACQ, // RTLIB::__aarch64_cas8_acq
  RTLIB::OUTLINE_ATOMIC_CAS8_ACQ_REL, // RTLIB::__aarch64_cas8_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS8_REL, // RTLIB::__aarch64_cas8_rel
  RTLIB::OUTLINE_ATOMIC_CAS8_RELAX, // RTLIB::__aarch64_cas8_relax
  RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ, // RTLIB::__aarch64_ldadd1_acq
  RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ_REL, // RTLIB::__aarch64_ldadd1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD1_REL, // RTLIB::__aarch64_ldadd1_rel
  RTLIB::OUTLINE_ATOMIC_LDADD1_RELAX, // RTLIB::__aarch64_ldadd1_relax
  RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ, // RTLIB::__aarch64_ldadd2_acq
  RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ_REL, // RTLIB::__aarch64_ldadd2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD2_REL, // RTLIB::__aarch64_ldadd2_rel
  RTLIB::OUTLINE_ATOMIC_LDADD2_RELAX, // RTLIB::__aarch64_ldadd2_relax
  RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ, // RTLIB::__aarch64_ldadd4_acq
  RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ_REL, // RTLIB::__aarch64_ldadd4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD4_REL, // RTLIB::__aarch64_ldadd4_rel
  RTLIB::OUTLINE_ATOMIC_LDADD4_RELAX, // RTLIB::__aarch64_ldadd4_relax
  RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ, // RTLIB::__aarch64_ldadd8_acq
  RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ_REL, // RTLIB::__aarch64_ldadd8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD8_REL, // RTLIB::__aarch64_ldadd8_rel
  RTLIB::OUTLINE_ATOMIC_LDADD8_RELAX, // RTLIB::__aarch64_ldadd8_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ, // RTLIB::__aarch64_ldclr1_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ_REL, // RTLIB::__aarch64_ldclr1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR1_REL, // RTLIB::__aarch64_ldclr1_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR1_RELAX, // RTLIB::__aarch64_ldclr1_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ, // RTLIB::__aarch64_ldclr2_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ_REL, // RTLIB::__aarch64_ldclr2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR2_REL, // RTLIB::__aarch64_ldclr2_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR2_RELAX, // RTLIB::__aarch64_ldclr2_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ, // RTLIB::__aarch64_ldclr4_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ_REL, // RTLIB::__aarch64_ldclr4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR4_REL, // RTLIB::__aarch64_ldclr4_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR4_RELAX, // RTLIB::__aarch64_ldclr4_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ, // RTLIB::__aarch64_ldclr8_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ_REL, // RTLIB::__aarch64_ldclr8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR8_REL, // RTLIB::__aarch64_ldclr8_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR8_RELAX, // RTLIB::__aarch64_ldclr8_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ, // RTLIB::__aarch64_ldeor1_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ_REL, // RTLIB::__aarch64_ldeor1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR1_REL, // RTLIB::__aarch64_ldeor1_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR1_RELAX, // RTLIB::__aarch64_ldeor1_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ, // RTLIB::__aarch64_ldeor2_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ_REL, // RTLIB::__aarch64_ldeor2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR2_REL, // RTLIB::__aarch64_ldeor2_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR2_RELAX, // RTLIB::__aarch64_ldeor2_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ, // RTLIB::__aarch64_ldeor4_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ_REL, // RTLIB::__aarch64_ldeor4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR4_REL, // RTLIB::__aarch64_ldeor4_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR4_RELAX, // RTLIB::__aarch64_ldeor4_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ, // RTLIB::__aarch64_ldeor8_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ_REL, // RTLIB::__aarch64_ldeor8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR8_REL, // RTLIB::__aarch64_ldeor8_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR8_RELAX, // RTLIB::__aarch64_ldeor8_relax
  RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ, // RTLIB::__aarch64_ldset1_acq
  RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ_REL, // RTLIB::__aarch64_ldset1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET1_REL, // RTLIB::__aarch64_ldset1_rel
  RTLIB::OUTLINE_ATOMIC_LDSET1_RELAX, // RTLIB::__aarch64_ldset1_relax
  RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ, // RTLIB::__aarch64_ldset2_acq
  RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ_REL, // RTLIB::__aarch64_ldset2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET2_REL, // RTLIB::__aarch64_ldset2_rel
  RTLIB::OUTLINE_ATOMIC_LDSET2_RELAX, // RTLIB::__aarch64_ldset2_relax
  RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ, // RTLIB::__aarch64_ldset4_acq
  RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ_REL, // RTLIB::__aarch64_ldset4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET4_REL, // RTLIB::__aarch64_ldset4_rel
  RTLIB::OUTLINE_ATOMIC_LDSET4_RELAX, // RTLIB::__aarch64_ldset4_relax
  RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ, // RTLIB::__aarch64_ldset8_acq
  RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ_REL, // RTLIB::__aarch64_ldset8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET8_REL, // RTLIB::__aarch64_ldset8_rel
  RTLIB::OUTLINE_ATOMIC_LDSET8_RELAX, // RTLIB::__aarch64_ldset8_relax
  RTLIB::OUTLINE_ATOMIC_SWP1_ACQ, // RTLIB::__aarch64_swp1_acq
  RTLIB::OUTLINE_ATOMIC_SWP1_ACQ_REL, // RTLIB::__aarch64_swp1_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP1_REL, // RTLIB::__aarch64_swp1_rel
  RTLIB::OUTLINE_ATOMIC_SWP1_RELAX, // RTLIB::__aarch64_swp1_relax
  RTLIB::OUTLINE_ATOMIC_SWP2_ACQ, // RTLIB::__aarch64_swp2_acq
  RTLIB::OUTLINE_ATOMIC_SWP2_ACQ_REL, // RTLIB::__aarch64_swp2_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP2_REL, // RTLIB::__aarch64_swp2_rel
  RTLIB::OUTLINE_ATOMIC_SWP2_RELAX, // RTLIB::__aarch64_swp2_relax
  RTLIB::OUTLINE_ATOMIC_SWP4_ACQ, // RTLIB::__aarch64_swp4_acq
  RTLIB::OUTLINE_ATOMIC_SWP4_ACQ_REL, // RTLIB::__aarch64_swp4_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP4_REL, // RTLIB::__aarch64_swp4_rel
  RTLIB::OUTLINE_ATOMIC_SWP4_RELAX, // RTLIB::__aarch64_swp4_relax
  RTLIB::OUTLINE_ATOMIC_SWP8_ACQ, // RTLIB::__aarch64_swp8_acq
  RTLIB::OUTLINE_ATOMIC_SWP8_ACQ_REL, // RTLIB::__aarch64_swp8_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP8_REL, // RTLIB::__aarch64_swp8_rel
  RTLIB::OUTLINE_ATOMIC_SWP8_RELAX, // RTLIB::__aarch64_swp8_relax
  RTLIB::ADD_F64, // RTLIB::__adddf3
  RTLIB::ADD_F64, // RTLIB::__adddf3vfp
  RTLIB::ADD_F128, // RTLIB::__addkf3
  RTLIB::ADD_F32, // RTLIB::__addsf3
  RTLIB::ADD_F32, // RTLIB::__addsf3vfp
  RTLIB::ADD_F128, // RTLIB::__addtf3
  RTLIB::ADD_F80, // RTLIB::__addxf3
  RTLIB::FPROUND_F64_F32, // RTLIB::__aeabi_d2f
  RTLIB::FPROUND_F64_F16, // RTLIB::__aeabi_d2h
  RTLIB::FPTOSINT_F64_I32, // RTLIB::__aeabi_d2iz
  RTLIB::FPTOSINT_F64_I64, // RTLIB::__aeabi_d2lz
  RTLIB::FPTOUINT_F64_I32, // RTLIB::__aeabi_d2uiz
  RTLIB::FPTOUINT_F64_I64, // RTLIB::__aeabi_d2ulz
  RTLIB::ADD_F64, // RTLIB::__aeabi_dadd
  RTLIB::OEQ_F64, // RTLIB::__aeabi_dcmpeq__oeq
  RTLIB::UNE_F64, // RTLIB::__aeabi_dcmpeq__une
  RTLIB::OGE_F64, // RTLIB::__aeabi_dcmpge
  RTLIB::OGT_F64, // RTLIB::__aeabi_dcmpgt
  RTLIB::OLE_F64, // RTLIB::__aeabi_dcmple
  RTLIB::OLT_F64, // RTLIB::__aeabi_dcmplt
  RTLIB::UO_F64, // RTLIB::__aeabi_dcmpun
  RTLIB::DIV_F64, // RTLIB::__aeabi_ddiv
  RTLIB::MUL_F64, // RTLIB::__aeabi_dmul
  RTLIB::SUB_F64, // RTLIB::__aeabi_dsub
  RTLIB::FPEXT_F32_F64, // RTLIB::__aeabi_f2d
  RTLIB::FPROUND_F32_F16, // RTLIB::__aeabi_f2h
  RTLIB::FPTOSINT_F32_I32, // RTLIB::__aeabi_f2iz
  RTLIB::FPTOSINT_F32_I64, // RTLIB::__aeabi_f2lz
  RTLIB::FPTOUINT_F32_I32, // RTLIB::__aeabi_f2uiz
  RTLIB::FPTOUINT_F32_I64, // RTLIB::__aeabi_f2ulz
  RTLIB::ADD_F32, // RTLIB::__aeabi_fadd
  RTLIB::OEQ_F32, // RTLIB::__aeabi_fcmpeq__oeq
  RTLIB::UNE_F32, // RTLIB::__aeabi_fcmpeq__une
  RTLIB::OGE_F32, // RTLIB::__aeabi_fcmpge
  RTLIB::OGT_F32, // RTLIB::__aeabi_fcmpgt
  RTLIB::OLE_F32, // RTLIB::__aeabi_fcmple
  RTLIB::OLT_F32, // RTLIB::__aeabi_fcmplt
  RTLIB::UO_F32, // RTLIB::__aeabi_fcmpun
  RTLIB::DIV_F32, // RTLIB::__aeabi_fdiv
  RTLIB::MUL_F32, // RTLIB::__aeabi_fmul
  RTLIB::SUB_F32, // RTLIB::__aeabi_fsub
  RTLIB::FPEXT_F16_F32, // RTLIB::__aeabi_h2f
  RTLIB::SINTTOFP_I32_F64, // RTLIB::__aeabi_i2d
  RTLIB::SINTTOFP_I32_F32, // RTLIB::__aeabi_i2f
  RTLIB::SDIV_I16, // RTLIB::__aeabi_idiv__i16
  RTLIB::SDIV_I32, // RTLIB::__aeabi_idiv__i32
  RTLIB::SDIV_I8, // RTLIB::__aeabi_idiv__i8
  RTLIB::SDIVREM_I32, // RTLIB::__aeabi_idivmod
  RTLIB::SINTTOFP_I64_F64, // RTLIB::__aeabi_l2d
  RTLIB::SINTTOFP_I64_F32, // RTLIB::__aeabi_l2f
  RTLIB::SRA_I64, // RTLIB::__aeabi_lasr
  RTLIB::SDIVREM_I64, // RTLIB::__aeabi_ldivmod
  RTLIB::SHL_I64, // RTLIB::__aeabi_llsl
  RTLIB::SRL_I64, // RTLIB::__aeabi_llsr
  RTLIB::MUL_I64, // RTLIB::__aeabi_lmul
  RTLIB::AEABI_MEMCLR, // RTLIB::__aeabi_memclr
  RTLIB::AEABI_MEMCLR4, // RTLIB::__aeabi_memclr4
  RTLIB::AEABI_MEMCLR8, // RTLIB::__aeabi_memclr8
  RTLIB::MEMCPY, // RTLIB::__aeabi_memcpy
  RTLIB::AEABI_MEMCPY4, // RTLIB::__aeabi_memcpy4
  RTLIB::AEABI_MEMCPY8, // RTLIB::__aeabi_memcpy8
  RTLIB::MEMMOVE, // RTLIB::__aeabi_memmove
  RTLIB::AEABI_MEMMOVE4, // RTLIB::__aeabi_memmove4
  RTLIB::AEABI_MEMMOVE8, // RTLIB::__aeabi_memmove8
  RTLIB::MEMSET, // RTLIB::__aeabi_memset
  RTLIB::AEABI_MEMSET4, // RTLIB::__aeabi_memset4
  RTLIB::AEABI_MEMSET8, // RTLIB::__aeabi_memset8
  RTLIB::UINTTOFP_I32_F64, // RTLIB::__aeabi_ui2d
  RTLIB::UINTTOFP_I32_F32, // RTLIB::__aeabi_ui2f
  RTLIB::UDIV_I16, // RTLIB::__aeabi_uidiv__i16
  RTLIB::UDIV_I32, // RTLIB::__aeabi_uidiv__i32
  RTLIB::UDIV_I8, // RTLIB::__aeabi_uidiv__i8
  RTLIB::UDIVREM_I32, // RTLIB::__aeabi_uidivmod
  RTLIB::UINTTOFP_I64_F64, // RTLIB::__aeabi_ul2d
  RTLIB::UINTTOFP_I64_F32, // RTLIB::__aeabi_ul2f
  RTLIB::UDIVREM_I64, // RTLIB::__aeabi_uldivmod
  RTLIB::SC_MEMCPY, // RTLIB::__arm_sc_memcpy
  RTLIB::SC_MEMMOVE, // RTLIB::__arm_sc_memmove
  RTLIB::SC_MEMSET, // RTLIB::__arm_sc_memset
  RTLIB::SHL_I64, // RTLIB::__ashldi3
  RTLIB::SHL_I16, // RTLIB::__ashlhi3
  RTLIB::SHL_I32, // RTLIB::__ashlsi3
  RTLIB::SHL_I128, // RTLIB::__ashlti3
  RTLIB::SRA_I64, // RTLIB::__ashrdi3
  RTLIB::SRA_I16, // RTLIB::__ashrhi3
  RTLIB::SRA_I32, // RTLIB::__ashrsi3
  RTLIB::SRA_I128, // RTLIB::__ashrti3
  RTLIB::ATOMIC_COMPARE_EXCHANGE, // RTLIB::__atomic_compare_exchange
  RTLIB::ATOMIC_COMPARE_EXCHANGE_1, // RTLIB::__atomic_compare_exchange_1
  RTLIB::ATOMIC_COMPARE_EXCHANGE_16, // RTLIB::__atomic_compare_exchange_16
  RTLIB::ATOMIC_COMPARE_EXCHANGE_2, // RTLIB::__atomic_compare_exchange_2
  RTLIB::ATOMIC_COMPARE_EXCHANGE_4, // RTLIB::__atomic_compare_exchange_4
  RTLIB::ATOMIC_COMPARE_EXCHANGE_8, // RTLIB::__atomic_compare_exchange_8
  RTLIB::ATOMIC_EXCHANGE, // RTLIB::__atomic_exchange
  RTLIB::ATOMIC_EXCHANGE_1, // RTLIB::__atomic_exchange_1
  RTLIB::ATOMIC_EXCHANGE_16, // RTLIB::__atomic_exchange_16
  RTLIB::ATOMIC_EXCHANGE_2, // RTLIB::__atomic_exchange_2
  RTLIB::ATOMIC_EXCHANGE_4, // RTLIB::__atomic_exchange_4
  RTLIB::ATOMIC_EXCHANGE_8, // RTLIB::__atomic_exchange_8
  RTLIB::ATOMIC_FETCH_ADD_1, // RTLIB::__atomic_fetch_add_1
  RTLIB::ATOMIC_FETCH_ADD_16, // RTLIB::__atomic_fetch_add_16
  RTLIB::ATOMIC_FETCH_ADD_2, // RTLIB::__atomic_fetch_add_2
  RTLIB::ATOMIC_FETCH_ADD_4, // RTLIB::__atomic_fetch_add_4
  RTLIB::ATOMIC_FETCH_ADD_8, // RTLIB::__atomic_fetch_add_8
  RTLIB::ATOMIC_FETCH_AND_1, // RTLIB::__atomic_fetch_and_1
  RTLIB::ATOMIC_FETCH_AND_16, // RTLIB::__atomic_fetch_and_16
  RTLIB::ATOMIC_FETCH_AND_2, // RTLIB::__atomic_fetch_and_2
  RTLIB::ATOMIC_FETCH_AND_4, // RTLIB::__atomic_fetch_and_4
  RTLIB::ATOMIC_FETCH_AND_8, // RTLIB::__atomic_fetch_and_8
  RTLIB::ATOMIC_FETCH_NAND_1, // RTLIB::__atomic_fetch_nand_1
  RTLIB::ATOMIC_FETCH_NAND_16, // RTLIB::__atomic_fetch_nand_16
  RTLIB::ATOMIC_FETCH_NAND_2, // RTLIB::__atomic_fetch_nand_2
  RTLIB::ATOMIC_FETCH_NAND_4, // RTLIB::__atomic_fetch_nand_4
  RTLIB::ATOMIC_FETCH_NAND_8, // RTLIB::__atomic_fetch_nand_8
  RTLIB::ATOMIC_FETCH_OR_1, // RTLIB::__atomic_fetch_or_1
  RTLIB::ATOMIC_FETCH_OR_16, // RTLIB::__atomic_fetch_or_16
  RTLIB::ATOMIC_FETCH_OR_2, // RTLIB::__atomic_fetch_or_2
  RTLIB::ATOMIC_FETCH_OR_4, // RTLIB::__atomic_fetch_or_4
  RTLIB::ATOMIC_FETCH_OR_8, // RTLIB::__atomic_fetch_or_8
  RTLIB::ATOMIC_FETCH_SUB_1, // RTLIB::__atomic_fetch_sub_1
  RTLIB::ATOMIC_FETCH_SUB_16, // RTLIB::__atomic_fetch_sub_16
  RTLIB::ATOMIC_FETCH_SUB_2, // RTLIB::__atomic_fetch_sub_2
  RTLIB::ATOMIC_FETCH_SUB_4, // RTLIB::__atomic_fetch_sub_4
  RTLIB::ATOMIC_FETCH_SUB_8, // RTLIB::__atomic_fetch_sub_8
  RTLIB::ATOMIC_FETCH_XOR_1, // RTLIB::__atomic_fetch_xor_1
  RTLIB::ATOMIC_FETCH_XOR_16, // RTLIB::__atomic_fetch_xor_16
  RTLIB::ATOMIC_FETCH_XOR_2, // RTLIB::__atomic_fetch_xor_2
  RTLIB::ATOMIC_FETCH_XOR_4, // RTLIB::__atomic_fetch_xor_4
  RTLIB::ATOMIC_FETCH_XOR_8, // RTLIB::__atomic_fetch_xor_8
  RTLIB::ATOMIC_LOAD, // RTLIB::__atomic_load
  RTLIB::ATOMIC_LOAD_1, // RTLIB::__atomic_load_1
  RTLIB::ATOMIC_LOAD_16, // RTLIB::__atomic_load_16
  RTLIB::ATOMIC_LOAD_2, // RTLIB::__atomic_load_2
  RTLIB::ATOMIC_LOAD_4, // RTLIB::__atomic_load_4
  RTLIB::ATOMIC_LOAD_8, // RTLIB::__atomic_load_8
  RTLIB::ATOMIC_STORE, // RTLIB::__atomic_store
  RTLIB::ATOMIC_STORE_1, // RTLIB::__atomic_store_1
  RTLIB::ATOMIC_STORE_16, // RTLIB::__atomic_store_16
  RTLIB::ATOMIC_STORE_2, // RTLIB::__atomic_store_2
  RTLIB::ATOMIC_STORE_4, // RTLIB::__atomic_store_4
  RTLIB::ATOMIC_STORE_8, // RTLIB::__atomic_store_8
  RTLIB::BZERO, // RTLIB::__bzero
  RTLIB::CLEAR_CACHE, // RTLIB::__clear_cache
  RTLIB::CTLZ_I64, // RTLIB::__clzdi2
  RTLIB::CTLZ_I32, // RTLIB::__clzsi2
  RTLIB::CTLZ_I128, // RTLIB::__clzti2
  RTLIB::CXA_END_CLEANUP, // RTLIB::__cxa_end_cleanup
  RTLIB::DIV_F64, // RTLIB::__divdf3
  RTLIB::DIV_F64, // RTLIB::__divdf3vfp
  RTLIB::SDIV_I64, // RTLIB::__divdi3
  RTLIB::SDIV_I16, // RTLIB::__divhi3
  RTLIB::DIV_F128, // RTLIB::__divkf3
  RTLIB::SDIVREM_I16, // RTLIB::__divmodhi4
  RTLIB::SDIVREM_I8, // RTLIB::__divmodqi4
  RTLIB::SDIVREM_I32, // RTLIB::__divmodsi4
  RTLIB::SDIV_I8, // RTLIB::__divqi3
  RTLIB::DIV_F32, // RTLIB::__divsf3
  RTLIB::DIV_F32, // RTLIB::__divsf3vfp
  RTLIB::SDIV_I32, // RTLIB::__divsi3
  RTLIB::DIV_F128, // RTLIB::__divtf3
  RTLIB::SDIV_I128, // RTLIB::__divti3
  RTLIB::DIV_F80, // RTLIB::__divxf3
  RTLIB::FPTOSINT_F64_I64, // RTLIB::__dtoi64
  RTLIB::FPTOUINT_F64_I64, // RTLIB::__dtou64
  RTLIB::OEQ_F64, // RTLIB::__eqdf2
  RTLIB::OEQ_F64, // RTLIB::__eqdf2vfp
  RTLIB::OEQ_F128, // RTLIB::__eqkf2
  RTLIB::OEQ_F32, // RTLIB::__eqsf2
  RTLIB::OEQ_F32, // RTLIB::__eqsf2vfp
  RTLIB::OEQ_F128, // RTLIB::__eqtf2
  RTLIB::EXP10_F64, // RTLIB::__exp10
  RTLIB::EXP10_F32, // RTLIB::__exp10f
  RTLIB::EXP10_FINITE_F128, // RTLIB::__exp10f128_finite
  RTLIB::EXP2_FINITE_F64, // RTLIB::__exp2_finite
  RTLIB::EXP2_FINITE_F128, // RTLIB::__exp2f128_finite
  RTLIB::EXP2_FINITE_F32, // RTLIB::__exp2f_finite
  RTLIB::EXP2_FINITE_F128, // RTLIB::__exp2l_finite_f128
  RTLIB::EXP2_FINITE_F80, // RTLIB::__exp2l_finite_f80
  RTLIB::EXP2_FINITE_PPCF128, // RTLIB::__exp2l_finite_ppcf128
  RTLIB::EXP_FINITE_F64, // RTLIB::__exp_finite
  RTLIB::EXP_FINITE_F128, // RTLIB::__expf128_finite
  RTLIB::EXP_FINITE_F32, // RTLIB::__expf_finite
  RTLIB::EXP_FINITE_F128, // RTLIB::__expl_finite_f128
  RTLIB::EXP_FINITE_F80, // RTLIB::__expl_finite_f80
  RTLIB::EXP_FINITE_PPCF128, // RTLIB::__expl_finite_ppcf128
  RTLIB::FPEXT_BF16_F32, // RTLIB::__extendbfsf2
  RTLIB::FPEXT_F64_F128, // RTLIB::__extenddfkf2
  RTLIB::FPEXT_F64_F128, // RTLIB::__extenddftf2
  RTLIB::FPEXT_F16_F64, // RTLIB::__extendhfdf2
  RTLIB::FPEXT_F16_F32, // RTLIB::__extendhfsf2
  RTLIB::FPEXT_F16_F128, // RTLIB::__extendhftf2
  RTLIB::FPEXT_F16_F80, // RTLIB::__extendhfxf2
  RTLIB::CONVERT_F128_PPCF128, // RTLIB::__extendkftf2
  RTLIB::FPEXT_F32_F64, // RTLIB::__extendsfdf2
  RTLIB::FPEXT_F32_F64, // RTLIB::__extendsfdf2vfp
  RTLIB::FPEXT_F32_F128, // RTLIB::__extendsfkf2
  RTLIB::FPEXT_F32_F128, // RTLIB::__extendsftf2
  RTLIB::FPEXT_F80_F128, // RTLIB::__extendxftf2
  RTLIB::FPTOSINT_F64_I64, // RTLIB::__fixdfdi
  RTLIB::FPTOSINT_F64_I32, // RTLIB::__fixdfsi
  RTLIB::FPTOSINT_F64_I32, // RTLIB::__fixdfsivfp
  RTLIB::FPTOSINT_F64_I128, // RTLIB::__fixdfti
  RTLIB::FPTOSINT_F16_I64, // RTLIB::__fixhfdi
  RTLIB::FPTOSINT_F16_I32, // RTLIB::__fixhfsi
  RTLIB::FPTOSINT_F16_I128, // RTLIB::__fixhfti
  RTLIB::FPTOSINT_F128_I64, // RTLIB::__fixkfdi
  RTLIB::FPTOSINT_F128_I32, // RTLIB::__fixkfsi
  RTLIB::FPTOSINT_F128_I128, // RTLIB::__fixkfti
  RTLIB::FPTOSINT_F32_I64, // RTLIB::__fixsfdi
  RTLIB::FPTOSINT_F32_I32, // RTLIB::__fixsfsi
  RTLIB::FPTOSINT_F32_I32, // RTLIB::__fixsfsivfp
  RTLIB::FPTOSINT_F32_I128, // RTLIB::__fixsfti
  RTLIB::FPTOSINT_F128_I64, // RTLIB::__fixtfdi_f128
  RTLIB::FPTOSINT_PPCF128_I64, // RTLIB::__fixtfdi_ppcf128
  RTLIB::FPTOSINT_F128_I32, // RTLIB::__fixtfsi
  RTLIB::FPTOSINT_F128_I128, // RTLIB::__fixtfti_f128
  RTLIB::FPTOSINT_PPCF128_I128, // RTLIB::__fixtfti_ppcf128
  RTLIB::FPTOUINT_F64_I64, // RTLIB::__fixunsdfdi
  RTLIB::FPTOUINT_F64_I32, // RTLIB::__fixunsdfsi
  RTLIB::FPTOUINT_F64_I32, // RTLIB::__fixunsdfsivfp
  RTLIB::FPTOUINT_F64_I128, // RTLIB::__fixunsdfti
  RTLIB::FPTOUINT_F16_I64, // RTLIB::__fixunshfdi
  RTLIB::FPTOUINT_F16_I32, // RTLIB::__fixunshfsi
  RTLIB::FPTOUINT_F16_I128, // RTLIB::__fixunshfti
  RTLIB::FPTOUINT_F128_I64, // RTLIB::__fixunskfdi
  RTLIB::FPTOUINT_F128_I32, // RTLIB::__fixunskfsi
  RTLIB::FPTOUINT_F128_I128, // RTLIB::__fixunskfti
  RTLIB::FPTOUINT_F32_I64, // RTLIB::__fixunssfdi
  RTLIB::FPTOUINT_F32_I32, // RTLIB::__fixunssfsi
  RTLIB::FPTOUINT_F32_I32, // RTLIB::__fixunssfsivfp
  RTLIB::FPTOUINT_F32_I128, // RTLIB::__fixunssfti
  RTLIB::FPTOUINT_F128_I64, // RTLIB::__fixunstfdi_f128
  RTLIB::FPTOUINT_PPCF128_I64, // RTLIB::__fixunstfdi_ppcf128
  RTLIB::FPTOUINT_F128_I32, // RTLIB::__fixunstfsi_f128
  RTLIB::FPTOUINT_PPCF128_I32, // RTLIB::__fixunstfsi_ppcf128
  RTLIB::FPTOUINT_F128_I128, // RTLIB::__fixunstfti_f128
  RTLIB::FPTOUINT_PPCF128_I128, // RTLIB::__fixunstfti_ppcf128
  RTLIB::FPTOUINT_F80_I64, // RTLIB::__fixunsxfdi
  RTLIB::FPTOUINT_F80_I32, // RTLIB::__fixunsxfsi
  RTLIB::FPTOUINT_F80_I128, // RTLIB::__fixunsxfti
  RTLIB::FPTOSINT_F80_I64, // RTLIB::__fixxfdi
  RTLIB::FPTOSINT_F80_I32, // RTLIB::__fixxfsi
  RTLIB::FPTOSINT_F80_I128, // RTLIB::__fixxfti
  RTLIB::SINTTOFP_I64_BF16, // RTLIB::__floatdibf
  RTLIB::SINTTOFP_I64_F64, // RTLIB::__floatdidf
  RTLIB::SINTTOFP_I64_F16, // RTLIB::__floatdihf
  RTLIB::SINTTOFP_I64_F128, // RTLIB::__floatdikf
  RTLIB::SINTTOFP_I64_F32, // RTLIB::__floatdisf
  RTLIB::SINTTOFP_I64_F128, // RTLIB::__floatditf_f128
  RTLIB::SINTTOFP_I64_PPCF128, // RTLIB::__floatditf_ppcf128
  RTLIB::SINTTOFP_I64_F80, // RTLIB::__floatdixf
  RTLIB::SINTTOFP_I32_F64, // RTLIB::__floatsidf
  RTLIB::SINTTOFP_I32_F64, // RTLIB::__floatsidfvfp
  RTLIB::SINTTOFP_I32_F16, // RTLIB::__floatsihf
  RTLIB::SINTTOFP_I32_F128, // RTLIB::__floatsikf
  RTLIB::SINTTOFP_I32_F32, // RTLIB::__floatsisf
  RTLIB::SINTTOFP_I32_F32, // RTLIB::__floatsisfvfp
  RTLIB::SINTTOFP_I32_F128, // RTLIB::__floatsitf
  RTLIB::SINTTOFP_I32_F80, // RTLIB::__floatsixf
  RTLIB::SINTTOFP_I128_F64, // RTLIB::__floattidf
  RTLIB::SINTTOFP_I128_F16, // RTLIB::__floattihf
  RTLIB::SINTTOFP_I128_F128, // RTLIB::__floattikf
  RTLIB::SINTTOFP_I128_F32, // RTLIB::__floattisf
  RTLIB::SINTTOFP_I128_F128, // RTLIB::__floattitf_f128
  RTLIB::SINTTOFP_I128_PPCF128, // RTLIB::__floattitf_ppcf128
  RTLIB::SINTTOFP_I128_F80, // RTLIB::__floattixf
  RTLIB::UINTTOFP_I64_BF16, // RTLIB::__floatundibf
  RTLIB::UINTTOFP_I64_F64, // RTLIB::__floatundidf
  RTLIB::UINTTOFP_I64_F16, // RTLIB::__floatundihf
  RTLIB::UINTTOFP_I64_F128, // RTLIB::__floatundikf
  RTLIB::UINTTOFP_I64_F32, // RTLIB::__floatundisf
  RTLIB::UINTTOFP_I64_F128, // RTLIB::__floatunditf_f128
  RTLIB::UINTTOFP_I64_PPCF128, // RTLIB::__floatunditf_ppcf128
  RTLIB::UINTTOFP_I64_F80, // RTLIB::__floatundixf
  RTLIB::UINTTOFP_I32_F64, // RTLIB::__floatunsidf
  RTLIB::UINTTOFP_I32_F16, // RTLIB::__floatunsihf
  RTLIB::UINTTOFP_I32_F128, // RTLIB::__floatunsikf
  RTLIB::UINTTOFP_I32_F32, // RTLIB::__floatunsisf
  RTLIB::UINTTOFP_I32_F128, // RTLIB::__floatunsitf
  RTLIB::UINTTOFP_I32_F80, // RTLIB::__floatunsixf
  RTLIB::UINTTOFP_I32_F64, // RTLIB::__floatunssidfvfp
  RTLIB::UINTTOFP_I32_F32, // RTLIB::__floatunssisfvfp
  RTLIB::UINTTOFP_I128_F64, // RTLIB::__floatuntidf
  RTLIB::UINTTOFP_I128_F16, // RTLIB::__floatuntihf
  RTLIB::UINTTOFP_I128_F128, // RTLIB::__floatuntikf
  RTLIB::UINTTOFP_I128_F32, // RTLIB::__floatuntisf
  RTLIB::UINTTOFP_I128_F128, // RTLIB::__floatuntitf_f128
  RTLIB::UINTTOFP_I128_PPCF128, // RTLIB::__floatuntitf_ppcf128
  RTLIB::UINTTOFP_I128_F80, // RTLIB::__floatuntixf
  RTLIB::FPEXT_F64_PPCF128, // RTLIB::__gcc_dtoq
  RTLIB::SINTTOFP_I32_PPCF128, // RTLIB::__gcc_itoq
  RTLIB::ADD_PPCF128, // RTLIB::__gcc_qadd
  RTLIB::DIV_PPCF128, // RTLIB::__gcc_qdiv
  RTLIB::OEQ_PPCF128, // RTLIB::__gcc_qeq
  RTLIB::OGE_PPCF128, // RTLIB::__gcc_qge
  RTLIB::OGT_PPCF128, // RTLIB::__gcc_qgt
  RTLIB::OLE_PPCF128, // RTLIB::__gcc_qle
  RTLIB::OLT_PPCF128, // RTLIB::__gcc_qlt
  RTLIB::MUL_PPCF128, // RTLIB::__gcc_qmul
  RTLIB::UNE_PPCF128, // RTLIB::__gcc_qne
  RTLIB::SUB_PPCF128, // RTLIB::__gcc_qsub
  RTLIB::FPROUND_PPCF128_F64, // RTLIB::__gcc_qtod
  RTLIB::FPROUND_PPCF128_F32, // RTLIB::__gcc_qtos
  RTLIB::FPTOSINT_PPCF128_I32, // RTLIB::__gcc_qtou
  RTLIB::UO_PPCF128, // RTLIB::__gcc_qunord
  RTLIB::FPEXT_F32_PPCF128, // RTLIB::__gcc_stoq
  RTLIB::UINTTOFP_I32_PPCF128, // RTLIB::__gcc_utoq
  RTLIB::OGE_F64, // RTLIB::__gedf2
  RTLIB::OGE_F64, // RTLIB::__gedf2vfp
  RTLIB::OGE_F128, // RTLIB::__gekf2
  RTLIB::OGE_F32, // RTLIB::__gesf2
  RTLIB::OGE_F32, // RTLIB::__gesf2vfp
  RTLIB::OGE_F128, // RTLIB::__getf2
  RTLIB::FPROUND_F32_F16, // RTLIB::__gnu_f2h_ieee
  RTLIB::FPEXT_F16_F32, // RTLIB::__gnu_h2f_ieee
  RTLIB::OGT_F64, // RTLIB::__gtdf2
  RTLIB::OGT_F64, // RTLIB::__gtdf2vfp
  RTLIB::OGT_F128, // RTLIB::__gtkf2
  RTLIB::OGT_F32, // RTLIB::__gtsf2
  RTLIB::OGT_F32, // RTLIB::__gtsf2vfp
  RTLIB::OGT_F128, // RTLIB::__gttf2
  RTLIB::ADD_F64, // RTLIB::__hexagon_adddf3
  RTLIB::DIV_F64, // RTLIB::__hexagon_divdf3
  RTLIB::SDIV_I64, // RTLIB::__hexagon_divdi3
  RTLIB::DIV_F32, // RTLIB::__hexagon_divsf3
  RTLIB::SDIV_I32, // RTLIB::__hexagon_divsi3
  RTLIB::FAST_SQRT_F64, // RTLIB::__hexagon_fast2_sqrtdf2
  RTLIB::FAST_SQRT_F32, // RTLIB::__hexagon_fast2_sqrtf
  RTLIB::FAST_ADD_F64, // RTLIB::__hexagon_fast_adddf3
  RTLIB::FAST_DIV_F64, // RTLIB::__hexagon_fast_divdf3
  RTLIB::FAST_DIV_F32, // RTLIB::__hexagon_fast_divsf3
  RTLIB::FAST_MUL_F64, // RTLIB::__hexagon_fast_muldf3
  RTLIB::FAST_SUB_F64, // RTLIB::__hexagon_fast_subdf3
  RTLIB::HEXAGON_MEMCPY_LIKELY_ALIGNED_MIN32BYTES_MULT8BYTES, // RTLIB::__hexagon_memcpy_likely_aligned_min32bytes_mult8bytes
  RTLIB::SREM_I64, // RTLIB::__hexagon_moddi3
  RTLIB::SREM_I32, // RTLIB::__hexagon_modsi3
  RTLIB::MUL_F64, // RTLIB::__hexagon_muldf3
  RTLIB::SQRT_F32, // RTLIB::__hexagon_sqrtf
  RTLIB::SUB_F64, // RTLIB::__hexagon_subdf3
  RTLIB::UDIV_I64, // RTLIB::__hexagon_udivdi3
  RTLIB::UDIV_I32, // RTLIB::__hexagon_udivsi3
  RTLIB::UREM_I64, // RTLIB::__hexagon_umoddi3
  RTLIB::UREM_I32, // RTLIB::__hexagon_umodsi3
  RTLIB::SINTTOFP_I64_F64, // RTLIB::__i64tod
  RTLIB::SINTTOFP_I64_F32, // RTLIB::__i64tos
  RTLIB::OLE_F64, // RTLIB::__ledf2
  RTLIB::OLE_F64, // RTLIB::__ledf2vfp
  RTLIB::OLE_F128, // RTLIB::__lekf2
  RTLIB::OLE_F32, // RTLIB::__lesf2
  RTLIB::OLE_F32, // RTLIB::__lesf2vfp
  RTLIB::OLE_F128, // RTLIB::__letf2
  RTLIB::DEOPTIMIZE, // RTLIB::__llvm_deoptimize
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, // RTLIB::__llvm_memcpy_element_unordered_atomic_1
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, // RTLIB::__llvm_memcpy_element_unordered_atomic_16
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, // RTLIB::__llvm_memcpy_element_unordered_atomic_2
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, // RTLIB::__llvm_memcpy_element_unordered_atomic_4
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, // RTLIB::__llvm_memcpy_element_unordered_atomic_8
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, // RTLIB::__llvm_memmove_element_unordered_atomic_1
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, // RTLIB::__llvm_memmove_element_unordered_atomic_16
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, // RTLIB::__llvm_memmove_element_unordered_atomic_2
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, // RTLIB::__llvm_memmove_element_unordered_atomic_4
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, // RTLIB::__llvm_memmove_element_unordered_atomic_8
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, // RTLIB::__llvm_memset_element_unordered_atomic_1
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, // RTLIB::__llvm_memset_element_unordered_atomic_16
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, // RTLIB::__llvm_memset_element_unordered_atomic_2
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, // RTLIB::__llvm_memset_element_unordered_atomic_4
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, // RTLIB::__llvm_memset_element_unordered_atomic_8
  RTLIB::LOG10_FINITE_F64, // RTLIB::__log10_finite
  RTLIB::LOG10_FINITE_F128, // RTLIB::__log10f128_finite
  RTLIB::LOG10_FINITE_F32, // RTLIB::__log10f_finite
  RTLIB::LOG10_FINITE_F128, // RTLIB::__log10l_finite_f128
  RTLIB::LOG10_FINITE_F80, // RTLIB::__log10l_finite_f80
  RTLIB::LOG10_FINITE_PPCF128, // RTLIB::__log10l_finite_ppcf128
  RTLIB::LOG2_FINITE_F64, // RTLIB::__log2_finite
  RTLIB::LOG2_FINITE_F128, // RTLIB::__log2f128_finite
  RTLIB::LOG2_FINITE_F32, // RTLIB::__log2f_finite
  RTLIB::LOG2_FINITE_F128, // RTLIB::__log2l_finite_f128
  RTLIB::LOG2_FINITE_F80, // RTLIB::__log2l_finite_f80
  RTLIB::LOG2_FINITE_PPCF128, // RTLIB::__log2l_finite_ppcf128
  RTLIB::LOG_FINITE_F64, // RTLIB::__log_finite
  RTLIB::LOG_FINITE_F128, // RTLIB::__logf128_finite
  RTLIB::LOG_FINITE_F32, // RTLIB::__logf_finite
  RTLIB::LOG_FINITE_F128, // RTLIB::__logl_finite_f128
  RTLIB::LOG_FINITE_F80, // RTLIB::__logl_finite_f80
  RTLIB::LOG_FINITE_PPCF128, // RTLIB::__logl_finite_ppcf128
  RTLIB::SRL_I64, // RTLIB::__lshrdi3
  RTLIB::SRL_I16, // RTLIB::__lshrhi3
  RTLIB::SRL_I32, // RTLIB::__lshrsi3
  RTLIB::SRL_I128, // RTLIB::__lshrti3
  RTLIB::OLT_F64, // RTLIB::__ltdf2
  RTLIB::OLT_F64, // RTLIB::__ltdf2vfp
  RTLIB::OLT_F128, // RTLIB::__ltkf2
  RTLIB::OLT_F32, // RTLIB::__ltsf2
  RTLIB::OLT_F32, // RTLIB::__ltsf2vfp
  RTLIB::OLT_F128, // RTLIB::__lttf2
  RTLIB::MEMCPY_ALIGN_4, // RTLIB::__memcpy_4
  RTLIB::ADD_F64, // RTLIB::__mips16_adddf3
  RTLIB::ADD_F32, // RTLIB::__mips16_addsf3
  RTLIB::DIV_F64, // RTLIB::__mips16_divdf3
  RTLIB::DIV_F32, // RTLIB::__mips16_divsf3
  RTLIB::OEQ_F64, // RTLIB::__mips16_eqdf2
  RTLIB::OEQ_F32, // RTLIB::__mips16_eqsf2
  RTLIB::FPEXT_F32_F64, // RTLIB::__mips16_extendsfdf2
  RTLIB::FPTOSINT_F64_I32, // RTLIB::__mips16_fix_truncdfsi
  RTLIB::FPTOSINT_F32_I32, // RTLIB::__mips16_fix_truncsfsi
  RTLIB::SINTTOFP_I32_F64, // RTLIB::__mips16_floatsidf
  RTLIB::SINTTOFP_I32_F32, // RTLIB::__mips16_floatsisf
  RTLIB::UINTTOFP_I32_F64, // RTLIB::__mips16_floatunsidf
  RTLIB::UINTTOFP_I32_F32, // RTLIB::__mips16_floatunsisf
  RTLIB::OGE_F64, // RTLIB::__mips16_gedf2
  RTLIB::OGE_F32, // RTLIB::__mips16_gesf2
  RTLIB::OGT_F64, // RTLIB::__mips16_gtdf2
  RTLIB::OGT_F32, // RTLIB::__mips16_gtsf2
  RTLIB::OLE_F64, // RTLIB::__mips16_ledf2
  RTLIB::OLE_F32, // RTLIB::__mips16_lesf2
  RTLIB::OLT_F64, // RTLIB::__mips16_ltdf2
  RTLIB::OLT_F32, // RTLIB::__mips16_ltsf2
  RTLIB::MUL_F64, // RTLIB::__mips16_muldf3
  RTLIB::MUL_F32, // RTLIB::__mips16_mulsf3
  RTLIB::UNE_F64, // RTLIB::__mips16_nedf2
  RTLIB::UNE_F32, // RTLIB::__mips16_nesf2
  RTLIB::MIPS16_RET_DC, // RTLIB::__mips16_ret_dc
  RTLIB::MIPS16_RET_DF, // RTLIB::__mips16_ret_df
  RTLIB::MIPS16_RET_SC, // RTLIB::__mips16_ret_sc
  RTLIB::MIPS16_RET_SF, // RTLIB::__mips16_ret_sf
  RTLIB::SUB_F64, // RTLIB::__mips16_subdf3
  RTLIB::SUB_F32, // RTLIB::__mips16_subsf3
  RTLIB::FPROUND_F64_F32, // RTLIB::__mips16_truncdfsf2
  RTLIB::UO_F64, // RTLIB::__mips16_unorddf2
  RTLIB::UO_F32, // RTLIB::__mips16_unordsf2
  RTLIB::SREM_I64, // RTLIB::__moddi3
  RTLIB::SREM_I16, // RTLIB::__modhi3
  RTLIB::SREM_I8, // RTLIB::__modqi3
  RTLIB::SREM_I32, // RTLIB::__modsi3
  RTLIB::SREM_I128, // RTLIB::__modti3
  RTLIB::ADD_F64, // RTLIB::__mspabi_addd
  RTLIB::ADD_F32, // RTLIB::__mspabi_addf
  RTLIB::OEQ_F64, // RTLIB::__mspabi_cmpd__oeq
  RTLIB::OGE_F64, // RTLIB::__mspabi_cmpd__oge
  RTLIB::OGT_F64, // RTLIB::__mspabi_cmpd__ogt
  RTLIB::OLE_F64, // RTLIB::__mspabi_cmpd__ole
  RTLIB::OLT_F64, // RTLIB::__mspabi_cmpd__olt
  RTLIB::UNE_F64, // RTLIB::__mspabi_cmpd__une
  RTLIB::OEQ_F32, // RTLIB::__mspabi_cmpf__oeq
  RTLIB::OGE_F32, // RTLIB::__mspabi_cmpf__oge
  RTLIB::OGT_F32, // RTLIB::__mspabi_cmpf__ogt
  RTLIB::OLE_F32, // RTLIB::__mspabi_cmpf__ole
  RTLIB::OLT_F32, // RTLIB::__mspabi_cmpf__olt
  RTLIB::UNE_F32, // RTLIB::__mspabi_cmpf__une
  RTLIB::FPROUND_F64_F32, // RTLIB::__mspabi_cvtdf
  RTLIB::FPEXT_F32_F64, // RTLIB::__mspabi_cvtfd
  RTLIB::DIV_F64, // RTLIB::__mspabi_divd
  RTLIB::DIV_F32, // RTLIB::__mspabi_divf
  RTLIB::SDIV_I16, // RTLIB::__mspabi_divi
  RTLIB::SDIV_I32, // RTLIB::__mspabi_divli
  RTLIB::SDIV_I64, // RTLIB::__mspabi_divlli
  RTLIB::UDIV_I16, // RTLIB::__mspabi_divu
  RTLIB::UDIV_I32, // RTLIB::__mspabi_divul
  RTLIB::UDIV_I64, // RTLIB::__mspabi_divull
  RTLIB::FPTOSINT_F64_I32, // RTLIB::__mspabi_fixdli
  RTLIB::FPTOSINT_F64_I64, // RTLIB::__mspabi_fixdlli
  RTLIB::FPTOUINT_F64_I32, // RTLIB::__mspabi_fixdul
  RTLIB::FPTOUINT_F64_I64, // RTLIB::__mspabi_fixdull
  RTLIB::FPTOSINT_F32_I32, // RTLIB::__mspabi_fixfli
  RTLIB::FPTOSINT_F32_I64, // RTLIB::__mspabi_fixflli
  RTLIB::FPTOUINT_F32_I32, // RTLIB::__mspabi_fixful
  RTLIB::FPTOUINT_F32_I64, // RTLIB::__mspabi_fixfull
  RTLIB::SINTTOFP_I32_F64, // RTLIB::__mspabi_fltlid
  RTLIB::SINTTOFP_I32_F32, // RTLIB::__mspabi_fltlif
  RTLIB::SINTTOFP_I64_F64, // RTLIB::__mspabi_fltllid
  RTLIB::SINTTOFP_I64_F32, // RTLIB::__mspabi_fltllif
  RTLIB::UINTTOFP_I32_F64, // RTLIB::__mspabi_fltuld
  RTLIB::UINTTOFP_I32_F32, // RTLIB::__mspabi_fltulf
  RTLIB::UINTTOFP_I64_F64, // RTLIB::__mspabi_fltulld
  RTLIB::UINTTOFP_I64_F32, // RTLIB::__mspabi_fltullf
  RTLIB::MUL_F64, // RTLIB::__mspabi_mpyd
  RTLIB::MUL_F32, // RTLIB::__mspabi_mpyf
  RTLIB::MUL_I16, // RTLIB::__mspabi_mpyi
  RTLIB::MUL_I16, // RTLIB::__mspabi_mpyi_f5hw
  RTLIB::MUL_I16, // RTLIB::__mspabi_mpyi_hw
  RTLIB::MUL_I32, // RTLIB::__mspabi_mpyl
  RTLIB::MUL_I32, // RTLIB::__mspabi_mpyl_f5hw
  RTLIB::MUL_I32, // RTLIB::__mspabi_mpyl_hw
  RTLIB::MUL_I32, // RTLIB::__mspabi_mpyl_hw32
  RTLIB::MUL_I64, // RTLIB::__mspabi_mpyll
  RTLIB::MUL_I64, // RTLIB::__mspabi_mpyll_f5hw
  RTLIB::MUL_I64, // RTLIB::__mspabi_mpyll_hw
  RTLIB::MUL_I64, // RTLIB::__mspabi_mpyll_hw32
  RTLIB::SREM_I16, // RTLIB::__mspabi_remi
  RTLIB::SREM_I32, // RTLIB::__mspabi_remli
  RTLIB::SREM_I64, // RTLIB::__mspabi_remlli
  RTLIB::UREM_I16, // RTLIB::__mspabi_remu
  RTLIB::UREM_I32, // RTLIB::__mspabi_remul
  RTLIB::UREM_I64, // RTLIB::__mspabi_remull
  RTLIB::SHL_I32, // RTLIB::__mspabi_slll
  RTLIB::SRA_I32, // RTLIB::__mspabi_sral
  RTLIB::SRL_I32, // RTLIB::__mspabi_srll
  RTLIB::SUB_F64, // RTLIB::__mspabi_subd
  RTLIB::SUB_F32, // RTLIB::__mspabi_subf
  RTLIB::MUL_F64, // RTLIB::__muldf3
  RTLIB::MUL_F64, // RTLIB::__muldf3vfp
  RTLIB::MUL_I64, // RTLIB::__muldi3
  RTLIB::MUL_I16, // RTLIB::__mulhi3
  RTLIB::MUL_F128, // RTLIB::__mulkf3
  RTLIB::MULO_I64, // RTLIB::__mulodi4
  RTLIB::MULO_I32, // RTLIB::__mulosi4
  RTLIB::MULO_I128, // RTLIB::__muloti4
  RTLIB::MUL_I8, // RTLIB::__mulqi3
  RTLIB::MUL_F32, // RTLIB::__mulsf3
  RTLIB::MUL_F32, // RTLIB::__mulsf3vfp
  RTLIB::MUL_I32, // RTLIB::__mulsi3
  RTLIB::MUL_F128, // RTLIB::__multf3
  RTLIB::MUL_I128, // RTLIB::__multi3
  RTLIB::MUL_F80, // RTLIB::__mulxf3
  RTLIB::UNE_F64, // RTLIB::__nedf2
  RTLIB::UNE_F64, // RTLIB::__nedf2vfp
  RTLIB::NEG_I64, // RTLIB::__negdi2
  RTLIB::NEG_I32, // RTLIB::__negsi2
  RTLIB::UNE_F128, // RTLIB::__nekf2
  RTLIB::UNE_F32, // RTLIB::__nesf2
  RTLIB::UNE_F32, // RTLIB::__nesf2vfp
  RTLIB::UNE_F128, // RTLIB::__netf2
  RTLIB::CTPOP_I64, // RTLIB::__popcountdi2
  RTLIB::CTPOP_I32, // RTLIB::__popcountsi2
  RTLIB::CTPOP_I128, // RTLIB::__popcountti2
  RTLIB::POW_FINITE_F64, // RTLIB::__pow_finite
  RTLIB::POW_FINITE_F128, // RTLIB::__powf128_finite
  RTLIB::POW_FINITE_F32, // RTLIB::__powf_finite
  RTLIB::POWI_F64, // RTLIB::__powidf2
  RTLIB::POWI_F128, // RTLIB::__powikf2
  RTLIB::POWI_F32, // RTLIB::__powisf2
  RTLIB::POWI_F128, // RTLIB::__powitf2_f128
  RTLIB::POWI_PPCF128, // RTLIB::__powitf2_ppc128
  RTLIB::POWI_F80, // RTLIB::__powixf2
  RTLIB::POW_FINITE_F128, // RTLIB::__powl_finite_f128
  RTLIB::POW_FINITE_F80, // RTLIB::__powl_finite_f80
  RTLIB::POW_FINITE_PPCF128, // RTLIB::__powl_finite_ppcf128
  RTLIB::RISCV_FLUSH_ICACHE, // RTLIB::__riscv_flush_icache
  RTLIB::SDIVREM_I32, // RTLIB::__rt_sdiv
  RTLIB::SDIVREM_I64, // RTLIB::__rt_sdiv64
  RTLIB::UDIVREM_I32, // RTLIB::__rt_udiv
  RTLIB::UDIVREM_I64, // RTLIB::__rt_udiv64
  RTLIB::SAFESTACK_POINTER_ADDRESS, // RTLIB::__safestack_pointer_address
  RTLIB::SINCOS_STRET_F64, // RTLIB::__sincos_stret
  RTLIB::SINCOS_STRET_F32, // RTLIB::__sincosf_stret
  RTLIB::STACKPROTECTOR_CHECK_FAIL, // RTLIB::__stack_chk_fail
  RTLIB::STACK_SMASH_HANDLER, // RTLIB::__stack_smash_handler
  RTLIB::FPTOSINT_F32_I64, // RTLIB::__stoi64
  RTLIB::FPTOUINT_F32_I64, // RTLIB::__stou64
  RTLIB::SUB_F64, // RTLIB::__subdf3
  RTLIB::SUB_F64, // RTLIB::__subdf3vfp
  RTLIB::SUB_F128, // RTLIB::__subkf3
  RTLIB::SUB_F32, // RTLIB::__subsf3
  RTLIB::SUB_F32, // RTLIB::__subsf3vfp
  RTLIB::SUB_F128, // RTLIB::__subtf3
  RTLIB::SUB_F80, // RTLIB::__subxf3
  RTLIB::SYNC_FETCH_AND_ADD_1, // RTLIB::__sync_fetch_and_add_1
  RTLIB::SYNC_FETCH_AND_ADD_16, // RTLIB::__sync_fetch_and_add_16
  RTLIB::SYNC_FETCH_AND_ADD_2, // RTLIB::__sync_fetch_and_add_2
  RTLIB::SYNC_FETCH_AND_ADD_4, // RTLIB::__sync_fetch_and_add_4
  RTLIB::SYNC_FETCH_AND_ADD_8, // RTLIB::__sync_fetch_and_add_8
  RTLIB::SYNC_FETCH_AND_AND_1, // RTLIB::__sync_fetch_and_and_1
  RTLIB::SYNC_FETCH_AND_AND_16, // RTLIB::__sync_fetch_and_and_16
  RTLIB::SYNC_FETCH_AND_AND_2, // RTLIB::__sync_fetch_and_and_2
  RTLIB::SYNC_FETCH_AND_AND_4, // RTLIB::__sync_fetch_and_and_4
  RTLIB::SYNC_FETCH_AND_AND_8, // RTLIB::__sync_fetch_and_and_8
  RTLIB::SYNC_FETCH_AND_MAX_1, // RTLIB::__sync_fetch_and_max_1
  RTLIB::SYNC_FETCH_AND_MAX_16, // RTLIB::__sync_fetch_and_max_16
  RTLIB::SYNC_FETCH_AND_MAX_2, // RTLIB::__sync_fetch_and_max_2
  RTLIB::SYNC_FETCH_AND_MAX_4, // RTLIB::__sync_fetch_and_max_4
  RTLIB::SYNC_FETCH_AND_MAX_8, // RTLIB::__sync_fetch_and_max_8
  RTLIB::SYNC_FETCH_AND_MIN_1, // RTLIB::__sync_fetch_and_min_1
  RTLIB::SYNC_FETCH_AND_MIN_16, // RTLIB::__sync_fetch_and_min_16
  RTLIB::SYNC_FETCH_AND_MIN_2, // RTLIB::__sync_fetch_and_min_2
  RTLIB::SYNC_FETCH_AND_MIN_4, // RTLIB::__sync_fetch_and_min_4
  RTLIB::SYNC_FETCH_AND_MIN_8, // RTLIB::__sync_fetch_and_min_8
  RTLIB::SYNC_FETCH_AND_NAND_1, // RTLIB::__sync_fetch_and_nand_1
  RTLIB::SYNC_FETCH_AND_NAND_16, // RTLIB::__sync_fetch_and_nand_16
  RTLIB::SYNC_FETCH_AND_NAND_2, // RTLIB::__sync_fetch_and_nand_2
  RTLIB::SYNC_FETCH_AND_NAND_4, // RTLIB::__sync_fetch_and_nand_4
  RTLIB::SYNC_FETCH_AND_NAND_8, // RTLIB::__sync_fetch_and_nand_8
  RTLIB::SYNC_FETCH_AND_OR_1, // RTLIB::__sync_fetch_and_or_1
  RTLIB::SYNC_FETCH_AND_OR_16, // RTLIB::__sync_fetch_and_or_16
  RTLIB::SYNC_FETCH_AND_OR_2, // RTLIB::__sync_fetch_and_or_2
  RTLIB::SYNC_FETCH_AND_OR_4, // RTLIB::__sync_fetch_and_or_4
  RTLIB::SYNC_FETCH_AND_OR_8, // RTLIB::__sync_fetch_and_or_8
  RTLIB::SYNC_FETCH_AND_SUB_1, // RTLIB::__sync_fetch_and_sub_1
  RTLIB::SYNC_FETCH_AND_SUB_16, // RTLIB::__sync_fetch_and_sub_16
  RTLIB::SYNC_FETCH_AND_SUB_2, // RTLIB::__sync_fetch_and_sub_2
  RTLIB::SYNC_FETCH_AND_SUB_4, // RTLIB::__sync_fetch_and_sub_4
  RTLIB::SYNC_FETCH_AND_SUB_8, // RTLIB::__sync_fetch_and_sub_8
  RTLIB::SYNC_FETCH_AND_UMAX_1, // RTLIB::__sync_fetch_and_umax_1
  RTLIB::SYNC_FETCH_AND_UMAX_16, // RTLIB::__sync_fetch_and_umax_16
  RTLIB::SYNC_FETCH_AND_UMAX_2, // RTLIB::__sync_fetch_and_umax_2
  RTLIB::SYNC_FETCH_AND_UMAX_4, // RTLIB::__sync_fetch_and_umax_4
  RTLIB::SYNC_FETCH_AND_UMAX_8, // RTLIB::__sync_fetch_and_umax_8
  RTLIB::SYNC_FETCH_AND_UMIN_1, // RTLIB::__sync_fetch_and_umin_1
  RTLIB::SYNC_FETCH_AND_UMIN_16, // RTLIB::__sync_fetch_and_umin_16
  RTLIB::SYNC_FETCH_AND_UMIN_2, // RTLIB::__sync_fetch_and_umin_2
  RTLIB::SYNC_FETCH_AND_UMIN_4, // RTLIB::__sync_fetch_and_umin_4
  RTLIB::SYNC_FETCH_AND_UMIN_8, // RTLIB::__sync_fetch_and_umin_8
  RTLIB::SYNC_FETCH_AND_XOR_1, // RTLIB::__sync_fetch_and_xor_1
  RTLIB::SYNC_FETCH_AND_XOR_16, // RTLIB::__sync_fetch_and_xor_16
  RTLIB::SYNC_FETCH_AND_XOR_2, // RTLIB::__sync_fetch_and_xor_2
  RTLIB::SYNC_FETCH_AND_XOR_4, // RTLIB::__sync_fetch_and_xor_4
  RTLIB::SYNC_FETCH_AND_XOR_8, // RTLIB::__sync_fetch_and_xor_8
  RTLIB::SYNC_LOCK_TEST_AND_SET_1, // RTLIB::__sync_lock_test_and_set_1
  RTLIB::SYNC_LOCK_TEST_AND_SET_16, // RTLIB::__sync_lock_test_and_set_16
  RTLIB::SYNC_LOCK_TEST_AND_SET_2, // RTLIB::__sync_lock_test_and_set_2
  RTLIB::SYNC_LOCK_TEST_AND_SET_4, // RTLIB::__sync_lock_test_and_set_4
  RTLIB::SYNC_LOCK_TEST_AND_SET_8, // RTLIB::__sync_lock_test_and_set_8
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, // RTLIB::__sync_val_compare_and_swap_1
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, // RTLIB::__sync_val_compare_and_swap_16
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, // RTLIB::__sync_val_compare_and_swap_2
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, // RTLIB::__sync_val_compare_and_swap_4
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, // RTLIB::__sync_val_compare_and_swap_8
  RTLIB::FPROUND_F64_BF16, // RTLIB::__truncdfbf2
  RTLIB::FPROUND_F64_F16, // RTLIB::__truncdfhf2
  RTLIB::FPROUND_F64_F32, // RTLIB::__truncdfsf2
  RTLIB::FPROUND_F64_F32, // RTLIB::__truncdfsf2vfp
  RTLIB::FPROUND_F128_F64, // RTLIB::__trunckfdf2
  RTLIB::FPROUND_F128_F16, // RTLIB::__trunckfhf2
  RTLIB::FPROUND_F128_F32, // RTLIB::__trunckfsf2
  RTLIB::FPROUND_F32_BF16, // RTLIB::__truncsfbf2
  RTLIB::FPROUND_F32_F16, // RTLIB::__truncsfhf2
  RTLIB::FPROUND_F128_BF16, // RTLIB::__trunctfbf2
  RTLIB::FPROUND_F128_F64, // RTLIB::__trunctfdf2
  RTLIB::FPROUND_F128_F16, // RTLIB::__trunctfhf2_f128
  RTLIB::FPROUND_PPCF128_F16, // RTLIB::__trunctfhf2_ppcf128
  RTLIB::CONVERT_PPCF128_F128, // RTLIB::__trunctfkf2
  RTLIB::FPROUND_F128_F32, // RTLIB::__trunctfsf2
  RTLIB::FPROUND_F128_F80, // RTLIB::__trunctfxf2
  RTLIB::FPROUND_F80_BF16, // RTLIB::__truncxfbf2
  RTLIB::FPROUND_F80_F64, // RTLIB::__truncxfdf2
  RTLIB::FPROUND_F80_F16, // RTLIB::__truncxfhf2
  RTLIB::FPROUND_F80_F32, // RTLIB::__truncxfsf2
  RTLIB::UINTTOFP_I64_F64, // RTLIB::__u64tod
  RTLIB::UINTTOFP_I64_F32, // RTLIB::__u64tos
  RTLIB::UDIV_I64, // RTLIB::__udivdi3
  RTLIB::UDIV_I16, // RTLIB::__udivhi3
  RTLIB::UDIVREM_I16, // RTLIB::__udivmodhi4
  RTLIB::UDIVREM_I8, // RTLIB::__udivmodqi4
  RTLIB::UDIVREM_I32, // RTLIB::__udivmodsi4
  RTLIB::UDIV_I8, // RTLIB::__udivqi3
  RTLIB::UDIV_I32, // RTLIB::__udivsi3
  RTLIB::UDIV_I128, // RTLIB::__udivti3
  RTLIB::UREM_I64, // RTLIB::__umoddi3
  RTLIB::UREM_I16, // RTLIB::__umodhi3
  RTLIB::UREM_I8, // RTLIB::__umodqi3
  RTLIB::UREM_I32, // RTLIB::__umodsi3
  RTLIB::UREM_I128, // RTLIB::__umodti3
  RTLIB::UO_F64, // RTLIB::__unorddf2
  RTLIB::UO_F64, // RTLIB::__unorddf2vfp
  RTLIB::UO_F128, // RTLIB::__unordkf2
  RTLIB::UO_F32, // RTLIB::__unordsf2
  RTLIB::UO_F32, // RTLIB::__unordsf2vfp
  RTLIB::UO_F128, // RTLIB::__unordtf2
  RTLIB::SDIV_I64, // RTLIB::_alldiv
  RTLIB::MUL_I64, // RTLIB::_allmul
  RTLIB::SREM_I64, // RTLIB::_allrem
  RTLIB::UDIV_I64, // RTLIB::_aulldiv
  RTLIB::UREM_I64, // RTLIB::_aullrem
  RTLIB::ACOS_F64, // RTLIB::acos
  RTLIB::ACOS_F32, // RTLIB::acosf
  RTLIB::ACOS_F128, // RTLIB::acosf128
  RTLIB::ACOS_F128, // RTLIB::acos_f128
  RTLIB::ACOS_F80, // RTLIB::acos_f80
  RTLIB::ACOS_PPCF128, // RTLIB::acos_ppcf128
  RTLIB::ASIN_F64, // RTLIB::asin
  RTLIB::ASIN_F32, // RTLIB::asinf
  RTLIB::ASIN_F128, // RTLIB::asinf128
  RTLIB::ASIN_F128, // RTLIB::asin_f128
  RTLIB::ASIN_F80, // RTLIB::asin_f80
  RTLIB::ASIN_PPCF128, // RTLIB::asin_ppcf128
  RTLIB::ATAN_F64, // RTLIB::atan
  RTLIB::ATAN2_F64, // RTLIB::atan2
  RTLIB::ATAN2_F32, // RTLIB::atan2f
  RTLIB::ATAN2_F128, // RTLIB::atan2f128
  RTLIB::ATAN2_F128, // RTLIB::atan2_f128
  RTLIB::ATAN2_F80, // RTLIB::atan2_f80
  RTLIB::ATAN2_PPCF128, // RTLIB::atan2_ppcf128
  RTLIB::ATAN_F32, // RTLIB::atanf
  RTLIB::ATAN_F128, // RTLIB::atanf128
  RTLIB::ATAN_F128, // RTLIB::atan_f128
  RTLIB::ATAN_F80, // RTLIB::atan_f80
  RTLIB::ATAN_PPCF128, // RTLIB::atan_ppcf128
  RTLIB::BZERO, // RTLIB::bzero
  RTLIB::CALLOC, // RTLIB::calloc
  RTLIB::CBRT_F64, // RTLIB::cbrt
  RTLIB::CBRT_F32, // RTLIB::cbrtf
  RTLIB::CBRT_F128, // RTLIB::cbrtf128
  RTLIB::CBRT_F128, // RTLIB::cbrt_f128
  RTLIB::CBRT_F80, // RTLIB::cbrt_f80
  RTLIB::CBRT_PPCF128, // RTLIB::cbrt_ppcf128
  RTLIB::CEIL_F64, // RTLIB::ceil
  RTLIB::CEIL_F32, // RTLIB::ceilf
  RTLIB::CEIL_F128, // RTLIB::ceilf128
  RTLIB::CEIL_F128, // RTLIB::ceil_f128
  RTLIB::CEIL_F80, // RTLIB::ceil_f80
  RTLIB::CEIL_PPCF128, // RTLIB::ceil_ppcf128
  RTLIB::COPYSIGN_F64, // RTLIB::copysign
  RTLIB::COPYSIGN_F32, // RTLIB::copysignf
  RTLIB::COPYSIGN_F128, // RTLIB::copysignf128
  RTLIB::COPYSIGN_F128, // RTLIB::copysign_f128
  RTLIB::COPYSIGN_F80, // RTLIB::copysign_f80
  RTLIB::COPYSIGN_PPCF128, // RTLIB::copysign_ppcf128
  RTLIB::COS_F32, // RTLIB::avr_cos
  RTLIB::COS_F64, // RTLIB::cos
  RTLIB::COS_F32, // RTLIB::cosf
  RTLIB::COS_F128, // RTLIB::cosf128
  RTLIB::COSH_F64, // RTLIB::cosh
  RTLIB::COSH_F32, // RTLIB::coshf
  RTLIB::COSH_F128, // RTLIB::coshf128
  RTLIB::COSH_F128, // RTLIB::cosh_f128
  RTLIB::COSH_F80, // RTLIB::cosh_f80
  RTLIB::COSH_PPCF128, // RTLIB::cosh_ppcf128
  RTLIB::COS_F128, // RTLIB::cos_f128
  RTLIB::COS_F80, // RTLIB::cos_f80
  RTLIB::COS_PPCF128, // RTLIB::cos_ppcf128
  RTLIB::RETURN_ADDRESS, // RTLIB::emscripten_return_address
  RTLIB::EXP_F64, // RTLIB::exp
  RTLIB::EXP10_F64, // RTLIB::exp10
  RTLIB::EXP10_F32, // RTLIB::exp10f
  RTLIB::EXP10_F128, // RTLIB::exp10f128
  RTLIB::EXP10_F128, // RTLIB::exp10l_f128
  RTLIB::EXP10_F80, // RTLIB::exp10l_f80
  RTLIB::EXP10_PPCF128, // RTLIB::exp10l_ppcf128
  RTLIB::EXP2_F64, // RTLIB::exp2
  RTLIB::EXP2_F32, // RTLIB::exp2f
  RTLIB::EXP2_F128, // RTLIB::exp2f128
  RTLIB::EXP2_F128, // RTLIB::exp2_f128
  RTLIB::EXP2_F80, // RTLIB::exp2_f80
  RTLIB::EXP2_PPCF128, // RTLIB::exp2_ppcf128
  RTLIB::EXP_F32, // RTLIB::expf
  RTLIB::EXP_F128, // RTLIB::expf128
  RTLIB::EXP_F128, // RTLIB::exp_f128
  RTLIB::EXP_F80, // RTLIB::exp_f80
  RTLIB::EXP_PPCF128, // RTLIB::exp_ppcf128
  RTLIB::FEGETENV, // RTLIB::fegetenv
  RTLIB::FEGETMODE, // RTLIB::fegetmode
  RTLIB::FESETENV, // RTLIB::fesetenv
  RTLIB::FESETMODE, // RTLIB::fesetmode
  RTLIB::FLOOR_F64, // RTLIB::floor
  RTLIB::FLOOR_F32, // RTLIB::floorf
  RTLIB::FLOOR_F128, // RTLIB::floorf128
  RTLIB::FLOOR_F128, // RTLIB::floor_f128
  RTLIB::FLOOR_F80, // RTLIB::floor_f80
  RTLIB::FLOOR_PPCF128, // RTLIB::floor_ppcf128
  RTLIB::FMA_F64, // RTLIB::fma
  RTLIB::FMA_F32, // RTLIB::fmaf
  RTLIB::FMA_F128, // RTLIB::fmaf128
  RTLIB::FMA_F128, // RTLIB::fma_f128
  RTLIB::FMA_F80, // RTLIB::fma_f80
  RTLIB::FMA_PPCF128, // RTLIB::fma_ppcf128
  RTLIB::FMAX_F64, // RTLIB::fmax
  RTLIB::FMAX_F32, // RTLIB::fmaxf
  RTLIB::FMAX_F128, // RTLIB::fmaxf128
  RTLIB::FMAXIMUM_F64, // RTLIB::fmaximum
  RTLIB::FMAXIMUM_NUM_F64, // RTLIB::fmaximum_num
  RTLIB::FMAXIMUM_NUM_F32, // RTLIB::fmaximum_numf
  RTLIB::FMAXIMUM_NUM_F128, // RTLIB::fmaximum_numf128
  RTLIB::FMAXIMUM_NUM_F128, // RTLIB::fmaximum_num_f128
  RTLIB::FMAXIMUM_NUM_F80, // RTLIB::fmaximum_num_f80
  RTLIB::FMAXIMUM_NUM_PPCF128, // RTLIB::fmaximum_num_ppcf128
  RTLIB::FMAXIMUM_F32, // RTLIB::fmaximumf
  RTLIB::FMAXIMUM_F128, // RTLIB::fmaximumf128
  RTLIB::FMAXIMUM_F128, // RTLIB::fmaximum_f128
  RTLIB::FMAXIMUM_F80, // RTLIB::fmaximum_f80
  RTLIB::FMAXIMUM_PPCF128, // RTLIB::fmaximum_ppcf128
  RTLIB::FMAX_F128, // RTLIB::fmax_f128
  RTLIB::FMAX_F80, // RTLIB::fmax_f80
  RTLIB::FMAX_PPCF128, // RTLIB::fmax_ppcf128
  RTLIB::FMIN_F64, // RTLIB::fmin
  RTLIB::FMIN_F32, // RTLIB::fminf
  RTLIB::FMIN_F128, // RTLIB::fminf128
  RTLIB::FMINIMUM_F64, // RTLIB::fminimum
  RTLIB::FMINIMUM_NUM_F64, // RTLIB::fminimum_num
  RTLIB::FMINIMUM_NUM_F32, // RTLIB::fminimum_numf
  RTLIB::FMINIMUM_NUM_F128, // RTLIB::fminimum_numf128
  RTLIB::FMINIMUM_NUM_F128, // RTLIB::fminimum_num_f128
  RTLIB::FMINIMUM_NUM_F80, // RTLIB::fminimum_num_f80
  RTLIB::FMINIMUM_NUM_PPCF128, // RTLIB::fminimum_num_ppcf128
  RTLIB::FMINIMUM_F32, // RTLIB::fminimumf
  RTLIB::FMINIMUM_F128, // RTLIB::fminimumf128
  RTLIB::FMINIMUM_F128, // RTLIB::fminimum_f128
  RTLIB::FMINIMUM_F80, // RTLIB::fminimum_f80
  RTLIB::FMINIMUM_PPCF128, // RTLIB::fminimum_ppcf128
  RTLIB::FMIN_F128, // RTLIB::fmin_f128
  RTLIB::FMIN_F80, // RTLIB::fmin_f80
  RTLIB::FMIN_PPCF128, // RTLIB::fmin_ppcf128
  RTLIB::REM_F64, // RTLIB::fmod
  RTLIB::REM_F32, // RTLIB::fmodf
  RTLIB::REM_F128, // RTLIB::fmodf128
  RTLIB::REM_F128, // RTLIB::fmodl_f128
  RTLIB::REM_F80, // RTLIB::fmodl_f80
  RTLIB::REM_PPCF128, // RTLIB::fmodl_ppc128
  RTLIB::FREXP_F64, // RTLIB::frexp
  RTLIB::FREXP_F32, // RTLIB::frexpf
  RTLIB::FREXP_F128, // RTLIB::frexpf128
  RTLIB::FREXP_F128, // RTLIB::frexp_f128
  RTLIB::FREXP_F80, // RTLIB::frexp_f80
  RTLIB::FREXP_PPCF128, // RTLIB::frexp_ppcf128
  RTLIB::LDEXP_F64, // RTLIB::ldexp
  RTLIB::LDEXP_F32, // RTLIB::ldexpf
  RTLIB::LDEXP_F128, // RTLIB::ldexpf128
  RTLIB::LDEXP_F128, // RTLIB::ldexp_f128
  RTLIB::LDEXP_F80, // RTLIB::ldexp_f80
  RTLIB::LDEXP_PPCF128, // RTLIB::ldexp_ppcf128
  RTLIB::LLRINT_F64, // RTLIB::llrint
  RTLIB::LLRINT_F32, // RTLIB::llrintf
  RTLIB::LLRINT_F128, // RTLIB::llrintf128
  RTLIB::LLRINT_F128, // RTLIB::llrint_f128
  RTLIB::LLRINT_F80, // RTLIB::llrint_f80
  RTLIB::LLRINT_PPCF128, // RTLIB::llrint_ppcf128
  RTLIB::LLROUND_F64, // RTLIB::llround
  RTLIB::LLROUND_F32, // RTLIB::llroundf
  RTLIB::LLROUND_F128, // RTLIB::llroundf128
  RTLIB::LLROUND_F128, // RTLIB::llround_f128
  RTLIB::LLROUND_F80, // RTLIB::llround_f80
  RTLIB::LLROUND_PPCF128, // RTLIB::llround_ppcf128
  RTLIB::LOG_F64, // RTLIB::log
  RTLIB::LOG10_F64, // RTLIB::log10
  RTLIB::LOG10_F32, // RTLIB::log10f
  RTLIB::LOG10_F128, // RTLIB::log10f128
  RTLIB::LOG10_F128, // RTLIB::log10_f128
  RTLIB::LOG10_F80, // RTLIB::log10_f80
  RTLIB::LOG10_PPCF128, // RTLIB::log10_ppcf128
  RTLIB::LOG2_F64, // RTLIB::log2
  RTLIB::LOG2_F32, // RTLIB::log2f
  RTLIB::LOG2_F128, // RTLIB::log2f128
  RTLIB::LOG2_F128, // RTLIB::log2_f128
  RTLIB::LOG2_F80, // RTLIB::log2_f80
  RTLIB::LOG2_PPCF128, // RTLIB::log2_ppcf128
  RTLIB::LOG_F32, // RTLIB::logf
  RTLIB::LOG_F128, // RTLIB::logf128
  RTLIB::LOG_F128, // RTLIB::log_f128
  RTLIB::LOG_F80, // RTLIB::log_f80
  RTLIB::LOG_PPCF128, // RTLIB::log_ppcf128
  RTLIB::LRINT_F64, // RTLIB::lrint
  RTLIB::LRINT_F32, // RTLIB::lrintf
  RTLIB::LRINT_F128, // RTLIB::lrintf128
  RTLIB::LRINT_F128, // RTLIB::lrint_f128
  RTLIB::LRINT_F80, // RTLIB::lrint_f80
  RTLIB::LRINT_PPCF128, // RTLIB::lrint_ppcf128
  RTLIB::LROUND_F64, // RTLIB::lround
  RTLIB::LROUND_F32, // RTLIB::lroundf
  RTLIB::LROUND_F128, // RTLIB::lroundf128
  RTLIB::LROUND_F128, // RTLIB::lround_f128
  RTLIB::LROUND_F80, // RTLIB::lround_f80
  RTLIB::LROUND_PPCF128, // RTLIB::lround_ppcf128
  RTLIB::MEMCPY, // RTLIB::memcpy
  RTLIB::MEMMOVE, // RTLIB::memmove
  RTLIB::MEMSET, // RTLIB::memset
  RTLIB::MODF_F64, // RTLIB::modf
  RTLIB::MODF_F32, // RTLIB::modff
  RTLIB::MODF_F128, // RTLIB::modff128
  RTLIB::MODF_F128, // RTLIB::modf_f128
  RTLIB::MODF_F80, // RTLIB::modf_f80
  RTLIB::MODF_PPCF128, // RTLIB::modf_ppcf128
  RTLIB::NEARBYINT_F64, // RTLIB::nearbyint
  RTLIB::NEARBYINT_F32, // RTLIB::nearbyintf
  RTLIB::NEARBYINT_F128, // RTLIB::nearbyintf128
  RTLIB::NEARBYINT_F128, // RTLIB::nearbyint_f128
  RTLIB::NEARBYINT_F80, // RTLIB::nearbyint_f80
  RTLIB::NEARBYINT_PPCF128, // RTLIB::nearbyint_ppcf128
  RTLIB::OBJC_AUTORELEASE, // RTLIB::objc_autorelease
  RTLIB::OBJC_AUTORELEASEPOOLPOP, // RTLIB::objc_autoreleasePoolPop
  RTLIB::OBJC_AUTORELEASEPOOLPUSH, // RTLIB::objc_autoreleasePoolPush
  RTLIB::OBJC_AUTORELEASERETURNVALUE, // RTLIB::objc_autoreleaseReturnValue
  RTLIB::OBJC_CLAIMAUTORELEASEDRETURNVALUE, // RTLIB::objc_claimAutoreleasedReturnValue
  RTLIB::OBJC_COPYWEAK, // RTLIB::objc_copyWeak
  RTLIB::OBJC_DESTROYWEAK, // RTLIB::objc_destroyWeak
  RTLIB::OBJC_INITWEAK, // RTLIB::objc_initWeak
  RTLIB::OBJC_LOADWEAK, // RTLIB::objc_loadWeak
  RTLIB::OBJC_LOADWEAKRETAINED, // RTLIB::objc_loadWeakRetained
  RTLIB::OBJC_MOVEWEAK, // RTLIB::objc_moveWeak
  RTLIB::OBJC_RELEASE, // RTLIB::objc_release
  RTLIB::OBJC_RETAIN, // RTLIB::objc_retain
  RTLIB::OBJC_RETAINAUTORELEASE, // RTLIB::objc_retainAutorelease
  RTLIB::OBJC_RETAINAUTORELEASERETURNVALUE, // RTLIB::objc_retainAutoreleaseReturnValue
  RTLIB::OBJC_RETAINAUTORELEASEDRETURNVALUE, // RTLIB::objc_retainAutoreleasedReturnValue
  RTLIB::OBJC_RETAINBLOCK, // RTLIB::objc_retainBlock
  RTLIB::OBJC_RETAIN_AUTORELEASE, // RTLIB::objc_retain_autorelease
  RTLIB::OBJC_RETAINEDOBJECT, // RTLIB::objc_retainedObject
  RTLIB::OBJC_STORESTRONG, // RTLIB::objc_storeStrong
  RTLIB::OBJC_STOREWEAK, // RTLIB::objc_storeWeak
  RTLIB::OBJC_SYNC_ENTER, // RTLIB::objc_sync_enter
  RTLIB::OBJC_SYNC_EXIT, // RTLIB::objc_sync_exit
  RTLIB::OBJC_UNRETAINEDOBJECT, // RTLIB::objc_unretainedObject
  RTLIB::OBJC_UNRETAINEDPOINTER, // RTLIB::objc_unretainedPointer
  RTLIB::OBJC_UNSAFECLAIMAUTORELEASEDRETURNVALUE, // RTLIB::objc_unsafeClaimAutoreleasedReturnValue
  RTLIB::POW_F64, // RTLIB::pow
  RTLIB::POW_F32, // RTLIB::powf
  RTLIB::POW_F128, // RTLIB::powf128
  RTLIB::POW_F128, // RTLIB::pow_f128
  RTLIB::POW_F80, // RTLIB::pow_f80
  RTLIB::POW_PPCF128, // RTLIB::pow_ppcf128
  RTLIB::RINT_F64, // RTLIB::rint
  RTLIB::RINT_F32, // RTLIB::rintf
  RTLIB::RINT_F128, // RTLIB::rintf128
  RTLIB::RINT_F128, // RTLIB::rint_f128
  RTLIB::RINT_F80, // RTLIB::rint_f80
  RTLIB::RINT_PPCF128, // RTLIB::rint_ppcf128
  RTLIB::ROUND_F64, // RTLIB::round
  RTLIB::ROUNDEVEN_F64, // RTLIB::roundeven
  RTLIB::ROUNDEVEN_F32, // RTLIB::roundevenf
  RTLIB::ROUNDEVEN_F128, // RTLIB::roundevenf128
  RTLIB::ROUNDEVEN_F128, // RTLIB::roundeven_f128
  RTLIB::ROUNDEVEN_F80, // RTLIB::roundeven_f80
  RTLIB::ROUNDEVEN_PPCF128, // RTLIB::roundeven_ppcf128
  RTLIB::ROUND_F32, // RTLIB::roundf
  RTLIB::ROUND_F128, // RTLIB::roundf128
  RTLIB::ROUND_F128, // RTLIB::round_f128
  RTLIB::ROUND_F80, // RTLIB::round_f80
  RTLIB::ROUND_PPCF128, // RTLIB::round_ppcf128
  RTLIB::SIN_F32, // RTLIB::avr_sin
  RTLIB::SIN_F64, // RTLIB::sin
  RTLIB::SINCOS_F64, // RTLIB::sincos
  RTLIB::SINCOS_F32, // RTLIB::sincosf
  RTLIB::SINCOS_F128, // RTLIB::sincosf128
  RTLIB::SINCOS_F128, // RTLIB::sincos_f128
  RTLIB::SINCOS_F80, // RTLIB::sincos_f80
  RTLIB::SINCOS_PPCF128, // RTLIB::sincos_ppcf128
  RTLIB::SINCOSPI_F64, // RTLIB::sincospi
  RTLIB::SINCOSPI_F32, // RTLIB::sincospif
  RTLIB::SINCOSPI_F128, // RTLIB::sincospi_f128
  RTLIB::SINCOSPI_F80, // RTLIB::sincospi_f80
  RTLIB::SINCOSPI_PPCF128, // RTLIB::sincospi_ppcf128
  RTLIB::SIN_F32, // RTLIB::sinf
  RTLIB::SIN_F128, // RTLIB::sinf128
  RTLIB::SINH_F64, // RTLIB::sinh
  RTLIB::SINH_F32, // RTLIB::sinhf
  RTLIB::SINH_F128, // RTLIB::sinhf128
  RTLIB::SINH_F128, // RTLIB::sinh_f128
  RTLIB::SINH_F80, // RTLIB::sinh_f80
  RTLIB::SINH_PPCF128, // RTLIB::sinh_ppcf128
  RTLIB::SIN_F128, // RTLIB::sin_f128
  RTLIB::SIN_F80, // RTLIB::sin_f80
  RTLIB::SIN_PPCF128, // RTLIB::sin_ppcf128
  RTLIB::SQRT_F64, // RTLIB::sqrt
  RTLIB::SQRT_F32, // RTLIB::sqrtf
  RTLIB::SQRT_F128, // RTLIB::sqrtf128
  RTLIB::SQRT_F128, // RTLIB::sqrt_f128
  RTLIB::SQRT_F80, // RTLIB::sqrt_f80
  RTLIB::SQRT_PPCF128, // RTLIB::sqrt_ppcf128
  RTLIB::TAN_F64, // RTLIB::tan
  RTLIB::TAN_F32, // RTLIB::tanf
  RTLIB::TAN_F128, // RTLIB::tanf128
  RTLIB::TANH_F64, // RTLIB::tanh
  RTLIB::TANH_F32, // RTLIB::tanhf
  RTLIB::TANH_F128, // RTLIB::tanhf128
  RTLIB::TANH_F128, // RTLIB::tanh_f128
  RTLIB::TANH_F80, // RTLIB::tanh_f80
  RTLIB::TANH_PPCF128, // RTLIB::tanh_ppcf128
  RTLIB::TAN_F128, // RTLIB::tan_f128
  RTLIB::TAN_F80, // RTLIB::tan_f80
  RTLIB::TAN_PPCF128, // RTLIB::tan_ppcf128
  RTLIB::TRUNC_F64, // RTLIB::trunc
  RTLIB::TRUNC_F32, // RTLIB::truncf
  RTLIB::TRUNC_F128, // RTLIB::truncf128
  RTLIB::TRUNC_F128, // RTLIB::trunc_f128
  RTLIB::TRUNC_F80, // RTLIB::trunc_f80
  RTLIB::TRUNC_PPCF128, // RTLIB::trunc_ppcf128
};

#endif

#ifdef GET_SET_TARGET_RUNTIME_LIBCALL_SETS
void llvm::RTLIB::RuntimeLibcallsInfo::setTargetRuntimeLibcallSets(const llvm::Triple &TT, FloatABI::ABIType FloatABI) {
  struct LibcallImplPair {
    RTLIB::Libcall Func;
    RTLIB::LibcallImpl Impl;
  };

  if ((TT.isAArch64() && !TT.isWindowsArm64EC())) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::OUTLINE_ATOMIC_CAS1_ACQ, RTLIB::__aarch64_cas1_acq}, // __aarch64_cas1_acq
        {RTLIB::OUTLINE_ATOMIC_CAS1_ACQ_REL, RTLIB::__aarch64_cas1_acq_rel}, // __aarch64_cas1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS1_REL, RTLIB::__aarch64_cas1_rel}, // __aarch64_cas1_rel
        {RTLIB::OUTLINE_ATOMIC_CAS1_RELAX, RTLIB::__aarch64_cas1_relax}, // __aarch64_cas1_relax
        {RTLIB::OUTLINE_ATOMIC_CAS2_ACQ, RTLIB::__aarch64_cas2_acq}, // __aarch64_cas2_acq
        {RTLIB::OUTLINE_ATOMIC_CAS2_ACQ_REL, RTLIB::__aarch64_cas2_acq_rel}, // __aarch64_cas2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS2_REL, RTLIB::__aarch64_cas2_rel}, // __aarch64_cas2_rel
        {RTLIB::OUTLINE_ATOMIC_CAS2_RELAX, RTLIB::__aarch64_cas2_relax}, // __aarch64_cas2_relax
        {RTLIB::OUTLINE_ATOMIC_CAS4_ACQ, RTLIB::__aarch64_cas4_acq}, // __aarch64_cas4_acq
        {RTLIB::OUTLINE_ATOMIC_CAS4_ACQ_REL, RTLIB::__aarch64_cas4_acq_rel}, // __aarch64_cas4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS4_REL, RTLIB::__aarch64_cas4_rel}, // __aarch64_cas4_rel
        {RTLIB::OUTLINE_ATOMIC_CAS4_RELAX, RTLIB::__aarch64_cas4_relax}, // __aarch64_cas4_relax
        {RTLIB::OUTLINE_ATOMIC_CAS8_ACQ, RTLIB::__aarch64_cas8_acq}, // __aarch64_cas8_acq
        {RTLIB::OUTLINE_ATOMIC_CAS8_ACQ_REL, RTLIB::__aarch64_cas8_acq_rel}, // __aarch64_cas8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS8_REL, RTLIB::__aarch64_cas8_rel}, // __aarch64_cas8_rel
        {RTLIB::OUTLINE_ATOMIC_CAS8_RELAX, RTLIB::__aarch64_cas8_relax}, // __aarch64_cas8_relax
        {RTLIB::OUTLINE_ATOMIC_CAS16_ACQ, RTLIB::__aarch64_cas16_acq}, // __aarch64_cas16_acq
        {RTLIB::OUTLINE_ATOMIC_CAS16_ACQ_REL, RTLIB::__aarch64_cas16_acq_rel}, // __aarch64_cas16_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS16_REL, RTLIB::__aarch64_cas16_rel}, // __aarch64_cas16_rel
        {RTLIB::OUTLINE_ATOMIC_CAS16_RELAX, RTLIB::__aarch64_cas16_relax}, // __aarch64_cas16_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ, RTLIB::__aarch64_ldadd1_acq}, // __aarch64_ldadd1_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ_REL, RTLIB::__aarch64_ldadd1_acq_rel}, // __aarch64_ldadd1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD1_REL, RTLIB::__aarch64_ldadd1_rel}, // __aarch64_ldadd1_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD1_RELAX, RTLIB::__aarch64_ldadd1_relax}, // __aarch64_ldadd1_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ, RTLIB::__aarch64_ldadd2_acq}, // __aarch64_ldadd2_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ_REL, RTLIB::__aarch64_ldadd2_acq_rel}, // __aarch64_ldadd2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD2_REL, RTLIB::__aarch64_ldadd2_rel}, // __aarch64_ldadd2_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD2_RELAX, RTLIB::__aarch64_ldadd2_relax}, // __aarch64_ldadd2_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ, RTLIB::__aarch64_ldadd4_acq}, // __aarch64_ldadd4_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ_REL, RTLIB::__aarch64_ldadd4_acq_rel}, // __aarch64_ldadd4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD4_REL, RTLIB::__aarch64_ldadd4_rel}, // __aarch64_ldadd4_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD4_RELAX, RTLIB::__aarch64_ldadd4_relax}, // __aarch64_ldadd4_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ, RTLIB::__aarch64_ldadd8_acq}, // __aarch64_ldadd8_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ_REL, RTLIB::__aarch64_ldadd8_acq_rel}, // __aarch64_ldadd8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD8_REL, RTLIB::__aarch64_ldadd8_rel}, // __aarch64_ldadd8_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD8_RELAX, RTLIB::__aarch64_ldadd8_relax}, // __aarch64_ldadd8_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ, RTLIB::__aarch64_ldclr1_acq}, // __aarch64_ldclr1_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ_REL, RTLIB::__aarch64_ldclr1_acq_rel}, // __aarch64_ldclr1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_REL, RTLIB::__aarch64_ldclr1_rel}, // __aarch64_ldclr1_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_RELAX, RTLIB::__aarch64_ldclr1_relax}, // __aarch64_ldclr1_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ, RTLIB::__aarch64_ldclr2_acq}, // __aarch64_ldclr2_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ_REL, RTLIB::__aarch64_ldclr2_acq_rel}, // __aarch64_ldclr2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_REL, RTLIB::__aarch64_ldclr2_rel}, // __aarch64_ldclr2_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_RELAX, RTLIB::__aarch64_ldclr2_relax}, // __aarch64_ldclr2_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ, RTLIB::__aarch64_ldclr4_acq}, // __aarch64_ldclr4_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ_REL, RTLIB::__aarch64_ldclr4_acq_rel}, // __aarch64_ldclr4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_REL, RTLIB::__aarch64_ldclr4_rel}, // __aarch64_ldclr4_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_RELAX, RTLIB::__aarch64_ldclr4_relax}, // __aarch64_ldclr4_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ, RTLIB::__aarch64_ldclr8_acq}, // __aarch64_ldclr8_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ_REL, RTLIB::__aarch64_ldclr8_acq_rel}, // __aarch64_ldclr8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_REL, RTLIB::__aarch64_ldclr8_rel}, // __aarch64_ldclr8_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_RELAX, RTLIB::__aarch64_ldclr8_relax}, // __aarch64_ldclr8_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ, RTLIB::__aarch64_ldeor1_acq}, // __aarch64_ldeor1_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ_REL, RTLIB::__aarch64_ldeor1_acq_rel}, // __aarch64_ldeor1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_REL, RTLIB::__aarch64_ldeor1_rel}, // __aarch64_ldeor1_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_RELAX, RTLIB::__aarch64_ldeor1_relax}, // __aarch64_ldeor1_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ, RTLIB::__aarch64_ldeor2_acq}, // __aarch64_ldeor2_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ_REL, RTLIB::__aarch64_ldeor2_acq_rel}, // __aarch64_ldeor2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_REL, RTLIB::__aarch64_ldeor2_rel}, // __aarch64_ldeor2_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_RELAX, RTLIB::__aarch64_ldeor2_relax}, // __aarch64_ldeor2_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ, RTLIB::__aarch64_ldeor4_acq}, // __aarch64_ldeor4_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ_REL, RTLIB::__aarch64_ldeor4_acq_rel}, // __aarch64_ldeor4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_REL, RTLIB::__aarch64_ldeor4_rel}, // __aarch64_ldeor4_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_RELAX, RTLIB::__aarch64_ldeor4_relax}, // __aarch64_ldeor4_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ, RTLIB::__aarch64_ldeor8_acq}, // __aarch64_ldeor8_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ_REL, RTLIB::__aarch64_ldeor8_acq_rel}, // __aarch64_ldeor8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_REL, RTLIB::__aarch64_ldeor8_rel}, // __aarch64_ldeor8_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_RELAX, RTLIB::__aarch64_ldeor8_relax}, // __aarch64_ldeor8_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ, RTLIB::__aarch64_ldset1_acq}, // __aarch64_ldset1_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ_REL, RTLIB::__aarch64_ldset1_acq_rel}, // __aarch64_ldset1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET1_REL, RTLIB::__aarch64_ldset1_rel}, // __aarch64_ldset1_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET1_RELAX, RTLIB::__aarch64_ldset1_relax}, // __aarch64_ldset1_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ, RTLIB::__aarch64_ldset2_acq}, // __aarch64_ldset2_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ_REL, RTLIB::__aarch64_ldset2_acq_rel}, // __aarch64_ldset2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET2_REL, RTLIB::__aarch64_ldset2_rel}, // __aarch64_ldset2_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET2_RELAX, RTLIB::__aarch64_ldset2_relax}, // __aarch64_ldset2_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ, RTLIB::__aarch64_ldset4_acq}, // __aarch64_ldset4_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ_REL, RTLIB::__aarch64_ldset4_acq_rel}, // __aarch64_ldset4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET4_REL, RTLIB::__aarch64_ldset4_rel}, // __aarch64_ldset4_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET4_RELAX, RTLIB::__aarch64_ldset4_relax}, // __aarch64_ldset4_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ, RTLIB::__aarch64_ldset8_acq}, // __aarch64_ldset8_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ_REL, RTLIB::__aarch64_ldset8_acq_rel}, // __aarch64_ldset8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET8_REL, RTLIB::__aarch64_ldset8_rel}, // __aarch64_ldset8_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET8_RELAX, RTLIB::__aarch64_ldset8_relax}, // __aarch64_ldset8_relax
        {RTLIB::OUTLINE_ATOMIC_SWP1_ACQ, RTLIB::__aarch64_swp1_acq}, // __aarch64_swp1_acq
        {RTLIB::OUTLINE_ATOMIC_SWP1_ACQ_REL, RTLIB::__aarch64_swp1_acq_rel}, // __aarch64_swp1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP1_REL, RTLIB::__aarch64_swp1_rel}, // __aarch64_swp1_rel
        {RTLIB::OUTLINE_ATOMIC_SWP1_RELAX, RTLIB::__aarch64_swp1_relax}, // __aarch64_swp1_relax
        {RTLIB::OUTLINE_ATOMIC_SWP2_ACQ, RTLIB::__aarch64_swp2_acq}, // __aarch64_swp2_acq
        {RTLIB::OUTLINE_ATOMIC_SWP2_ACQ_REL, RTLIB::__aarch64_swp2_acq_rel}, // __aarch64_swp2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP2_REL, RTLIB::__aarch64_swp2_rel}, // __aarch64_swp2_rel
        {RTLIB::OUTLINE_ATOMIC_SWP2_RELAX, RTLIB::__aarch64_swp2_relax}, // __aarch64_swp2_relax
        {RTLIB::OUTLINE_ATOMIC_SWP4_ACQ, RTLIB::__aarch64_swp4_acq}, // __aarch64_swp4_acq
        {RTLIB::OUTLINE_ATOMIC_SWP4_ACQ_REL, RTLIB::__aarch64_swp4_acq_rel}, // __aarch64_swp4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP4_REL, RTLIB::__aarch64_swp4_rel}, // __aarch64_swp4_rel
        {RTLIB::OUTLINE_ATOMIC_SWP4_RELAX, RTLIB::__aarch64_swp4_relax}, // __aarch64_swp4_relax
        {RTLIB::OUTLINE_ATOMIC_SWP8_ACQ, RTLIB::__aarch64_swp8_acq}, // __aarch64_swp8_acq
        {RTLIB::OUTLINE_ATOMIC_SWP8_ACQ_REL, RTLIB::__aarch64_swp8_acq_rel}, // __aarch64_swp8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP8_REL, RTLIB::__aarch64_swp8_rel}, // __aarch64_swp8_rel
        {RTLIB::OUTLINE_ATOMIC_SWP8_RELAX, RTLIB::__aarch64_swp8_relax}, // __aarch64_swp8_relax
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SC_MEMCPY, RTLIB::__arm_sc_memcpy}, // __arm_sc_memcpy
        {RTLIB::SC_MEMMOVE, RTLIB::__arm_sc_memmove}, // __arm_sc_memmove
        {RTLIB::SC_MEMSET, RTLIB::__arm_sc_memset}, // __arm_sc_memset
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (darwinHasExp10(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasExp10[] = {
          {RTLIB::EXP10_F32, RTLIB::__exp10f}, // __exp10f
          {RTLIB::EXP10_F64, RTLIB::__exp10}, // __exp10
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasExp10) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (darwinHasSinCosStret(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasSinCosStret[] = {
          {RTLIB::SINCOS_STRET_F32, RTLIB::__sincosf_stret}, // __sincosf_stret
          {RTLIB::SINCOS_STRET_F64, RTLIB::__sincos_stret}, // __sincos_stret
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasSinCosStret) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (hasSinCos(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos[] = {
          {RTLIB::SINCOS_F32, RTLIB::sincosf}, // sincosf
          {RTLIB::SINCOS_F64, RTLIB::sincos}, // sincos
          {RTLIB::SINCOS_F128, RTLIB::sincos_f128}, // sincosl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isAArch64(64)) {
      static const LibcallImplPair LibraryCalls_isAArch64_ILP64[] = {
          {RTLIB::MUL_I128, RTLIB::__multi3}, // __multi3
          {RTLIB::SHL_I128, RTLIB::__ashlti3}, // __ashlti3
          {RTLIB::SRA_I128, RTLIB::__ashrti3}, // __ashrti3
          {RTLIB::SRL_I128, RTLIB::__lshrti3}, // __lshrti3
      };

      for (const auto [Func, Impl] : LibraryCalls_isAArch64_ILP64) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSMSVCRT()) {
      static const LibcallImplPair LibraryCalls_isNotOSMSVCRT[] = {
          {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
          {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSMSVCRT) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSWindows() || TT.isOSCygMing()) {
      static const LibcallImplPair LibraryCalls_isNotOSWindowsOrIsCygwinMinGW[] = {
          {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
          {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
          {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
          {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSWindowsOrIsCygwinMinGW) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isOSDarwin()) {
      static const LibcallImplPair LibraryCalls_isOSDarwin[] = {
          {RTLIB::BZERO, RTLIB::bzero}, // bzero
      };

      for (const auto [Func, Impl] : LibraryCalls_isOSDarwin) {
        setLibcallImpl(Func, Impl);
      }

    }

    return;
  }

  if (TT.isAMDGPU()) {
    return;
  }

  if (TT.isARM() || TT.isThumb()) {
    const CallingConv::ID DefaultCC = (!TT.isOSDarwin() && !TT.isiOS() && !TT.isWatchOS() && !TT.isDriverKit()) ?
        (FloatABI == FloatABI::Hard ? CallingConv::ARM_AAPCS_VFP
                                    : CallingConv::ARM_AAPCS) :
                                      CallingConv::C;
    for (CallingConv::ID &Entry : LibcallImplCallingConvs) {
      Entry = DefaultCC;
    }

    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (TT.isTargetAEABI() || TT.isAndroid() || TT.isTargetGNUAEABI() ||
    TT.isTargetMuslAEABI()) {
      static const LibcallImplPair LibraryCalls_anonymous_19[] = {
          {RTLIB::SDIVREM_I32, RTLIB::__aeabi_idivmod}, // __aeabi_idivmod
          {RTLIB::SDIVREM_I64, RTLIB::__aeabi_ldivmod}, // __aeabi_ldivmod
          {RTLIB::UDIVREM_I32, RTLIB::__aeabi_uidivmod}, // __aeabi_uidivmod
          {RTLIB::UDIVREM_I64, RTLIB::__aeabi_uldivmod}, // __aeabi_uldivmod
      };

      for (const auto [Func, Impl] : LibraryCalls_anonymous_19) {
        setLibcallImpl(Func, Impl);
        setLibcallImplCallingConv(Impl, CallingConv::ARM_AAPCS);
      }

    }

    if (TT.isOSBinFormatMachO() &&
                                                  (!TT.isiOS() || !TT.isOSVersionLT(5, 0))) {
      static const LibcallImplPair LibraryCalls_anonymous_20[] = {
          {RTLIB::SDIVREM_I32, RTLIB::__divmodsi4}, // __divmodsi4
          {RTLIB::UDIVREM_I32, RTLIB::__udivmodsi4}, // __udivmodsi4
      };

      for (const auto [Func, Impl] : LibraryCalls_anonymous_20) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (darwinHasExp10(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasExp10[] = {
          {RTLIB::EXP10_F32, RTLIB::__exp10f}, // __exp10f
          {RTLIB::EXP10_F64, RTLIB::__exp10}, // __exp10
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasExp10) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (darwinHasSinCosStret(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasSinCosStret[] = {
          {RTLIB::SINCOS_STRET_F32, RTLIB::__sincosf_stret}, // __sincosf_stret
          {RTLIB::SINCOS_STRET_F64, RTLIB::__sincos_stret}, // __sincos_stret
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasSinCosStret) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (hasSinCos(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos[] = {
          {RTLIB::SINCOS_F32, RTLIB::sincosf}, // sincosf
          {RTLIB::SINCOS_F64, RTLIB::sincos}, // sincos
          {RTLIB::SINCOS_F128, RTLIB::sincos_f128}, // sincosl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSMSVCRT()) {
      static const LibcallImplPair LibraryCalls_isNotOSMSVCRT[] = {
          {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
          {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSMSVCRT) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSWindows() || TT.isOSCygMing()) {
      static const LibcallImplPair LibraryCalls_isNotOSWindowsOrIsCygwinMinGW[] = {
          {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
          {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
          {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
          {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSWindowsOrIsCygwinMinGW) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isOSWindows()) {
      static const LibcallImplPair LibraryCalls_isOSWindows[] = {
          {RTLIB::SDIVREM_I32, RTLIB::__rt_sdiv}, // __rt_sdiv
          {RTLIB::SDIVREM_I64, RTLIB::__rt_sdiv64}, // __rt_sdiv64
          {RTLIB::UDIVREM_I32, RTLIB::__rt_udiv}, // __rt_udiv
          {RTLIB::UDIVREM_I64, RTLIB::__rt_udiv64}, // __rt_udiv64
      };

      for (const auto [Func, Impl] : LibraryCalls_isOSWindows) {
        setLibcallImpl(Func, Impl);
        setLibcallImplCallingConv(Impl, CallingConv::ARM_AAPCS);
      }

    }

    if (TT.isOSWindows()) {
      static const LibcallImplPair LibraryCalls_isOSWindows[] = {
          {RTLIB::FPTOSINT_F32_I64, RTLIB::__stoi64}, // __stoi64
          {RTLIB::FPTOSINT_F64_I64, RTLIB::__dtoi64}, // __dtoi64
          {RTLIB::FPTOUINT_F32_I64, RTLIB::__stou64}, // __stou64
          {RTLIB::FPTOUINT_F64_I64, RTLIB::__dtou64}, // __dtou64
          {RTLIB::SINTTOFP_I64_F32, RTLIB::__i64tos}, // __i64tos
          {RTLIB::SINTTOFP_I64_F64, RTLIB::__i64tod}, // __i64tod
          {RTLIB::UINTTOFP_I64_F32, RTLIB::__u64tos}, // __u64tos
          {RTLIB::UINTTOFP_I64_F64, RTLIB::__u64tod}, // __u64tod
      };

      for (const auto [Func, Impl] : LibraryCalls_isOSWindows) {
        setLibcallImpl(Func, Impl);
        setLibcallImplCallingConv(Impl, CallingConv::ARM_AAPCS_VFP);
      }

    }

    return;
  }

  if (TT.getArch() == Triple::avr) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::avr_cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIVREM_I32, RTLIB::__divmodsi4}, // __divmodsi4
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::avr_sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIVREM_I32, RTLIB::__udivmodsi4}, // __udivmodsi4
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    static const LibcallImplPair LibraryCalls_AlwaysAvailable[] = {
        {RTLIB::SDIVREM_I8, RTLIB::__divmodqi4}, // __divmodqi4
        {RTLIB::SDIVREM_I16, RTLIB::__divmodhi4}, // __divmodhi4
        {RTLIB::UDIVREM_I8, RTLIB::__udivmodqi4}, // __udivmodqi4
        {RTLIB::UDIVREM_I16, RTLIB::__udivmodhi4}, // __udivmodhi4
    };

    for (const auto [Func, Impl] : LibraryCalls_AlwaysAvailable) {
      setLibcallImpl(Func, Impl);
      setLibcallImplCallingConv(Impl, CallingConv::AVR_BUILTIN);
    }

    return;
  }

  if (TT.isDXIL()) {
    return;
  }

  if (TT.getArch() == Triple::hexagon) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__hexagon_adddf3}, // __hexagon_adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__hexagon_divsf3}, // __hexagon_divsf3
        {RTLIB::DIV_F64, RTLIB::__hexagon_divdf3}, // __hexagon_divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FAST_ADD_F64, RTLIB::__hexagon_fast_adddf3}, // __hexagon_fast_adddf3
        {RTLIB::FAST_DIV_F32, RTLIB::__hexagon_fast_divsf3}, // __hexagon_fast_divsf3
        {RTLIB::FAST_DIV_F64, RTLIB::__hexagon_fast_divdf3}, // __hexagon_fast_divdf3
        {RTLIB::FAST_MUL_F64, RTLIB::__hexagon_fast_muldf3}, // __hexagon_fast_muldf3
        {RTLIB::FAST_SQRT_F32, RTLIB::__hexagon_fast2_sqrtf}, // __hexagon_fast2_sqrtf
        {RTLIB::FAST_SQRT_F64, RTLIB::__hexagon_fast2_sqrtdf2}, // __hexagon_fast2_sqrtdf2
        {RTLIB::FAST_SUB_F64, RTLIB::__hexagon_fast_subdf3}, // __hexagon_fast_subdf3
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::HEXAGON_MEMCPY_LIKELY_ALIGNED_MIN32BYTES_MULT8BYTES, RTLIB::__hexagon_memcpy_likely_aligned_min32bytes_mult8bytes}, // __hexagon_memcpy_likely_aligned_min32bytes_mult8bytes
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__hexagon_muldf3}, // __hexagon_muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__hexagon_divsi3}, // __hexagon_divsi3
        {RTLIB::SDIV_I64, RTLIB::__hexagon_divdi3}, // __hexagon_divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::__hexagon_sqrtf}, // __hexagon_sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__hexagon_modsi3}, // __hexagon_modsi3
        {RTLIB::SREM_I64, RTLIB::__hexagon_moddi3}, // __hexagon_moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__hexagon_subdf3}, // __hexagon_subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__hexagon_udivsi3}, // __hexagon_udivsi3
        {RTLIB::UDIV_I64, RTLIB::__hexagon_udivdi3}, // __hexagon_udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__hexagon_umodsi3}, // __hexagon_umodsi3
        {RTLIB::UREM_I64, RTLIB::__hexagon_umoddi3}, // __hexagon_umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    return;
  }

  if (TT.getArch() == Triple::lanai) {
    const CallingConv::ID DefaultCC = CallingConv::Fast;
    for (CallingConv::ID &Entry : LibcallImplCallingConvs) {
      Entry = DefaultCC;
    }

    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    return;
  }

  if (TT.getArch() == Triple::msp430) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__mspabi_addf}, // __mspabi_addf
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__mspabi_divf}, // __mspabi_divf
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__mspabi_cvtfd}, // __mspabi_cvtfd
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__mspabi_cvtdf}, // __mspabi_cvtdf
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__mspabi_fixfli}, // __mspabi_fixfli
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__mspabi_fixflli}, // __mspabi_fixflli
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__mspabi_fixdli}, // __mspabi_fixdli
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__mspabi_fixdlli}, // __mspabi_fixdlli
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__mspabi_fixful}, // __mspabi_fixful
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__mspabi_fixfull}, // __mspabi_fixfull
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__mspabi_fixdul}, // __mspabi_fixdul
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__mspabi_fixdull}, // __mspabi_fixdull
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mspabi_mpyf}, // __mspabi_mpyf
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__mspabi_cmpf__oeq}, // __mspabi_cmpf
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__mspabi_cmpf__oge}, // __mspabi_cmpf
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__mspabi_cmpf__ogt}, // __mspabi_cmpf
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__mspabi_cmpf__ole}, // __mspabi_cmpf
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__mspabi_cmpf__olt}, // __mspabi_cmpf
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__mspabi_divi}, // __mspabi_divi
        {RTLIB::SDIV_I32, RTLIB::__mspabi_divli}, // __mspabi_divli
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__mspabi_slll}, // __mspabi_slll
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__mspabi_fltlif}, // __mspabi_fltlif
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__mspabi_fltlid}, // __mspabi_fltlid
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__mspabi_fltllif}, // __mspabi_fltllif
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__mspabi_fltllid}, // __mspabi_fltllid
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__mspabi_sral}, // __mspabi_sral
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__mspabi_remi}, // __mspabi_remi
        {RTLIB::SREM_I32, RTLIB::__mspabi_remli}, // __mspabi_remli
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__mspabi_srll}, // __mspabi_srll
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__mspabi_subf}, // __mspabi_subf
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__mspabi_divu}, // __mspabi_divu
        {RTLIB::UDIV_I32, RTLIB::__mspabi_divul}, // __mspabi_divul
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__mspabi_fltulf}, // __mspabi_fltulf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__mspabi_fltuld}, // __mspabi_fltuld
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__mspabi_fltullf}, // __mspabi_fltullf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__mspabi_fltulld}, // __mspabi_fltulld
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__mspabi_cmpf__une}, // __mspabi_cmpf
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__mspabi_remu}, // __mspabi_remu
        {RTLIB::UREM_I32, RTLIB::__mspabi_remul}, // __mspabi_remul
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    static const LibcallImplPair LibraryCalls_AlwaysAvailable[] = {
        {RTLIB::ADD_F64, RTLIB::__mspabi_addd}, // __mspabi_addd
        {RTLIB::DIV_F64, RTLIB::__mspabi_divd}, // __mspabi_divd
        {RTLIB::MUL_F64, RTLIB::__mspabi_mpyd}, // __mspabi_mpyd
        {RTLIB::OEQ_F64, RTLIB::__mspabi_cmpd__oeq}, // __mspabi_cmpd
        {RTLIB::OGE_F64, RTLIB::__mspabi_cmpd__oge}, // __mspabi_cmpd
        {RTLIB::OGT_F64, RTLIB::__mspabi_cmpd__ogt}, // __mspabi_cmpd
        {RTLIB::OLE_F64, RTLIB::__mspabi_cmpd__ole}, // __mspabi_cmpd
        {RTLIB::OLT_F64, RTLIB::__mspabi_cmpd__olt}, // __mspabi_cmpd
        {RTLIB::SDIV_I64, RTLIB::__mspabi_divlli}, // __mspabi_divlli
        {RTLIB::SREM_I64, RTLIB::__mspabi_remlli}, // __mspabi_remlli
        {RTLIB::SUB_F64, RTLIB::__mspabi_subd}, // __mspabi_subd
        {RTLIB::UDIV_I64, RTLIB::__mspabi_divull}, // __mspabi_divull
        {RTLIB::UNE_F64, RTLIB::__mspabi_cmpd__une}, // __mspabi_cmpd
        {RTLIB::UREM_I64, RTLIB::__mspabi_remull}, // __mspabi_remull
    };

    for (const auto [Func, Impl] : LibraryCalls_AlwaysAvailable) {
      setLibcallImpl(Func, Impl);
      setLibcallImplCallingConv(Impl, CallingConv::MSP430_BUILTIN);
    }

    return;
  }

  if (TT.isNVPTX()) {
    return;
  }

  if (TT.isPPC()) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acosf128}, // acosf128
        {RTLIB::ACOS_PPCF128, RTLIB::acos_ppcf128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addkf3}, // __addkf3
        {RTLIB::ADD_PPCF128, RTLIB::__gcc_qadd}, // __gcc_qadd
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asinf128}, // asinf128
        {RTLIB::ASIN_PPCF128, RTLIB::asin_ppcf128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2f128}, // atan2f128
        {RTLIB::ATAN2_PPCF128, RTLIB::atan2_ppcf128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atanf128}, // atanf128
        {RTLIB::ATAN_PPCF128, RTLIB::atan_ppcf128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrtf128}, // cbrtf128
        {RTLIB::CBRT_PPCF128, RTLIB::cbrt_ppcf128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceilf128}, // ceilf128
        {RTLIB::CEIL_PPCF128, RTLIB::ceil_ppcf128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::CONVERT_F128_PPCF128, RTLIB::__extendkftf2}, // __extendkftf2
        {RTLIB::CONVERT_PPCF128_F128, RTLIB::__trunctfkf2}, // __trunctfkf2
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysignf128}, // copysignf128
        {RTLIB::COPYSIGN_PPCF128, RTLIB::copysign_ppcf128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::coshf128}, // coshf128
        {RTLIB::COSH_PPCF128, RTLIB::cosh_ppcf128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cosf128}, // cosf128
        {RTLIB::COS_PPCF128, RTLIB::cos_ppcf128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divkf3}, // __divkf3
        {RTLIB::DIV_PPCF128, RTLIB::__gcc_qdiv}, // __gcc_qdiv
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2f128}, // exp2f128
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_PPCF128, RTLIB::__exp2l_finite_ppcf128}, // __exp2l_finite
        {RTLIB::EXP2_PPCF128, RTLIB::exp2_ppcf128}, // exp2l
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10f128}, // exp10f128
        {RTLIB::EXP10_PPCF128, RTLIB::exp10l_ppcf128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::expf128}, // expf128
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_PPCF128, RTLIB::__expl_finite_ppcf128}, // __expl_finite
        {RTLIB::EXP_PPCF128, RTLIB::exp_ppcf128}, // expl
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floorf128}, // floorf128
        {RTLIB::FLOOR_PPCF128, RTLIB::floor_ppcf128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximumf128}, // fmaximumf128
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_numf128}, // fmaximum_numf128
        {RTLIB::FMAXIMUM_NUM_PPCF128, RTLIB::fmaximum_num_ppcf128}, // fmaximum_numl
        {RTLIB::FMAXIMUM_PPCF128, RTLIB::fmaximum_ppcf128}, // fmaximuml
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmaxf128}, // fmaxf128
        {RTLIB::FMAX_PPCF128, RTLIB::fmax_ppcf128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fmaf128}, // fmaf128
        {RTLIB::FMA_PPCF128, RTLIB::fma_ppcf128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimumf128}, // fminimumf128
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_numf128}, // fminimum_numf128
        {RTLIB::FMINIMUM_NUM_PPCF128, RTLIB::fminimum_num_ppcf128}, // fminimum_numl
        {RTLIB::FMINIMUM_PPCF128, RTLIB::fminimum_ppcf128}, // fminimuml
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fminf128}, // fminf128
        {RTLIB::FMIN_PPCF128, RTLIB::fmin_ppcf128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsfkf2}, // __extendsfkf2
        {RTLIB::FPEXT_F32_PPCF128, RTLIB::__gcc_stoq}, // __gcc_stoq
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddfkf2}, // __extenddfkf2
        {RTLIB::FPEXT_F64_PPCF128, RTLIB::__gcc_dtoq}, // __gcc_dtoq
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunckfhf2}, // __trunckfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunckfsf2}, // __trunckfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunckfdf2}, // __trunckfdf2
        {RTLIB::FPROUND_PPCF128_F16, RTLIB::__trunctfhf2_ppcf128}, // __trunctfhf2
        {RTLIB::FPROUND_PPCF128_F32, RTLIB::__gcc_qtos}, // __gcc_qtos
        {RTLIB::FPROUND_PPCF128_F64, RTLIB::__gcc_qtod}, // __gcc_qtod
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixkfsi}, // __fixkfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixkfdi}, // __fixkfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixkfti}, // __fixkfti
        {RTLIB::FPTOSINT_PPCF128_I32, RTLIB::__gcc_qtou}, // __gcc_qtou
        {RTLIB::FPTOSINT_PPCF128_I64, RTLIB::__fixtfdi_ppcf128}, // __fixtfdi
        {RTLIB::FPTOSINT_PPCF128_I128, RTLIB::__fixtfti_ppcf128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunskfsi}, // __fixunskfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunskfdi}, // __fixunskfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunskfti}, // __fixunskfti
        {RTLIB::FPTOUINT_PPCF128_I32, RTLIB::__fixunstfsi_ppcf128}, // __fixunstfsi
        {RTLIB::FPTOUINT_PPCF128_I64, RTLIB::__fixunstfdi_ppcf128}, // __fixunstfdi
        {RTLIB::FPTOUINT_PPCF128_I128, RTLIB::__fixunstfti_ppcf128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexpf128}, // frexpf128
        {RTLIB::FREXP_PPCF128, RTLIB::frexp_ppcf128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexpf128}, // ldexpf128
        {RTLIB::LDEXP_PPCF128, RTLIB::ldexp_ppcf128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrintf128}, // llrintf128
        {RTLIB::LLRINT_PPCF128, RTLIB::llrint_ppcf128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llroundf128}, // llroundf128
        {RTLIB::LLROUND_PPCF128, RTLIB::llround_ppcf128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2f128}, // log2f128
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_PPCF128, RTLIB::__log2l_finite_ppcf128}, // __log2l_finite
        {RTLIB::LOG2_PPCF128, RTLIB::log2_ppcf128}, // log2l
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10f128}, // log10f128
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_PPCF128, RTLIB::__log10l_finite_ppcf128}, // __log10l_finite
        {RTLIB::LOG10_PPCF128, RTLIB::log10_ppcf128}, // log10l
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::logf128}, // logf128
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_PPCF128, RTLIB::__logl_finite_ppcf128}, // __logl_finite
        {RTLIB::LOG_PPCF128, RTLIB::log_ppcf128}, // logl
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrintf128}, // lrintf128
        {RTLIB::LRINT_PPCF128, RTLIB::lrint_ppcf128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lroundf128}, // lroundf128
        {RTLIB::LROUND_PPCF128, RTLIB::lround_ppcf128}, // lroundl
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modff128}, // modff128
        {RTLIB::MODF_PPCF128, RTLIB::modf_ppcf128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__mulkf3}, // __mulkf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::MUL_PPCF128, RTLIB::__gcc_qmul}, // __gcc_qmul
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyintf128}, // nearbyintf128
        {RTLIB::NEARBYINT_PPCF128, RTLIB::nearbyint_ppcf128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqkf2}, // __eqkf2
        {RTLIB::OEQ_PPCF128, RTLIB::__gcc_qeq}, // __gcc_qeq
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__gekf2}, // __gekf2
        {RTLIB::OGE_PPCF128, RTLIB::__gcc_qge}, // __gcc_qge
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gtkf2}, // __gtkf2
        {RTLIB::OGT_PPCF128, RTLIB::__gcc_qgt}, // __gcc_qgt
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__lekf2}, // __lekf2
        {RTLIB::OLE_PPCF128, RTLIB::__gcc_qle}, // __gcc_qle
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__ltkf2}, // __ltkf2
        {RTLIB::OLT_PPCF128, RTLIB::__gcc_qlt}, // __gcc_qlt
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powikf2}, // __powikf2
        {RTLIB::POWI_PPCF128, RTLIB::__powitf2_ppc128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::powf128}, // powf128
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_PPCF128, RTLIB::__powl_finite_ppcf128}, // __powl_finite
        {RTLIB::POW_PPCF128, RTLIB::pow_ppcf128}, // powl
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodf128}, // fmodf128
        {RTLIB::REM_PPCF128, RTLIB::fmodl_ppc128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rintf128}, // rintf128
        {RTLIB::RINT_PPCF128, RTLIB::rint_ppcf128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundevenf128}, // roundevenf128
        {RTLIB::ROUNDEVEN_PPCF128, RTLIB::roundeven_ppcf128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::roundf128}, // roundf128
        {RTLIB::ROUND_PPCF128, RTLIB::round_ppcf128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_PPCF128, RTLIB::sincospi_ppcf128}, // sincospil
        {RTLIB::SINCOS_F128, RTLIB::sincosf128}, // sincosf128
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinhf128}, // sinhf128
        {RTLIB::SINH_PPCF128, RTLIB::sinh_ppcf128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsikf}, // __floatsikf
        {RTLIB::SINTTOFP_I32_PPCF128, RTLIB::__gcc_itoq}, // __gcc_itoq
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatdikf}, // __floatdikf
        {RTLIB::SINTTOFP_I64_PPCF128, RTLIB::__floatditf_ppcf128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattikf}, // __floattikf
        {RTLIB::SINTTOFP_I128_PPCF128, RTLIB::__floattitf_ppcf128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sinf128}, // sinf128
        {RTLIB::SIN_PPCF128, RTLIB::sin_ppcf128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrtf128}, // sqrtf128
        {RTLIB::SQRT_PPCF128, RTLIB::sqrt_ppcf128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subkf3}, // __subkf3
        {RTLIB::SUB_PPCF128, RTLIB::__gcc_qsub}, // __gcc_qsub
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanhf128}, // tanhf128
        {RTLIB::TANH_PPCF128, RTLIB::tanh_ppcf128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tanf128}, // tanf128
        {RTLIB::TAN_PPCF128, RTLIB::tan_ppcf128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::truncf128}, // truncf128
        {RTLIB::TRUNC_PPCF128, RTLIB::trunc_ppcf128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsikf}, // __floatunsikf
        {RTLIB::UINTTOFP_I32_PPCF128, RTLIB::__gcc_utoq}, // __gcc_utoq
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatundikf}, // __floatundikf
        {RTLIB::UINTTOFP_I64_PPCF128, RTLIB::__floatunditf_ppcf128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntikf}, // __floatuntikf
        {RTLIB::UINTTOFP_I128_PPCF128, RTLIB::__floatuntitf_ppcf128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__nekf2}, // __nekf2
        {RTLIB::UNE_PPCF128, RTLIB::__gcc_qne}, // __gcc_qne
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordkf2}, // __unordkf2
        {RTLIB::UO_PPCF128, RTLIB::__gcc_qunord}, // __gcc_qunord
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (hasSinCos(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos[] = {
          {RTLIB::SINCOS_F32, RTLIB::sincosf}, // sincosf
          {RTLIB::SINCOS_F64, RTLIB::sincos}, // sincos
          {RTLIB::SINCOS_F128, RTLIB::sincos_f128}, // sincosl
          {RTLIB::SINCOS_PPCF128, RTLIB::sincos_ppcf128}, // sincosl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSAIX()) {
      static const LibcallImplPair LibraryCalls_isNotAIX[] = {
          {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotAIX) {
        setLibcallImpl(Func, Impl);
      }

    }

    if ((TT.isPPC32() && TT.isOSAIX())) {
      static const LibcallImplPair LibraryCalls_isPPC32_AIX[] = {
          {RTLIB::BZERO, RTLIB::___bzero}, // ___bzero
          {RTLIB::MEMMOVE, RTLIB::___memmove}, // ___memmove
          {RTLIB::MEMSET, RTLIB::___memset}, // ___memset
      };

      for (const auto [Func, Impl] : LibraryCalls_isPPC32_AIX) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isPPC64()) {
      static const LibcallImplPair LibraryCalls_isPPC64[] = {
          {RTLIB::MUL_I128, RTLIB::__multi3}, // __multi3
          {RTLIB::SHL_I128, RTLIB::__ashlti3}, // __ashlti3
          {RTLIB::SRA_I128, RTLIB::__ashrti3}, // __ashrti3
          {RTLIB::SRL_I128, RTLIB::__lshrti3}, // __lshrti3
      };

      for (const auto [Func, Impl] : LibraryCalls_isPPC64) {
        setLibcallImpl(Func, Impl);
      }

    }

    if ((TT.isPPC64() && TT.isOSAIX())) {
      static const LibcallImplPair LibraryCalls_isPPC64_AIX[] = {
          {RTLIB::BZERO, RTLIB::___bzero64}, // ___bzero64
          {RTLIB::MEMCPY, RTLIB::___memmove64}, // ___memmove64
          {RTLIB::MEMSET, RTLIB::___memset64}, // ___memset64
      };

      for (const auto [Func, Impl] : LibraryCalls_isPPC64_AIX) {
        setLibcallImpl(Func, Impl);
      }

    }

    return;
  }

  if (TT.isRISCV()) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::RISCV_FLUSH_ICACHE, RTLIB::__riscv_flush_icache}, // __riscv_flush_icache
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (TT.isRISCV64()) {
      static const LibcallImplPair LibraryCalls_isRISCV64[] = {
          {RTLIB::MUL_I128, RTLIB::__multi3}, // __multi3
          {RTLIB::SHL_I128, RTLIB::__ashlti3}, // __ashlti3
          {RTLIB::SRA_I128, RTLIB::__ashrti3}, // __ashrti3
          {RTLIB::SRL_I128, RTLIB::__lshrti3}, // __lshrti3
      };

      for (const auto [Func, Impl] : LibraryCalls_isRISCV64) {
        setLibcallImpl(Func, Impl);
      }

    }

    return;
  }

  if (TT.isSPARC()) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::sparc_umul}, // .umul
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::sparc_div}, // .div
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::sparc_rem}, // .rem
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::sparc_udiv}, // .udiv
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::sparc_urem}, // .urem
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (hasSinCos(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos[] = {
          {RTLIB::SINCOS_F32, RTLIB::sincosf}, // sincosf
          {RTLIB::SINCOS_F64, RTLIB::sincos}, // sincos
          {RTLIB::SINCOS_F128, RTLIB::sincos_f128}, // sincosl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isSPARC32()) {
      static const LibcallImplPair LibraryCalls_isSPARC32[] = {
          {RTLIB::FPTOSINT_F128_I64, RTLIB::_Q_qtoll}, // _Q_qtoll
          {RTLIB::FPTOUINT_F128_I64, RTLIB::_Q_qtoull}, // _Q_qtoull
          {RTLIB::SINTTOFP_I64_F128, RTLIB::_Q_lltoq}, // _Q_lltoq
          {RTLIB::UINTTOFP_I64_F128, RTLIB::_Q_ulltoq}, // _Q_ulltoq
      };

      for (const auto [Func, Impl] : LibraryCalls_isSPARC32) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isSPARC64()) {
      static const LibcallImplPair LibraryCalls_isSPARC64[] = {
          {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
          {RTLIB::MUL_I128, RTLIB::__multi3}, // __multi3
          {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
          {RTLIB::SHL_I128, RTLIB::__ashlti3}, // __ashlti3
          {RTLIB::SRA_I128, RTLIB::__ashrti3}, // __ashrti3
          {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
          {RTLIB::SRL_I128, RTLIB::__lshrti3}, // __lshrti3
          {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
          {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
      };

      for (const auto [Func, Impl] : LibraryCalls_isSPARC64) {
        setLibcallImpl(Func, Impl);
      }

    }

    return;
  }

  if (TT.isSPIRV()) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMSET, RTLIB::memset}, // memset
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    return;
  }

  if ((TT.isSystemZ() && TT.isOSzOS())) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::MUL_I128, RTLIB::__multi3}, // __multi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SHL_I128, RTLIB::__ashlti3}, // __ashlti3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SRA_I128, RTLIB::__ashrti3}, // __ashrti3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::SRL_I128, RTLIB::__lshrti3}, // __lshrti3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (TT.isOSzOS()) {
      static const LibcallImplPair LibraryCalls_isZOS[] = {
          {RTLIB::CBRT_F32, RTLIB::zos___FCBT_B}, // @@FCBT@B
          {RTLIB::CBRT_F64, RTLIB::zos___SCRT_B}, // @@SCRT@B
          {RTLIB::CBRT_F128, RTLIB::zos___LCBT_B}, // @@LCBT@B
          {RTLIB::CEIL_F32, RTLIB::zos___FCEL_B}, // @@FCEL@B
          {RTLIB::CEIL_F64, RTLIB::zos___SCEL_B}, // @@SCEL@B
          {RTLIB::CEIL_F128, RTLIB::zos___LCEL_B}, // @@LCEL@B
          {RTLIB::COPYSIGN_F32, RTLIB::zos___FCPY_B}, // @@FCPY@B
          {RTLIB::COPYSIGN_F64, RTLIB::zos___DCPY_B}, // @@DCPY@B
          {RTLIB::COPYSIGN_F128, RTLIB::zos___LCPY_B}, // @@LCPY@B
          {RTLIB::COS_F32, RTLIB::zos___FCOS_B}, // @@FCOS@B
          {RTLIB::COS_F64, RTLIB::zos___SCOS_B}, // @@SCOS@B
          {RTLIB::COS_F128, RTLIB::zos___LCOS_B}, // @@LCOS@B
          {RTLIB::EXP2_F32, RTLIB::zos___FXP2_B}, // @@FXP2@B
          {RTLIB::EXP2_F64, RTLIB::zos___EXP2_B}, // @@EXP2@B
          {RTLIB::EXP2_F128, RTLIB::zos___LXP2_B}, // @@LXP2@B
          {RTLIB::EXP_F32, RTLIB::zos___FEXP_B}, // @@FEXP@B
          {RTLIB::EXP_F64, RTLIB::zos___WEXP_B}, // @@WEXP@B
          {RTLIB::EXP_F128, RTLIB::zos___LEXP_B}, // @@LEXP@B
          {RTLIB::FLOOR_F32, RTLIB::zos___FFLR_B}, // @@FFLR@B
          {RTLIB::FLOOR_F64, RTLIB::zos___SFLR_B}, // @@SFLR@B
          {RTLIB::FLOOR_F128, RTLIB::zos___LFLR_B}, // @@LFLR@B
          {RTLIB::FMAX_F32, RTLIB::zos___FMAXFB}, // @@FMAXFB
          {RTLIB::FMAX_F64, RTLIB::zos___FMAX_B}, // @@FMAX@B
          {RTLIB::FMAX_F128, RTLIB::zos___FMAXLB}, // @@FMAXLB
          {RTLIB::FMA_F32, RTLIB::zos___FMAFB}, // @@FMAFB
          {RTLIB::FMA_F64, RTLIB::zos___FMA_B}, // @@FMA@B
          {RTLIB::FMA_F128, RTLIB::zos___FMALB}, // @@FMALB
          {RTLIB::FMIN_F32, RTLIB::zos___FMINFB}, // @@FMINFB
          {RTLIB::FMIN_F64, RTLIB::zos___FMIN_B}, // @@FMIN@B
          {RTLIB::FMIN_F128, RTLIB::zos___FMINLB}, // @@FMINLB
          {RTLIB::FREXP_F32, RTLIB::zos___FFXP_B}, // @@FFXP@B
          {RTLIB::FREXP_F64, RTLIB::zos___SFXP_B}, // @@SFXP@B
          {RTLIB::FREXP_F128, RTLIB::zos___LFXP_B}, // @@LFXP@B
          {RTLIB::LDEXP_F32, RTLIB::zos___FLXP_B}, // @@FLXP@B
          {RTLIB::LDEXP_F64, RTLIB::zos___SLXP_B}, // @@SLXP@B
          {RTLIB::LDEXP_F128, RTLIB::zos___LLXP_B}, // @@LLXP@B
          {RTLIB::LLRINT_F32, RTLIB::zos___LLRTFB}, // @@LLRTFB
          {RTLIB::LLRINT_F64, RTLIB::zos___LLRT_B}, // @@LLRT@B
          {RTLIB::LLRINT_F128, RTLIB::zos___LLRTLB}, // @@LLRTLB
          {RTLIB::LLROUND_F32, RTLIB::zos___LLRDFB}, // @@LLRDFB
          {RTLIB::LLROUND_F64, RTLIB::zos___LLRD_B}, // @@LLRD@B
          {RTLIB::LLROUND_F128, RTLIB::zos___LLRDLB}, // @@LLRDLB
          {RTLIB::LOG2_F32, RTLIB::zos___FLG2_B}, // @@FLG2@B
          {RTLIB::LOG2_F64, RTLIB::zos___LOG2_B}, // @@LOG2@B
          {RTLIB::LOG2_F128, RTLIB::zos___LLG2_B}, // @@LLG2@B
          {RTLIB::LOG10_F32, RTLIB::zos___FLG1_B}, // @@FLG1@B
          {RTLIB::LOG10_F64, RTLIB::zos___WLG1_B}, // @@WLG1@B
          {RTLIB::LOG10_F128, RTLIB::zos___LLG1_B}, // @@LLG1@B
          {RTLIB::LOG_F32, RTLIB::zos___FLOG_B}, // @@FLOG@B
          {RTLIB::LOG_F64, RTLIB::zos___WLOG_B}, // @@WLOG@B
          {RTLIB::LOG_F128, RTLIB::zos___LLOG_B}, // @@LLOG@B
          {RTLIB::LRINT_F32, RTLIB::zos___LRNTFB}, // @@LRNTFB
          {RTLIB::LRINT_F64, RTLIB::zos___LRNT_B}, // @@LRNT@B
          {RTLIB::LRINT_F128, RTLIB::zos___LRNTLB}, // @@LRNTLB
          {RTLIB::LROUND_F32, RTLIB::zos___FRND_B}, // @@FRND@B
          {RTLIB::LROUND_F64, RTLIB::zos___ROND_B}, // @@ROND@B
          {RTLIB::LROUND_F128, RTLIB::zos___LRND_B}, // @@LRND@B
          {RTLIB::NEARBYINT_F32, RTLIB::zos___NBYIFB}, // @@NBYIFB
          {RTLIB::NEARBYINT_F64, RTLIB::zos___NBYI_B}, // @@NBYI@B
          {RTLIB::NEARBYINT_F128, RTLIB::zos___NBYILB}, // @@NBYILB
          {RTLIB::POW_F32, RTLIB::zos___FPOW_B}, // @@FPOW@B
          {RTLIB::POW_F64, RTLIB::zos___WPOW_B}, // @@WPOW@B
          {RTLIB::POW_F128, RTLIB::zos___LPOW_B}, // @@LPOW@B
          {RTLIB::REM_F32, RTLIB::zos___FFMD_B}, // @@FFMD@B
          {RTLIB::REM_F64, RTLIB::zos___WFMD_B}, // @@WFMD@B
          {RTLIB::REM_F128, RTLIB::zos___LFMD_B}, // @@LFMD@B
          {RTLIB::RINT_F32, RTLIB::zos___RINTFB}, // @@RINTFB
          {RTLIB::RINT_F64, RTLIB::zos___SRNT_B}, // @@SRNT@B
          {RTLIB::RINT_F128, RTLIB::zos___RINTLB}, // @@RINTLB
          {RTLIB::ROUND_F32, RTLIB::zos___ROUNFB}, // @@ROUNFB
          {RTLIB::ROUND_F64, RTLIB::zos___ROUN_B}, // @@ROUN@B
          {RTLIB::ROUND_F128, RTLIB::zos___ROUNLB}, // @@ROUNLB
          {RTLIB::SIN_F32, RTLIB::zos___FSIN_B}, // @@FSIN@B
          {RTLIB::SIN_F64, RTLIB::zos___SSIN_B}, // @@SSIN@B
          {RTLIB::SIN_F128, RTLIB::zos___LSIN_B}, // @@LSIN@B
          {RTLIB::SQRT_F32, RTLIB::zos___FSQT_B}, // @@FSQT@B
          {RTLIB::SQRT_F64, RTLIB::zos___WSQT_B}, // @@WSQT@B
          {RTLIB::SQRT_F128, RTLIB::zos___LSQT_B}, // @@LSQT@B
          {RTLIB::TRUNC_F32, RTLIB::zos___FTRC_B}, // @@FTRC@B
          {RTLIB::TRUNC_F64, RTLIB::zos___TRNC_B}, // @@TRNC@B
          {RTLIB::TRUNC_F128, RTLIB::zos___LTRC_B}, // @@LTRC@B
      };

      for (const auto [Func, Impl] : LibraryCalls_isZOS) {
        setLibcallImpl(Func, Impl);
      }

    }

    return;
  }

  if (TT.isWasm()) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MULO_I64, RTLIB::__mulodi4}, // __mulodi4
        {RTLIB::MULO_I128, RTLIB::__muloti4}, // __muloti4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::MUL_I128, RTLIB::__multi3}, // __multi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RETURN_ADDRESS, RTLIB::emscripten_return_address}, // emscripten_return_address
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SHL_I128, RTLIB::__ashlti3}, // __ashlti3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SRA_I128, RTLIB::__ashrti3}, // __ashrti3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::SRL_I128, RTLIB::__lshrti3}, // __lshrti3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    return;
  }

  if (TT.isWindowsArm64EC()) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::arm64ec_acosf}, // #acosf
        {RTLIB::ACOS_F64, RTLIB::arm64ec_acos}, // #acos
        {RTLIB::ACOS_F128, RTLIB::arm64ec_acos_f128}, // #acosl
        {RTLIB::ADD_F32, RTLIB::arm64ec___addsf3}, // #__addsf3
        {RTLIB::ADD_F64, RTLIB::arm64ec___adddf3}, // #__adddf3
        {RTLIB::ADD_F128, RTLIB::arm64ec___addtf3}, // #__addtf3
        {RTLIB::ASIN_F32, RTLIB::arm64ec_asinf}, // #asinf
        {RTLIB::ASIN_F64, RTLIB::arm64ec_asin}, // #asin
        {RTLIB::ASIN_F128, RTLIB::arm64ec_asin_f128}, // #asinl
        {RTLIB::ATAN2_F32, RTLIB::arm64ec_atan2f}, // #atan2f
        {RTLIB::ATAN2_F64, RTLIB::arm64ec_atan2}, // #atan2
        {RTLIB::ATAN2_F128, RTLIB::arm64ec_atan2_f128}, // #atan2l
        {RTLIB::ATAN_F32, RTLIB::arm64ec_atanf}, // #atanf
        {RTLIB::ATAN_F64, RTLIB::arm64ec_atan}, // #atan
        {RTLIB::ATAN_F128, RTLIB::arm64ec_atan_f128}, // #atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::arm64ec___atomic_compare_exchange}, // #__atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::arm64ec___atomic_compare_exchange_1}, // #__atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::arm64ec___atomic_compare_exchange_2}, // #__atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::arm64ec___atomic_compare_exchange_4}, // #__atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::arm64ec___atomic_compare_exchange_8}, // #__atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::arm64ec___atomic_compare_exchange_16}, // #__atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::arm64ec___atomic_exchange}, // #__atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::arm64ec___atomic_exchange_1}, // #__atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::arm64ec___atomic_exchange_2}, // #__atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::arm64ec___atomic_exchange_4}, // #__atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::arm64ec___atomic_exchange_8}, // #__atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::arm64ec___atomic_exchange_16}, // #__atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::arm64ec___atomic_fetch_add_1}, // #__atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::arm64ec___atomic_fetch_add_2}, // #__atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::arm64ec___atomic_fetch_add_4}, // #__atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::arm64ec___atomic_fetch_add_8}, // #__atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::arm64ec___atomic_fetch_add_16}, // #__atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::arm64ec___atomic_fetch_and_1}, // #__atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::arm64ec___atomic_fetch_and_2}, // #__atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::arm64ec___atomic_fetch_and_4}, // #__atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::arm64ec___atomic_fetch_and_8}, // #__atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::arm64ec___atomic_fetch_and_16}, // #__atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::arm64ec___atomic_fetch_nand_1}, // #__atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::arm64ec___atomic_fetch_nand_2}, // #__atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::arm64ec___atomic_fetch_nand_4}, // #__atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::arm64ec___atomic_fetch_nand_8}, // #__atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::arm64ec___atomic_fetch_nand_16}, // #__atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::arm64ec___atomic_fetch_or_1}, // #__atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::arm64ec___atomic_fetch_or_2}, // #__atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::arm64ec___atomic_fetch_or_4}, // #__atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::arm64ec___atomic_fetch_or_8}, // #__atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::arm64ec___atomic_fetch_or_16}, // #__atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::arm64ec___atomic_fetch_sub_1}, // #__atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::arm64ec___atomic_fetch_sub_2}, // #__atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::arm64ec___atomic_fetch_sub_4}, // #__atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::arm64ec___atomic_fetch_sub_8}, // #__atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::arm64ec___atomic_fetch_sub_16}, // #__atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::arm64ec___atomic_fetch_xor_1}, // #__atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::arm64ec___atomic_fetch_xor_2}, // #__atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::arm64ec___atomic_fetch_xor_4}, // #__atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::arm64ec___atomic_fetch_xor_8}, // #__atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::arm64ec___atomic_fetch_xor_16}, // #__atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::arm64ec___atomic_load}, // #__atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::arm64ec___atomic_load_1}, // #__atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::arm64ec___atomic_load_2}, // #__atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::arm64ec___atomic_load_4}, // #__atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::arm64ec___atomic_load_8}, // #__atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::arm64ec___atomic_load_16}, // #__atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::arm64ec___atomic_store}, // #__atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::arm64ec___atomic_store_1}, // #__atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::arm64ec___atomic_store_2}, // #__atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::arm64ec___atomic_store_4}, // #__atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::arm64ec___atomic_store_8}, // #__atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::arm64ec___atomic_store_16}, // #__atomic_store_16
        {RTLIB::CALLOC, RTLIB::arm64ec_calloc}, // #calloc
        {RTLIB::CBRT_F32, RTLIB::arm64ec_cbrtf}, // #cbrtf
        {RTLIB::CBRT_F64, RTLIB::arm64ec_cbrt}, // #cbrt
        {RTLIB::CBRT_F128, RTLIB::arm64ec_cbrt_f128}, // #cbrtl
        {RTLIB::CEIL_F32, RTLIB::arm64ec_ceilf}, // #ceilf
        {RTLIB::CEIL_F64, RTLIB::arm64ec_ceil}, // #ceil
        {RTLIB::CEIL_F128, RTLIB::arm64ec_ceil_f128}, // #ceill
        {RTLIB::CLEAR_CACHE, RTLIB::arm64ec___clear_cache}, // #__clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::arm64ec_copysignf}, // #copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::arm64ec_copysign}, // #copysign
        {RTLIB::COPYSIGN_F128, RTLIB::arm64ec_copysign_f128}, // #copysignl
        {RTLIB::COSH_F32, RTLIB::arm64ec_coshf}, // #coshf
        {RTLIB::COSH_F64, RTLIB::arm64ec_cosh}, // #cosh
        {RTLIB::COSH_F128, RTLIB::arm64ec_cosh_f128}, // #coshl
        {RTLIB::COS_F32, RTLIB::arm64ec_cosf}, // #cosf
        {RTLIB::COS_F64, RTLIB::arm64ec_cos}, // #cos
        {RTLIB::COS_F128, RTLIB::arm64ec_cos_f128}, // #cosl
        {RTLIB::CTLZ_I32, RTLIB::arm64ec___clzsi2}, // #__clzsi2
        {RTLIB::CTLZ_I64, RTLIB::arm64ec___clzdi2}, // #__clzdi2
        {RTLIB::CTLZ_I128, RTLIB::arm64ec___clzti2}, // #__clzti2
        {RTLIB::CTPOP_I32, RTLIB::arm64ec___popcountsi2}, // #__popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::arm64ec___popcountdi2}, // #__popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::arm64ec___popcountti2}, // #__popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::arm64ec___cxa_end_cleanup}, // #__cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::arm64ec___llvm_deoptimize}, // #__llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::arm64ec___divsf3}, // #__divsf3
        {RTLIB::DIV_F64, RTLIB::arm64ec___divdf3}, // #__divdf3
        {RTLIB::DIV_F128, RTLIB::arm64ec___divtf3}, // #__divtf3
        {RTLIB::EXP2_F32, RTLIB::arm64ec_exp2f}, // #exp2f
        {RTLIB::EXP2_F64, RTLIB::arm64ec_exp2}, // #exp2
        {RTLIB::EXP2_F128, RTLIB::arm64ec_exp2_f128}, // #exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::arm64ec___exp2f_finite}, // #__exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::arm64ec___exp2_finite}, // #__exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::arm64ec___exp2l_finite_f128}, // #__exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::arm64ec_exp10f}, // #exp10f
        {RTLIB::EXP10_F64, RTLIB::arm64ec_exp10}, // #exp10
        {RTLIB::EXP10_F128, RTLIB::arm64ec_exp10l_f128}, // #exp10l
        {RTLIB::EXP_F32, RTLIB::arm64ec_expf}, // #expf
        {RTLIB::EXP_F64, RTLIB::arm64ec_exp}, // #exp
        {RTLIB::EXP_F128, RTLIB::arm64ec_exp_f128}, // #expl
        {RTLIB::EXP_FINITE_F32, RTLIB::arm64ec___expf_finite}, // #__expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::arm64ec___exp_finite}, // #__exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::arm64ec___expl_finite_f128}, // #__expl_finite
        {RTLIB::FEGETENV, RTLIB::arm64ec_fegetenv}, // #fegetenv
        {RTLIB::FEGETMODE, RTLIB::arm64ec_fegetmode}, // #fegetmode
        {RTLIB::FESETENV, RTLIB::arm64ec_fesetenv}, // #fesetenv
        {RTLIB::FESETMODE, RTLIB::arm64ec_fesetmode}, // #fesetmode
        {RTLIB::FLOOR_F32, RTLIB::arm64ec_floorf}, // #floorf
        {RTLIB::FLOOR_F64, RTLIB::arm64ec_floor}, // #floor
        {RTLIB::FLOOR_F128, RTLIB::arm64ec_floor_f128}, // #floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::arm64ec_fmaximumf}, // #fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::arm64ec_fmaximum}, // #fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::arm64ec_fmaximum_f128}, // #fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::arm64ec_fmaximum_numf}, // #fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::arm64ec_fmaximum_num}, // #fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::arm64ec_fmaximum_num_f128}, // #fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::arm64ec_fmaxf}, // #fmaxf
        {RTLIB::FMAX_F64, RTLIB::arm64ec_fmax}, // #fmax
        {RTLIB::FMAX_F128, RTLIB::arm64ec_fmax_f128}, // #fmaxl
        {RTLIB::FMA_F32, RTLIB::arm64ec_fmaf}, // #fmaf
        {RTLIB::FMA_F64, RTLIB::arm64ec_fma}, // #fma
        {RTLIB::FMA_F128, RTLIB::arm64ec_fma_f128}, // #fmal
        {RTLIB::FMINIMUM_F32, RTLIB::arm64ec_fminimumf}, // #fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::arm64ec_fminimum}, // #fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::arm64ec_fminimum_f128}, // #fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::arm64ec_fminimum_numf}, // #fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::arm64ec_fminimum_num}, // #fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::arm64ec_fminimum_num_f128}, // #fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::arm64ec_fminf}, // #fminf
        {RTLIB::FMIN_F64, RTLIB::arm64ec_fmin}, // #fmin
        {RTLIB::FMIN_F128, RTLIB::arm64ec_fmin_f128}, // #fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::arm64ec___extendbfsf2}, // #__extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::arm64ec___extendhfsf2}, // #__extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::arm64ec___extendhfdf2}, // #__extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::arm64ec___extendhftf2}, // #__extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::arm64ec___extendsfdf2}, // #__extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::arm64ec___extendsftf2}, // #__extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::arm64ec___extenddftf2}, // #__extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::arm64ec___truncsfbf2}, // #__truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::arm64ec___truncsfhf2}, // #__truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::arm64ec___truncdfbf2}, // #__truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::arm64ec___truncdfhf2}, // #__truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::arm64ec___truncdfsf2}, // #__truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::arm64ec___trunctfbf2}, // #__trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::arm64ec___trunctfhf2_f128}, // #__trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::arm64ec___trunctfsf2}, // #__trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::arm64ec___trunctfdf2}, // #__trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::arm64ec___fixhfsi}, // #__fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::arm64ec___fixhfdi}, // #__fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::arm64ec___fixhfti}, // #__fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::arm64ec___fixsfsi}, // #__fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::arm64ec___fixsfdi}, // #__fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::arm64ec___fixsfti}, // #__fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::arm64ec___fixdfsi}, // #__fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::arm64ec___fixdfdi}, // #__fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::arm64ec___fixdfti}, // #__fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::arm64ec___fixtfsi}, // #__fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::arm64ec___fixtfdi_f128}, // #__fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::arm64ec___fixtfti_f128}, // #__fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::arm64ec___fixunshfsi}, // #__fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::arm64ec___fixunshfdi}, // #__fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::arm64ec___fixunshfti}, // #__fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::arm64ec___fixunssfsi}, // #__fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::arm64ec___fixunssfdi}, // #__fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::arm64ec___fixunssfti}, // #__fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::arm64ec___fixunsdfsi}, // #__fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::arm64ec___fixunsdfdi}, // #__fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::arm64ec___fixunsdfti}, // #__fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::arm64ec___fixunstfsi_f128}, // #__fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::arm64ec___fixunstfdi_f128}, // #__fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::arm64ec___fixunstfti_f128}, // #__fixunstfti
        {RTLIB::FREXP_F64, RTLIB::arm64ec_frexp}, // #frexp
        {RTLIB::LDEXP_F64, RTLIB::arm64ec_ldexp}, // #ldexp
        {RTLIB::LLRINT_F32, RTLIB::arm64ec_llrintf}, // #llrintf
        {RTLIB::LLRINT_F64, RTLIB::arm64ec_llrint}, // #llrint
        {RTLIB::LLRINT_F128, RTLIB::arm64ec_llrint_f128}, // #llrintl
        {RTLIB::LLROUND_F32, RTLIB::arm64ec_llroundf}, // #llroundf
        {RTLIB::LLROUND_F64, RTLIB::arm64ec_llround}, // #llround
        {RTLIB::LLROUND_F128, RTLIB::arm64ec_llround_f128}, // #llroundl
        {RTLIB::LOG2_F32, RTLIB::arm64ec_log2f}, // #log2f
        {RTLIB::LOG2_F64, RTLIB::arm64ec_log2}, // #log2
        {RTLIB::LOG2_F128, RTLIB::arm64ec_log2_f128}, // #log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::arm64ec___log2f_finite}, // #__log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::arm64ec___log2_finite}, // #__log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::arm64ec___log2l_finite_f128}, // #__log2l_finite
        {RTLIB::LOG10_F32, RTLIB::arm64ec_log10f}, // #log10f
        {RTLIB::LOG10_F64, RTLIB::arm64ec_log10}, // #log10
        {RTLIB::LOG10_F128, RTLIB::arm64ec_log10_f128}, // #log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::arm64ec___log10f_finite}, // #__log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::arm64ec___log10_finite}, // #__log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::arm64ec___log10l_finite_f128}, // #__log10l_finite
        {RTLIB::LOG_F32, RTLIB::arm64ec_logf}, // #logf
        {RTLIB::LOG_F64, RTLIB::arm64ec_log}, // #log
        {RTLIB::LOG_F128, RTLIB::arm64ec_log_f128}, // #logl
        {RTLIB::LOG_FINITE_F32, RTLIB::arm64ec___logf_finite}, // #__logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::arm64ec___log_finite}, // #__log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::arm64ec___logl_finite_f128}, // #__logl_finite
        {RTLIB::LRINT_F32, RTLIB::arm64ec_lrintf}, // #lrintf
        {RTLIB::LRINT_F64, RTLIB::arm64ec_lrint}, // #lrint
        {RTLIB::LRINT_F128, RTLIB::arm64ec_lrint_f128}, // #lrintl
        {RTLIB::LROUND_F32, RTLIB::arm64ec_lroundf}, // #lroundf
        {RTLIB::LROUND_F64, RTLIB::arm64ec_lround}, // #lround
        {RTLIB::LROUND_F128, RTLIB::arm64ec_lround_f128}, // #lroundl
        {RTLIB::MEMCPY, RTLIB::arm64ec_memcpy}, // #memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_1}, // #__llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_2}, // #__llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_4}, // #__llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_8}, // #__llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_16}, // #__llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::arm64ec_memmove}, // #memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_1}, // #__llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_2}, // #__llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_4}, // #__llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_8}, // #__llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_16}, // #__llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::arm64ec_memset}, // #memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::arm64ec___llvm_memset_element_unordered_atomic_1}, // #__llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::arm64ec___llvm_memset_element_unordered_atomic_2}, // #__llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::arm64ec___llvm_memset_element_unordered_atomic_4}, // #__llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::arm64ec___llvm_memset_element_unordered_atomic_8}, // #__llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::arm64ec___llvm_memset_element_unordered_atomic_16}, // #__llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::arm64ec_modff}, // #modff
        {RTLIB::MODF_F64, RTLIB::arm64ec_modf}, // #modf
        {RTLIB::MODF_F128, RTLIB::arm64ec_modf_f128}, // #modfl
        {RTLIB::MULO_I32, RTLIB::arm64ec___mulosi4}, // #__mulosi4
        {RTLIB::MUL_F32, RTLIB::arm64ec___mulsf3}, // #__mulsf3
        {RTLIB::MUL_F64, RTLIB::arm64ec___muldf3}, // #__muldf3
        {RTLIB::MUL_F128, RTLIB::arm64ec___multf3}, // #__multf3
        {RTLIB::MUL_I8, RTLIB::arm64ec___mulqi3}, // #__mulqi3
        {RTLIB::MUL_I16, RTLIB::arm64ec___mulhi3}, // #__mulhi3
        {RTLIB::MUL_I32, RTLIB::arm64ec___mulsi3}, // #__mulsi3
        {RTLIB::MUL_I64, RTLIB::arm64ec___muldi3}, // #__muldi3
        {RTLIB::MUL_I128, RTLIB::arm64ec___multi3}, // #__multi3
        {RTLIB::NEARBYINT_F32, RTLIB::arm64ec_nearbyintf}, // #nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::arm64ec_nearbyint}, // #nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::arm64ec_nearbyint_f128}, // #nearbyintl
        {RTLIB::NEG_I32, RTLIB::arm64ec___negsi2}, // #__negsi2
        {RTLIB::NEG_I64, RTLIB::arm64ec___negdi2}, // #__negdi2
        {RTLIB::OEQ_F32, RTLIB::arm64ec___eqsf2}, // #__eqsf2
        {RTLIB::OEQ_F64, RTLIB::arm64ec___eqdf2}, // #__eqdf2
        {RTLIB::OEQ_F128, RTLIB::arm64ec___eqtf2}, // #__eqtf2
        {RTLIB::OGE_F32, RTLIB::arm64ec___gesf2}, // #__gesf2
        {RTLIB::OGE_F64, RTLIB::arm64ec___gedf2}, // #__gedf2
        {RTLIB::OGE_F128, RTLIB::arm64ec___getf2}, // #__getf2
        {RTLIB::OGT_F32, RTLIB::arm64ec___gtsf2}, // #__gtsf2
        {RTLIB::OGT_F64, RTLIB::arm64ec___gtdf2}, // #__gtdf2
        {RTLIB::OGT_F128, RTLIB::arm64ec___gttf2}, // #__gttf2
        {RTLIB::OLE_F32, RTLIB::arm64ec___lesf2}, // #__lesf2
        {RTLIB::OLE_F64, RTLIB::arm64ec___ledf2}, // #__ledf2
        {RTLIB::OLE_F128, RTLIB::arm64ec___letf2}, // #__letf2
        {RTLIB::OLT_F32, RTLIB::arm64ec___ltsf2}, // #__ltsf2
        {RTLIB::OLT_F64, RTLIB::arm64ec___ltdf2}, // #__ltdf2
        {RTLIB::OLT_F128, RTLIB::arm64ec___lttf2}, // #__lttf2
        {RTLIB::OUTLINE_ATOMIC_CAS1_ACQ, RTLIB::arm64ec___aarch64_cas1_acq}, // #__aarch64_cas1_acq
        {RTLIB::OUTLINE_ATOMIC_CAS1_ACQ_REL, RTLIB::arm64ec___aarch64_cas1_acq_rel}, // #__aarch64_cas1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS1_REL, RTLIB::arm64ec___aarch64_cas1_rel}, // #__aarch64_cas1_rel
        {RTLIB::OUTLINE_ATOMIC_CAS1_RELAX, RTLIB::arm64ec___aarch64_cas1_relax}, // #__aarch64_cas1_relax
        {RTLIB::OUTLINE_ATOMIC_CAS2_ACQ, RTLIB::arm64ec___aarch64_cas2_acq}, // #__aarch64_cas2_acq
        {RTLIB::OUTLINE_ATOMIC_CAS2_ACQ_REL, RTLIB::arm64ec___aarch64_cas2_acq_rel}, // #__aarch64_cas2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS2_REL, RTLIB::arm64ec___aarch64_cas2_rel}, // #__aarch64_cas2_rel
        {RTLIB::OUTLINE_ATOMIC_CAS2_RELAX, RTLIB::arm64ec___aarch64_cas2_relax}, // #__aarch64_cas2_relax
        {RTLIB::OUTLINE_ATOMIC_CAS4_ACQ, RTLIB::arm64ec___aarch64_cas4_acq}, // #__aarch64_cas4_acq
        {RTLIB::OUTLINE_ATOMIC_CAS4_ACQ_REL, RTLIB::arm64ec___aarch64_cas4_acq_rel}, // #__aarch64_cas4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS4_REL, RTLIB::arm64ec___aarch64_cas4_rel}, // #__aarch64_cas4_rel
        {RTLIB::OUTLINE_ATOMIC_CAS4_RELAX, RTLIB::arm64ec___aarch64_cas4_relax}, // #__aarch64_cas4_relax
        {RTLIB::OUTLINE_ATOMIC_CAS8_ACQ, RTLIB::arm64ec___aarch64_cas8_acq}, // #__aarch64_cas8_acq
        {RTLIB::OUTLINE_ATOMIC_CAS8_ACQ_REL, RTLIB::arm64ec___aarch64_cas8_acq_rel}, // #__aarch64_cas8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS8_REL, RTLIB::arm64ec___aarch64_cas8_rel}, // #__aarch64_cas8_rel
        {RTLIB::OUTLINE_ATOMIC_CAS8_RELAX, RTLIB::arm64ec___aarch64_cas8_relax}, // #__aarch64_cas8_relax
        {RTLIB::OUTLINE_ATOMIC_CAS16_ACQ, RTLIB::arm64ec___aarch64_cas16_acq}, // #__aarch64_cas16_acq
        {RTLIB::OUTLINE_ATOMIC_CAS16_ACQ_REL, RTLIB::arm64ec___aarch64_cas16_acq_rel}, // #__aarch64_cas16_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS16_REL, RTLIB::arm64ec___aarch64_cas16_rel}, // #__aarch64_cas16_rel
        {RTLIB::OUTLINE_ATOMIC_CAS16_RELAX, RTLIB::arm64ec___aarch64_cas16_relax}, // #__aarch64_cas16_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ, RTLIB::arm64ec___aarch64_ldadd1_acq}, // #__aarch64_ldadd1_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ_REL, RTLIB::arm64ec___aarch64_ldadd1_acq_rel}, // #__aarch64_ldadd1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD1_REL, RTLIB::arm64ec___aarch64_ldadd1_rel}, // #__aarch64_ldadd1_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD1_RELAX, RTLIB::arm64ec___aarch64_ldadd1_relax}, // #__aarch64_ldadd1_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ, RTLIB::arm64ec___aarch64_ldadd2_acq}, // #__aarch64_ldadd2_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ_REL, RTLIB::arm64ec___aarch64_ldadd2_acq_rel}, // #__aarch64_ldadd2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD2_REL, RTLIB::arm64ec___aarch64_ldadd2_rel}, // #__aarch64_ldadd2_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD2_RELAX, RTLIB::arm64ec___aarch64_ldadd2_relax}, // #__aarch64_ldadd2_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ, RTLIB::arm64ec___aarch64_ldadd4_acq}, // #__aarch64_ldadd4_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ_REL, RTLIB::arm64ec___aarch64_ldadd4_acq_rel}, // #__aarch64_ldadd4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD4_REL, RTLIB::arm64ec___aarch64_ldadd4_rel}, // #__aarch64_ldadd4_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD4_RELAX, RTLIB::arm64ec___aarch64_ldadd4_relax}, // #__aarch64_ldadd4_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ, RTLIB::arm64ec___aarch64_ldadd8_acq}, // #__aarch64_ldadd8_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ_REL, RTLIB::arm64ec___aarch64_ldadd8_acq_rel}, // #__aarch64_ldadd8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD8_REL, RTLIB::arm64ec___aarch64_ldadd8_rel}, // #__aarch64_ldadd8_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD8_RELAX, RTLIB::arm64ec___aarch64_ldadd8_relax}, // #__aarch64_ldadd8_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ, RTLIB::arm64ec___aarch64_ldclr1_acq}, // #__aarch64_ldclr1_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ_REL, RTLIB::arm64ec___aarch64_ldclr1_acq_rel}, // #__aarch64_ldclr1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_REL, RTLIB::arm64ec___aarch64_ldclr1_rel}, // #__aarch64_ldclr1_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_RELAX, RTLIB::arm64ec___aarch64_ldclr1_relax}, // #__aarch64_ldclr1_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ, RTLIB::arm64ec___aarch64_ldclr2_acq}, // #__aarch64_ldclr2_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ_REL, RTLIB::arm64ec___aarch64_ldclr2_acq_rel}, // #__aarch64_ldclr2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_REL, RTLIB::arm64ec___aarch64_ldclr2_rel}, // #__aarch64_ldclr2_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_RELAX, RTLIB::arm64ec___aarch64_ldclr2_relax}, // #__aarch64_ldclr2_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ, RTLIB::arm64ec___aarch64_ldclr4_acq}, // #__aarch64_ldclr4_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ_REL, RTLIB::arm64ec___aarch64_ldclr4_acq_rel}, // #__aarch64_ldclr4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_REL, RTLIB::arm64ec___aarch64_ldclr4_rel}, // #__aarch64_ldclr4_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_RELAX, RTLIB::arm64ec___aarch64_ldclr4_relax}, // #__aarch64_ldclr4_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ, RTLIB::arm64ec___aarch64_ldclr8_acq}, // #__aarch64_ldclr8_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ_REL, RTLIB::arm64ec___aarch64_ldclr8_acq_rel}, // #__aarch64_ldclr8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_REL, RTLIB::arm64ec___aarch64_ldclr8_rel}, // #__aarch64_ldclr8_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_RELAX, RTLIB::arm64ec___aarch64_ldclr8_relax}, // #__aarch64_ldclr8_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ, RTLIB::arm64ec___aarch64_ldeor1_acq}, // #__aarch64_ldeor1_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ_REL, RTLIB::arm64ec___aarch64_ldeor1_acq_rel}, // #__aarch64_ldeor1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_REL, RTLIB::arm64ec___aarch64_ldeor1_rel}, // #__aarch64_ldeor1_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_RELAX, RTLIB::arm64ec___aarch64_ldeor1_relax}, // #__aarch64_ldeor1_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ, RTLIB::arm64ec___aarch64_ldeor2_acq}, // #__aarch64_ldeor2_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ_REL, RTLIB::arm64ec___aarch64_ldeor2_acq_rel}, // #__aarch64_ldeor2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_REL, RTLIB::arm64ec___aarch64_ldeor2_rel}, // #__aarch64_ldeor2_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_RELAX, RTLIB::arm64ec___aarch64_ldeor2_relax}, // #__aarch64_ldeor2_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ, RTLIB::arm64ec___aarch64_ldeor4_acq}, // #__aarch64_ldeor4_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ_REL, RTLIB::arm64ec___aarch64_ldeor4_acq_rel}, // #__aarch64_ldeor4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_REL, RTLIB::arm64ec___aarch64_ldeor4_rel}, // #__aarch64_ldeor4_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_RELAX, RTLIB::arm64ec___aarch64_ldeor4_relax}, // #__aarch64_ldeor4_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ, RTLIB::arm64ec___aarch64_ldeor8_acq}, // #__aarch64_ldeor8_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ_REL, RTLIB::arm64ec___aarch64_ldeor8_acq_rel}, // #__aarch64_ldeor8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_REL, RTLIB::arm64ec___aarch64_ldeor8_rel}, // #__aarch64_ldeor8_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_RELAX, RTLIB::arm64ec___aarch64_ldeor8_relax}, // #__aarch64_ldeor8_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ, RTLIB::arm64ec___aarch64_ldset1_acq}, // #__aarch64_ldset1_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ_REL, RTLIB::arm64ec___aarch64_ldset1_acq_rel}, // #__aarch64_ldset1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET1_REL, RTLIB::arm64ec___aarch64_ldset1_rel}, // #__aarch64_ldset1_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET1_RELAX, RTLIB::arm64ec___aarch64_ldset1_relax}, // #__aarch64_ldset1_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ, RTLIB::arm64ec___aarch64_ldset2_acq}, // #__aarch64_ldset2_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ_REL, RTLIB::arm64ec___aarch64_ldset2_acq_rel}, // #__aarch64_ldset2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET2_REL, RTLIB::arm64ec___aarch64_ldset2_rel}, // #__aarch64_ldset2_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET2_RELAX, RTLIB::arm64ec___aarch64_ldset2_relax}, // #__aarch64_ldset2_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ, RTLIB::arm64ec___aarch64_ldset4_acq}, // #__aarch64_ldset4_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ_REL, RTLIB::arm64ec___aarch64_ldset4_acq_rel}, // #__aarch64_ldset4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET4_REL, RTLIB::arm64ec___aarch64_ldset4_rel}, // #__aarch64_ldset4_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET4_RELAX, RTLIB::arm64ec___aarch64_ldset4_relax}, // #__aarch64_ldset4_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ, RTLIB::arm64ec___aarch64_ldset8_acq}, // #__aarch64_ldset8_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ_REL, RTLIB::arm64ec___aarch64_ldset8_acq_rel}, // #__aarch64_ldset8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET8_REL, RTLIB::arm64ec___aarch64_ldset8_rel}, // #__aarch64_ldset8_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET8_RELAX, RTLIB::arm64ec___aarch64_ldset8_relax}, // #__aarch64_ldset8_relax
        {RTLIB::OUTLINE_ATOMIC_SWP1_ACQ, RTLIB::arm64ec___aarch64_swp1_acq}, // #__aarch64_swp1_acq
        {RTLIB::OUTLINE_ATOMIC_SWP1_ACQ_REL, RTLIB::arm64ec___aarch64_swp1_acq_rel}, // #__aarch64_swp1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP1_REL, RTLIB::arm64ec___aarch64_swp1_rel}, // #__aarch64_swp1_rel
        {RTLIB::OUTLINE_ATOMIC_SWP1_RELAX, RTLIB::arm64ec___aarch64_swp1_relax}, // #__aarch64_swp1_relax
        {RTLIB::OUTLINE_ATOMIC_SWP2_ACQ, RTLIB::arm64ec___aarch64_swp2_acq}, // #__aarch64_swp2_acq
        {RTLIB::OUTLINE_ATOMIC_SWP2_ACQ_REL, RTLIB::arm64ec___aarch64_swp2_acq_rel}, // #__aarch64_swp2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP2_REL, RTLIB::arm64ec___aarch64_swp2_rel}, // #__aarch64_swp2_rel
        {RTLIB::OUTLINE_ATOMIC_SWP2_RELAX, RTLIB::arm64ec___aarch64_swp2_relax}, // #__aarch64_swp2_relax
        {RTLIB::OUTLINE_ATOMIC_SWP4_ACQ, RTLIB::arm64ec___aarch64_swp4_acq}, // #__aarch64_swp4_acq
        {RTLIB::OUTLINE_ATOMIC_SWP4_ACQ_REL, RTLIB::arm64ec___aarch64_swp4_acq_rel}, // #__aarch64_swp4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP4_REL, RTLIB::arm64ec___aarch64_swp4_rel}, // #__aarch64_swp4_rel
        {RTLIB::OUTLINE_ATOMIC_SWP4_RELAX, RTLIB::arm64ec___aarch64_swp4_relax}, // #__aarch64_swp4_relax
        {RTLIB::OUTLINE_ATOMIC_SWP8_ACQ, RTLIB::arm64ec___aarch64_swp8_acq}, // #__aarch64_swp8_acq
        {RTLIB::OUTLINE_ATOMIC_SWP8_ACQ_REL, RTLIB::arm64ec___aarch64_swp8_acq_rel}, // #__aarch64_swp8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP8_REL, RTLIB::arm64ec___aarch64_swp8_rel}, // #__aarch64_swp8_rel
        {RTLIB::OUTLINE_ATOMIC_SWP8_RELAX, RTLIB::arm64ec___aarch64_swp8_relax}, // #__aarch64_swp8_relax
        {RTLIB::POWI_F128, RTLIB::arm64ec___powitf2_f128}, // #__powitf2
        {RTLIB::POW_F32, RTLIB::arm64ec_powf}, // #powf
        {RTLIB::POW_F64, RTLIB::arm64ec_pow}, // #pow
        {RTLIB::POW_F128, RTLIB::arm64ec_pow_f128}, // #powl
        {RTLIB::POW_FINITE_F32, RTLIB::arm64ec___powf_finite}, // #__powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::arm64ec___pow_finite}, // #__pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::arm64ec___powl_finite_f128}, // #__powl_finite
        {RTLIB::REM_F32, RTLIB::arm64ec_fmodf}, // #fmodf
        {RTLIB::REM_F64, RTLIB::arm64ec_fmod}, // #fmod
        {RTLIB::REM_F128, RTLIB::arm64ec_fmodl_f128}, // #fmodl
        {RTLIB::RINT_F32, RTLIB::arm64ec_rintf}, // #rintf
        {RTLIB::RINT_F64, RTLIB::arm64ec_rint}, // #rint
        {RTLIB::RINT_F128, RTLIB::arm64ec_rint_f128}, // #rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::arm64ec_roundevenf}, // #roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::arm64ec_roundeven}, // #roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::arm64ec_roundeven_f128}, // #roundevenl
        {RTLIB::ROUND_F32, RTLIB::arm64ec_roundf}, // #roundf
        {RTLIB::ROUND_F64, RTLIB::arm64ec_round}, // #round
        {RTLIB::ROUND_F128, RTLIB::arm64ec_round_f128}, // #roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::arm64ec___safestack_pointer_address}, // #__safestack_pointer_address
        {RTLIB::SC_MEMCPY, RTLIB::arm64ec___arm_sc_memcpy}, // #__arm_sc_memcpy
        {RTLIB::SC_MEMMOVE, RTLIB::arm64ec___arm_sc_memmove}, // #__arm_sc_memmove
        {RTLIB::SC_MEMSET, RTLIB::arm64ec___arm_sc_memset}, // #__arm_sc_memset
        {RTLIB::SDIV_I8, RTLIB::arm64ec___divqi3}, // #__divqi3
        {RTLIB::SDIV_I16, RTLIB::arm64ec___divhi3}, // #__divhi3
        {RTLIB::SDIV_I32, RTLIB::arm64ec___divsi3}, // #__divsi3
        {RTLIB::SDIV_I64, RTLIB::arm64ec___divdi3}, // #__divdi3
        {RTLIB::SDIV_I128, RTLIB::arm64ec___divti3}, // #__divti3
        {RTLIB::SHL_I16, RTLIB::arm64ec___ashlhi3}, // #__ashlhi3
        {RTLIB::SHL_I32, RTLIB::arm64ec___ashlsi3}, // #__ashlsi3
        {RTLIB::SHL_I64, RTLIB::arm64ec___ashldi3}, // #__ashldi3
        {RTLIB::SHL_I128, RTLIB::arm64ec___ashlti3}, // #__ashlti3
        {RTLIB::SINCOSPI_F32, RTLIB::arm64ec_sincospif}, // #sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::arm64ec_sincospi}, // #sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::arm64ec_sincospi_f128}, // #sincospil
        {RTLIB::SINH_F32, RTLIB::arm64ec_sinhf}, // #sinhf
        {RTLIB::SINH_F64, RTLIB::arm64ec_sinh}, // #sinh
        {RTLIB::SINH_F128, RTLIB::arm64ec_sinh_f128}, // #sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::arm64ec___floatsihf}, // #__floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::arm64ec___floatsisf}, // #__floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::arm64ec___floatsidf}, // #__floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::arm64ec___floatsitf}, // #__floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::arm64ec___floatdibf}, // #__floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::arm64ec___floatdihf}, // #__floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::arm64ec___floatdisf}, // #__floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::arm64ec___floatdidf}, // #__floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::arm64ec___floatditf_f128}, // #__floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::arm64ec___floattihf}, // #__floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::arm64ec___floattisf}, // #__floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::arm64ec___floattidf}, // #__floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::arm64ec___floattitf_f128}, // #__floattitf
        {RTLIB::SIN_F32, RTLIB::arm64ec_sinf}, // #sinf
        {RTLIB::SIN_F64, RTLIB::arm64ec_sin}, // #sin
        {RTLIB::SIN_F128, RTLIB::arm64ec_sin_f128}, // #sinl
        {RTLIB::SQRT_F32, RTLIB::arm64ec_sqrtf}, // #sqrtf
        {RTLIB::SQRT_F64, RTLIB::arm64ec_sqrt}, // #sqrt
        {RTLIB::SQRT_F128, RTLIB::arm64ec_sqrt_f128}, // #sqrtl
        {RTLIB::SRA_I16, RTLIB::arm64ec___ashrhi3}, // #__ashrhi3
        {RTLIB::SRA_I32, RTLIB::arm64ec___ashrsi3}, // #__ashrsi3
        {RTLIB::SRA_I64, RTLIB::arm64ec___ashrdi3}, // #__ashrdi3
        {RTLIB::SRA_I128, RTLIB::arm64ec___ashrti3}, // #__ashrti3
        {RTLIB::SREM_I8, RTLIB::arm64ec___modqi3}, // #__modqi3
        {RTLIB::SREM_I16, RTLIB::arm64ec___modhi3}, // #__modhi3
        {RTLIB::SREM_I32, RTLIB::arm64ec___modsi3}, // #__modsi3
        {RTLIB::SREM_I64, RTLIB::arm64ec___moddi3}, // #__moddi3
        {RTLIB::SREM_I128, RTLIB::arm64ec___modti3}, // #__modti3
        {RTLIB::SRL_I16, RTLIB::arm64ec___lshrhi3}, // #__lshrhi3
        {RTLIB::SRL_I32, RTLIB::arm64ec___lshrsi3}, // #__lshrsi3
        {RTLIB::SRL_I64, RTLIB::arm64ec___lshrdi3}, // #__lshrdi3
        {RTLIB::SRL_I128, RTLIB::arm64ec___lshrti3}, // #__lshrti3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::arm64ec___stack_chk_fail}, // #__stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::arm64ec___subsf3}, // #__subsf3
        {RTLIB::SUB_F64, RTLIB::arm64ec___subdf3}, // #__subdf3
        {RTLIB::SUB_F128, RTLIB::arm64ec___subtf3}, // #__subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::arm64ec___sync_fetch_and_add_1}, // #__sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::arm64ec___sync_fetch_and_add_2}, // #__sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::arm64ec___sync_fetch_and_add_4}, // #__sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::arm64ec___sync_fetch_and_add_8}, // #__sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::arm64ec___sync_fetch_and_add_16}, // #__sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::arm64ec___sync_fetch_and_and_1}, // #__sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::arm64ec___sync_fetch_and_and_2}, // #__sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::arm64ec___sync_fetch_and_and_4}, // #__sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::arm64ec___sync_fetch_and_and_8}, // #__sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::arm64ec___sync_fetch_and_and_16}, // #__sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::arm64ec___sync_fetch_and_max_1}, // #__sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::arm64ec___sync_fetch_and_max_2}, // #__sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::arm64ec___sync_fetch_and_max_4}, // #__sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::arm64ec___sync_fetch_and_max_8}, // #__sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::arm64ec___sync_fetch_and_max_16}, // #__sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::arm64ec___sync_fetch_and_min_1}, // #__sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::arm64ec___sync_fetch_and_min_2}, // #__sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::arm64ec___sync_fetch_and_min_4}, // #__sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::arm64ec___sync_fetch_and_min_8}, // #__sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::arm64ec___sync_fetch_and_min_16}, // #__sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::arm64ec___sync_fetch_and_nand_1}, // #__sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::arm64ec___sync_fetch_and_nand_2}, // #__sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::arm64ec___sync_fetch_and_nand_4}, // #__sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::arm64ec___sync_fetch_and_nand_8}, // #__sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::arm64ec___sync_fetch_and_nand_16}, // #__sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::arm64ec___sync_fetch_and_or_1}, // #__sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::arm64ec___sync_fetch_and_or_2}, // #__sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::arm64ec___sync_fetch_and_or_4}, // #__sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::arm64ec___sync_fetch_and_or_8}, // #__sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::arm64ec___sync_fetch_and_or_16}, // #__sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::arm64ec___sync_fetch_and_sub_1}, // #__sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::arm64ec___sync_fetch_and_sub_2}, // #__sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::arm64ec___sync_fetch_and_sub_4}, // #__sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::arm64ec___sync_fetch_and_sub_8}, // #__sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::arm64ec___sync_fetch_and_sub_16}, // #__sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::arm64ec___sync_fetch_and_umax_1}, // #__sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::arm64ec___sync_fetch_and_umax_2}, // #__sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::arm64ec___sync_fetch_and_umax_4}, // #__sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::arm64ec___sync_fetch_and_umax_8}, // #__sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::arm64ec___sync_fetch_and_umax_16}, // #__sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::arm64ec___sync_fetch_and_umin_1}, // #__sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::arm64ec___sync_fetch_and_umin_2}, // #__sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::arm64ec___sync_fetch_and_umin_4}, // #__sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::arm64ec___sync_fetch_and_umin_8}, // #__sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::arm64ec___sync_fetch_and_umin_16}, // #__sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::arm64ec___sync_fetch_and_xor_1}, // #__sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::arm64ec___sync_fetch_and_xor_2}, // #__sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::arm64ec___sync_fetch_and_xor_4}, // #__sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::arm64ec___sync_fetch_and_xor_8}, // #__sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::arm64ec___sync_fetch_and_xor_16}, // #__sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::arm64ec___sync_lock_test_and_set_1}, // #__sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::arm64ec___sync_lock_test_and_set_2}, // #__sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::arm64ec___sync_lock_test_and_set_4}, // #__sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::arm64ec___sync_lock_test_and_set_8}, // #__sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::arm64ec___sync_lock_test_and_set_16}, // #__sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::arm64ec___sync_val_compare_and_swap_1}, // #__sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::arm64ec___sync_val_compare_and_swap_2}, // #__sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::arm64ec___sync_val_compare_and_swap_4}, // #__sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::arm64ec___sync_val_compare_and_swap_8}, // #__sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::arm64ec___sync_val_compare_and_swap_16}, // #__sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::arm64ec_tanhf}, // #tanhf
        {RTLIB::TANH_F64, RTLIB::arm64ec_tanh}, // #tanh
        {RTLIB::TANH_F128, RTLIB::arm64ec_tanh_f128}, // #tanhl
        {RTLIB::TAN_F32, RTLIB::arm64ec_tanf}, // #tanf
        {RTLIB::TAN_F64, RTLIB::arm64ec_tan}, // #tan
        {RTLIB::TAN_F128, RTLIB::arm64ec_tan_f128}, // #tanl
        {RTLIB::TRUNC_F32, RTLIB::arm64ec_truncf}, // #truncf
        {RTLIB::TRUNC_F64, RTLIB::arm64ec_trunc}, // #trunc
        {RTLIB::TRUNC_F128, RTLIB::arm64ec_trunc_f128}, // #truncl
        {RTLIB::UDIV_I8, RTLIB::arm64ec___udivqi3}, // #__udivqi3
        {RTLIB::UDIV_I16, RTLIB::arm64ec___udivhi3}, // #__udivhi3
        {RTLIB::UDIV_I32, RTLIB::arm64ec___udivsi3}, // #__udivsi3
        {RTLIB::UDIV_I64, RTLIB::arm64ec___udivdi3}, // #__udivdi3
        {RTLIB::UDIV_I128, RTLIB::arm64ec___udivti3}, // #__udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::arm64ec___floatunsihf}, // #__floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::arm64ec___floatunsisf}, // #__floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::arm64ec___floatunsidf}, // #__floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::arm64ec___floatunsitf}, // #__floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::arm64ec___floatundibf}, // #__floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::arm64ec___floatundihf}, // #__floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::arm64ec___floatundisf}, // #__floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::arm64ec___floatundidf}, // #__floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::arm64ec___floatunditf_f128}, // #__floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::arm64ec___floatuntihf}, // #__floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::arm64ec___floatuntisf}, // #__floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::arm64ec___floatuntidf}, // #__floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::arm64ec___floatuntitf_f128}, // #__floatuntitf
        {RTLIB::UNE_F32, RTLIB::arm64ec___nesf2}, // #__nesf2
        {RTLIB::UNE_F64, RTLIB::arm64ec___nedf2}, // #__nedf2
        {RTLIB::UNE_F128, RTLIB::arm64ec___netf2}, // #__netf2
        {RTLIB::UNWIND_RESUME, RTLIB::arm64ec__Unwind_Resume}, // #_Unwind_Resume
        {RTLIB::UO_F32, RTLIB::arm64ec___unordsf2}, // #__unordsf2
        {RTLIB::UO_F64, RTLIB::arm64ec___unorddf2}, // #__unorddf2
        {RTLIB::UO_F128, RTLIB::arm64ec___unordtf2}, // #__unordtf2
        {RTLIB::UREM_I8, RTLIB::arm64ec___umodqi3}, // #__umodqi3
        {RTLIB::UREM_I16, RTLIB::arm64ec___umodhi3}, // #__umodhi3
        {RTLIB::UREM_I32, RTLIB::arm64ec___umodsi3}, // #__umodsi3
        {RTLIB::UREM_I64, RTLIB::arm64ec___umoddi3}, // #__umoddi3
        {RTLIB::UREM_I128, RTLIB::arm64ec___umodti3}, // #__umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    return;
  }

  if (TT.getArch() == Triple::x86) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F80, RTLIB::acos_f80}, // acosl
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F80, RTLIB::__addxf3}, // __addxf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F80, RTLIB::asin_f80}, // asinl
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F80, RTLIB::atan2_f80}, // atan2l
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F80, RTLIB::atan_f80}, // atanl
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F80, RTLIB::cbrt_f80}, // cbrtl
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F80, RTLIB::ceil_f80}, // ceill
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F80, RTLIB::copysign_f80}, // copysignl
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F80, RTLIB::cosh_f80}, // coshl
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F80, RTLIB::cos_f80}, // cosl
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F80, RTLIB::__divxf3}, // __divxf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F80, RTLIB::exp2_f80}, // exp2l
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F80, RTLIB::__exp2l_finite_f80}, // __exp2l_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F80, RTLIB::exp10l_f80}, // exp10l
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F80, RTLIB::exp_f80}, // expl
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F80, RTLIB::__expl_finite_f80}, // __expl_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F80, RTLIB::floor_f80}, // floorl
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F80, RTLIB::fmaximum_f80}, // fmaximuml
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F80, RTLIB::fmaximum_num_f80}, // fmaximum_numl
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F80, RTLIB::fmax_f80}, // fmaxl
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F80, RTLIB::fma_f80}, // fmal
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F80, RTLIB::fminimum_f80}, // fminimuml
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F80, RTLIB::fminimum_num_f80}, // fminimum_numl
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F80, RTLIB::fmin_f80}, // fminl
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F80, RTLIB::__extendhfxf2}, // __extendhfxf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPEXT_F80_F128, RTLIB::__extendxftf2}, // __extendxftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F80_BF16, RTLIB::__truncxfbf2}, // __truncxfbf2
        {RTLIB::FPROUND_F80_F16, RTLIB::__truncxfhf2}, // __truncxfhf2
        {RTLIB::FPROUND_F80_F32, RTLIB::__truncxfsf2}, // __truncxfsf2
        {RTLIB::FPROUND_F80_F64, RTLIB::__truncxfdf2}, // __truncxfdf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPROUND_F128_F80, RTLIB::__trunctfxf2}, // __trunctfxf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F80_I32, RTLIB::__fixxfsi}, // __fixxfsi
        {RTLIB::FPTOSINT_F80_I64, RTLIB::__fixxfdi}, // __fixxfdi
        {RTLIB::FPTOSINT_F80_I128, RTLIB::__fixxfti}, // __fixxfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F80_I32, RTLIB::__fixunsxfsi}, // __fixunsxfsi
        {RTLIB::FPTOUINT_F80_I64, RTLIB::__fixunsxfdi}, // __fixunsxfdi
        {RTLIB::FPTOUINT_F80_I128, RTLIB::__fixunsxfti}, // __fixunsxfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F80, RTLIB::llrint_f80}, // llrintl
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F80, RTLIB::llround_f80}, // llroundl
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F80, RTLIB::log2_f80}, // log2l
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F80, RTLIB::__log2l_finite_f80}, // __log2l_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F80, RTLIB::log10_f80}, // log10l
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F80, RTLIB::__log10l_finite_f80}, // __log10l_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F80, RTLIB::log_f80}, // logl
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F80, RTLIB::__logl_finite_f80}, // __logl_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F80, RTLIB::lrint_f80}, // lrintl
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F80, RTLIB::lround_f80}, // lroundl
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F80, RTLIB::modf_f80}, // modfl
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F80, RTLIB::__mulxf3}, // __mulxf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F80, RTLIB::nearbyint_f80}, // nearbyintl
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F80, RTLIB::pow_f80}, // powl
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F80, RTLIB::__powl_finite_f80}, // __powl_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F80, RTLIB::fmodl_f80}, // fmodl
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F80, RTLIB::rint_f80}, // rintl
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F80, RTLIB::roundeven_f80}, // roundevenl
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F80, RTLIB::round_f80}, // roundl
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F80, RTLIB::sincospi_f80}, // sincospil
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F80, RTLIB::sinh_f80}, // sinhl
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F80, RTLIB::__floatsixf}, // __floatsixf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F80, RTLIB::__floatdixf}, // __floatdixf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F80, RTLIB::__floattixf}, // __floattixf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F80, RTLIB::sin_f80}, // sinl
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F80, RTLIB::sqrt_f80}, // sqrtl
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F80, RTLIB::__subxf3}, // __subxf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F80, RTLIB::tanh_f80}, // tanhl
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F80, RTLIB::tan_f80}, // tanl
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F80, RTLIB::trunc_f80}, // truncl
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F80, RTLIB::__floatunsixf}, // __floatunsixf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F80, RTLIB::__floatundixf}, // __floatundixf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F80, RTLIB::__floatuntixf}, // __floatuntixf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (TT.isWindowsMSVCEnvironment() || TT.isWindowsItaniumEnvironment()) {
      static const LibcallImplPair LibraryCalls_anonymous_49[] = {
          {RTLIB::MUL_I64, RTLIB::_allmul}, // _allmul
          {RTLIB::SDIV_I64, RTLIB::_alldiv}, // _alldiv
          {RTLIB::SREM_I64, RTLIB::_allrem}, // _allrem
          {RTLIB::UDIV_I64, RTLIB::_aulldiv}, // _aulldiv
          {RTLIB::UREM_I64, RTLIB::_aullrem}, // _aullrem
      };

      for (const auto [Func, Impl] : LibraryCalls_anonymous_49) {
        setLibcallImpl(Func, Impl);
        setLibcallImplCallingConv(Impl, CallingConv::X86_StdCall);
      }

    }

    if (darwinHasExp10(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasExp10[] = {
          {RTLIB::EXP10_F32, RTLIB::__exp10f}, // __exp10f
          {RTLIB::EXP10_F64, RTLIB::__exp10}, // __exp10
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasExp10) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (darwinHasSinCosStret(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasSinCosStret[] = {
          {RTLIB::SINCOS_STRET_F32, RTLIB::__sincosf_stret}, // __sincosf_stret
          {RTLIB::SINCOS_STRET_F64, RTLIB::__sincos_stret}, // __sincos_stret
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasSinCosStret) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isMacOSX() && !TT.isMacOSXVersionLT(10, 6)) {
      static const LibcallImplPair LibraryCalls_darwinHas__bzero[] = {
          {RTLIB::BZERO, RTLIB::__bzero}, // __bzero
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHas__bzero) {
        setLibcallImpl(Func, Impl);
      }

    }

    if ((!TT.isOSWindows() || TT.isOSCygMing()) && !TT.isGNUEnvironment()) {
      static const LibcallImplPair LibraryCalls_hasFrexplLdexplF128[] = {
          {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
          {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasFrexplLdexplF128) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (hasSinCos(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos[] = {
          {RTLIB::SINCOS_F80, RTLIB::sincos_f80}, // sincosl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (hasSinCos_f32_f64(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos_f32_f64[] = {
          {RTLIB::SINCOS_F32, RTLIB::sincosf}, // sincosf
          {RTLIB::SINCOS_F64, RTLIB::sincos}, // sincos
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos_f32_f64) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isGNUEnvironment()) {
      static const LibcallImplPair LibraryCalls_isGNUEnvironment[] = {
          {RTLIB::ACOS_F128, RTLIB::acosf128}, // acosf128
          {RTLIB::ASIN_F128, RTLIB::asinf128}, // asinf128
          {RTLIB::ATAN2_F128, RTLIB::atan2f128}, // atan2f128
          {RTLIB::ATAN_F128, RTLIB::atanf128}, // atanf128
          {RTLIB::CBRT_F128, RTLIB::cbrtf128}, // cbrtf128
          {RTLIB::CEIL_F128, RTLIB::ceilf128}, // ceilf128
          {RTLIB::COPYSIGN_F128, RTLIB::copysignf128}, // copysignf128
          {RTLIB::COSH_F128, RTLIB::coshf128}, // coshf128
          {RTLIB::COS_F128, RTLIB::cosf128}, // cosf128
          {RTLIB::EXP2_F128, RTLIB::exp2f128}, // exp2f128
          {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2f128_finite}, // __exp2f128_finite
          {RTLIB::EXP10_F128, RTLIB::exp10f128}, // exp10f128
          {RTLIB::EXP10_FINITE_F128, RTLIB::__exp10f128_finite}, // __exp10f128_finite
          {RTLIB::EXP_F128, RTLIB::expf128}, // expf128
          {RTLIB::EXP_FINITE_F128, RTLIB::__expf128_finite}, // __expf128_finite
          {RTLIB::FLOOR_F128, RTLIB::floorf128}, // floorf128
          {RTLIB::FMAXIMUM_F128, RTLIB::fmaximumf128}, // fmaximumf128
          {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_numf128}, // fmaximum_numf128
          {RTLIB::FMAX_F128, RTLIB::fmaxf128}, // fmaxf128
          {RTLIB::FMA_F128, RTLIB::fmaf128}, // fmaf128
          {RTLIB::FMINIMUM_F128, RTLIB::fminimumf128}, // fminimumf128
          {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_numf128}, // fminimum_numf128
          {RTLIB::FMIN_F128, RTLIB::fminf128}, // fminf128
          {RTLIB::FREXP_F128, RTLIB::frexpf128}, // frexpf128
          {RTLIB::LDEXP_F128, RTLIB::ldexpf128}, // ldexpf128
          {RTLIB::LLRINT_F128, RTLIB::llrintf128}, // llrintf128
          {RTLIB::LLROUND_F128, RTLIB::llroundf128}, // llroundf128
          {RTLIB::LOG2_F128, RTLIB::log2f128}, // log2f128
          {RTLIB::LOG2_FINITE_F128, RTLIB::__log2f128_finite}, // __log2f128_finite
          {RTLIB::LOG10_F128, RTLIB::log10f128}, // log10f128
          {RTLIB::LOG10_FINITE_F128, RTLIB::__log10f128_finite}, // __log10f128_finite
          {RTLIB::LOG_F128, RTLIB::logf128}, // logf128
          {RTLIB::LOG_FINITE_F128, RTLIB::__logf128_finite}, // __logf128_finite
          {RTLIB::LRINT_F128, RTLIB::lrintf128}, // lrintf128
          {RTLIB::LROUND_F128, RTLIB::lroundf128}, // lroundf128
          {RTLIB::MODF_F128, RTLIB::modff128}, // modff128
          {RTLIB::NEARBYINT_F128, RTLIB::nearbyintf128}, // nearbyintf128
          {RTLIB::POW_F128, RTLIB::powf128}, // powf128
          {RTLIB::POW_FINITE_F128, RTLIB::__powf128_finite}, // __powf128_finite
          {RTLIB::REM_F128, RTLIB::fmodf128}, // fmodf128
          {RTLIB::RINT_F128, RTLIB::rintf128}, // rintf128
          {RTLIB::ROUNDEVEN_F128, RTLIB::roundevenf128}, // roundevenf128
          {RTLIB::ROUND_F128, RTLIB::roundf128}, // roundf128
          {RTLIB::SINCOS_F128, RTLIB::sincosf128}, // sincosf128
          {RTLIB::SINH_F128, RTLIB::sinhf128}, // sinhf128
          {RTLIB::SIN_F128, RTLIB::sinf128}, // sinf128
          {RTLIB::SQRT_F128, RTLIB::sqrtf128}, // sqrtf128
          {RTLIB::TANH_F128, RTLIB::tanhf128}, // tanhf128
          {RTLIB::TAN_F128, RTLIB::tanf128}, // tanf128
          {RTLIB::TRUNC_F128, RTLIB::truncf128}, // truncf128
      };

      for (const auto [Func, Impl] : LibraryCalls_isGNUEnvironment) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSMSVCRT()) {
      static const LibcallImplPair LibraryCalls_isNotOSMSVCRT[] = {
          {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
          {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
          {RTLIB::POWI_F80, RTLIB::__powixf2}, // __powixf2
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSMSVCRT) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSWindows() || TT.isOSCygMing()) {
      static const LibcallImplPair LibraryCalls_isNotOSWindowsOrIsCygwinMinGW[] = {
          {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
          {RTLIB::FREXP_F80, RTLIB::frexp_f80}, // frexpl
          {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
          {RTLIB::LDEXP_F80, RTLIB::ldexp_f80}, // ldexpl
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSWindowsOrIsCygwinMinGW) {
        setLibcallImpl(Func, Impl);
      }

    }

    return;
  }

  if (TT.getArch() == Triple::x86_64) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F80, RTLIB::acos_f80}, // acosl
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F80, RTLIB::__addxf3}, // __addxf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F80, RTLIB::asin_f80}, // asinl
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F80, RTLIB::atan2_f80}, // atan2l
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F80, RTLIB::atan_f80}, // atanl
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F80, RTLIB::cbrt_f80}, // cbrtl
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F80, RTLIB::ceil_f80}, // ceill
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F80, RTLIB::copysign_f80}, // copysignl
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F80, RTLIB::cosh_f80}, // coshl
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F80, RTLIB::cos_f80}, // cosl
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F80, RTLIB::__divxf3}, // __divxf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F80, RTLIB::exp2_f80}, // exp2l
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F80, RTLIB::__exp2l_finite_f80}, // __exp2l_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F80, RTLIB::exp10l_f80}, // exp10l
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F80, RTLIB::exp_f80}, // expl
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F80, RTLIB::__expl_finite_f80}, // __expl_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F80, RTLIB::floor_f80}, // floorl
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F80, RTLIB::fmaximum_f80}, // fmaximuml
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F80, RTLIB::fmaximum_num_f80}, // fmaximum_numl
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F80, RTLIB::fmax_f80}, // fmaxl
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F80, RTLIB::fma_f80}, // fmal
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F80, RTLIB::fminimum_f80}, // fminimuml
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F80, RTLIB::fminimum_num_f80}, // fminimum_numl
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F80, RTLIB::fmin_f80}, // fminl
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F80, RTLIB::__extendhfxf2}, // __extendhfxf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPEXT_F80_F128, RTLIB::__extendxftf2}, // __extendxftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F80_BF16, RTLIB::__truncxfbf2}, // __truncxfbf2
        {RTLIB::FPROUND_F80_F16, RTLIB::__truncxfhf2}, // __truncxfhf2
        {RTLIB::FPROUND_F80_F32, RTLIB::__truncxfsf2}, // __truncxfsf2
        {RTLIB::FPROUND_F80_F64, RTLIB::__truncxfdf2}, // __truncxfdf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPROUND_F128_F80, RTLIB::__trunctfxf2}, // __trunctfxf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F80_I32, RTLIB::__fixxfsi}, // __fixxfsi
        {RTLIB::FPTOSINT_F80_I64, RTLIB::__fixxfdi}, // __fixxfdi
        {RTLIB::FPTOSINT_F80_I128, RTLIB::__fixxfti}, // __fixxfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F80_I32, RTLIB::__fixunsxfsi}, // __fixunsxfsi
        {RTLIB::FPTOUINT_F80_I64, RTLIB::__fixunsxfdi}, // __fixunsxfdi
        {RTLIB::FPTOUINT_F80_I128, RTLIB::__fixunsxfti}, // __fixunsxfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F80, RTLIB::llrint_f80}, // llrintl
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F80, RTLIB::llround_f80}, // llroundl
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F80, RTLIB::log2_f80}, // log2l
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F80, RTLIB::__log2l_finite_f80}, // __log2l_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F80, RTLIB::log10_f80}, // log10l
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F80, RTLIB::__log10l_finite_f80}, // __log10l_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F80, RTLIB::log_f80}, // logl
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F80, RTLIB::__logl_finite_f80}, // __logl_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F80, RTLIB::lrint_f80}, // lrintl
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F80, RTLIB::lround_f80}, // lroundl
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F80, RTLIB::modf_f80}, // modfl
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F80, RTLIB::__mulxf3}, // __mulxf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::MUL_I128, RTLIB::__multi3}, // __multi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F80, RTLIB::nearbyint_f80}, // nearbyintl
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F80, RTLIB::pow_f80}, // powl
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F80, RTLIB::__powl_finite_f80}, // __powl_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F80, RTLIB::fmodl_f80}, // fmodl
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F80, RTLIB::rint_f80}, // rintl
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F80, RTLIB::roundeven_f80}, // roundevenl
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F80, RTLIB::round_f80}, // roundl
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SHL_I128, RTLIB::__ashlti3}, // __ashlti3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F80, RTLIB::sincospi_f80}, // sincospil
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F80, RTLIB::sinh_f80}, // sinhl
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F80, RTLIB::__floatsixf}, // __floatsixf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F80, RTLIB::__floatdixf}, // __floatdixf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F80, RTLIB::__floattixf}, // __floattixf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F80, RTLIB::sin_f80}, // sinl
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F80, RTLIB::sqrt_f80}, // sqrtl
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SRA_I128, RTLIB::__ashrti3}, // __ashrti3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::SRL_I128, RTLIB::__lshrti3}, // __lshrti3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F80, RTLIB::__subxf3}, // __subxf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F80, RTLIB::tanh_f80}, // tanhl
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F80, RTLIB::tan_f80}, // tanl
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F80, RTLIB::trunc_f80}, // truncl
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F80, RTLIB::__floatunsixf}, // __floatunsixf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F80, RTLIB::__floatundixf}, // __floatundixf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F80, RTLIB::__floatuntixf}, // __floatuntixf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (darwinHasExp10(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasExp10[] = {
          {RTLIB::EXP10_F32, RTLIB::__exp10f}, // __exp10f
          {RTLIB::EXP10_F64, RTLIB::__exp10}, // __exp10
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasExp10) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (darwinHasSinCosStret(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasSinCosStret[] = {
          {RTLIB::SINCOS_STRET_F32, RTLIB::__sincosf_stret}, // __sincosf_stret
          {RTLIB::SINCOS_STRET_F64, RTLIB::__sincos_stret}, // __sincos_stret
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasSinCosStret) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isMacOSX() && !TT.isMacOSXVersionLT(10, 6)) {
      static const LibcallImplPair LibraryCalls_darwinHas__bzero[] = {
          {RTLIB::BZERO, RTLIB::__bzero}, // __bzero
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHas__bzero) {
        setLibcallImpl(Func, Impl);
      }

    }

    if ((!TT.isOSWindows() || TT.isOSCygMing()) && !TT.isGNUEnvironment()) {
      static const LibcallImplPair LibraryCalls_hasFrexplLdexplF128[] = {
          {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
          {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasFrexplLdexplF128) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (hasSinCos(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos[] = {
          {RTLIB::SINCOS_F80, RTLIB::sincos_f80}, // sincosl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (hasSinCos_f32_f64(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos_f32_f64[] = {
          {RTLIB::SINCOS_F32, RTLIB::sincosf}, // sincosf
          {RTLIB::SINCOS_F64, RTLIB::sincos}, // sincos
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos_f32_f64) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isGNUEnvironment()) {
      static const LibcallImplPair LibraryCalls_isGNUEnvironment[] = {
          {RTLIB::ACOS_F128, RTLIB::acosf128}, // acosf128
          {RTLIB::ASIN_F128, RTLIB::asinf128}, // asinf128
          {RTLIB::ATAN2_F128, RTLIB::atan2f128}, // atan2f128
          {RTLIB::ATAN_F128, RTLIB::atanf128}, // atanf128
          {RTLIB::CBRT_F128, RTLIB::cbrtf128}, // cbrtf128
          {RTLIB::CEIL_F128, RTLIB::ceilf128}, // ceilf128
          {RTLIB::COPYSIGN_F128, RTLIB::copysignf128}, // copysignf128
          {RTLIB::COSH_F128, RTLIB::coshf128}, // coshf128
          {RTLIB::COS_F128, RTLIB::cosf128}, // cosf128
          {RTLIB::EXP2_F128, RTLIB::exp2f128}, // exp2f128
          {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2f128_finite}, // __exp2f128_finite
          {RTLIB::EXP10_F128, RTLIB::exp10f128}, // exp10f128
          {RTLIB::EXP10_FINITE_F128, RTLIB::__exp10f128_finite}, // __exp10f128_finite
          {RTLIB::EXP_F128, RTLIB::expf128}, // expf128
          {RTLIB::EXP_FINITE_F128, RTLIB::__expf128_finite}, // __expf128_finite
          {RTLIB::FLOOR_F128, RTLIB::floorf128}, // floorf128
          {RTLIB::FMAXIMUM_F128, RTLIB::fmaximumf128}, // fmaximumf128
          {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_numf128}, // fmaximum_numf128
          {RTLIB::FMAX_F128, RTLIB::fmaxf128}, // fmaxf128
          {RTLIB::FMA_F128, RTLIB::fmaf128}, // fmaf128
          {RTLIB::FMINIMUM_F128, RTLIB::fminimumf128}, // fminimumf128
          {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_numf128}, // fminimum_numf128
          {RTLIB::FMIN_F128, RTLIB::fminf128}, // fminf128
          {RTLIB::FREXP_F128, RTLIB::frexpf128}, // frexpf128
          {RTLIB::LDEXP_F128, RTLIB::ldexpf128}, // ldexpf128
          {RTLIB::LLRINT_F128, RTLIB::llrintf128}, // llrintf128
          {RTLIB::LLROUND_F128, RTLIB::llroundf128}, // llroundf128
          {RTLIB::LOG2_F128, RTLIB::log2f128}, // log2f128
          {RTLIB::LOG2_FINITE_F128, RTLIB::__log2f128_finite}, // __log2f128_finite
          {RTLIB::LOG10_F128, RTLIB::log10f128}, // log10f128
          {RTLIB::LOG10_FINITE_F128, RTLIB::__log10f128_finite}, // __log10f128_finite
          {RTLIB::LOG_F128, RTLIB::logf128}, // logf128
          {RTLIB::LOG_FINITE_F128, RTLIB::__logf128_finite}, // __logf128_finite
          {RTLIB::LRINT_F128, RTLIB::lrintf128}, // lrintf128
          {RTLIB::LROUND_F128, RTLIB::lroundf128}, // lroundf128
          {RTLIB::MODF_F128, RTLIB::modff128}, // modff128
          {RTLIB::NEARBYINT_F128, RTLIB::nearbyintf128}, // nearbyintf128
          {RTLIB::POW_F128, RTLIB::powf128}, // powf128
          {RTLIB::POW_FINITE_F128, RTLIB::__powf128_finite}, // __powf128_finite
          {RTLIB::REM_F128, RTLIB::fmodf128}, // fmodf128
          {RTLIB::RINT_F128, RTLIB::rintf128}, // rintf128
          {RTLIB::ROUNDEVEN_F128, RTLIB::roundevenf128}, // roundevenf128
          {RTLIB::ROUND_F128, RTLIB::roundf128}, // roundf128
          {RTLIB::SINCOS_F128, RTLIB::sincosf128}, // sincosf128
          {RTLIB::SINH_F128, RTLIB::sinhf128}, // sinhf128
          {RTLIB::SIN_F128, RTLIB::sinf128}, // sinf128
          {RTLIB::SQRT_F128, RTLIB::sqrtf128}, // sqrtf128
          {RTLIB::TANH_F128, RTLIB::tanhf128}, // tanhf128
          {RTLIB::TAN_F128, RTLIB::tanf128}, // tanf128
          {RTLIB::TRUNC_F128, RTLIB::truncf128}, // truncf128
      };

      for (const auto [Func, Impl] : LibraryCalls_isGNUEnvironment) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSMSVCRT()) {
      static const LibcallImplPair LibraryCalls_isNotOSMSVCRT[] = {
          {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
          {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
          {RTLIB::POWI_F80, RTLIB::__powixf2}, // __powixf2
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSMSVCRT) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSWindows() || TT.isOSCygMing()) {
      static const LibcallImplPair LibraryCalls_isNotOSWindowsOrIsCygwinMinGW[] = {
          {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
          {RTLIB::FREXP_F80, RTLIB::frexp_f80}, // frexpl
          {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
          {RTLIB::LDEXP_F80, RTLIB::ldexp_f80}, // ldexpl
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSWindowsOrIsCygwinMinGW) {
        setLibcallImpl(Func, Impl);
      }

    }

    return;
  }

  if (TT.getArch() == Triple::xcore) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ALIGN_4, RTLIB::__memcpy_4}, // __memcpy_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    return;
  }
  initDefaultLibCallImpls();
}

#endif

