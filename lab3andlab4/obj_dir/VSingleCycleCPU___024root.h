// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSingleCycleCPU.h for the primary calling header

#ifndef VERILATED_VSINGLECYCLECPU___024ROOT_H_
#define VERILATED_VSINGLECYCLECPU___024ROOT_H_  // guard

#include "verilated.h"

class VSingleCycleCPU__Syms;

class VSingleCycleCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ SingleCycleCPU__DOT__Mem_memRead;
        CData/*3:0*/ SingleCycleCPU__DOT__ID_BranchCtl;
        CData/*3:0*/ SingleCycleCPU__DOT__Ex_BranchCtl;
        CData/*0:0*/ SingleCycleCPU__DOT__ID_immUse;
        CData/*0:0*/ SingleCycleCPU__DOT__Ex_immUse;
        CData/*0:0*/ SingleCycleCPU__DOT__ID_memtoReg;
        CData/*0:0*/ SingleCycleCPU__DOT__Ex_memtoReg;
        CData/*0:0*/ SingleCycleCPU__DOT__Mem_memtoReg;
        CData/*0:0*/ SingleCycleCPU__DOT__Wb_memtoReg;
        CData/*0:0*/ SingleCycleCPU__DOT__ID_regWrite;
        CData/*0:0*/ SingleCycleCPU__DOT__Ex_regWrite;
        CData/*0:0*/ SingleCycleCPU__DOT__Mem_regWrite;
        CData/*0:0*/ SingleCycleCPU__DOT__Wb_regWrite;
        CData/*0:0*/ SingleCycleCPU__DOT__ID_memRead;
        CData/*0:0*/ SingleCycleCPU__DOT__Ex_memRead;
        CData/*0:0*/ SingleCycleCPU__DOT__ID_memWrite;
        CData/*0:0*/ SingleCycleCPU__DOT__Ex_memWrite;
        CData/*0:0*/ SingleCycleCPU__DOT__Mem_memWrite;
        CData/*0:0*/ SingleCycleCPU__DOT__ID_branch;
        CData/*0:0*/ SingleCycleCPU__DOT__Ex_branch;
        CData/*0:0*/ SingleCycleCPU__DOT__ID_jump;
        CData/*0:0*/ SingleCycleCPU__DOT__Ex_jump;
        CData/*0:0*/ SingleCycleCPU__DOT__Mem_jump;
        CData/*0:0*/ SingleCycleCPU__DOT__Wb_jump;
        CData/*0:0*/ SingleCycleCPU__DOT__ID_pcUse;
        CData/*0:0*/ SingleCycleCPU__DOT__Ex_pcUse;
        CData/*1:0*/ SingleCycleCPU__DOT__ID_ALUOp;
        CData/*4:0*/ SingleCycleCPU__DOT__Ex_RegRs1;
        CData/*4:0*/ SingleCycleCPU__DOT__Ex_RegRs2;
        CData/*4:0*/ SingleCycleCPU__DOT__Ex_RegRd;
        CData/*4:0*/ SingleCycleCPU__DOT__Mem_RegRd;
        CData/*4:0*/ SingleCycleCPU__DOT__Wb_RegRd;
        CData/*3:0*/ SingleCycleCPU__DOT__ID_ALUCtl;
        CData/*3:0*/ SingleCycleCPU__DOT__Ex_ALUCtl;
        CData/*1:0*/ SingleCycleCPU__DOT__forwardA;
        CData/*1:0*/ SingleCycleCPU__DOT__forwardB;
        CData/*0:0*/ SingleCycleCPU__DOT__IF_ID_flush;
        CData/*0:0*/ SingleCycleCPU__DOT____Vcellinp__m_HazardDetectUnit__Ex_jump_or_branch;
        CData/*0:0*/ SingleCycleCPU__DOT____VdfgTmp_h13f1118f__0;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__start;
        CData/*0:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__Mem_memRead;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ SingleCycleCPU__DOT__IF_pc;
        IData/*31:0*/ SingleCycleCPU__DOT__ID_pc;
        IData/*31:0*/ SingleCycleCPU__DOT__Ex_pc;
        IData/*31:0*/ SingleCycleCPU__DOT__Mem_pc;
        IData/*31:0*/ SingleCycleCPU__DOT__Wb_pc;
        IData/*31:0*/ SingleCycleCPU__DOT__IF_pc_mux;
        IData/*31:0*/ SingleCycleCPU__DOT__ID_instruction;
        IData/*31:0*/ SingleCycleCPU__DOT__Wb_writeData;
    };
    struct {
        IData/*31:0*/ SingleCycleCPU__DOT__Ex_readData1;
        IData/*31:0*/ SingleCycleCPU__DOT__Ex_readData2;
        IData/*31:0*/ SingleCycleCPU__DOT__Mem_readData2;
        IData/*31:0*/ SingleCycleCPU__DOT__Mem_readData3;
        IData/*31:0*/ SingleCycleCPU__DOT__Wb_readData3;
        IData/*31:0*/ SingleCycleCPU__DOT__ID_imm;
        IData/*31:0*/ SingleCycleCPU__DOT__Ex_imm;
        IData/*31:0*/ SingleCycleCPU__DOT__Ex_aluSrc1;
        IData/*31:0*/ SingleCycleCPU__DOT__Ex_aluSrc2;
        IData/*31:0*/ SingleCycleCPU__DOT__Ex_ALUOut;
        IData/*31:0*/ SingleCycleCPU__DOT__Mem_ALUOut;
        IData/*31:0*/ SingleCycleCPU__DOT__Wb_ALUOut;
        IData/*31:0*/ SingleCycleCPU__DOT__out1;
        IData/*31:0*/ SingleCycleCPU__DOT__out2;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__Mem_ALUOut;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_InstMem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> SingleCycleCPU__DOT__m_Register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSingleCycleCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSingleCycleCPU___024root(VSingleCycleCPU__Syms* symsp, const char* v__name);
    ~VSingleCycleCPU___024root();
    VL_UNCOPYABLE(VSingleCycleCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
