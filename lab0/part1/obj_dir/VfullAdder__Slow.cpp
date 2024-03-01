// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfullAdder.h for the primary calling header

#include "VfullAdder.h"
#include "VfullAdder__Syms.h"

//==========

VL_CTOR_IMP(VfullAdder) {
    VfullAdder__Syms* __restrict vlSymsp = __VlSymsp = new VfullAdder__Syms(this, name());
    VfullAdder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VfullAdder::__Vconfigure(VfullAdder__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VfullAdder::~VfullAdder() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VfullAdder::_eval_initial(VfullAdder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullAdder::_eval_initial\n"); );
    VfullAdder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VfullAdder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullAdder::final\n"); );
    // Variables
    VfullAdder__Syms* __restrict vlSymsp = this->__VlSymsp;
    VfullAdder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VfullAdder::_eval_settle(VfullAdder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullAdder::_eval_settle\n"); );
    VfullAdder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VfullAdder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullAdder::_ctor_var_reset\n"); );
    // Body
    cin = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    s = VL_RAND_RESET_I(1);
    cout = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
