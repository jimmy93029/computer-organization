// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPIPELINECPU__SYMS_H_
#define VERILATED_VPIPELINECPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VPipelineCPU.h"

// INCLUDE MODULE CLASSES
#include "VPipelineCPU___024root.h"

// SYMS CLASS (contains all model state)
class VPipelineCPU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VPipelineCPU* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VPipelineCPU___024root         TOP;

    // CONSTRUCTORS
    VPipelineCPU__Syms(VerilatedContext* contextp, const char* namep, VPipelineCPU* modelp);
    ~VPipelineCPU__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
