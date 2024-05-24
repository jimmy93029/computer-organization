// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "verilated.h"

#include "VSingleCycleCPU___024root.h"

void VSingleCycleCPU___024root___eval_act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        if (vlSelf->SingleCycleCPU__DOT__Mem_memWrite) {
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->SingleCycleCPU__DOT__Mem_readData2 
                   >> 0x18U);
            vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->SingleCycleCPU__DOT__Mem_ALUOut));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT__Mem_readData2 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->SingleCycleCPU__DOT__Mem_ALUOut));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT__Mem_readData2 
                            >> 8U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->SingleCycleCPU__DOT__Mem_ALUOut));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->SingleCycleCPU__DOT__Mem_readData2);
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->SingleCycleCPU__DOT__Mem_ALUOut);
        }
        vlSelf->SingleCycleCPU__DOT__Wb_ALUOut = vlSelf->SingleCycleCPU__DOT__Mem_ALUOut;
        vlSelf->SingleCycleCPU__DOT__Wb_pc = vlSelf->SingleCycleCPU__DOT__Mem_pc;
        vlSelf->SingleCycleCPU__DOT__Wb_readData3 = vlSelf->SingleCycleCPU__DOT__Mem_readData3;
        vlSelf->SingleCycleCPU__DOT__Mem_readData2 
            = vlSelf->SingleCycleCPU__DOT__Ex_readData2;
        vlSelf->SingleCycleCPU__DOT__Mem_pc = vlSelf->SingleCycleCPU__DOT__Ex_pc;
    } else {
        vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
        vlSelf->SingleCycleCPU__DOT__Wb_ALUOut = 0U;
        vlSelf->SingleCycleCPU__DOT__Wb_pc = 0U;
        vlSelf->SingleCycleCPU__DOT__Wb_readData3 = 0U;
        vlSelf->SingleCycleCPU__DOT__Mem_readData2 = 0U;
        vlSelf->SingleCycleCPU__DOT__Mem_pc = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->start)) | (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch)))) {
        vlSelf->SingleCycleCPU__DOT__Ex_ALUCtl = 0U;
        vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl = 0U;
        vlSelf->SingleCycleCPU__DOT__Ex_imm = 0U;
        vlSelf->SingleCycleCPU__DOT__Ex_RegRs2 = 0U;
        vlSelf->SingleCycleCPU__DOT__Ex_RegRs1 = 0U;
        vlSelf->SingleCycleCPU__DOT__Ex_readData1 = 0U;
        vlSelf->SingleCycleCPU__DOT__Ex_readData2 = 0U;
        vlSelf->SingleCycleCPU__DOT__Ex_pc = 0U;
    } else {
        vlSelf->SingleCycleCPU__DOT__Ex_ALUCtl = vlSelf->SingleCycleCPU__DOT__ID_ALUCtl;
        vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl = vlSelf->SingleCycleCPU__DOT__ID_BranchCtl;
        vlSelf->SingleCycleCPU__DOT__Ex_imm = vlSelf->SingleCycleCPU__DOT__ID_imm;
        vlSelf->SingleCycleCPU__DOT__Ex_RegRs2 = (0x1fU 
                                                  & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                     >> 0x14U));
        vlSelf->SingleCycleCPU__DOT__Ex_RegRs1 = (0x1fU 
                                                  & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                     >> 0xfU));
        vlSelf->SingleCycleCPU__DOT__Ex_readData1 = 
            vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                       >> 0xfU))];
        vlSelf->SingleCycleCPU__DOT__Ex_readData2 = 
            vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                       >> 0x14U))];
        vlSelf->SingleCycleCPU__DOT__Ex_pc = vlSelf->SingleCycleCPU__DOT__ID_pc;
    }
    vlSelf->SingleCycleCPU__DOT__Ex_branch = ((~ ((~ (IData)(vlSelf->start)) 
                                                  | (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch))) 
                                              & (IData)(vlSelf->SingleCycleCPU__DOT__ID_branch));
    vlSelf->SingleCycleCPU__DOT__Ex_immUse = ((~ ((~ (IData)(vlSelf->start)) 
                                                  | (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch))) 
                                              & (IData)(vlSelf->SingleCycleCPU__DOT__ID_immUse));
    vlSelf->SingleCycleCPU__DOT__Ex_pcUse = ((~ ((~ (IData)(vlSelf->start)) 
                                                 | (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch))) 
                                             & (IData)(vlSelf->SingleCycleCPU__DOT__ID_pcUse));
    vlSelf->SingleCycleCPU__DOT__Wb_memtoReg = ((IData)(vlSelf->start) 
                                                & (IData)(vlSelf->SingleCycleCPU__DOT__Mem_memtoReg));
    vlSelf->SingleCycleCPU__DOT__Wb_jump = ((IData)(vlSelf->start) 
                                            & (IData)(vlSelf->SingleCycleCPU__DOT__Mem_jump));
    vlSelf->SingleCycleCPU__DOT__Mem_memWrite = ((IData)(vlSelf->start) 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_memWrite));
    vlSelf->SingleCycleCPU__DOT__Mem_memtoReg = ((IData)(vlSelf->start) 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_memtoReg));
    vlSelf->SingleCycleCPU__DOT__Mem_jump = ((IData)(vlSelf->start) 
                                             & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_jump));
    vlSelf->SingleCycleCPU__DOT__Ex_memWrite = ((~ 
                                                 ((~ (IData)(vlSelf->start)) 
                                                  | (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch))) 
                                                & (IData)(vlSelf->SingleCycleCPU__DOT__ID_memWrite));
    vlSelf->SingleCycleCPU__DOT__Ex_memtoReg = ((~ 
                                                 ((~ (IData)(vlSelf->start)) 
                                                  | (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch))) 
                                                & (IData)(vlSelf->SingleCycleCPU__DOT__ID_memtoReg));
    vlSelf->SingleCycleCPU__DOT__Ex_jump = ((~ ((~ (IData)(vlSelf->start)) 
                                                | (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch))) 
                                            & (IData)(vlSelf->SingleCycleCPU__DOT__ID_jump));
    vlSelf->SingleCycleCPU__DOT__ID_pc = ((1U & ((~ (IData)(vlSelf->start)) 
                                                 | (IData)(vlSelf->SingleCycleCPU__DOT__IF_ID_flush)))
                                           ? 0U : vlSelf->SingleCycleCPU__DOT__IF_pc);
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__1(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if (vlSelf->SingleCycleCPU__DOT__Wb_regWrite) {
            __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (IData)(vlSelf->SingleCycleCPU__DOT__Wb_RegRd))
                    ? 0U : vlSelf->SingleCycleCPU__DOT__Wb_writeData);
            __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = vlSelf->SingleCycleCPU__DOT__Wb_RegRd;
        }
    } else {
        __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[__Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0] 
            = __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1fU];
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__2(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->SingleCycleCPU__DOT__Mem_memRead) {
        vlSelf->SingleCycleCPU__DOT__Mem_readData3 
            = ((0xffffffU & vlSelf->SingleCycleCPU__DOT__Mem_readData3) 
               | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                  [(0x7fU & ((IData)(3U) + vlSelf->SingleCycleCPU__DOT__Mem_ALUOut))] 
                  << 0x18U));
        vlSelf->SingleCycleCPU__DOT__Mem_readData3 
            = ((0xff00ffffU & vlSelf->SingleCycleCPU__DOT__Mem_readData3) 
               | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                  [(0x7fU & ((IData)(2U) + vlSelf->SingleCycleCPU__DOT__Mem_ALUOut))] 
                  << 0x10U));
        vlSelf->SingleCycleCPU__DOT__Mem_readData3 
            = ((0xffff00ffU & vlSelf->SingleCycleCPU__DOT__Mem_readData3) 
               | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                  [(0x7fU & ((IData)(1U) + vlSelf->SingleCycleCPU__DOT__Mem_ALUOut))] 
                  << 8U));
        vlSelf->SingleCycleCPU__DOT__Mem_readData3 
            = ((0xffffff00U & vlSelf->SingleCycleCPU__DOT__Mem_readData3) 
               | vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
               [(0x7fU & vlSelf->SingleCycleCPU__DOT__Mem_ALUOut)]);
    }
}

