// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VfullAdder__Syms.h"


void VfullAdder::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VfullAdder__Syms* __restrict vlSymsp = static_cast<VfullAdder__Syms*>(userp);
    VfullAdder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VfullAdder::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VfullAdder__Syms* __restrict vlSymsp = static_cast<VfullAdder__Syms*>(userp);
    VfullAdder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->cin));
        tracep->chgBit(oldp+1,(vlTOPp->a));
        tracep->chgBit(oldp+2,(vlTOPp->b));
        tracep->chgBit(oldp+3,(vlTOPp->s));
        tracep->chgBit(oldp+4,(vlTOPp->cout));
    }
}

void VfullAdder::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VfullAdder__Syms* __restrict vlSymsp = static_cast<VfullAdder__Syms*>(userp);
    VfullAdder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
