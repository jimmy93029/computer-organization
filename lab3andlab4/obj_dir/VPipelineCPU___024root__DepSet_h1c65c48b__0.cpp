// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

void VPipelineCPU___024root___eval_act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__PipelineCPU__DOT__ID_pc;
    __Vdly__PipelineCPU__DOT__ID_pc = 0;
    // Body
    __Vdly__PipelineCPU__DOT__ID_pc = vlSelf->PipelineCPU__DOT__ID_pc;
    vlSelf->__Vdly__PipelineCPU__DOT__ID_instruction 
        = vlSelf->PipelineCPU__DOT__ID_instruction;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if ((1U & ((~ (IData)(vlSelf->start)) | (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch)))) {
        __Vdly__PipelineCPU__DOT__ID_pc = 0U;
        vlSelf->__Vdly__PipelineCPU__DOT__ID_instruction = 0U;
    } else if (vlSelf->PipelineCPU__DOT__IF_ID_freeze) {
        __Vdly__PipelineCPU__DOT__ID_pc = vlSelf->PipelineCPU__DOT__ID_pc;
        vlSelf->__Vdly__PipelineCPU__DOT__ID_instruction 
            = vlSelf->PipelineCPU__DOT__ID_instruction;
    } else {
        __Vdly__PipelineCPU__DOT__ID_pc = vlSelf->PipelineCPU__DOT__IF_pc;
        vlSelf->__Vdly__PipelineCPU__DOT__ID_instruction 
            = ((0x80U <= vlSelf->PipelineCPU__DOT__IF_pc)
                ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                         [(0x7fU & vlSelf->PipelineCPU__DOT__IF_pc)] 
                         << 0x18U) | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & ((IData)(1U) 
                                                  + vlSelf->PipelineCPU__DOT__IF_pc))] 
                                       << 0x10U) | 
                                      ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(2U) 
                                                   + vlSelf->PipelineCPU__DOT__IF_pc))] 
                                        << 8U) | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & ((IData)(3U) 
                                                  + vlSelf->PipelineCPU__DOT__IF_pc))]))));
    }
    if (vlSelf->start) {
        if (vlSelf->PipelineCPU__DOT__Mem_memWrite) {
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->PipelineCPU__DOT__Mem_rs2_Data 
                   >> 0x18U);
            vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->PipelineCPU__DOT__Mem_ALUOut));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->PipelineCPU__DOT__Mem_rs2_Data 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->PipelineCPU__DOT__Mem_ALUOut));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->PipelineCPU__DOT__Mem_rs2_Data 
                            >> 8U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->PipelineCPU__DOT__Mem_ALUOut));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->PipelineCPU__DOT__Mem_rs2_Data);
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->PipelineCPU__DOT__Mem_ALUOut);
        }
        vlSelf->PipelineCPU__DOT__Wb_pc = vlSelf->PipelineCPU__DOT__Mem_pc;
        vlSelf->PipelineCPU__DOT__Wb_ALUOut = vlSelf->PipelineCPU__DOT__Mem_ALUOut;
        vlSelf->PipelineCPU__DOT__Wb_readData3 = vlSelf->PipelineCPU__DOT__Mem_readData3;
        vlSelf->PipelineCPU__DOT__Mem_rs2_Data = vlSelf->PipelineCPU__DOT__rs2_Data;
        vlSelf->PipelineCPU__DOT__Mem_pc = vlSelf->PipelineCPU__DOT__Ex_pc;
    } else {
        vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
        vlSelf->PipelineCPU__DOT__Wb_pc = 0U;
        vlSelf->PipelineCPU__DOT__Wb_ALUOut = 0U;
        vlSelf->PipelineCPU__DOT__Wb_readData3 = 0U;
        vlSelf->PipelineCPU__DOT__Mem_rs2_Data = 0U;
        vlSelf->PipelineCPU__DOT__Mem_pc = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->start)) | (IData)(vlSelf->PipelineCPU__DOT__ID_Ex_flush)))) {
        vlSelf->PipelineCPU__DOT__Ex_ALUCtl = 0U;
        vlSelf->PipelineCPU__DOT__Ex_imm = 0U;
        vlSelf->PipelineCPU__DOT__Ex_BranchCtl = 0U;
        vlSelf->PipelineCPU__DOT__Ex_RegRs2 = 0U;
        vlSelf->PipelineCPU__DOT__Ex_RegRs1 = 0U;
        vlSelf->PipelineCPU__DOT__Ex_readData1 = 0U;
        vlSelf->PipelineCPU__DOT__Ex_readData2 = 0U;
        vlSelf->PipelineCPU__DOT__Ex_pc = 0U;
    } else {
        vlSelf->PipelineCPU__DOT__Ex_ALUCtl = vlSelf->PipelineCPU__DOT__ID_ALUCtl;
        vlSelf->PipelineCPU__DOT__Ex_imm = vlSelf->PipelineCPU__DOT__ID_imm;
        vlSelf->PipelineCPU__DOT__Ex_BranchCtl = vlSelf->PipelineCPU__DOT__ID_BranchCtl;
        vlSelf->PipelineCPU__DOT__Ex_RegRs2 = (0x1fU 
                                               & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                  >> 0x14U));
        vlSelf->PipelineCPU__DOT__Ex_RegRs1 = (0x1fU 
                                               & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                  >> 0xfU));
        vlSelf->PipelineCPU__DOT__Ex_readData1 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                       >> 0xfU))];
        vlSelf->PipelineCPU__DOT__Ex_readData2 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                       >> 0x14U))];
        vlSelf->PipelineCPU__DOT__Ex_pc = vlSelf->PipelineCPU__DOT__ID_pc;
    }
    vlSelf->PipelineCPU__DOT__Ex_immUse = ((~ ((~ (IData)(vlSelf->start)) 
                                               | (IData)(vlSelf->PipelineCPU__DOT__ID_Ex_flush))) 
                                           & (IData)(vlSelf->PipelineCPU__DOT__ID_immUse));
    vlSelf->PipelineCPU__DOT__Ex_pcUse = ((~ ((~ (IData)(vlSelf->start)) 
                                              | (IData)(vlSelf->PipelineCPU__DOT__ID_Ex_flush))) 
                                          & (IData)(vlSelf->PipelineCPU__DOT__ID_pcUse));
    vlSelf->PipelineCPU__DOT__Ex_branch = ((~ ((~ (IData)(vlSelf->start)) 
                                               | (IData)(vlSelf->PipelineCPU__DOT__ID_Ex_flush))) 
                                           & (IData)(vlSelf->PipelineCPU__DOT__ID_branch));
    vlSelf->PipelineCPU__DOT__Wb_memtoReg = ((IData)(vlSelf->start) 
                                             & (IData)(vlSelf->PipelineCPU__DOT__Mem_memtoReg));
    vlSelf->PipelineCPU__DOT__Wb_jump = ((IData)(vlSelf->start) 
                                         & (IData)(vlSelf->PipelineCPU__DOT__Mem_jump));
    vlSelf->PipelineCPU__DOT__Mem_memWrite = ((IData)(vlSelf->start) 
                                              & (IData)(vlSelf->PipelineCPU__DOT__Ex_memWrite));
    vlSelf->PipelineCPU__DOT__Mem_memtoReg = ((IData)(vlSelf->start) 
                                              & (IData)(vlSelf->PipelineCPU__DOT__Ex_memtoReg));
    vlSelf->PipelineCPU__DOT__Mem_jump = ((IData)(vlSelf->start) 
                                          & (IData)(vlSelf->PipelineCPU__DOT__Ex_jump));
    vlSelf->PipelineCPU__DOT__Ex_memWrite = ((~ ((~ (IData)(vlSelf->start)) 
                                                 | (IData)(vlSelf->PipelineCPU__DOT__ID_Ex_flush))) 
                                             & (IData)(vlSelf->PipelineCPU__DOT__ID_memWrite));
    vlSelf->PipelineCPU__DOT__Ex_memtoReg = ((~ ((~ (IData)(vlSelf->start)) 
                                                 | (IData)(vlSelf->PipelineCPU__DOT__ID_Ex_flush))) 
                                             & (IData)(vlSelf->PipelineCPU__DOT__ID_memtoReg));
    vlSelf->PipelineCPU__DOT__Ex_jump = ((~ ((~ (IData)(vlSelf->start)) 
                                             | (IData)(vlSelf->PipelineCPU__DOT__ID_Ex_flush))) 
                                         & (IData)(vlSelf->PipelineCPU__DOT__ID_jump));
    vlSelf->PipelineCPU__DOT__ID_pc = __Vdly__PipelineCPU__DOT__ID_pc;
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__1(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if (vlSelf->PipelineCPU__DOT__Wb_regWrite) {
            __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (IData)(vlSelf->PipelineCPU__DOT__Wb_RegRd))
                    ? 0U : vlSelf->PipelineCPU__DOT__Wb_writeData);
            __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = vlSelf->PipelineCPU__DOT__Wb_RegRd;
        }
    } else {
        __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[__Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0] 
            = __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1fU];
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__2(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__IF_pc = ((IData)(vlSelf->start)
                                        ? vlSelf->PipelineCPU__DOT__IF_pc_mux
                                        : 0U);
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__3(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->PipelineCPU__DOT__Mem_memRead) {
        vlSelf->PipelineCPU__DOT__Mem_readData3 = (
                                                   (0xffffffU 
                                                    & vlSelf->PipelineCPU__DOT__Mem_readData3) 
                                                   | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(3U) 
                                                          + vlSelf->PipelineCPU__DOT__Mem_ALUOut))] 
                                                      << 0x18U));
        vlSelf->PipelineCPU__DOT__Mem_readData3 = (
                                                   (0xff00ffffU 
                                                    & vlSelf->PipelineCPU__DOT__Mem_readData3) 
                                                   | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->PipelineCPU__DOT__Mem_ALUOut))] 
                                                      << 0x10U));
        vlSelf->PipelineCPU__DOT__Mem_readData3 = (
                                                   (0xffff00ffU 
                                                    & vlSelf->PipelineCPU__DOT__Mem_readData3) 
                                                   | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->PipelineCPU__DOT__Mem_ALUOut))] 
                                                      << 8U));
        vlSelf->PipelineCPU__DOT__Mem_readData3 = (
                                                   (0xffffff00U 
                                                    & vlSelf->PipelineCPU__DOT__Mem_readData3) 
                                                   | vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                   [
                                                   (0x7fU 
                                                    & vlSelf->PipelineCPU__DOT__Mem_ALUOut)]);
    }
}

