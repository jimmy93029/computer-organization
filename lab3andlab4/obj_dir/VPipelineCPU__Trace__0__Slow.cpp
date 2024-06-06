// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


VL_ATTR_COLD void VPipelineCPU___024root__trace_init_sub__TOP__0(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+105+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+105+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+60,"IF_pc", false,-1, 31,0);
    tracep->declBus(c+1,"ID_pc", false,-1, 31,0);
    tracep->declBus(c+2,"Ex_pc", false,-1, 31,0);
    tracep->declBus(c+3,"Mem_pc", false,-1, 31,0);
    tracep->declBus(c+4,"Wb_pc", false,-1, 31,0);
    tracep->declBus(c+137,"IF_pc_mux", false,-1, 31,0);
    tracep->declBus(c+61,"IF_pc_add4", false,-1, 31,0);
    tracep->declBus(c+5,"Wb_pc_add4", false,-1, 31,0);
    tracep->declBus(c+62,"IF_instruction", false,-1, 31,0);
    tracep->declBus(c+63,"ID_instruction", false,-1, 31,0);
    tracep->declBus(c+64,"ID_BranchCtl", false,-1, 3,0);
    tracep->declBus(c+6,"Ex_BranchCtl", false,-1, 3,0);
    tracep->declBit(c+138,"Ex_BranchOut", false,-1);
    tracep->declBit(c+65,"ID_immUse", false,-1);
    tracep->declBit(c+7,"Ex_immUse", false,-1);
    tracep->declBit(c+66,"ID_memtoReg", false,-1);
    tracep->declBit(c+8,"Ex_memtoReg", false,-1);
    tracep->declBit(c+9,"Mem_memtoReg", false,-1);
    tracep->declBit(c+10,"Wb_memtoReg", false,-1);
    tracep->declBit(c+67,"ID_regWrite", false,-1);
    tracep->declBit(c+68,"Ex_regWrite", false,-1);
    tracep->declBit(c+69,"Mem_regWrite", false,-1);
    tracep->declBit(c+70,"Wb_regWrite", false,-1);
    tracep->declBit(c+71,"ID_memRead", false,-1);
    tracep->declBit(c+72,"Ex_memRead", false,-1);
    tracep->declBit(c+73,"Mem_memRead", false,-1);
    tracep->declBit(c+74,"ID_memWrite", false,-1);
    tracep->declBit(c+11,"Ex_memWrite", false,-1);
    tracep->declBit(c+12,"Mem_memWrite", false,-1);
    tracep->declBit(c+75,"ID_branch", false,-1);
    tracep->declBit(c+13,"Ex_branch", false,-1);
    tracep->declBit(c+76,"ID_jump", false,-1);
    tracep->declBit(c+14,"Ex_jump", false,-1);
    tracep->declBit(c+15,"Mem_jump", false,-1);
    tracep->declBit(c+16,"Wb_jump", false,-1);
    tracep->declBit(c+77,"ID_pcUse", false,-1);
    tracep->declBit(c+17,"Ex_pcUse", false,-1);
    tracep->declBus(c+78,"ID_ALUOp", false,-1, 1,0);
    tracep->declBus(c+79,"Wb_writeData", false,-1, 31,0);
    tracep->declBus(c+139,"ID_readData1", false,-1, 31,0);
    tracep->declBus(c+18,"Ex_readData1", false,-1, 31,0);
    tracep->declBus(c+140,"ID_readData2", false,-1, 31,0);
    tracep->declBus(c+19,"Ex_readData2", false,-1, 31,0);
    tracep->declBus(c+20,"Mem_rs2_Data", false,-1, 31,0);
    tracep->declBus(c+141,"Mem_readData3", false,-1, 31,0);
    tracep->declBus(c+21,"Wb_readData3", false,-1, 31,0);
    tracep->declBus(c+22,"Ex_RegRs1", false,-1, 4,0);
    tracep->declBus(c+23,"Ex_RegRs2", false,-1, 4,0);
    tracep->declBus(c+80,"Ex_RegRd", false,-1, 4,0);
    tracep->declBus(c+81,"Mem_RegRd", false,-1, 4,0);
    tracep->declBus(c+82,"Wb_RegRd", false,-1, 4,0);
    tracep->declBus(c+83,"ID_imm", false,-1, 31,0);
    tracep->declBus(c+24,"Ex_imm", false,-1, 31,0);
    tracep->declBus(c+84,"aluSrc1", false,-1, 31,0);
    tracep->declBus(c+85,"aluSrc2", false,-1, 31,0);
    tracep->declBus(c+86,"rs1_Data", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_Data", false,-1, 31,0);
    tracep->declBus(c+88,"Ex_ALUOut", false,-1, 31,0);
    tracep->declBus(c+89,"Mem_ALUOut", false,-1, 31,0);
    tracep->declBus(c+25,"Wb_ALUOut", false,-1, 31,0);
    tracep->declBus(c+90,"ID_ALUCtl", false,-1, 3,0);
    tracep->declBus(c+26,"Ex_ALUCtl", false,-1, 3,0);
    tracep->declBus(c+91,"forwardA", false,-1, 1,0);
    tracep->declBus(c+92,"forwardB", false,-1, 1,0);
    tracep->declBit(c+93,"IF_ID_flush", false,-1);
    tracep->declBit(c+94,"ID_Ex_flush", false,-1);
    tracep->declBit(c+95,"IF_ID_freeze", false,-1);
    tracep->declBit(c+96,"pc_freeze", false,-1);
    tracep->declBus(c+27,"out3", false,-1, 31,0);
    tracep->declBus(c+142,"pc_out", false,-1, 31,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+26,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+84,"A", false,-1, 31,0);
    tracep->declBus(c+85,"B", false,-1, 31,0);
    tracep->declBus(c+88,"ALUOut", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALU_Branch_Ctrl ");
    tracep->declBus(c+78,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+97,"funct7", false,-1);
    tracep->declBus(c+98,"funct3", false,-1, 2,0);
    tracep->declBus(c+90,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+64,"BranchCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+60,"a", false,-1, 31,0);
    tracep->declBus(c+144,"b", false,-1, 31,0);
    tracep->declBus(c+61,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+4,"a", false,-1, 31,0);
    tracep->declBus(c+144,"b", false,-1, 31,0);
    tracep->declBus(c+5,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+6,"BranchCtl", false,-1, 3,0);
    tracep->declBus(c+86,"A", false,-1, 31,0);
    tracep->declBus(c+87,"B", false,-1, 31,0);
    tracep->declBit(c+138,"BranchOut", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+99,"opcode", false,-1, 6,0);
    tracep->declBit(c+65,"immUse", false,-1);
    tracep->declBit(c+66,"memtoReg", false,-1);
    tracep->declBit(c+67,"regWrite", false,-1);
    tracep->declBit(c+71,"memRead", false,-1);
    tracep->declBit(c+74,"memWrite", false,-1);
    tracep->declBit(c+75,"branch", false,-1);
    tracep->declBit(c+76,"jump", false,-1);
    tracep->declBit(c+77,"pcUse", false,-1);
    tracep->declBus(c+78,"ALUOp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+12,"memWrite", false,-1);
    tracep->declBit(c+73,"memRead", false,-1);
    tracep->declBus(c+89,"address", false,-1, 31,0);
    tracep->declBus(c+20,"writeData", false,-1, 31,0);
    tracep->declBus(c+141,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Ex_Mem ");
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBit(c+145,"flush", false,-1);
    tracep->declBus(c+2,"Ex_pc", false,-1, 31,0);
    tracep->declBit(c+8,"Ex_memtoReg", false,-1);
    tracep->declBit(c+68,"Ex_regWrite", false,-1);
    tracep->declBit(c+11,"Ex_memWrite", false,-1);
    tracep->declBit(c+72,"Ex_memRead", false,-1);
    tracep->declBit(c+14,"Ex_jump", false,-1);
    tracep->declBus(c+80,"Ex_RegRd", false,-1, 4,0);
    tracep->declBus(c+88,"Ex_ALUOut", false,-1, 31,0);
    tracep->declBus(c+87,"Ex_readData2", false,-1, 31,0);
    tracep->declBus(c+3,"Mem_pc", false,-1, 31,0);
    tracep->declBit(c+9,"Mem_memtoReg", false,-1);
    tracep->declBit(c+69,"Mem_regWrite", false,-1);
    tracep->declBit(c+12,"Mem_memWrite", false,-1);
    tracep->declBit(c+73,"Mem_memRead", false,-1);
    tracep->declBit(c+15,"Mem_jump", false,-1);
    tracep->declBus(c+81,"Mem_RegRd", false,-1, 4,0);
    tracep->declBus(c+89,"Mem_ALUOut", false,-1, 31,0);
    tracep->declBus(c+20,"Mem_readData2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ForwardUnit ");
    tracep->declBit(c+69,"Mem_regWrite", false,-1);
    tracep->declBit(c+70,"Wb_regWrite", false,-1);
    tracep->declBus(c+81,"Mem_RegRd", false,-1, 4,0);
    tracep->declBus(c+82,"Wb_RegRd", false,-1, 4,0);
    tracep->declBus(c+22,"Ex_RegRs1", false,-1, 4,0);
    tracep->declBus(c+23,"Ex_RegRs2", false,-1, 4,0);
    tracep->declBus(c+91,"forwardA", false,-1, 1,0);
    tracep->declBus(c+92,"forwardB", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_HazardDetectUnit ");
    tracep->declBit(c+72,"Ex_memRead", false,-1);
    tracep->declBit(c+93,"Ex_jump_or_branch", false,-1);
    tracep->declBus(c+80,"Ex_RegRd", false,-1, 4,0);
    tracep->declBus(c+100,"ID_RegRs1", false,-1, 4,0);
    tracep->declBus(c+101,"ID_RegRs2", false,-1, 4,0);
    tracep->declBit(c+93,"IF_ID_flush", false,-1);
    tracep->declBit(c+94,"ID_Ex_flush", false,-1);
    tracep->declBit(c+95,"IF_ID_freeze", false,-1);
    tracep->declBit(c+96,"pc_freeze", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_Ex ");
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBit(c+94,"flush", false,-1);
    tracep->declBus(c+1,"ID_pc", false,-1, 31,0);
    tracep->declBus(c+83,"ID_imm", false,-1, 31,0);
    tracep->declBit(c+65,"ID_immUse", false,-1);
    tracep->declBit(c+66,"ID_memtoReg", false,-1);
    tracep->declBit(c+67,"ID_regWrite", false,-1);
    tracep->declBit(c+71,"ID_memRead", false,-1);
    tracep->declBit(c+74,"ID_memWrite", false,-1);
    tracep->declBit(c+75,"ID_branch", false,-1);
    tracep->declBit(c+76,"ID_jump", false,-1);
    tracep->declBit(c+77,"ID_pcUse", false,-1);
    tracep->declBus(c+139,"ID_readData1", false,-1, 31,0);
    tracep->declBus(c+140,"ID_readData2", false,-1, 31,0);
    tracep->declBus(c+90,"ID_ALUCtl", false,-1, 3,0);
    tracep->declBus(c+64,"ID_BranchCtl", false,-1, 3,0);
    tracep->declBus(c+100,"ID_RegRs1", false,-1, 4,0);
    tracep->declBus(c+101,"ID_RegRs2", false,-1, 4,0);
    tracep->declBus(c+102,"ID_RegRd", false,-1, 4,0);
    tracep->declBus(c+2,"Ex_pc", false,-1, 31,0);
    tracep->declBus(c+24,"Ex_imm", false,-1, 31,0);
    tracep->declBit(c+7,"Ex_immUse", false,-1);
    tracep->declBit(c+8,"Ex_memtoReg", false,-1);
    tracep->declBit(c+68,"Ex_regWrite", false,-1);
    tracep->declBit(c+72,"Ex_memRead", false,-1);
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
    tracep->declBus(c+80,"Ex_RegRd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID ");
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBit(c+93,"flush", false,-1);
    tracep->declBit(c+95,"freeze", false,-1);
    tracep->declBus(c+60,"IF_pc", false,-1, 31,0);
    tracep->declBus(c+62,"IF_inst", false,-1, 31,0);
    tracep->declBus(c+1,"ID_pc_i", false,-1, 31,0);
    tracep->declBus(c+63,"ID_inst_i", false,-1, 31,0);
    tracep->declBus(c+1,"ID_pc", false,-1, 31,0);
    tracep->declBus(c+63,"ID_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+63,"inst", false,-1, 31,0);
    tracep->declBus(c+83,"imm", false,-1, 31,0);
    tracep->declBus(c+99,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+60,"readAddr", false,-1, 31,0);
    tracep->declBus(c+62,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mem_Wb ");
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBit(c+145,"flush", false,-1);
    tracep->declBus(c+3,"Mem_pc", false,-1, 31,0);
    tracep->declBit(c+9,"Mem_memtoReg", false,-1);
    tracep->declBit(c+69,"Mem_regWrite", false,-1);
    tracep->declBit(c+15,"Mem_jump", false,-1);
    tracep->declBus(c+89,"Mem_ALUOut", false,-1, 31,0);
    tracep->declBus(c+141,"Mem_readData3", false,-1, 31,0);
    tracep->declBus(c+81,"Mem_RegRd", false,-1, 4,0);
    tracep->declBus(c+4,"Wb_pc", false,-1, 31,0);
    tracep->declBit(c+10,"Wb_memtoReg", false,-1);
    tracep->declBit(c+70,"Wb_regWrite", false,-1);
    tracep->declBit(c+16,"Wb_jump", false,-1);
    tracep->declBus(c+25,"Wb_ALUOut", false,-1, 31,0);
    tracep->declBus(c+21,"Wb_readData3", false,-1, 31,0);
    tracep->declBus(c+82,"Wb_RegRd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux1_ALUSrc1 ");
    tracep->declBus(c+146,"size", false,-1, 31,0);
    tracep->declBus(c+91,"sel", false,-1, 1,0);
    tracep->declBus(c+18,"s0", false,-1, 31,0);
    tracep->declBus(c+79,"s1", false,-1, 31,0);
    tracep->declBus(c+89,"s2", false,-1, 31,0);
    tracep->declBus(c+86,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux1_ALUSrc2 ");
    tracep->declBus(c+146,"size", false,-1, 31,0);
    tracep->declBus(c+92,"sel", false,-1, 1,0);
    tracep->declBus(c+19,"s0", false,-1, 31,0);
    tracep->declBus(c+79,"s1", false,-1, 31,0);
    tracep->declBus(c+89,"s2", false,-1, 31,0);
    tracep->declBus(c+87,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux1_PC ");
    tracep->declBus(c+146,"size", false,-1, 31,0);
    tracep->declBit(c+143,"sel", false,-1);
    tracep->declBus(c+61,"s0", false,-1, 31,0);
    tracep->declBus(c+88,"s1", false,-1, 31,0);
    tracep->declBus(c+142,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux1_WriteData ");
    tracep->declBus(c+146,"size", false,-1, 31,0);
    tracep->declBit(c+10,"sel", false,-1);
    tracep->declBus(c+25,"s0", false,-1, 31,0);
    tracep->declBus(c+21,"s1", false,-1, 31,0);
    tracep->declBus(c+27,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux2_ALUSrc1 ");
    tracep->declBus(c+146,"size", false,-1, 31,0);
    tracep->declBit(c+17,"sel", false,-1);
    tracep->declBus(c+86,"s0", false,-1, 31,0);
    tracep->declBus(c+2,"s1", false,-1, 31,0);
    tracep->declBus(c+84,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux2_ALUSrc2 ");
    tracep->declBus(c+146,"size", false,-1, 31,0);
    tracep->declBit(c+7,"sel", false,-1);
    tracep->declBus(c+87,"s0", false,-1, 31,0);
    tracep->declBus(c+24,"s1", false,-1, 31,0);
    tracep->declBus(c+85,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux2_PC ");
    tracep->declBus(c+146,"size", false,-1, 31,0);
    tracep->declBit(c+96,"sel", false,-1);
    tracep->declBus(c+142,"s0", false,-1, 31,0);
    tracep->declBus(c+60,"s1", false,-1, 31,0);
    tracep->declBus(c+137,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux2_WriteData ");
    tracep->declBus(c+146,"size", false,-1, 31,0);
    tracep->declBit(c+16,"sel", false,-1);
    tracep->declBus(c+27,"s0", false,-1, 31,0);
    tracep->declBus(c+5,"s1", false,-1, 31,0);
    tracep->declBus(c+79,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBus(c+137,"pc_i", false,-1, 31,0);
    tracep->declBus(c+60,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+103,"clk", false,-1);
    tracep->declBit(c+104,"rst", false,-1);
    tracep->declBit(c+70,"regWrite", false,-1);
    tracep->declBus(c+100,"readReg1", false,-1, 4,0);
    tracep->declBus(c+101,"readReg2", false,-1, 4,0);
    tracep->declBus(c+82,"writeReg", false,-1, 4,0);
    tracep->declBus(c+79,"writeData", false,-1, 31,0);
    tracep->declBus(c+139,"readData1", false,-1, 31,0);
    tracep->declBus(c+140,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+28+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_init_top(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_top\n"); );
    // Body
    VPipelineCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelineCPU___024root__trace_register(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPipelineCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPipelineCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPipelineCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelineCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->PipelineCPU__DOT__ID_pc),32);
    bufp->fullIData(oldp+2,(vlSelf->PipelineCPU__DOT__Ex_pc),32);
    bufp->fullIData(oldp+3,(vlSelf->PipelineCPU__DOT__Mem_pc),32);
    bufp->fullIData(oldp+4,(vlSelf->PipelineCPU__DOT__Wb_pc),32);
    bufp->fullIData(oldp+5,(((IData)(4U) + vlSelf->PipelineCPU__DOT__Wb_pc)),32);
    bufp->fullCData(oldp+6,(vlSelf->PipelineCPU__DOT__Ex_BranchCtl),4);
    bufp->fullBit(oldp+7,(vlSelf->PipelineCPU__DOT__Ex_immUse));
    bufp->fullBit(oldp+8,(vlSelf->PipelineCPU__DOT__Ex_memtoReg));
    bufp->fullBit(oldp+9,(vlSelf->PipelineCPU__DOT__Mem_memtoReg));
    bufp->fullBit(oldp+10,(vlSelf->PipelineCPU__DOT__Wb_memtoReg));
    bufp->fullBit(oldp+11,(vlSelf->PipelineCPU__DOT__Ex_memWrite));
    bufp->fullBit(oldp+12,(vlSelf->PipelineCPU__DOT__Mem_memWrite));
    bufp->fullBit(oldp+13,(vlSelf->PipelineCPU__DOT__Ex_branch));
    bufp->fullBit(oldp+14,(vlSelf->PipelineCPU__DOT__Ex_jump));
    bufp->fullBit(oldp+15,(vlSelf->PipelineCPU__DOT__Mem_jump));
    bufp->fullBit(oldp+16,(vlSelf->PipelineCPU__DOT__Wb_jump));
    bufp->fullBit(oldp+17,(vlSelf->PipelineCPU__DOT__Ex_pcUse));
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT__Ex_readData1),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT__Ex_readData2),32);
    bufp->fullIData(oldp+20,(vlSelf->PipelineCPU__DOT__Mem_rs2_Data),32);
    bufp->fullIData(oldp+21,(vlSelf->PipelineCPU__DOT__Wb_readData3),32);
    bufp->fullCData(oldp+22,(vlSelf->PipelineCPU__DOT__Ex_RegRs1),5);
    bufp->fullCData(oldp+23,(vlSelf->PipelineCPU__DOT__Ex_RegRs2),5);
    bufp->fullIData(oldp+24,(vlSelf->PipelineCPU__DOT__Ex_imm),32);
    bufp->fullIData(oldp+25,(vlSelf->PipelineCPU__DOT__Wb_ALUOut),32);
    bufp->fullCData(oldp+26,(vlSelf->PipelineCPU__DOT__Ex_ALUCtl),4);
    bufp->fullIData(oldp+27,(((IData)(vlSelf->PipelineCPU__DOT__Wb_memtoReg)
                               ? vlSelf->PipelineCPU__DOT__Wb_readData3
                               : vlSelf->PipelineCPU__DOT__Wb_ALUOut)),32);
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+43,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+44,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+45,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+46,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+47,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+48,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+49,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+50,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+51,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+52,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+53,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+54,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+55,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+56,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+57,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+58,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+59,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+60,(vlSelf->PipelineCPU__DOT__IF_pc),32);
    bufp->fullIData(oldp+61,(((IData)(4U) + vlSelf->PipelineCPU__DOT__IF_pc)),32);
    bufp->fullIData(oldp+62,(((0x80U <= vlSelf->PipelineCPU__DOT__IF_pc)
                               ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelf->PipelineCPU__DOT__IF_pc)] 
                                        << 0x18U) | 
                                       ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
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
    bufp->fullIData(oldp+63,(vlSelf->PipelineCPU__DOT__ID_instruction),32);
    bufp->fullCData(oldp+64,(vlSelf->PipelineCPU__DOT__ID_BranchCtl),4);
    bufp->fullBit(oldp+65,(vlSelf->PipelineCPU__DOT__ID_immUse));
    bufp->fullBit(oldp+66,(vlSelf->PipelineCPU__DOT__ID_memtoReg));
    bufp->fullBit(oldp+67,(vlSelf->PipelineCPU__DOT__ID_regWrite));
    bufp->fullBit(oldp+68,(vlSelf->PipelineCPU__DOT__Ex_regWrite));
    bufp->fullBit(oldp+69,(vlSelf->PipelineCPU__DOT__Mem_regWrite));
    bufp->fullBit(oldp+70,(vlSelf->PipelineCPU__DOT__Wb_regWrite));
    bufp->fullBit(oldp+71,(vlSelf->PipelineCPU__DOT__ID_memRead));
    bufp->fullBit(oldp+72,(vlSelf->PipelineCPU__DOT__Ex_memRead));
    bufp->fullBit(oldp+73,(vlSelf->PipelineCPU__DOT__Mem_memRead));
    bufp->fullBit(oldp+74,(vlSelf->PipelineCPU__DOT__ID_memWrite));
    bufp->fullBit(oldp+75,(vlSelf->PipelineCPU__DOT__ID_branch));
    bufp->fullBit(oldp+76,(vlSelf->PipelineCPU__DOT__ID_jump));
    bufp->fullBit(oldp+77,(vlSelf->PipelineCPU__DOT__ID_pcUse));
    bufp->fullCData(oldp+78,(vlSelf->PipelineCPU__DOT__ID_ALUOp),2);
    bufp->fullIData(oldp+79,(vlSelf->PipelineCPU__DOT__Wb_writeData),32);
    bufp->fullCData(oldp+80,(vlSelf->PipelineCPU__DOT__Ex_RegRd),5);
    bufp->fullCData(oldp+81,(vlSelf->PipelineCPU__DOT__Mem_RegRd),5);
    bufp->fullCData(oldp+82,(vlSelf->PipelineCPU__DOT__Wb_RegRd),5);
    bufp->fullIData(oldp+83,(vlSelf->PipelineCPU__DOT__ID_imm),32);
    bufp->fullIData(oldp+84,(vlSelf->PipelineCPU__DOT__aluSrc1),32);
    bufp->fullIData(oldp+85,(vlSelf->PipelineCPU__DOT__aluSrc2),32);
    bufp->fullIData(oldp+86,(vlSelf->PipelineCPU__DOT__rs1_Data),32);
    bufp->fullIData(oldp+87,(vlSelf->PipelineCPU__DOT__rs2_Data),32);
    bufp->fullIData(oldp+88,(vlSelf->PipelineCPU__DOT__Ex_ALUOut),32);
    bufp->fullIData(oldp+89,(vlSelf->PipelineCPU__DOT__Mem_ALUOut),32);
    bufp->fullCData(oldp+90,(vlSelf->PipelineCPU__DOT__ID_ALUCtl),4);
    bufp->fullCData(oldp+91,(vlSelf->PipelineCPU__DOT__forwardA),2);
    bufp->fullCData(oldp+92,(vlSelf->PipelineCPU__DOT__forwardB),2);
    bufp->fullBit(oldp+93,(vlSelf->PipelineCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch));
    bufp->fullBit(oldp+94,(vlSelf->PipelineCPU__DOT__ID_Ex_flush));
    bufp->fullBit(oldp+95,(vlSelf->PipelineCPU__DOT__IF_ID_freeze));
    bufp->fullBit(oldp+96,(((~ (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch)) 
                            & ((IData)(vlSelf->PipelineCPU__DOT__Ex_memRead) 
                               & (((IData)(vlSelf->PipelineCPU__DOT__Ex_RegRd) 
                                   == (0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                >> 0xfU))) 
                                  | ((IData)(vlSelf->PipelineCPU__DOT__Ex_RegRd) 
                                     == (0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                  >> 0x14U))))))));
    bufp->fullBit(oldp+97,((1U & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+98,((7U & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+99,((0x7fU & vlSelf->PipelineCPU__DOT__ID_instruction)),7);
    bufp->fullCData(oldp+100,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+101,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+102,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                        >> 7U))),5);
    bufp->fullBit(oldp+103,(vlSelf->clk));
    bufp->fullBit(oldp+104,(vlSelf->start));
    bufp->fullIData(oldp+105,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+132,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+133,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+134,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+135,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+136,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+137,((((~ (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch)) 
                                & ((IData)(vlSelf->PipelineCPU__DOT__Ex_memRead) 
                                   & (((IData)(vlSelf->PipelineCPU__DOT__Ex_RegRd) 
                                       == (0x1fU & 
                                           (vlSelf->PipelineCPU__DOT__ID_instruction 
                                            >> 0xfU))) 
                                      | ((IData)(vlSelf->PipelineCPU__DOT__Ex_RegRd) 
                                         == (0x1fU 
                                             & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                                >> 0x14U))))))
                                ? vlSelf->PipelineCPU__DOT__IF_pc
                                : (((IData)(vlSelf->PipelineCPU__DOT____VdfgTmp_h13f1118f__0) 
                                    | (IData)(vlSelf->PipelineCPU__DOT__Ex_jump))
                                    ? vlSelf->PipelineCPU__DOT__Ex_ALUOut
                                    : ((IData)(4U) 
                                       + vlSelf->PipelineCPU__DOT__IF_pc)))),32);
    bufp->fullBit(oldp+138,(((8U & (IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl))
                              ? ((4U & (IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl))
                                  ? ((~ ((IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl) 
                                         >> 1U)) & 
                                     ((1U & (IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl))
                                       ? (vlSelf->PipelineCPU__DOT__rs1_Data 
                                          != vlSelf->PipelineCPU__DOT__rs2_Data)
                                       : (vlSelf->PipelineCPU__DOT__rs1_Data 
                                          == vlSelf->PipelineCPU__DOT__rs2_Data)))
                                  : (((IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl) 
                                      >> 1U) & ((IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl) 
                                                & VL_GTES_III(32, vlSelf->PipelineCPU__DOT__rs1_Data, vlSelf->PipelineCPU__DOT__rs2_Data))))
                              : (IData)(((7U == (7U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__Ex_BranchCtl))) 
                                         & VL_LTS_III(32, vlSelf->PipelineCPU__DOT__rs1_Data, vlSelf->PipelineCPU__DOT__rs2_Data))))));
    bufp->fullIData(oldp+139,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+140,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__ID_instruction 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+141,(vlSelf->PipelineCPU__DOT__Mem_readData3),32);
    bufp->fullIData(oldp+142,((((IData)(vlSelf->PipelineCPU__DOT____VdfgTmp_h13f1118f__0) 
                                | (IData)(vlSelf->PipelineCPU__DOT__Ex_jump))
                                ? vlSelf->PipelineCPU__DOT__Ex_ALUOut
                                : ((IData)(4U) + vlSelf->PipelineCPU__DOT__IF_pc))),32);
    bufp->fullBit(oldp+143,(((IData)(vlSelf->PipelineCPU__DOT____VdfgTmp_h13f1118f__0) 
                             | (IData)(vlSelf->PipelineCPU__DOT__Ex_jump))));
    bufp->fullIData(oldp+144,(4U),32);
    bufp->fullBit(oldp+145,(0U));
    bufp->fullIData(oldp+146,(0x20U),32);
}
