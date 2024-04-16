// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "verilated.h"

#include "VSingleCycleCPU__Syms.h"
#include "VSingleCycleCPU___024root.h"

void VSingleCycleCPU___024root___ctor_var_reset(VSingleCycleCPU___024root* vlSelf);

VSingleCycleCPU___024root::VSingleCycleCPU___024root(VSingleCycleCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSingleCycleCPU___024root___ctor_var_reset(this);
}

void VSingleCycleCPU___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSingleCycleCPU___024root::~VSingleCycleCPU___024root() {
}