extern const VlUnpacked<CData/*3:0*/, 8> VPipelineCPU__ConstPool__TABLE_h067159df_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_h166e3cc7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_he16e6d56_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_h3729482a_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_hbdb291c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_hf167067c_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_ha8f04b9d_0;
extern const VlUnpacked<CData/*1:0*/, 128> VPipelineCPU__ConstPool__TABLE_h2a974f35_0;
extern const VlUnpacked<CData/*3:0*/, 64> VPipelineCPU__ConstPool__TABLE_hc5e59d98_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__4(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->PipelineCPU__DOT__Wb_writeData = ((IData)(vlSelf->PipelineCPU__DOT__Wb_jump)
                                               ? ((IData)(4U) 
                                                  + vlSelf->PipelineCPU__DOT__Wb_pc)
                                               : ((IData)(vlSelf->PipelineCPU__DOT__Wb_memtoReg)
                                                   ? vlSelf->PipelineCPU__DOT__Wb_readData3
                                                   : vlSelf->PipelineCPU__DOT__Wb_ALUOut));
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->start) {
        vlSelf->PipelineCPU__DOT__Wb_regWrite = vlSelf->PipelineCPU__DOT__Mem_regWrite;
        vlSelf->PipelineCPU__DOT__Wb_RegRd = vlSelf->PipelineCPU__DOT__Mem_RegRd;
        vlSelf->PipelineCPU__DOT__Mem_ALUOut = vlSelf->PipelineCPU__DOT__Ex_ALUOut;
        vlSelf->PipelineCPU__DOT__Mem_RegRd = vlSelf->PipelineCPU__DOT__Ex_RegRd;
        vlSelf->PipelineCPU__DOT__Mem_memRead = vlSelf->PipelineCPU__DOT__Ex_memRead;
        vlSelf->PipelineCPU__DOT__Mem_regWrite = vlSelf->PipelineCPU__DOT__Ex_regWrite;
    } else {
        vlSelf->PipelineCPU__DOT__Wb_regWrite = 0U;
        vlSelf->PipelineCPU__DOT__Wb_RegRd = 0U;
        vlSelf->PipelineCPU__DOT__Mem_ALUOut = 0U;
        vlSelf->PipelineCPU__DOT__Mem_RegRd = 0U;
        vlSelf->PipelineCPU__DOT__Mem_memRead = 0U;
        vlSelf->PipelineCPU__DOT__Mem_regWrite = 0U;
    }
    vlSelf->PipelineCPU__DOT__Ex_memRead = ((~ ((~ (IData)(vlSelf->start)) 
                                                | (IData)(vlSelf->PipelineCPU__DOT__ID_Ex_flush))) 
                                            & (IData)(vlSelf->PipelineCPU__DOT__ID_memRead));
    vlSelf->PipelineCPU__DOT__Ex_regWrite = ((~ ((~ (IData)(vlSelf->start)) 
                                                 | (IData)(vlSelf->PipelineCPU__DOT__ID_Ex_flush))) 
                                             & (IData)(vlSelf->PipelineCPU__DOT__ID_regWrite));
    vlSelf->PipelineCPU__DOT__forwardA = 0U;
    if ((((IData)(vlSelf->PipelineCPU__DOT__Mem_regWrite) 
          & (0U != (IData)(vlSelf->PipelineCPU__DOT__Mem_RegRd))) 
         & ((IData)(vlSelf->PipelineCPU__DOT__Mem_RegRd) 
            == (IData)(vlSelf->PipelineCPU__DOT__Ex_RegRs1)))) {
        vlSelf->PipelineCPU__DOT__forwardA = 2U;
    }
    if (((((IData)(vlSelf->PipelineCPU__DOT__Wb_regWrite) 
           & (0U != (IData)(vlSelf->PipelineCPU__DOT__Wb_RegRd))) 
          & ((IData)(vlSelf->PipelineCPU__DOT__Wb_RegRd) 
             == (IData)(vlSelf->PipelineCPU__DOT__Ex_RegRs1))) 
         & (~ (((IData)(vlSelf->PipelineCPU__DOT__Mem_regWrite) 
                & (0U != (IData)(vlSelf->PipelineCPU__DOT__Mem_RegRd))) 
               & ((IData)(vlSelf->PipelineCPU__DOT__Mem_RegRd) 
                  == (IData)(vlSelf->PipelineCPU__DOT__Ex_RegRs1)))))) {
        vlSelf->PipelineCPU__DOT__forwardA = 1U;
    }
    vlSelf->PipelineCPU__DOT__forwardB = 0U;
    if ((((IData)(vlSelf->PipelineCPU__DOT__Mem_regWrite) 
          & (0U != (IData)(vlSelf->PipelineCPU__DOT__Mem_RegRd))) 
         & ((IData)(vlSelf->PipelineCPU__DOT__Mem_RegRd) 
            == (IData)(vlSelf->PipelineCPU__DOT__Ex_RegRs2)))) {
        vlSelf->PipelineCPU__DOT__forwardB = 2U;
    }
    if (((((IData)(vlSelf->PipelineCPU__DOT__Wb_regWrite) 
           & (0U != (IData)(vlSelf->PipelineCPU__DOT__Wb_RegRd))) 
          & ((IData)(vlSelf->PipelineCPU__DOT__Wb_RegRd) 
             == (IData)(vlSelf->PipelineCPU__DOT__Ex_RegRs2))) 
         & (~ (((IData)(vlSelf->PipelineCPU__DOT__Mem_regWrite) 
                & (0U != (IData)(vlSelf->PipelineCPU__DOT__Mem_RegRd))) 
               & ((IData)(vlSelf->PipelineCPU__DOT__Mem_RegRd) 
                  == (IData)(vlSelf->PipelineCPU__DOT__Ex_RegRs2)))))) {
        vlSelf->PipelineCPU__DOT__forwardB = 1U;
    }
    vlSelf->PipelineCPU__DOT__Ex_RegRd = ((1U & ((~ (IData)(vlSelf->start)) 
                                                 | (IData)(vlSelf->PipelineCPU__DOT__ID_Ex_flush)))
                                           ? 0U : (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                      >> 7U)));
    vlSelf->PipelineCPU__DOT__rs1_Data = ((0U == (IData)(vlSelf->PipelineCPU__DOT__forwardA))
                                           ? vlSelf->PipelineCPU__DOT__Ex_readData1
                                           : ((1U == (IData)(vlSelf->PipelineCPU__DOT__forwardA))
                                               ? vlSelf->PipelineCPU__DOT__Wb_writeData
                                               : ((2U 
                                                   == (IData)(vlSelf->PipelineCPU__DOT__forwardA))
                                                   ? vlSelf->PipelineCPU__DOT__Mem_ALUOut
                                                   : vlSelf->PipelineCPU__DOT__Ex_readData1)));
    vlSelf->PipelineCPU__DOT__rs2_Data = ((0U == (IData)(vlSelf->PipelineCPU__DOT__forwardB))
                                           ? vlSelf->PipelineCPU__DOT__Ex_readData2
                                           : ((1U == (IData)(vlSelf->PipelineCPU__DOT__forwardB))
                                               ? vlSelf->PipelineCPU__DOT__Wb_writeData
                                               : ((2U 
                                                   == (IData)(vlSelf->PipelineCPU__DOT__forwardB))
                                                   ? vlSelf->PipelineCPU__DOT__Mem_ALUOut
                                                   : vlSelf->PipelineCPU__DOT__Ex_readData2)));
    vlSelf->PipelineCPU__DOT__ID_instruction = vlSelf->__Vdly__PipelineCPU__DOT__ID_instruction;
    vlSelf->PipelineCPU__DOT__aluSrc1 = ((IData)(vlSelf->PipelineCPU__DOT__Ex_pcUse)
                                          ? vlSelf->PipelineCPU__DOT__Ex_pc
                                          : vlSelf->PipelineCPU__DOT__rs1_Data);
    vlSelf->PipelineCPU__DOT__aluSrc2 = ((IData)(vlSelf->PipelineCPU__DOT__Ex_immUse)
                                          ? vlSelf->PipelineCPU__DOT__Ex_imm
                                          : vlSelf->PipelineCPU__DOT__rs2_Data);
    vlSelf->PipelineCPU__DOT____VdfgTmp_h13f1118f__0 
        = (((8U & (IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl))
             ? ((4U & (IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl))
                 ? ((~ ((IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl) 
                        >> 1U)) & ((1U & (IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl))
                                    ? (vlSelf->PipelineCPU__DOT__rs1_Data 
                                       != vlSelf->PipelineCPU__DOT__rs2_Data)
                                    : (vlSelf->PipelineCPU__DOT__rs1_Data 
                                       == vlSelf->PipelineCPU__DOT__rs2_Data)))
                 : (((IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl) 
                     >> 1U) & ((IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl) 
                               & VL_GTES_III(32, vlSelf->PipelineCPU__DOT__rs1_Data, vlSelf->PipelineCPU__DOT__rs2_Data))))
             : (IData)(((7U == (7U & (IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl))) 
                        & VL_LTS_III(32, vlSelf->PipelineCPU__DOT__rs1_Data, vlSelf->PipelineCPU__DOT__rs2_Data)))) 
           & (IData)(vlSelf->PipelineCPU__DOT__Ex_branch));
    if ((0x40U & vlSelf->PipelineCPU__DOT__ID_instruction)) {
        if ((0x20U & vlSelf->PipelineCPU__DOT__ID_instruction)) {
            if ((0x10U & vlSelf->PipelineCPU__DOT__ID_instruction)) {
                vlSelf->PipelineCPU__DOT__ID_imm = 0U;
            } else if ((8U & vlSelf->PipelineCPU__DOT__ID_instruction)) {
                if ((4U & vlSelf->PipelineCPU__DOT__ID_instruction)) {
                    if ((2U & vlSelf->PipelineCPU__DOT__ID_instruction)) {
                        if ((1U & vlSelf->PipelineCPU__DOT__ID_instruction)) {
                            vlSelf->PipelineCPU__DOT__ID_imm 
                                = (((- (IData)((vlSelf->PipelineCPU__DOT__ID_instruction 
                                                >> 0x1fU))) 
                                    << 0x13U) | ((0x7f800U 
                                                  & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                     >> 1U)) 
                                                 | ((0x400U 
                                                     & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                        >> 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                          >> 0x15U)))));
                            vlSelf->PipelineCPU__DOT__ID_imm 
                                = (vlSelf->PipelineCPU__DOT__ID_imm 
                                   << 1U);
                        } else {
                            vlSelf->PipelineCPU__DOT__ID_imm = 0U;
                        }
                    } else {
                        vlSelf->PipelineCPU__DOT__ID_imm = 0U;
                    }
                } else {
                    vlSelf->PipelineCPU__DOT__ID_imm = 0U;
                }
            } else if ((4U & vlSelf->PipelineCPU__DOT__ID_instruction)) {
                vlSelf->PipelineCPU__DOT__ID_imm = 
                    ((2U & vlSelf->PipelineCPU__DOT__ID_instruction)
                      ? ((1U & vlSelf->PipelineCPU__DOT__ID_instruction)
                          ? (((- (IData)((vlSelf->PipelineCPU__DOT__ID_instruction 
                                          >> 0x1fU))) 
                              << 0xbU) | (0x7ffU & 
                                          (vlSelf->PipelineCPU__DOT__ID_instruction 
                                           >> 0x14U)))
                          : 0U) : 0U);
            } else if ((2U & vlSelf->PipelineCPU__DOT__ID_instruction)) {
                if ((1U & vlSelf->PipelineCPU__DOT__ID_instruction)) {
                    vlSelf->PipelineCPU__DOT__ID_imm 
                        = (((- (IData)((vlSelf->PipelineCPU__DOT__ID_instruction 
                                        >> 0x1fU))) 
                            << 0xbU) | ((0x400U & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                 >> 8U)))));
                    vlSelf->PipelineCPU__DOT__ID_imm 
                        = (vlSelf->PipelineCPU__DOT__ID_imm 
                           << 1U);
                } else {
                    vlSelf->PipelineCPU__DOT__ID_imm = 0U;
                }
            } else {
                vlSelf->PipelineCPU__DOT__ID_imm = 0U;
            }
        } else {
            vlSelf->PipelineCPU__DOT__ID_imm = 0U;
        }
    } else {
        vlSelf->PipelineCPU__DOT__ID_imm = ((0x20U 
                                             & vlSelf->PipelineCPU__DOT__ID_instruction)
                                             ? ((0x10U 
                                                 & vlSelf->PipelineCPU__DOT__ID_instruction)
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & vlSelf->PipelineCPU__DOT__ID_instruction)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->PipelineCPU__DOT__ID_instruction)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__ID_instruction)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__ID_instruction)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                              >> 7U))))
                                                     : 0U)
                                                    : 0U))))
                                             : ((0x10U 
                                                 & vlSelf->PipelineCPU__DOT__ID_instruction)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->PipelineCPU__DOT__ID_instruction)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->PipelineCPU__DOT__ID_instruction)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__ID_instruction)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__ID_instruction)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | (0x7ffU 
                                                        & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                           >> 0x14U)))
                                                     : 0U)
                                                    : 0U)))
                                                 : 
                                                ((8U 
                                                  & vlSelf->PipelineCPU__DOT__ID_instruction)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->PipelineCPU__DOT__ID_instruction)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__ID_instruction)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__ID_instruction)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | (0x7ffU 
                                                        & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                           >> 0x14U)))
                                                     : 0U)
                                                    : 0U)))));
    }
    __Vtableidx3 = (7U & (vlSelf->PipelineCPU__DOT__ID_instruction 
                          >> 0xcU));
    vlSelf->PipelineCPU__DOT__ID_BranchCtl = VPipelineCPU__ConstPool__TABLE_h067159df_0
        [__Vtableidx3];
    __Vtableidx1 = (0x7fU & vlSelf->PipelineCPU__DOT__ID_instruction);
    vlSelf->PipelineCPU__DOT__ID_immUse = VPipelineCPU__ConstPool__TABLE_h166e3cc7_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_memtoReg = VPipelineCPU__ConstPool__TABLE_he16e6d56_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_regWrite = VPipelineCPU__ConstPool__TABLE_h3729482a_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_memRead = VPipelineCPU__ConstPool__TABLE_he16e6d56_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_memWrite = VPipelineCPU__ConstPool__TABLE_hbdb291c7_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_branch = VPipelineCPU__ConstPool__TABLE_hf167067c_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_jump = VPipelineCPU__ConstPool__TABLE_ha8f04b9d_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_pcUse = VPipelineCPU__ConstPool__TABLE_hf167067c_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ID_ALUOp = VPipelineCPU__ConstPool__TABLE_h2a974f35_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__Ex_ALUOut = ((8U & (IData)(vlSelf->PipelineCPU__DOT__Ex_ALUCtl))
                                            ? 0U : 
                                           ((4U & (IData)(vlSelf->PipelineCPU__DOT__Ex_ALUCtl))
                                             ? ((2U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__Ex_ALUCtl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__Ex_ALUCtl))
                                                  ? 
                                                 (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__aluSrc1, vlSelf->PipelineCPU__DOT__aluSrc2)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (vlSelf->PipelineCPU__DOT__aluSrc1 
                                                  - vlSelf->PipelineCPU__DOT__aluSrc2))
                                                 : 0U)
                                             : ((2U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__Ex_ALUCtl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__Ex_ALUCtl))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->PipelineCPU__DOT__aluSrc1 
                                                  + vlSelf->PipelineCPU__DOT__aluSrc2))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__Ex_ALUCtl))
                                                  ? 
                                                 (vlSelf->PipelineCPU__DOT__aluSrc1 
                                                  | vlSelf->PipelineCPU__DOT__aluSrc2)
                                                  : 
                                                 (vlSelf->PipelineCPU__DOT__aluSrc1 
                                                  & vlSelf->PipelineCPU__DOT__aluSrc2)))));
    vlSelf->PipelineCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch 
        = ((IData)(vlSelf->PipelineCPU__DOT__Ex_jump) 
           | (IData)(vlSelf->PipelineCPU__DOT____VdfgTmp_h13f1118f__0));
    __Vtableidx2 = ((0x20U & (vlSelf->PipelineCPU__DOT__ID_instruction 
                              >> 0x19U)) | ((0x1cU 
                                             & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                >> 0xaU)) 
                                            | (IData)(vlSelf->PipelineCPU__DOT__ID_ALUOp)));
    vlSelf->PipelineCPU__DOT__ID_ALUCtl = VPipelineCPU__ConstPool__TABLE_hc5e59d98_0
        [__Vtableidx2];
    vlSelf->PipelineCPU__DOT__ID_Ex_flush = ((IData)(vlSelf->PipelineCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch) 
                                             | ((IData)(vlSelf->PipelineCPU__DOT__Ex_memRead) 
                                                & (((IData)(vlSelf->PipelineCPU__DOT__Ex_RegRd) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                        >> 0xfU))) 
                                                   | ((IData)(vlSelf->PipelineCPU__DOT__Ex_RegRd) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                          >> 0x14U))))));
    vlSelf->PipelineCPU__DOT__IF_ID_freeze = ((~ (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch)) 
                                              & ((IData)(vlSelf->PipelineCPU__DOT__Ex_memRead) 
                                                 & (((IData)(vlSelf->PipelineCPU__DOT__Ex_RegRd) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                         >> 0xfU))) 
                                                    | ((IData)(vlSelf->PipelineCPU__DOT__Ex_RegRd) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                           >> 0x14U))))));
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_comb__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__IF_pc_mux = (((~ (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch)) 
                                            & ((IData)(vlSelf->PipelineCPU__DOT__Ex_memRead) 
                                               & (((IData)(vlSelf->PipelineCPU__DOT__Ex_RegRd) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                       >> 0xfU))) 
                                                  | ((IData)(vlSelf->PipelineCPU__DOT__Ex_RegRd) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                         >> 0x14U))))))
                                            ? vlSelf->PipelineCPU__DOT__IF_pc
                                            : (((IData)(vlSelf->PipelineCPU__DOT____VdfgTmp_h13f1118f__0) 
                                                | (IData)(vlSelf->PipelineCPU__DOT__Ex_jump))
                                                ? vlSelf->PipelineCPU__DOT__Ex_ALUOut
                                                : ((IData)(4U) 
                                                   + vlSelf->PipelineCPU__DOT__IF_pc)));
}

void VPipelineCPU___024root___eval_nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VPipelineCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VPipelineCPU___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VPipelineCPU___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VPipelineCPU___024root___eval_triggers__act(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VPipelineCPU___024root___eval(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval\n"); );
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
            VPipelineCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPipelineCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("PipelineCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPipelineCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("PipelineCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPipelineCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPipelineCPU___024root___eval_debug_assertions(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
