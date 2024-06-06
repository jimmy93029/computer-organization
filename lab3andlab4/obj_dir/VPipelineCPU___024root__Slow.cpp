// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU__Syms.h"
#include "VPipelineCPU___024root.h"

void VPipelineCPU___024root___ctor_var_reset(VPipelineCPU___024root* vlSelf);

VPipelineCPU___024root::VPipelineCPU___024root(VPipelineCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPipelineCPU___024root___ctor_var_reset(this);
}

void VPipelineCPU___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPipelineCPU___024root::~VPipelineCPU___024root() {
}
