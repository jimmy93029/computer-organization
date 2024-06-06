// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPipelineCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->PipelineCPU__DOT__ID_pc),32);
        bufp->chgIData(oldp+1,(vlSelf->PipelineCPU__DOT__Ex_pc),32);
        bufp->chgIData(oldp+2,(vlSelf->PipelineCPU__DOT__Mem_pc),32);
        bufp->chgIData(oldp+3,(vlSelf->PipelineCPU__DOT__Wb_pc),32);
        bufp->chgIData(oldp+4,(((IData)(4U) + vlSelf->PipelineCPU__DOT__Wb_pc)),32);
        bufp->chgCData(oldp+5,(vlSelf->PipelineCPU__DOT__Ex_BranchCtl),4);
        bufp->chgBit(oldp+6,(vlSelf->PipelineCPU__DOT__Ex_immUse));
        bufp->chgBit(oldp+7,(vlSelf->PipelineCPU__DOT__Ex_memtoReg));
        bufp->chgBit(oldp+8,(vlSelf->PipelineCPU__DOT__Mem_memtoReg));
        bufp->chgBit(oldp+9,(vlSelf->PipelineCPU__DOT__Wb_memtoReg));
        bufp->chgBit(oldp+10,(vlSelf->PipelineCPU__DOT__Ex_memWrite));
        bufp->chgBit(oldp+11,(vlSelf->PipelineCPU__DOT__Mem_memWrite));
        bufp->chgBit(oldp+12,(vlSelf->PipelineCPU__DOT__Ex_branch));
        bufp->chgBit(oldp+13,(vlSelf->PipelineCPU__DOT__Ex_jump));
        bufp->chgBit(oldp+14,(vlSelf->PipelineCPU__DOT__Mem_jump));
        bufp->chgBit(oldp+15,(vlSelf->PipelineCPU__DOT__Wb_jump));
        bufp->chgBit(oldp+16,(vlSelf->PipelineCPU__DOT__Ex_pcUse));
        bufp->chgIData(oldp+17,(vlSelf->PipelineCPU__DOT__Ex_readData1),32);
        bufp->chgIData(oldp+18,(vlSelf->PipelineCPU__DOT__Ex_readData2),32);
        bufp->chgIData(oldp+19,(vlSelf->PipelineCPU__DOT__Mem_rs2_Data),32);
        bufp->chgIData(oldp+20,(vlSelf->PipelineCPU__DOT__Wb_readData3),32);
        bufp->chgCData(oldp+21,(vlSelf->PipelineCPU__DOT__Ex_RegRs1),5);
        bufp->chgCData(oldp+22,(vlSelf->PipelineCPU__DOT__Ex_RegRs2),5);
        bufp->chgIData(oldp+23,(vlSelf->PipelineCPU__DOT__Ex_imm),32);
        bufp->chgIData(oldp+24,(vlSelf->PipelineCPU__DOT__Wb_ALUOut),32);
        bufp->chgCData(oldp+25,(vlSelf->PipelineCPU__DOT__Ex_ALUCtl),4);
        bufp->chgIData(oldp+26,(((IData)(vlSelf->PipelineCPU__DOT__Wb_memtoReg)
                                  ? vlSelf->PipelineCPU__DOT__Wb_readData3
                                  : vlSelf->PipelineCPU__DOT__Wb_ALUOut)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+42,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+43,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+44,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+45,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+46,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+47,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+48,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+49,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+50,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+51,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+52,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+53,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+54,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+55,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+56,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+57,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+58,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+59,(vlSelf->PipelineCPU__DOT__IF_pc),32);
        bufp->chgIData(oldp+60,(((IData)(4U) + vlSelf->PipelineCPU__DOT__IF_pc)),32);
        bufp->chgIData(oldp+61,(((0x80U <= vlSelf->PipelineCPU__DOT__IF_pc)
                                  ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & vlSelf->PipelineCPU__DOT__IF_pc)] 
                                           << 0x18U) 
                                          | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                              [(0x7fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->PipelineCPU__DOT__IF_pc))] 
                                              << 0x10U) 
                                             | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                 [(0x7fU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->PipelineCPU__DOT__IF_pc))] 
                                                 << 8U) 
                                                | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                [(0x7fU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->PipelineCPU__DOT__IF_pc))]))))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+62,(vlSelf->PipelineCPU__DOT__ID_instruction),32);
        bufp->chgCData(oldp+63,(vlSelf->PipelineCPU__DOT__ID_BranchCtl),4);
        bufp->chgBit(oldp+64,(vlSelf->PipelineCPU__DOT__ID_immUse));
        bufp->chgBit(oldp+65,(vlSelf->PipelineCPU__DOT__ID_memtoReg));
        bufp->chgBit(oldp+66,(vlSelf->PipelineCPU__DOT__ID_regWrite));
        bufp->chgBit(oldp+67,(vlSelf->PipelineCPU__DOT__Ex_regWrite));
        bufp->chgBit(oldp+68,(vlSelf->PipelineCPU__DOT__Mem_regWrite));
        bufp->chgBit(oldp+69,(vlSelf->PipelineCPU__DOT__Wb_regWrite));
        bufp->chgBit(oldp+70,(vlSelf->PipelineCPU__DOT__ID_memRead));
        bufp->chgBit(oldp+71,(vlSelf->PipelineCPU__DOT__Ex_memRead));
        bufp->chgBit(oldp+72,(vlSelf->PipelineCPU__DOT__Mem_memRead));
        bufp->chgBit(oldp+73,(vlSelf->PipelineCPU__DOT__ID_memWrite));
        bufp->chgBit(oldp+74,(vlSelf->PipelineCPU__DOT__ID_branch));
        bufp->chgBit(oldp+75,(vlSelf->PipelineCPU__DOT__ID_jump));
        bufp->chgBit(oldp+76,(vlSelf->PipelineCPU__DOT__ID_pcUse));
        bufp->chgCData(oldp+77,(vlSelf->PipelineCPU__DOT__ID_ALUOp),2);
        bufp->chgIData(oldp+78,(vlSelf->PipelineCPU__DOT__Wb_writeData),32);
        bufp->chgCData(oldp+79,(vlSelf->PipelineCPU__DOT__Ex_RegRd),5);
        bufp->chgCData(oldp+80,(vlSelf->PipelineCPU__DOT__Mem_RegRd),5);
        bufp->chgCData(oldp+81,(vlSelf->PipelineCPU__DOT__Wb_RegRd),5);
        bufp->chgIData(oldp+82,(vlSelf->PipelineCPU__DOT__ID_imm),32);
        bufp->chgIData(oldp+83,(vlSelf->PipelineCPU__DOT__aluSrc1),32);
        bufp->chgIData(oldp+84,(vlSelf->PipelineCPU__DOT__aluSrc2),32);
        bufp->chgIData(oldp+85,(vlSelf->PipelineCPU__DOT__rs1_Data),32);
        bufp->chgIData(oldp+86,(vlSelf->PipelineCPU__DOT__rs2_Data),32);
        bufp->chgIData(oldp+87,(vlSelf->PipelineCPU__DOT__Ex_ALUOut),32);
        bufp->chgIData(oldp+88,(vlSelf->PipelineCPU__DOT__Mem_ALUOut),32);
        bufp->chgCData(oldp+89,(vlSelf->PipelineCPU__DOT__ID_ALUCtl),4);
        bufp->chgCData(oldp+90,(vlSelf->PipelineCPU__DOT__forwardA),2);
        bufp->chgCData(oldp+91,(vlSelf->PipelineCPU__DOT__forwardB),2);
        bufp->chgBit(oldp+92,(vlSelf->PipelineCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch));
        bufp->chgBit(oldp+93,(vlSelf->PipelineCPU__DOT__ID_Ex_flush));
        bufp->chgBit(oldp+94,(vlSelf->PipelineCPU__DOT__IF_ID_freeze));
        bufp->chgBit(oldp+95,(((~ (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch)) 
                               & ((IData)(vlSelf->PipelineCPU__DOT__Ex_memRead) 
                                  & (((IData)(vlSelf->PipelineCPU__DOT__Ex_RegRd) 
                                      == (0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                   >> 0xfU))) 
                                     | ((IData)(vlSelf->PipelineCPU__DOT__Ex_RegRd) 
                                        == (0x1fU & 
                                            (vlSelf->PipelineCPU__DOT__ID_instruction 
                                             >> 0x14U))))))));
        bufp->chgBit(oldp+96,((1U & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+97,((7U & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+98,((0x7fU & vlSelf->PipelineCPU__DOT__ID_instruction)),7);
        bufp->chgCData(oldp+99,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+100,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+101,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                           >> 7U))),5);
    }
    bufp->chgBit(oldp+102,(vlSelf->clk));
    bufp->chgBit(oldp+103,(vlSelf->start));
    bufp->chgIData(oldp+104,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+105,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+106,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+107,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+108,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+109,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+110,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+111,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+112,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+113,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+114,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+115,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+116,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+117,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+118,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+119,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+120,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+121,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+122,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+123,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+124,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+125,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+126,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+127,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+128,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+129,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+130,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+131,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+132,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+133,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+134,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+135,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+136,((((~ (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch)) 
                               & ((IData)(vlSelf->PipelineCPU__DOT__Ex_memRead) 
                                  & (((IData)(vlSelf->PipelineCPU__DOT__Ex_RegRd) 
                                      == (0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                   >> 0xfU))) 
                                     | ((IData)(vlSelf->PipelineCPU__DOT__Ex_RegRd) 
                                        == (0x1fU & 
                                            (vlSelf->PipelineCPU__DOT__ID_instruction 
                                             >> 0x14U))))))
                               ? vlSelf->PipelineCPU__DOT__IF_pc
                               : (((IData)(vlSelf->PipelineCPU__DOT____VdfgTmp_h13f1118f__0) 
                                   | (IData)(vlSelf->PipelineCPU__DOT__Ex_jump))
                                   ? vlSelf->PipelineCPU__DOT__Ex_ALUOut
                                   : ((IData)(4U) + vlSelf->PipelineCPU__DOT__IF_pc)))),32);
    bufp->chgBit(oldp+137,(((8U & (IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl))
                             ? ((4U & (IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl))
                                 ? ((~ ((IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl) 
                                        >> 1U)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl))
                                                    ? 
                                                   (vlSelf->PipelineCPU__DOT__rs1_Data 
                                                    != vlSelf->PipelineCPU__DOT__rs2_Data)
                                                    : 
                                                   (vlSelf->PipelineCPU__DOT__rs1_Data 
                                                    == vlSelf->PipelineCPU__DOT__rs2_Data)))
                                 : (((IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl) 
                                     >> 1U) & ((IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl) 
                                               & VL_GTES_III(32, vlSelf->PipelineCPU__DOT__rs1_Data, vlSelf->PipelineCPU__DOT__rs2_Data))))
                             : (IData)(((7U == (7U 
                                                & (IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl))) 
                                        & VL_LTS_III(32, vlSelf->PipelineCPU__DOT__rs1_Data, vlSelf->PipelineCPU__DOT__rs2_Data))))));
    bufp->chgIData(oldp+138,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+139,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+140,(vlSelf->PipelineCPU__DOT__Mem_readData3),32);
    bufp->chgIData(oldp+141,((((IData)(vlSelf->PipelineCPU__DOT____VdfgTmp_h13f1118f__0) 
                               | (IData)(vlSelf->PipelineCPU__DOT__Ex_jump))
                               ? vlSelf->PipelineCPU__DOT__Ex_ALUOut
                               : ((IData)(4U) + vlSelf->PipelineCPU__DOT__IF_pc))),32);
    bufp->chgBit(oldp+142,(((IData)(vlSelf->PipelineCPU__DOT____VdfgTmp_h13f1118f__0) 
                            | (IData)(vlSelf->PipelineCPU__DOT__Ex_jump))));
}

void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_cleanup\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