extern const VlUnpacked<CData/*3:0*/, 8> VSingleCycleCPU__ConstPool__TABLE_h067159df_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h166e3cc7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_he16e6d56_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h3729482a_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_hbdb291c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_hf167067c_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_ha8f04b9d_0;
extern const VlUnpacked<CData/*1:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h2a974f35_0;
extern const VlUnpacked<CData/*3:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_hc5e59d98_0;

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__3(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->SingleCycleCPU__DOT__Wb_writeData = ((IData)(vlSelf->SingleCycleCPU__DOT__Wb_jump)
                                                  ? 
                                                 ((IData)(4U) 
                                                  + vlSelf->SingleCycleCPU__DOT__Wb_pc)
                                                  : 
                                                 ((IData)(vlSelf->SingleCycleCPU__DOT__Wb_memtoReg)
                                                   ? vlSelf->SingleCycleCPU__DOT__Wb_readData3
                                                   : vlSelf->SingleCycleCPU__DOT__Wb_ALUOut));
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->start) {
        vlSelf->SingleCycleCPU__DOT__Wb_regWrite = vlSelf->SingleCycleCPU__DOT__Mem_regWrite;
        vlSelf->SingleCycleCPU__DOT__Wb_RegRd = vlSelf->SingleCycleCPU__DOT__Mem_RegRd;
        vlSelf->SingleCycleCPU__DOT__Mem_ALUOut = vlSelf->SingleCycleCPU__DOT__Ex_ALUOut;
        vlSelf->SingleCycleCPU__DOT__Mem_RegRd = vlSelf->SingleCycleCPU__DOT__Ex_RegRd;
        vlSelf->SingleCycleCPU__DOT__Mem_memRead = vlSelf->SingleCycleCPU__DOT__Ex_memRead;
        vlSelf->SingleCycleCPU__DOT__Mem_regWrite = vlSelf->SingleCycleCPU__DOT__Ex_regWrite;
    } else {
        vlSelf->SingleCycleCPU__DOT__Wb_regWrite = 0U;
        vlSelf->SingleCycleCPU__DOT__Wb_RegRd = 0U;
        vlSelf->SingleCycleCPU__DOT__Mem_ALUOut = 0U;
        vlSelf->SingleCycleCPU__DOT__Mem_RegRd = 0U;
        vlSelf->SingleCycleCPU__DOT__Mem_memRead = 0U;
        vlSelf->SingleCycleCPU__DOT__Mem_regWrite = 0U;
    }
    vlSelf->SingleCycleCPU__DOT__Ex_memRead = ((~ (
                                                   (~ (IData)(vlSelf->start)) 
                                                   | (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch))) 
                                               & (IData)(vlSelf->SingleCycleCPU__DOT__ID_memRead));
    vlSelf->SingleCycleCPU__DOT__Ex_regWrite = ((~ 
                                                 ((~ (IData)(vlSelf->start)) 
                                                  | (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch))) 
                                                & (IData)(vlSelf->SingleCycleCPU__DOT__ID_regWrite));
    vlSelf->SingleCycleCPU__DOT__forwardA = 0U;
    if ((((IData)(vlSelf->SingleCycleCPU__DOT__Mem_regWrite) 
          & (0U != (IData)(vlSelf->SingleCycleCPU__DOT__Mem_RegRd))) 
         & ((IData)(vlSelf->SingleCycleCPU__DOT__Mem_RegRd) 
            == (IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRs1)))) {
        vlSelf->SingleCycleCPU__DOT__forwardA = 2U;
    }
    if (((((IData)(vlSelf->SingleCycleCPU__DOT__Wb_regWrite) 
           & (0U != (IData)(vlSelf->SingleCycleCPU__DOT__Wb_RegRd))) 
          & ((IData)(vlSelf->SingleCycleCPU__DOT__Wb_RegRd) 
             == (IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRs1))) 
         & (~ (((IData)(vlSelf->SingleCycleCPU__DOT__Mem_regWrite) 
                & (0U != (IData)(vlSelf->SingleCycleCPU__DOT__Mem_RegRd))) 
               & ((IData)(vlSelf->SingleCycleCPU__DOT__Mem_RegRd) 
                  == (IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRs1)))))) {
        vlSelf->SingleCycleCPU__DOT__forwardA = 1U;
    }
    vlSelf->SingleCycleCPU__DOT__forwardB = 0U;
    if ((((IData)(vlSelf->SingleCycleCPU__DOT__Mem_regWrite) 
          & (0U != (IData)(vlSelf->SingleCycleCPU__DOT__Mem_RegRd))) 
         & ((IData)(vlSelf->SingleCycleCPU__DOT__Mem_RegRd) 
            == (IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRs2)))) {
        vlSelf->SingleCycleCPU__DOT__forwardB = 2U;
    }
    if (((((IData)(vlSelf->SingleCycleCPU__DOT__Wb_regWrite) 
           & (0U != (IData)(vlSelf->SingleCycleCPU__DOT__Wb_RegRd))) 
          & ((IData)(vlSelf->SingleCycleCPU__DOT__Wb_RegRd) 
             == (IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRs2))) 
         & (~ (((IData)(vlSelf->SingleCycleCPU__DOT__Mem_regWrite) 
                & (0U != (IData)(vlSelf->SingleCycleCPU__DOT__Mem_RegRd))) 
               & ((IData)(vlSelf->SingleCycleCPU__DOT__Mem_RegRd) 
                  == (IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRs2)))))) {
        vlSelf->SingleCycleCPU__DOT__forwardB = 1U;
    }
    vlSelf->SingleCycleCPU__DOT__Ex_RegRd = ((1U & 
                                              ((~ (IData)(vlSelf->start)) 
                                               | (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch)))
                                              ? 0U : 
                                             (0x1fU 
                                              & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                 >> 7U)));
    vlSelf->SingleCycleCPU__DOT__out1 = ((0U == (IData)(vlSelf->SingleCycleCPU__DOT__forwardA))
                                          ? vlSelf->SingleCycleCPU__DOT__Ex_readData1
                                          : ((1U == (IData)(vlSelf->SingleCycleCPU__DOT__forwardA))
                                              ? vlSelf->SingleCycleCPU__DOT__Wb_writeData
                                              : ((2U 
                                                  == (IData)(vlSelf->SingleCycleCPU__DOT__forwardA))
                                                  ? vlSelf->SingleCycleCPU__DOT__Mem_ALUOut
                                                  : vlSelf->SingleCycleCPU__DOT__Ex_readData1)));
    vlSelf->SingleCycleCPU__DOT__out2 = ((0U == (IData)(vlSelf->SingleCycleCPU__DOT__forwardB))
                                          ? vlSelf->SingleCycleCPU__DOT__Ex_readData2
                                          : ((1U == (IData)(vlSelf->SingleCycleCPU__DOT__forwardB))
                                              ? vlSelf->SingleCycleCPU__DOT__Wb_writeData
                                              : ((2U 
                                                  == (IData)(vlSelf->SingleCycleCPU__DOT__forwardB))
                                                  ? vlSelf->SingleCycleCPU__DOT__Mem_ALUOut
                                                  : vlSelf->SingleCycleCPU__DOT__Ex_readData2)));
    vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1 = ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_pcUse)
                                                ? vlSelf->SingleCycleCPU__DOT__Ex_pc
                                                : vlSelf->SingleCycleCPU__DOT__out1);
    vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2 = ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_immUse)
                                                ? vlSelf->SingleCycleCPU__DOT__Ex_imm
                                                : vlSelf->SingleCycleCPU__DOT__out2);
    vlSelf->SingleCycleCPU__DOT__ID_instruction = (
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->start)) 
                                                       | (IData)(vlSelf->SingleCycleCPU__DOT__IF_ID_flush)))
                                                    ? 0U
                                                    : 
                                                   ((0x80U 
                                                     <= vlSelf->SingleCycleCPU__DOT__IF_pc)
                                                     ? 0U
                                                     : 
                                                    ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                      [
                                                      (0x7fU 
                                                       & vlSelf->SingleCycleCPU__DOT__IF_pc)] 
                                                      << 0x18U) 
                                                     | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                         [
                                                         (0x7fU 
                                                          & ((IData)(1U) 
                                                             + vlSelf->SingleCycleCPU__DOT__IF_pc))] 
                                                         << 0x10U) 
                                                        | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                            [
                                                            (0x7fU 
                                                             & ((IData)(2U) 
                                                                + vlSelf->SingleCycleCPU__DOT__IF_pc))] 
                                                            << 8U) 
                                                           | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                           [
                                                           (0x7fU 
                                                            & ((IData)(3U) 
                                                               + vlSelf->SingleCycleCPU__DOT__IF_pc))])))));
    vlSelf->SingleCycleCPU__DOT__Ex_ALUOut = ((8U & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_ALUCtl))
                                               ? 0U
                                               : ((4U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_ALUCtl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_ALUCtl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_ALUCtl))
                                                     ? 
                                                    (VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1, vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1 
                                                     - vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2))
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_ALUCtl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_ALUCtl))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1 
                                                     + vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_ALUCtl))
                                                     ? 
                                                    (vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1 
                                                     | vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2)
                                                     : 
                                                    (vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1 
                                                     & vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2)))));
    vlSelf->SingleCycleCPU__DOT____VdfgTmp_h13f1118f__0 
        = (((8U & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl))
             ? ((4U & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl))
                 ? ((~ ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl) 
                        >> 1U)) & ((1U & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl))
                                    ? (vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1 
                                       != vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2)
                                    : (vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1 
                                       == vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2)))
                 : (((IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl) 
                     >> 1U) & ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl) 
                               & VL_GTES_III(32, vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1, vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2))))
             : (IData)(((7U == (7U & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl))) 
                        & VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1, vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2)))) 
           & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_branch));
    vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch 
        = ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_jump) 
           | (IData)(vlSelf->SingleCycleCPU__DOT____VdfgTmp_h13f1118f__0));
    if ((0x40U & vlSelf->SingleCycleCPU__DOT__ID_instruction)) {
        if ((0x20U & vlSelf->SingleCycleCPU__DOT__ID_instruction)) {
            if ((0x10U & vlSelf->SingleCycleCPU__DOT__ID_instruction)) {
                vlSelf->SingleCycleCPU__DOT__ID_imm = 0U;
            } else if ((8U & vlSelf->SingleCycleCPU__DOT__ID_instruction)) {
                if ((4U & vlSelf->SingleCycleCPU__DOT__ID_instruction)) {
                    if ((2U & vlSelf->SingleCycleCPU__DOT__ID_instruction)) {
                        if ((1U & vlSelf->SingleCycleCPU__DOT__ID_instruction)) {
                            vlSelf->SingleCycleCPU__DOT__ID_imm 
                                = (((- (IData)((vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                >> 0x1fU))) 
                                    << 0x13U) | ((0x7f800U 
                                                  & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                     >> 1U)) 
                                                 | ((0x400U 
                                                     & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                        >> 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                          >> 0x15U)))));
                            vlSelf->SingleCycleCPU__DOT__ID_imm 
                                = (vlSelf->SingleCycleCPU__DOT__ID_imm 
                                   << 1U);
                        } else {
                            vlSelf->SingleCycleCPU__DOT__ID_imm = 0U;
                        }
                    } else {
                        vlSelf->SingleCycleCPU__DOT__ID_imm = 0U;
                    }
                } else {
                    vlSelf->SingleCycleCPU__DOT__ID_imm = 0U;
                }
            } else if ((4U & vlSelf->SingleCycleCPU__DOT__ID_instruction)) {
                vlSelf->SingleCycleCPU__DOT__ID_imm 
                    = ((2U & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                        ? ((1U & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                            ? (((- (IData)((vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                            >> 0x1fU))) 
                                << 0xbU) | (0x7ffU 
                                            & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                               >> 0x14U)))
                            : 0U) : 0U);
            } else if ((2U & vlSelf->SingleCycleCPU__DOT__ID_instruction)) {
                if ((1U & vlSelf->SingleCycleCPU__DOT__ID_instruction)) {
                    vlSelf->SingleCycleCPU__DOT__ID_imm 
                        = (((- (IData)((vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                        >> 0x1fU))) 
                            << 0xbU) | ((0x400U & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                 >> 8U)))));
                    vlSelf->SingleCycleCPU__DOT__ID_imm 
                        = (vlSelf->SingleCycleCPU__DOT__ID_imm 
                           << 1U);
                } else {
                    vlSelf->SingleCycleCPU__DOT__ID_imm = 0U;
                }
            } else {
                vlSelf->SingleCycleCPU__DOT__ID_imm = 0U;
            }
        } else {
            vlSelf->SingleCycleCPU__DOT__ID_imm = 0U;
        }
    } else {
        vlSelf->SingleCycleCPU__DOT__ID_imm = ((0x20U 
                                                & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xbU) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                               >> 0x14U)) 
                                                           | (0x1fU 
                                                              & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                                 >> 7U))))
                                                        : 0U)
                                                       : 0U))))
                                                : (
                                                   (0x10U 
                                                    & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xbU) 
                                                        | (0x7ffU 
                                                           & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                              >> 0x14U)))
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SingleCycleCPU__DOT__ID_instruction)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xbU) 
                                                        | (0x7ffU 
                                                           & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                              >> 0x14U)))
                                                        : 0U)
                                                       : 0U)))));
    }
    __Vtableidx3 = (7U & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                          >> 0xcU));
    vlSelf->SingleCycleCPU__DOT__ID_BranchCtl = VSingleCycleCPU__ConstPool__TABLE_h067159df_0
        [__Vtableidx3];
    __Vtableidx1 = (0x7fU & vlSelf->SingleCycleCPU__DOT__ID_instruction);
    vlSelf->SingleCycleCPU__DOT__ID_immUse = VSingleCycleCPU__ConstPool__TABLE_h166e3cc7_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__ID_memtoReg = VSingleCycleCPU__ConstPool__TABLE_he16e6d56_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__ID_regWrite = VSingleCycleCPU__ConstPool__TABLE_h3729482a_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__ID_memRead = VSingleCycleCPU__ConstPool__TABLE_he16e6d56_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__ID_memWrite = VSingleCycleCPU__ConstPool__TABLE_hbdb291c7_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__ID_branch = VSingleCycleCPU__ConstPool__TABLE_hf167067c_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__ID_jump = VSingleCycleCPU__ConstPool__TABLE_ha8f04b9d_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__ID_pcUse = VSingleCycleCPU__ConstPool__TABLE_hf167067c_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__ID_ALUOp = VSingleCycleCPU__ConstPool__TABLE_h2a974f35_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__IF_ID_flush = ((IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch) 
                                                | ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_memRead) 
                                                   & (((IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRd) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                           >> 0xfU))) 
                                                      | ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRd) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                             >> 0x14U))))));
    __Vtableidx2 = ((0x20U & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                              >> 0x19U)) | ((0x1cU 
                                             & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                >> 0xaU)) 
                                            | (IData)(vlSelf->SingleCycleCPU__DOT__ID_ALUOp)));
    vlSelf->SingleCycleCPU__DOT__ID_ALUCtl = VSingleCycleCPU__ConstPool__TABLE_hc5e59d98_0
        [__Vtableidx2];
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__4(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT__IF_pc = ((IData)(vlSelf->start)
                                           ? vlSelf->SingleCycleCPU__DOT__IF_pc_mux
                                           : 0U);
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_comb__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT__IF_pc_mux = (((~ (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch)) 
                                               & ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_memRead) 
                                                  & (((IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRd) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                          >> 0xfU))) 
                                                     | ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRd) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                            >> 0x14U))))))
                                               ? vlSelf->SingleCycleCPU__DOT__IF_pc
                                               : (((IData)(vlSelf->SingleCycleCPU__DOT____VdfgTmp_h13f1118f__0) 
                                                   | (IData)(vlSelf->SingleCycleCPU__DOT__Ex_jump))
                                                   ? vlSelf->SingleCycleCPU__DOT__Ex_ALUOut
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->SingleCycleCPU__DOT__IF_pc)));
}

void VSingleCycleCPU___024root___eval_nba(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VSingleCycleCPU___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VSingleCycleCPU___024root___eval_triggers__act(VSingleCycleCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleCPU___024root___eval(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VSingleCycleCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("SingleCycleCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VSingleCycleCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSingleCycleCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("SingleCycleCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSingleCycleCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSingleCycleCPU___024root___eval_debug_assertions(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
