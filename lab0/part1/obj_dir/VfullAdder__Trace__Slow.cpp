// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VfullAdder__Syms.h"


//======================

void VfullAdder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VfullAdder::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VfullAdder__Syms* __restrict vlSymsp = static_cast<VfullAdder__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VfullAdder::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VfullAdder::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VfullAdder__Syms* __restrict vlSymsp = static_cast<VfullAdder__Syms*>(userp);
    VfullAdder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VfullAdder::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VfullAdder__Syms* __restrict vlSymsp = static_cast<VfullAdder__Syms*>(userp);
    VfullAdder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"cin", false,-1);
        tracep->declBit(c+2,"a", false,-1);
        tracep->declBit(c+3,"b", false,-1);
        tracep->declBit(c+4,"s", false,-1);
        tracep->declBit(c+5,"cout", false,-1);
        tracep->declBit(c+1,"fullAdder cin", false,-1);
        tracep->declBit(c+2,"fullAdder a", false,-1);
        tracep->declBit(c+3,"fullAdder b", false,-1);
        tracep->declBit(c+4,"fullAdder s", false,-1);
        tracep->declBit(c+5,"fullAdder cout", false,-1);
    }
}

void VfullAdder::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VfullAdder::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VfullAdder__Syms* __restrict vlSymsp = static_cast<VfullAdder__Syms*>(userp);
    VfullAdder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VfullAdder::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VfullAdder__Syms* __restrict vlSymsp = static_cast<VfullAdder__Syms*>(userp);
    VfullAdder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->cin));
        tracep->fullBit(oldp+2,(vlTOPp->a));
        tracep->fullBit(oldp+3,(vlTOPp->b));
        tracep->fullBit(oldp+4,(vlTOPp->s));
        tracep->fullBit(oldp+5,(vlTOPp->cout));
    }
}
