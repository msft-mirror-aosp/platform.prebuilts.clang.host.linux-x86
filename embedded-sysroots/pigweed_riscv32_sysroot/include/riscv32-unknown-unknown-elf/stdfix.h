//===-- C standard library header stdfix.h --------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_STDFIX_H
#define LLVM_LIBC_STDFIX_H

#include "__llvm-libc-common.h"
#include "llvm-libc-macros/stdfix-macros.h"

// From ISO/IEC TR 18037:2008 standard:
// https://www.iso.org/standard/51126.html
// https://standards.iso.org/ittf/PubliclyAvailableStandards/c051126_ISO_IEC_TR_18037_2008.zip


__BEGIN_C_DECLS

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
short accum abshk(short accum) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
short fract abshr(short fract) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
accum absk(accum) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
long accum abslk(long accum) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
long fract abslr(long fract) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
fract absr(fract) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
short accum exphk(short accum) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
accum expk(accum) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
short accum roundhk(short accum, int) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
short fract roundhr(short fract, int) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
accum roundk(accum, int) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
long accum roundlk(long accum, int) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
long fract roundlr(long fract, int) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
fract roundr(fract, int) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
unsigned short accum rounduhk(unsigned short accum, int) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
unsigned short fract rounduhr(unsigned short fract, int) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
unsigned accum rounduk(unsigned accum, int) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
unsigned long accum roundulk(unsigned long accum, int) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
unsigned long fract roundulr(unsigned long fract, int) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
unsigned fract roundur(unsigned fract, int) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
unsigned short accum sqrtuhk(unsigned short accum) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
unsigned short fract sqrtuhr(unsigned short fract) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
unsigned accum sqrtuk(unsigned accum) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
unsigned fract sqrtur(unsigned fract) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
unsigned long fract sqrtulr(unsigned long fract) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
unsigned short accum uhksqrtus(unsigned short) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

#ifdef LIBC_COMPILER_HAS_FIXED_POINT
unsigned accum uksqrtui(unsigned int) __NOEXCEPT;
#endif // LIBC_COMPILER_HAS_FIXED_POINT

__END_C_DECLS

#endif // LLVM_LIBC_STDFIX_H
