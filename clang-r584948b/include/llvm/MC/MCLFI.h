//===- MCLFI.h - LFI-specific code for MC -----------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
// This file was written by the Native Client authors, modified for LFI.
//
//===----------------------------------------------------------------------===//

#include "llvm/Support/CommandLine.h"

namespace llvm {

class MCContext;
class MCStreamer;
class Triple;

void initializeLFIMCStreamer(MCStreamer &Streamer, MCContext &Ctx,
                             const Triple &TheTriple);

} // namespace llvm
