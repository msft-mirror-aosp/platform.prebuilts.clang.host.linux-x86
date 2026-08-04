//===- llvm/MC/MCLFIRewriter.h ----------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
// This file was written by the LFI and Native Client authors.
//
//===----------------------------------------------------------------------===//
//
// This file declares the MCLFIRewriter class. This is an abstract
// class that encapsulates the rewriting logic for MCInsts.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_MC_MCLFIREWRITER_H
#define LLVM_MC_MCLFIREWRITER_H

#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCRegisterInfo.h"

namespace llvm {
class MCInst;
class MCSubtargetInfo;
class MCStreamer;
class MCSymbol;

class MCLFIRewriter {
private:
  MCContext &Ctx;

protected:
  bool Enabled = true;
  std::unique_ptr<MCInstrInfo> InstInfo;
  std::unique_ptr<MCRegisterInfo> RegInfo;

public:
  MCLFIRewriter(MCContext &Ctx, std::unique_ptr<MCRegisterInfo> &&RI,
                std::unique_ptr<MCInstrInfo> &&II)
      : Ctx(Ctx), InstInfo(std::move(II)), RegInfo(std::move(RI)) {}

  void error(const MCInst &Inst, const char Msg[]);

  void disable();
  void enable();

  bool isCall(const MCInst &Inst) const;
  bool isBranch(const MCInst &Inst) const;
  bool isIndirectBranch(const MCInst &Inst) const;
  bool isReturn(const MCInst &Inst) const;

  bool mayLoad(const MCInst &Inst) const;
  bool mayStore(const MCInst &Inst) const;

  bool mayModifyRegister(const MCInst &Inst, MCRegister Reg) const;

  virtual ~MCLFIRewriter() = default;
  virtual bool rewriteInst(const MCInst &Inst, MCStreamer &Out,
                           const MCSubtargetInfo &STI) = 0;

  /// Called when a label is emitted. Used to reset guard elimination state
  /// since labels are potential branch targets (basic block boundaries).
  virtual void onLabel(const MCSymbol *Symbol) {}
};

} // namespace llvm
#endif
