// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_sub__TOP__0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+104+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("SingleCycleCPU ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+104+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+99,"IF_pc", false,-1, 31,0);
    tracep->declBus(c+1,"ID_pc", false,-1, 31,0);
    tracep->declBus(c+2,"Ex_pc", false,-1, 31,0);
    tracep->declBus(c+3,"Mem_pc", false,-1, 31,0);
    tracep->declBus(c+4,"Wb_pc", false,-1, 31,0);
    tracep->declBus(c+136,"IF_pc_mux", false,-1, 31,0);
    tracep->declBus(c+100,"IF_pc_add4", false,-1, 31,0);
    tracep->declBus(c+5,"Wb_pc_add4", false,-1, 31,0);
    tracep->declBus(c+101,"IF_instruction", false,-1, 31,0);
    tracep->declBus(c+60,"ID_instruction", false,-1, 31,0);
    tracep->declBus(c+61,"ID_BranchCtl", false,-1, 3,0);
    tracep->declBus(c+6,"Ex_BranchCtl", false,-1, 3,0);
    tracep->declBit(c+137,"Ex_BranchOut", false,-1);
    tracep->declBit(c+62,"ID_immUse", false,-1);
    tracep->declBit(c+7,"Ex_immUse", false,-1);
    tracep->declBit(c+63,"ID_memtoReg", false,-1);
    tracep->declBit(c+8,"Ex_memtoReg", false,-1);
    tracep->declBit(c+9,"Mem_memtoReg", false,-1);
    tracep->declBit(c+10,"Wb_memtoReg", false,-1);
    tracep->declBit(c+64,"ID_regWrite", false,-1);
    tracep->declBit(c+65,"Ex_regWrite", false,-1);
    tracep->declBit(c+66,"Mem_regWrite", false,-1);
    tracep->declBit(c+67,"Wb_regWrite", false,-1);
    tracep->declBit(c+68,"ID_memRead", false,-1);
    tracep->declBit(c+69,"Ex_memRead", false,-1);
    tracep->declBit(c+70,"Mem_memRead", false,-1);
    tracep->declBit(c+71,"ID_memWrite", false,-1);
    tracep->declBit(c+11,"Ex_memWrite", false,-1);
    tracep->declBit(c+12,"Mem_memWrite", false,-1);
    tracep->declBit(c+72,"ID_branch", false,-1);
    tracep->declBit(c+13,"Ex_branch", false,-1);
    tracep->declBit(c+73,"ID_jump", false,-1);
    tracep->declBit(c+14,"Ex_jump", false,-1);
    tracep->declBit(c+15,"Mem_jump", false,-1);
    tracep->declBit(c+16,"Wb_jump", false,-1);
    tracep->declBit(c+74,"ID_pcUse", false,-1);
    tracep->declBit(c+17,"Ex_pcUse", false,-1);
    tracep->declBus(c+75,"ID_ALUOp", false,-1, 1,0);
    tracep->declBus(c+76,"Wb_writeData", false,-1, 31,0);
    tracep->declBus(c+138,"ID_readData1", false,-1, 31,0);
    tracep->declBus(c+18,"Ex_readData1", false,-1, 31,0);
    tracep->declBus(c+139,"ID_readData2", false,-1, 31,0);
    tracep->declBus(c+19,"Ex_readData2", false,-1, 31,0);
    tracep->declBus(c+20,"Mem_readData2", false,-1, 31,0);
    tracep->declBus(c+140,"Mem_readData3", false,-1, 31,0);
    tracep->declBus(c+21,"Wb_readData3", false,-1, 31,0);
    tracep->declBus(c+22,"Ex_RegRs1", false,-1, 4,0);
    tracep->declBus(c+23,"Ex_RegRs2", false,-1, 4,0);
    tracep->declBus(c+77,"Ex_RegRd", false,-1, 4,0);
    tracep->declBus(c+78,"Mem_RegRd", false,-1, 4,0);
    tracep->declBus(c+79,"Wb_RegRd", false,-1, 4,0);
    tracep->declBus(c+80,"ID_imm", false,-1, 31,0);
    tracep->declBus(c+24,"Ex_imm", false,-1, 31,0);
    tracep->declBus(c+81,"Ex_aluSrc1", false,-1, 31,0);
    tracep->declBus(c+82,"Ex_aluSrc2", false,-1, 31,0);
    tracep->declBus(c+83,"Ex_ALUOut", false,-1, 31,0);
    tracep->declBus(c+84,"Mem_ALUOut", false,-1, 31,0);
    tracep->declBus(c+25,"Wb_ALUOut", false,-1, 31,0);
    tracep->declBus(c+85,"ID_ALUCtl", false,-1, 3,0);
    tracep->declBus(c+26,"Ex_ALUCtl", false,-1, 3,0);
    tracep->declBus(c+86,"forwardA", false,-1, 1,0);
    tracep->declBus(c+87,"forwardB", false,-1, 1,0);
    tracep->declBit(c+88,"IF_ID_flush", false,-1);
    tracep->declBit(c+89,"ID_Ex_flush", false,-1);
    tracep->declBit(c+90,"pc_freeze", false,-1);
    tracep->declBus(c+141,"pc_out", false,-1, 31,0);
    tracep->declBus(c+91,"out1", false,-1, 31,0);
    tracep->declBus(c+92,"out2", false,-1, 31,0);
    tracep->declBus(c+27,"out3", false,-1, 31,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+26,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+81,"A", false,-1, 31,0);
    tracep->declBus(c+82,"B", false,-1, 31,0);
    tracep->declBus(c+83,"ALUOut", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALU_Branch_Ctrl ");
    tracep->declBus(c+75,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+93,"funct7", false,-1);
    tracep->declBus(c+94,"funct3", false,-1, 2,0);
    tracep->declBus(c+85,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+61,"BranchCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+99,"a", false,-1, 31,0);
    tracep->declBus(c+143,"b", false,-1, 31,0);
    tracep->declBus(c+100,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+4,"a", false,-1, 31,0);
    tracep->declBus(c+143,"b", false,-1, 31,0);
    tracep->declBus(c+5,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+6,"BranchCtl", false,-1, 3,0);
    tracep->declBus(c+81,"A", false,-1, 31,0);
    tracep->declBus(c+82,"B", false,-1, 31,0);
    tracep->declBit(c+137,"BranchOut", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+95,"opcode", false,-1, 6,0);
    tracep->declBit(c+62,"immUse", false,-1);
    tracep->declBit(c+63,"memtoReg", false,-1);
    tracep->declBit(c+64,"regWrite", false,-1);
    tracep->declBit(c+68,"memRead", false,-1);
    tracep->declBit(c+71,"memWrite", false,-1);
    tracep->declBit(c+72,"branch", false,-1);
    tracep->declBit(c+73,"jump", false,-1);
    tracep->declBit(c+74,"pcUse", false,-1);
    tracep->declBus(c+75,"ALUOp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+12,"memWrite", false,-1);
    tracep->declBit(c+70,"memRead", false,-1);
    tracep->declBus(c+84,"address", false,-1, 31,0);
    tracep->declBus(c+20,"writeData", false,-1, 31,0);
    tracep->declBus(c+140,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Ex_Mem ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBit(c+144,"flush", false,-1);
    tracep->declBus(c+2,"Ex_pc", false,-1, 31,0);
    tracep->declBit(c+8,"Ex_memtoReg", false,-1);
    tracep->declBit(c+65,"Ex_regWrite", false,-1);
    tracep->declBit(c+11,"Ex_memWrite", false,-1);
    tracep->declBit(c+69,"Ex_memRead", false,-1);
    tracep->declBit(c+14,"Ex_jump", false,-1);
    tracep->declBus(c+77,"Ex_RegRd", false,-1, 4,0);
    tracep->declBus(c+83,"Ex_ALUOut", false,-1, 31,0);
    tracep->declBus(c+19,"Ex_readData2", false,-1, 31,0);
    tracep->declBus(c+3,"Mem_pc", false,-1, 31,0);
    tracep->declBit(c+9,"Mem_memtoReg", false,-1);
    tracep->declBit(c+66,"Mem_regWrite", false,-1);
    tracep->declBit(c+12,"Mem_memWrite", false,-1);
    tracep->declBit(c+70,"Mem_memRead", false,-1);
    tracep->declBit(c+15,"Mem_jump", false,-1);
    tracep->declBus(c+78,"Mem_RegRd", false,-1, 4,0);
    tracep->declBus(c+84,"Mem_ALUOut", false,-1, 31,0);
    tracep->declBus(c+20,"Mem_readData2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ForwardUnit ");
    tracep->declBit(c+66,"Mem_regWrite", false,-1);
    tracep->declBit(c+67,"Wb_regWrite", false,-1);
    tracep->declBus(c+78,"Mem_RegRd", false,-1, 4,0);
    tracep->declBus(c+79,"Wb_RegRd", false,-1, 4,0);
    tracep->declBus(c+22,"Ex_RegRs1", false,-1, 4,0);
    tracep->declBus(c+23,"Ex_RegRs2", false,-1, 4,0);
    tracep->declBus(c+86,"forwardA", false,-1, 1,0);
    tracep->declBus(c+87,"forwardB", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_HazardDetectUnit ");
    tracep->declBit(c+69,"Ex_memRead", false,-1);
    tracep->declBit(c+89,"Ex_jump_or_branch", false,-1);
    tracep->declBus(c+77,"Ex_RegRd", false,-1, 4,0);
    tracep->declBus(c+96,"ID_RegRs1", false,-1, 4,0);
    tracep->declBus(c+97,"ID_RegRs2", false,-1, 4,0);
    tracep->declBit(c+88,"IF_ID_flush", false,-1);
    tracep->declBit(c+89,"ID_Ex_flush", false,-1);
    tracep->declBit(c+90,"pc_freeze", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_Ex ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBit(c+89,"flush", false,-1);
    tracep->declBus(c+1,"ID_pc", false,-1, 31,0);
    tracep->declBus(c+80,"ID_imm", false,-1, 31,0);
    tracep->declBit(c+62,"ID_immUse", false,-1);
    tracep->declBit(c+63,"ID_memtoReg", false,-1);
    tracep->declBit(c+64,"ID_regWrite", false,-1);
    tracep->declBit(c+68,"ID_memRead", false,-1);
    tracep->declBit(c+71,"ID_memWrite", false,-1);
    tracep->declBit(c+72,"ID_branch", false,-1);
    tracep->declBit(c+73,"ID_jump", false,-1);
    tracep->declBit(c+74,"ID_pcUse", false,-1);
    tracep->declBus(c+138,"ID_readData1", false,-1, 31,0);
    tracep->declBus(c+139,"ID_readData2", false,-1, 31,0);
    tracep->declBus(c+85,"ID_ALUCtl", false,-1, 3,0);
    tracep->declBus(c+61,"ID_BranchCtl", false,-1, 3,0);
    tracep->declBus(c+96,"ID_RegRs1", false,-1, 4,0);
    tracep->declBus(c+97,"ID_RegRs2", false,-1, 4,0);
    tracep->declBus(c+98,"ID_RegRd", false,-1, 4,0);
    tracep->declBus(c+2,"Ex_pc", false,-1, 31,0);
    tracep->declBus(c+24,"Ex_imm", false,-1, 31,0);
    tracep->declBit(c+7,"Ex_immUse", false,-1);
    tracep->declBit(c+8,"Ex_memtoReg", false,-1);
    tracep->declBit(c+65,"Ex_regWrite", false,-1);
    tracep->declBit(c+69,"Ex_memRead", false,-1);
    tracep->declBit(c+11,"Ex_memWrite", false,-1);
    tracep->declBit(c+13,"Ex_branch", false,-1);
    tracep->declBit(c+14,"Ex_jump", false,-1);
    tracep->declBit(c+17,"Ex_pcUse", false,-1);
    tracep->declBus(c+18,"Ex_readData1", false,-1, 31,0);
    tracep->declBus(c+19,"Ex_readData2", false,-1, 31,0);
    tracep->declBus(c+26,"Ex_ALUCtl", false,-1, 3,0);
    tracep->declBus(c+6,"Ex_BranchCtl", false,-1, 3,0);
    tracep->declBus(c+22,"Ex_RegRs1", false,-1, 4,0);
    tracep->declBus(c+23,"Ex_RegRs2", false,-1, 4,0);
    tracep->declBus(c+77,"Ex_RegRd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBit(c+88,"flush", false,-1);
    tracep->declBus(c+99,"IF_pc", false,-1, 31,0);
    tracep->declBus(c+101,"IF_inst", false,-1, 31,0);
    tracep->declBus(c+1,"ID_pc", false,-1, 31,0);
    tracep->declBus(c+60,"ID_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+60,"inst", false,-1, 31,0);
    tracep->declBus(c+80,"imm", false,-1, 31,0);
    tracep->declBus(c+95,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+99,"readAddr", false,-1, 31,0);
    tracep->declBus(c+101,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mem_Wb ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBit(c+144,"flush", false,-1);
    tracep->declBus(c+3,"Mem_pc", false,-1, 31,0);
    tracep->declBit(c+9,"Mem_memtoReg", false,-1);
    tracep->declBit(c+66,"Mem_regWrite", false,-1);
    tracep->declBit(c+15,"Mem_jump", false,-1);
    tracep->declBus(c+84,"Mem_ALUOut", false,-1, 31,0);
    tracep->declBus(c+140,"Mem_readData3", false,-1, 31,0);
    tracep->declBus(c+78,"Mem_RegRd", false,-1, 4,0);
    tracep->declBus(c+4,"Wb_pc", false,-1, 31,0);
    tracep->declBit(c+10,"Wb_memtoReg", false,-1);
    tracep->declBit(c+67,"Wb_regWrite", false,-1);
    tracep->declBit(c+16,"Wb_jump", false,-1);
    tracep->declBus(c+25,"Wb_ALUOut", false,-1, 31,0);
    tracep->declBus(c+21,"Wb_readData3", false,-1, 31,0);
    tracep->declBus(c+79,"Wb_RegRd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux1_ALUSrc1 ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBus(c+86,"sel", false,-1, 1,0);
    tracep->declBus(c+18,"s0", false,-1, 31,0);
    tracep->declBus(c+76,"s1", false,-1, 31,0);
    tracep->declBus(c+84,"s2", false,-1, 31,0);
    tracep->declBus(c+91,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux1_ALUSrc2 ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBus(c+87,"sel", false,-1, 1,0);
    tracep->declBus(c+19,"s0", false,-1, 31,0);
    tracep->declBus(c+76,"s1", false,-1, 31,0);
    tracep->declBus(c+84,"s2", false,-1, 31,0);
    tracep->declBus(c+92,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux1_PC ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBit(c+142,"sel", false,-1);
    tracep->declBus(c+100,"s0", false,-1, 31,0);
    tracep->declBus(c+83,"s1", false,-1, 31,0);
    tracep->declBus(c+141,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux1_WriteData ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBit(c+10,"sel", false,-1);
    tracep->declBus(c+25,"s0", false,-1, 31,0);
    tracep->declBus(c+21,"s1", false,-1, 31,0);
    tracep->declBus(c+27,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux2_ALUSrc1 ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBit(c+17,"sel", false,-1);
    tracep->declBus(c+91,"s0", false,-1, 31,0);
    tracep->declBus(c+2,"s1", false,-1, 31,0);
    tracep->declBus(c+81,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux2_ALUSrc2 ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBit(c+7,"sel", false,-1);
    tracep->declBus(c+92,"s0", false,-1, 31,0);
    tracep->declBus(c+24,"s1", false,-1, 31,0);
    tracep->declBus(c+82,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux2_PC ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBit(c+90,"sel", false,-1);
    tracep->declBus(c+141,"s0", false,-1, 31,0);
    tracep->declBus(c+99,"s1", false,-1, 31,0);
    tracep->declBus(c+136,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux2_WriteData ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBit(c+16,"sel", false,-1);
    tracep->declBus(c+27,"s0", false,-1, 31,0);
    tracep->declBus(c+5,"s1", false,-1, 31,0);
    tracep->declBus(c+76,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBus(c+136,"pc_i", false,-1, 31,0);
    tracep->declBus(c+99,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBit(c+67,"regWrite", false,-1);
    tracep->declBus(c+96,"readReg1", false,-1, 4,0);
    tracep->declBus(c+97,"readReg2", false,-1, 4,0);
    tracep->declBus(c+79,"writeReg", false,-1, 4,0);
    tracep->declBus(c+76,"writeData", false,-1, 31,0);
    tracep->declBus(c+138,"readData1", false,-1, 31,0);
    tracep->declBus(c+139,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+28+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_top(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_top\n"); );
    // Body
    VSingleCycleCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_register(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSingleCycleCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSingleCycleCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSingleCycleCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSingleCycleCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->SingleCycleCPU__DOT__ID_pc),32);
    bufp->fullIData(oldp+2,(vlSelf->SingleCycleCPU__DOT__Ex_pc),32);
    bufp->fullIData(oldp+3,(vlSelf->SingleCycleCPU__DOT__Mem_pc),32);
    bufp->fullIData(oldp+4,(vlSelf->SingleCycleCPU__DOT__Wb_pc),32);
    bufp->fullIData(oldp+5,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__Wb_pc)),32);
    bufp->fullCData(oldp+6,(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl),4);
    bufp->fullBit(oldp+7,(vlSelf->SingleCycleCPU__DOT__Ex_immUse));
    bufp->fullBit(oldp+8,(vlSelf->SingleCycleCPU__DOT__Ex_memtoReg));
    bufp->fullBit(oldp+9,(vlSelf->SingleCycleCPU__DOT__Mem_memtoReg));
    bufp->fullBit(oldp+10,(vlSelf->SingleCycleCPU__DOT__Wb_memtoReg));
    bufp->fullBit(oldp+11,(vlSelf->SingleCycleCPU__DOT__Ex_memWrite));
    bufp->fullBit(oldp+12,(vlSelf->SingleCycleCPU__DOT__Mem_memWrite));
    bufp->fullBit(oldp+13,(vlSelf->SingleCycleCPU__DOT__Ex_branch));
    bufp->fullBit(oldp+14,(vlSelf->SingleCycleCPU__DOT__Ex_jump));
    bufp->fullBit(oldp+15,(vlSelf->SingleCycleCPU__DOT__Mem_jump));
    bufp->fullBit(oldp+16,(vlSelf->SingleCycleCPU__DOT__Wb_jump));
    bufp->fullBit(oldp+17,(vlSelf->SingleCycleCPU__DOT__Ex_pcUse));
    bufp->fullIData(oldp+18,(vlSelf->SingleCycleCPU__DOT__Ex_readData1),32);
    bufp->fullIData(oldp+19,(vlSelf->SingleCycleCPU__DOT__Ex_readData2),32);
    bufp->fullIData(oldp+20,(vlSelf->SingleCycleCPU__DOT__Mem_readData2),32);
    bufp->fullIData(oldp+21,(vlSelf->SingleCycleCPU__DOT__Wb_readData3),32);
    bufp->fullCData(oldp+22,(vlSelf->SingleCycleCPU__DOT__Ex_RegRs1),5);
    bufp->fullCData(oldp+23,(vlSelf->SingleCycleCPU__DOT__Ex_RegRs2),5);
    bufp->fullIData(oldp+24,(vlSelf->SingleCycleCPU__DOT__Ex_imm),32);
    bufp->fullIData(oldp+25,(vlSelf->SingleCycleCPU__DOT__Wb_ALUOut),32);
    bufp->fullCData(oldp+26,(vlSelf->SingleCycleCPU__DOT__Ex_ALUCtl),4);
    bufp->fullIData(oldp+27,(((IData)(vlSelf->SingleCycleCPU__DOT__Wb_memtoReg)
                               ? vlSelf->SingleCycleCPU__DOT__Wb_readData3
                               : vlSelf->SingleCycleCPU__DOT__Wb_ALUOut)),32);
    bufp->fullIData(oldp+28,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+29,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+30,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+31,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+32,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+33,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+34,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+35,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+36,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+37,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+38,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+39,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+40,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+41,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+42,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+43,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+44,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+45,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+46,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+47,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+48,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+49,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+50,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+51,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+55,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+56,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+57,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+58,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+59,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+60,(vlSelf->SingleCycleCPU__DOT__ID_instruction),32);
    bufp->fullCData(oldp+61,(vlSelf->SingleCycleCPU__DOT__ID_BranchCtl),4);
    bufp->fullBit(oldp+62,(vlSelf->SingleCycleCPU__DOT__ID_immUse));
    bufp->fullBit(oldp+63,(vlSelf->SingleCycleCPU__DOT__ID_memtoReg));
    bufp->fullBit(oldp+64,(vlSelf->SingleCycleCPU__DOT__ID_regWrite));
    bufp->fullBit(oldp+65,(vlSelf->SingleCycleCPU__DOT__Ex_regWrite));
    bufp->fullBit(oldp+66,(vlSelf->SingleCycleCPU__DOT__Mem_regWrite));
    bufp->fullBit(oldp+67,(vlSelf->SingleCycleCPU__DOT__Wb_regWrite));
    bufp->fullBit(oldp+68,(vlSelf->SingleCycleCPU__DOT__ID_memRead));
    bufp->fullBit(oldp+69,(vlSelf->SingleCycleCPU__DOT__Ex_memRead));
    bufp->fullBit(oldp+70,(vlSelf->SingleCycleCPU__DOT__Mem_memRead));
    bufp->fullBit(oldp+71,(vlSelf->SingleCycleCPU__DOT__ID_memWrite));
    bufp->fullBit(oldp+72,(vlSelf->SingleCycleCPU__DOT__ID_branch));
    bufp->fullBit(oldp+73,(vlSelf->SingleCycleCPU__DOT__ID_jump));
    bufp->fullBit(oldp+74,(vlSelf->SingleCycleCPU__DOT__ID_pcUse));
    bufp->fullCData(oldp+75,(vlSelf->SingleCycleCPU__DOT__ID_ALUOp),2);
    bufp->fullIData(oldp+76,(vlSelf->SingleCycleCPU__DOT__Wb_writeData),32);
    bufp->fullCData(oldp+77,(vlSelf->SingleCycleCPU__DOT__Ex_RegRd),5);
    bufp->fullCData(oldp+78,(vlSelf->SingleCycleCPU__DOT__Mem_RegRd),5);
    bufp->fullCData(oldp+79,(vlSelf->SingleCycleCPU__DOT__Wb_RegRd),5);
    bufp->fullIData(oldp+80,(vlSelf->SingleCycleCPU__DOT__ID_imm),32);
    bufp->fullIData(oldp+81,(vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1),32);
    bufp->fullIData(oldp+82,(vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2),32);
    bufp->fullIData(oldp+83,(vlSelf->SingleCycleCPU__DOT__Ex_ALUOut),32);
    bufp->fullIData(oldp+84,(vlSelf->SingleCycleCPU__DOT__Mem_ALUOut),32);
    bufp->fullCData(oldp+85,(vlSelf->SingleCycleCPU__DOT__ID_ALUCtl),4);
    bufp->fullCData(oldp+86,(vlSelf->SingleCycleCPU__DOT__forwardA),2);
    bufp->fullCData(oldp+87,(vlSelf->SingleCycleCPU__DOT__forwardB),2);
    bufp->fullBit(oldp+88,(vlSelf->SingleCycleCPU__DOT__IF_ID_flush));
    bufp->fullBit(oldp+89,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch));
    bufp->fullBit(oldp+90,(((~ (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch)) 
                            & ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_memRead) 
                               & (((IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRd) 
                                   == (0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                >> 0xfU))) 
                                  | ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRd) 
                                     == (0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                  >> 0x14U))))))));
    bufp->fullIData(oldp+91,(vlSelf->SingleCycleCPU__DOT__out1),32);
    bufp->fullIData(oldp+92,(vlSelf->SingleCycleCPU__DOT__out2),32);
    bufp->fullBit(oldp+93,((1U & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+94,((7U & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+95,((0x7fU & vlSelf->SingleCycleCPU__DOT__ID_instruction)),7);
    bufp->fullCData(oldp+96,((0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+97,((0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+98,((0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                       >> 7U))),5);
    bufp->fullIData(oldp+99,(vlSelf->SingleCycleCPU__DOT__IF_pc),32);
    bufp->fullIData(oldp+100,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__IF_pc)),32);
    bufp->fullIData(oldp+101,(((0x80U <= vlSelf->SingleCycleCPU__DOT__IF_pc)
                                ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & vlSelf->SingleCycleCPU__DOT__IF_pc)] 
                                         << 0x18U) 
                                        | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                            [(0x7fU 
                                              & ((IData)(1U) 
                                                 + vlSelf->SingleCycleCPU__DOT__IF_pc))] 
                                            << 0x10U) 
                                           | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                               [(0x7fU 
                                                 & ((IData)(2U) 
                                                    + vlSelf->SingleCycleCPU__DOT__IF_pc))] 
                                               << 8U) 
                                              | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                              [(0x7fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->SingleCycleCPU__DOT__IF_pc))]))))),32);
    bufp->fullBit(oldp+102,(vlSelf->clk));
    bufp->fullBit(oldp+103,(vlSelf->start));
    bufp->fullIData(oldp+104,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+105,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+132,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+133,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+134,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+135,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+136,((((~ (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch)) 
                                & ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_memRead) 
                                   & (((IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRd) 
                                       == (0x1fU & 
                                           (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                            >> 0xfU))) 
                                      | ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_RegRd) 
                                         == (0x1fU 
                                             & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                                >> 0x14U))))))
                                ? vlSelf->SingleCycleCPU__DOT__IF_pc
                                : (((IData)(vlSelf->SingleCycleCPU__DOT____VdfgTmp_h13f1118f__0) 
                                    | (IData)(vlSelf->SingleCycleCPU__DOT__Ex_jump))
                                    ? vlSelf->SingleCycleCPU__DOT__Ex_ALUOut
                                    : ((IData)(4U) 
                                       + vlSelf->SingleCycleCPU__DOT__IF_pc)))),32);
    bufp->fullBit(oldp+137,(((8U & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl))
                              ? ((4U & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl))
                                  ? ((~ ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl) 
                                         >> 1U)) & 
                                     ((1U & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl))
                                       ? (vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1 
                                          != vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2)
                                       : (vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1 
                                          == vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2)))
                                  : (((IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl) 
                                      >> 1U) & ((IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl) 
                                                & VL_GTES_III(32, vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1, vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2))))
                              : (IData)(((7U == (7U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__Ex_BranchCtl))) 
                                         & VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__Ex_aluSrc1, vlSelf->SingleCycleCPU__DOT__Ex_aluSrc2))))));
    bufp->fullIData(oldp+138,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+139,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->SingleCycleCPU__DOT__ID_instruction 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+140,(vlSelf->SingleCycleCPU__DOT__Mem_readData3),32);
    bufp->fullIData(oldp+141,((((IData)(vlSelf->SingleCycleCPU__DOT____VdfgTmp_h13f1118f__0) 
                                | (IData)(vlSelf->SingleCycleCPU__DOT__Ex_jump))
                                ? vlSelf->SingleCycleCPU__DOT__Ex_ALUOut
                                : ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__IF_pc))),32);
    bufp->fullBit(oldp+142,(((IData)(vlSelf->SingleCycleCPU__DOT____VdfgTmp_h13f1118f__0) 
                             | (IData)(vlSelf->SingleCycleCPU__DOT__Ex_jump))));
    bufp->fullIData(oldp+143,(4U),32);
    bufp->fullBit(oldp+144,(0U));
    bufp->fullIData(oldp+145,(0x20U),32);
}
