// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSingleCycleCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->SingleCycleCPU__DOT__ID_pc),32);
        bufp->chgIData(oldp+1,(vlSelf->SingleCycleCPU__DOT__Ex_pc),32);
        bufp->chgIData(oldp+2,(vlSelf->SingleCycleCPU__DOT__Mem_pc),32);
        bufp->chgIData(oldp+3,(vlSelf->SingleCycleCPU__DOT__Wb_pc),32);
        bufp->chgIData(oldp+4,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__Wb_pc)),32);
        bufp->chgCData(oldp+5,(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl),4);
        bufp->chgBit(oldp+6,(vlSelf->SingleCycleCPU__DOT__Ex_immUse));
        bufp->chgBit(oldp+7,(vlSelf->SingleCycleCPU__DOT__Ex_memtoReg));
        bufp->chgBit(oldp+8,(vlSelf->SingleCycleCPU__DOT__Mem_memtoReg));
        bufp->chgBit(oldp+9,(vlSelf->SingleCycleCPU__DOT__Wb_memtoReg));
        bufp->chgBit(oldp+10,(vlSelf->SingleCycleCPU__DOT__Ex_memWrite));
        bufp->chgBit(oldp+11,(vlSelf->SingleCycleCPU__DOT__Mem_memWrite));
        bufp->chgBit(oldp+12,(vlSelf->SingleCycleCPU__DOT__Ex_branch));
        bufp->chgBit(oldp+13,(vlSelf->SingleCycleCPU__DOT__Ex_jump));
        bufp->chgBit(oldp+14,(vlSelf->SingleCycleCPU__DOT__Mem_jump));
        bufp->chgBit(oldp+15,(vlSelf->SingleCycleCPU__DOT__Wb_jump));
        bufp->chgBit(oldp+16,(vlSelf->SingleCycleCPU__DOT__Ex_pcUse));
        bufp->chgIData(oldp+17,(vlSelf->SingleCycleCPU__DOT__Ex_readData1),32);
        bufp->chgIData(oldp+18,(vlSelf->SingleCycleCPU__DOT__Ex_readData2),32);
        bufp->chgIData(oldp+19,(vlSelf->SingleCycleCPU__DOT__Mem_readData2),32);
        bufp->chgIData(oldp+20,(vlSelf->SingleCycleCPU__DOT__Wb_readData3),32);
        bufp->chgCData(oldp+21,(vlSelf->SingleCycleCPU__DOT__Ex_RegRs1),5);
        bufp->chgCData(oldp+22,(vlSelf->SingleCycleCPU__DOT__Ex_RegRs2),5);
        bufp->chgIData(oldp+23,(vlSelf->SingleCycleCPU__DOT__Ex_imm),32);
        bufp->chgIData(oldp+24,(vlSelf->SingleCycleCPU__DOT__Wb_ALUOut),32);
        bufp->chgCData(oldp+25,(vlSelf->SingleCycleCPU__DOT__Ex_ALUCtl),4);
        bufp->chgIData(oldp+26,(((IData)(vlSelf->SingleCycleCPU__DOT__Wb_memtoReg)
                                  ? vlSelf->SingleCycleCPU__DOT__Wb_readData3
                                  : vlSelf->SingleCycleCPU__DOT__Wb_ALUOut)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+27,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+28,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+29,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+30,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+31,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+32,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+33,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+34,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+35,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+36,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+37,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+38,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+39,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+40,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+41,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+42,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+43,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+44,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+45,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+46,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+47,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+48,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+49,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+50,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+51,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+55,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+56,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+57,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+58,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+59,(vlSelf->SingleCycleCPU__DOT__ID_instruction),32);
        bufp->chgCData(oldp+60,(vlSelf->SingleCycleCPU__DOT__ID_BranchCtl),4);
        bufp->chgBit(oldp+61,(vlSelf->SingleCycleCPU__DOT__ID_immUse));
        bufp->chgBit(oldp+62,(vlSelf->SingleCycleCPU__DOT__ID_memtoReg));
        bufp->chgBit(oldp+63,(vlSelf->SingleCycleCPU__DOT__ID_regWrite));
        bufp->chgBit(oldp+64,(vlSelf->SingleCycleCPU__DOT__Ex_regWrite));
        bufp->chgBit(oldp+65,(vlSelf->SingleCycleCPU__DOT__Mem_regWrite));
        bufp->chgBit(oldp+66,(vlSelf->SingleCycleCPU__DOT__Wb_regWrite));
        bufp->chgBit(oldp+67,(vlSelf->SingleCycleCPU__DOT__ID_memRead));
        bufp->chgBit(oldp+68,(vlSelf->SingleCycleCPU__DOT__Ex_memRead));
        bufp->chgBit(oldp+69,(vlSelf->SingleCycleCPU__DOT__Mem_memRead));
        bufp->chgBit(oldp+70,(vlSelf->SingleCycleCPU__DOT__ID_memWrite));
        bufp->chgBit(oldp+71,(vlSelf->SingleCycleCPU__DOT__ID_branch));
        bufp->chgBit(oldp+72,(vlSelf->SingleCycleCPU__DOT__ID_jump));
        bufp->chgBit(oldp+73,(vlSelf->SingleCycleCPU__DOT__ID_pcUse));
        bufp->chgCData(oldp+74,(vlSelf->SingleCycleCPU__DOT__ID_ALUOp),2);
        bufp->chgIData(oldp+75,(vlSelf->SingleCycleCPU__DOT__Wb_writeData),32);
        bufp->chgCData(oldp+76,(vlSelf->SingleCycleCPU__DOT__Ex_RegRd),5);
        bufp->chgCData(oldp+77,(vlSelf->SingleCycleCPU__DOT__Mem_RegRd),5);
        bufp->chgCData(oldp+78,(vlSelf->SingleCycleCPU__DOT__Wb_RegRd),5);
        bufp->chgIData(oldp+79,(vlSelf->SingleCycleCPU__DOT__ID_imm),32);
        bufp->chgIData(oldp+80,(vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1),32);
        bufp->chgIData(oldp+81,(vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2),32);
        bufp->chgIData(oldp+82,(vlSelf->SingleCycleCPU__DOT__Ex_ALUOut),32);
        bufp->chgIData(oldp+83,(vlSelf->SingleCycleCPU__DOT__Mem_ALUOut),32);
        bufp->chgCData(oldp+84,(vlSelf->SingleCycleCPU__DOT__ID_ALUCtl),4);
        bufp->chgCData(oldp+85,(vlSelf->SingleCycleCPU__DOT__forwardA),2);
        bufp->chgCData(oldp+86,(vlSelf->SingleCycleCPU__DOT__forwardB),2);
        bufp->chgBit(oldp+87,(vlSelf->SingleCycleCPU__DOT__IF_ID_flush));
        bufp->chgBit(oldp+88,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch));
        bufp->chgBit(oldp+89,(((~ (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch)) 
                               & ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_memRead) 
                                  & (((IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRd) 
                                      == (0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                   >> 0xfU))) 
                                     | ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRd) 
                                        == (0x1fU & 
                                            (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                             >> 0x14U))))))));
        bufp->chgIData(oldp+90,(vlSelf->SingleCycleCPU__DOT__out1),32);
        bufp->chgIData(oldp+91,(vlSelf->SingleCycleCPU__DOT__out2),32);
        bufp->chgBit(oldp+92,((1U & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+93,((7U & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+94,((0x7fU & vlSelf->SingleCycleCPU__DOT__ID_instruction)),7);
        bufp->chgCData(oldp+95,((0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+96,((0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+97,((0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                          >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+98,(vlSelf->SingleCycleCPU__DOT__IF_pc),32);
        bufp->chgIData(oldp+99,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__IF_pc)),32);
        bufp->chgIData(oldp+100,(((0x80U <= vlSelf->SingleCycleCPU__DOT__IF_pc)
                                   ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                            [(0x7fU 
                                              & vlSelf->SingleCycleCPU__DOT__IF_pc)] 
                                            << 0x18U) 
                                           | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                               [(0x7fU 
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
                                                 [(0x7fU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->SingleCycleCPU__DOT__IF_pc))]))))),32);
    }
    bufp->chgBit(oldp+101,(vlSelf->clk));
    bufp->chgBit(oldp+102,(vlSelf->start));
    bufp->chgIData(oldp+103,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+104,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+105,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+106,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+107,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+108,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+109,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+110,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+111,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+112,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+113,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+114,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+115,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+116,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+117,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+118,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+119,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+120,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+121,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+122,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+123,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+124,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+125,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+126,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+127,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+128,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+129,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+130,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+131,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+132,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+133,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+134,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+135,((((~ (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch)) 
                               & ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_memRead) 
                                  & (((IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRd) 
                                      == (0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                   >> 0xfU))) 
                                     | ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRd) 
                                        == (0x1fU & 
                                            (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                             >> 0x14U))))))
                               ? vlSelf->SingleCycleCPU__DOT__IF_pc
                               : (((IData)(vlSelf->SingleCycleCPU__DOT____VdfgTmp_h13f1118f__0) 
                                   | (IData)(vlSelf->SingleCycleCPU__DOT__Ex_jump))
                                   ? vlSelf->SingleCycleCPU__DOT__Ex_ALUOut
                                   : ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__IF_pc)))),32);
    bufp->chgBit(oldp+136,(((8U & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl))
                             ? ((4U & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl))
                                 ? ((~ ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl) 
                                        >> 1U)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl))
                                                    ? 
                                                   (vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1 
                                                    != vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2)
                                                    : 
                                                   (vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1 
                                                    == vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2)))
                                 : (((IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl) 
                                     >> 1U) & ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl) 
                                               & VL_GTES_III(32, vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1, vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2))))
                             : (IData)(((7U == (7U 
                                                & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl))) 
                                        & VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1, vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2))))));
    bufp->chgIData(oldp+137,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+138,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+139,(vlSelf->SingleCycleCPU__DOT__Mem_readData3),32);
    bufp->chgIData(oldp+140,((((IData)(vlSelf->SingleCycleCPU__DOT____VdfgTmp_h13f1118f__0) 
                               | (IData)(vlSelf->SingleCycleCPU__DOT__Ex_jump))
                               ? vlSelf->SingleCycleCPU__DOT__Ex_ALUOut
                               : ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__IF_pc))),32);
    bufp->chgBit(oldp+141,(((IData)(vlSelf->SingleCycleCPU__DOT____VdfgTmp_h13f1118f__0) 
                            | (IData)(vlSelf->SingleCycleCPU__DOT__Ex_jump))));
}

void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_cleanup\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
