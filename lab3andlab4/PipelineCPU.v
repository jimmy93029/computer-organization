module PipelineCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);


// When input start is zero, cpu should reset
// When input start is high, cpu start running

// TODO: connect wire to realize PipelineCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module


// PC related wires
wire [31:0] IF_pc, ID_pc, Ex_pc, Mem_pc, Wb_pc;  
wire signed [31:0] IF_pc_mux;
wire signed [31:0] IF_pc_add4, Wb_pc_add4;
wire [31:0] IF_instruction, ID_instruction;
wire [3:0] ID_BranchCtl, Ex_BranchCtl;
wire Ex_BranchOut;


// main control wires
wire ID_immUse, Ex_immUse;   
wire ID_memtoReg, Ex_memtoReg, Mem_memtoReg, Wb_memtoReg;
wire ID_regWrite, Ex_regWrite, Mem_regWrite, Wb_regWrite;
wire ID_memRead, Ex_memRead, Mem_memRead;
wire ID_memWrite, Ex_memWrite, Mem_memWrite;
wire ID_branch, Ex_branch;
wire ID_jump, Ex_jump, Mem_jump, Wb_jump;     
wire ID_pcUse, Ex_pcUse; 
wire[1:0] ID_ALUOp;


// register data wires, Memory 
wire signed [31:0] Wb_writeData;
wire [31:0] ID_readData1, Ex_readData1;
wire[31:0] ID_readData2, Ex_readData2, Mem_rs2_Data;
wire[31:0] Mem_readData3, Wb_readData3;


// register address wires
wire [4:0] Ex_RegRs1;
wire [4:0] Ex_RegRs2;
wire [4:0] Ex_RegRd, Mem_RegRd, Wb_RegRd;


// ALU related wires
wire signed [31:0] ID_imm, Ex_imm; 
wire signed [31:0] aluSrc1; 
wire signed [31:0] aluSrc2;
wire signed [31:0] rs1_Data;
wire signed [31:0] rs2_Data;
wire signed [31:0] Ex_ALUOut, Mem_ALUOut, Wb_ALUOut;
wire[3:0] ID_ALUCtl, Ex_ALUCtl;


// forwarding unit
wire [1:0] forwardA;
wire [1:0] forwardB;


// harzard unit
wire IF_ID_flush;
wire ID_Ex_flush;
wire IF_ID_freeze;
wire pc_freeze; 

// temp
wire signed [31:0] out3;


/* Stage 1 : IF (insruction fetch) ------------------------------------------------------ */

PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(IF_pc_mux),
    .pc_o(IF_pc)
);


wire [31:0] pc_out;

Mux2to1 #(.size(32)) m_Mux1_PC(
    .sel((Ex_branch && Ex_BranchOut) || Ex_jump),
    .s0(IF_pc_add4),   
    .s1(Ex_ALUOut),
    .out(pc_out)
);


Mux2to1 #(.size(32)) m_Mux2_PC(
    .sel(pc_freeze),
    .s0(pc_out),   
    .s1(IF_pc),
    .out(IF_pc_mux)
);


Adder m_Adder_1(
    .a(IF_pc),
    .b(32'd4),
    .sum(IF_pc_add4)
);


InstructionMemory m_InstMem(
    .readAddr(IF_pc),
    .inst(IF_instruction)
);


Pipe_reg_IF_ID m_IF_ID(
    .clk(clk),
    .rst(start),
    .flush(IF_ID_flush),
    .freeze(IF_ID_freeze),
    .IF_pc(IF_pc),
    .IF_inst(IF_instruction),
    .ID_pc_i(ID_pc),
    .ID_inst_i(ID_instruction),  
    .ID_pc(ID_pc),
    .ID_inst(ID_instruction)
);


/* Stage 2 : ID (instruction decode & register read) ------------------------------------------------------ */

Control m_Control(
    .opcode(ID_instruction[6:0]),
    .immUse(ID_immUse),
    .memtoReg(ID_memtoReg),
    .regWrite(ID_regWrite),
    .memRead(ID_memRead),
    .memWrite(ID_memWrite),
    .branch(ID_branch),
    .jump(ID_jump),
    .pcUse(ID_pcUse),
    .ALUOp(ID_ALUOp)
);


Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(Wb_regWrite),
    .readReg1(ID_instruction[19:15]),
    .readReg2(ID_instruction[24:20]),
    .writeReg(Wb_RegRd),
    .writeData(Wb_writeData),
    .readData1(ID_readData1),
    .readData2(ID_readData2)
);


ALU_Branch_Ctrl m_ALU_Branch_Ctrl(
    .ALUOp(ID_ALUOp),
    .funct7(ID_instruction[30]),
    .funct3(ID_instruction[14:12]),
    .ALUCtl(ID_ALUCtl),
    .BranchCtl(ID_BranchCtl)
);


ImmGen m_ImmGen(
    .inst(ID_instruction[31:0]),   
    .imm(ID_imm)                  
);


// Hazard

HazardDetectUnit m_HazardDetectUnit(
    .Ex_memRead(Ex_memRead),
    .Ex_jump_or_branch(Ex_jump || (Ex_branch & Ex_BranchOut)),
    .Ex_RegRd(Ex_RegRd),
    .ID_RegRs1(ID_instruction[19:15]),
    .ID_RegRs2(ID_instruction[24:20]),
    .IF_ID_flush(IF_ID_flush),
    .ID_Ex_flush(ID_Ex_flush),
    .IF_ID_freeze(IF_ID_freeze),
    .pc_freeze(pc_freeze)
);


Pipe_reg_ID_Ex m_ID_Ex (
    .clk(clk),
    .rst(start),
    .flush(ID_Ex_flush),
    .ID_pc(ID_pc),
    .ID_imm(ID_imm), 
    .ID_immUse(ID_immUse),
    .ID_memtoReg(ID_memtoReg), 
    .ID_regWrite(ID_regWrite), 
    .ID_memRead(ID_memRead), 
    .ID_memWrite(ID_memWrite), 
    .ID_branch(ID_branch), 
    .ID_jump(ID_jump), 
    .ID_pcUse(ID_pcUse),
    .ID_readData1(ID_readData1), 
    .ID_readData2(ID_readData2), 
    .ID_ALUCtl(ID_ALUCtl), 
    .ID_BranchCtl(ID_BranchCtl),
    .ID_RegRs1(ID_instruction[19:15]), 
    .ID_RegRs2(ID_instruction[24:20]), 
    .ID_RegRd(ID_instruction[11:7]), 
    .Ex_pc(Ex_pc),
    .Ex_imm(Ex_imm),
    .Ex_immUse(Ex_immUse), 
    .Ex_memtoReg(Ex_memtoReg), 
    .Ex_regWrite(Ex_regWrite), 
    .Ex_memRead(Ex_memRead), 
    .Ex_memWrite(Ex_memWrite), 
    .Ex_branch(Ex_branch), 
    .Ex_jump(Ex_jump), 
    .Ex_pcUse(Ex_pcUse),
    .Ex_readData1(Ex_readData1), 
    .Ex_readData2(Ex_readData2), 
    .Ex_ALUCtl(Ex_ALUCtl), 
    .Ex_BranchCtl(Ex_BranchCtl), 
    .Ex_RegRs1(Ex_RegRs1), 
    .Ex_RegRs2(Ex_RegRs2), 
    .Ex_RegRd(Ex_RegRd)
);


/* Stage 3 : Ex (execution)--------------------------------------------------------- */

ALU m_ALU(
    .ALUCtl(Ex_ALUCtl),
    .A(aluSrc1),
    .B(aluSrc2),
    .ALUOut(Ex_ALUOut)
);

BranchComp m_BranchComp (
    .BranchCtl(Ex_BranchCtl),
    .A(rs1_Data),
    .B(rs2_Data),
    .BranchOut(Ex_BranchOut)
);


// ALU source 1 (A)

Mux3to1 #(.size(32)) m_Mux1_ALUSrc1(
    .sel(forwardA),
    .s0(Ex_readData1),
    .s1(Wb_writeData),
    .s2(Mem_ALUOut),
    .out(rs1_Data)
);


Mux2to1 #(.size(32)) m_Mux2_ALUSrc1(
    .sel(Ex_pcUse),
    .s0(rs1_Data),
    .s1(Ex_pc),
    .out(aluSrc1)
);


// ALU source 2 (B)

Mux3to1 #(.size(32)) m_Mux1_ALUSrc2(
    .sel(forwardB),
    .s0(Ex_readData2),
    .s1(Wb_writeData),
    .s2(Mem_ALUOut),
    .out(rs2_Data)
);


Mux2to1 #(.size(32)) m_Mux2_ALUSrc2(
    .sel(Ex_immUse),
    .s0(rs2_Data),
    .s1(Ex_imm),
    .out(aluSrc2)
);


// Forwarding 

ForwardUnit m_ForwardUnit(
    .Mem_regWrite(Mem_regWrite),
    .Wb_regWrite(Wb_regWrite),
    .Mem_RegRd(Mem_RegRd),
    .Wb_RegRd(Wb_RegRd),
    .Ex_RegRs1(Ex_RegRs1),
    .Ex_RegRs2(Ex_RegRs2),
    .forwardA(forwardA),
    .forwardB(forwardB)
);


Pipe_reg_Ex_Mem m_Ex_Mem (
    .clk(clk),
    .rst(start),
    .flush(1'd0),
    .Ex_pc(Ex_pc),
    .Ex_memtoReg(Ex_memtoReg),
    .Ex_regWrite(Ex_regWrite),
    .Ex_memWrite(Ex_memWrite),
    .Ex_memRead(Ex_memRead),
    .Ex_jump(Ex_jump),
    .Ex_RegRd(Ex_RegRd),
    .Ex_ALUOut(Ex_ALUOut),
    .Ex_readData2(rs2_Data),
    .Mem_pc(Mem_pc),
    .Mem_memtoReg(Mem_memtoReg),
    .Mem_regWrite(Mem_regWrite),
    .Mem_memWrite(Mem_memWrite),
    .Mem_memRead(Mem_memRead),
    .Mem_jump(Mem_jump),
    .Mem_RegRd(Mem_RegRd),
    .Mem_ALUOut(Mem_ALUOut),
    .Mem_readData2(Mem_rs2_Data)
);


// stage 4 : Mem (memory read) ----------------------------------------------------

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(Mem_memWrite),
    .memRead(Mem_memRead),
    .address(Mem_ALUOut),
    .writeData(Mem_rs2_Data),
    .readData(Mem_readData3)
);


Pipe_reg_Mem_Wb m_Mem_Wb (
    .clk(clk),
    .rst(start),
    .flush(1'd0),
    .Mem_pc(Mem_pc),
    .Mem_memtoReg(Mem_memtoReg),
    .Mem_regWrite(Mem_regWrite),
    .Mem_jump(Mem_jump),
    .Mem_ALUOut(Mem_ALUOut),
    .Mem_readData3(Mem_readData3),
    .Mem_RegRd(Mem_RegRd),
    .Wb_pc(Wb_pc),
    .Wb_memtoReg(Wb_memtoReg),
    .Wb_regWrite(Wb_regWrite),
    .Wb_jump(Wb_jump),
    .Wb_ALUOut(Wb_ALUOut),
    .Wb_readData3(Wb_readData3),
    .Wb_RegRd(Wb_RegRd)
);


// stage 5 : Wb (write back) -------------------------------------------------------


Mux2to1 #(.size(32)) m_Mux1_WriteData(
    .sel(Wb_memtoReg),
    .s0(Wb_ALUOut),
    .s1(Wb_readData3),
    .out(out3)
);


Mux2to1 #(.size(32)) m_Mux2_WriteData(
    .sel(Wb_jump),
    .s0(out3),
    .s1(Wb_pc_add4),
    .out(Wb_writeData)
);


Adder m_Adder_2(
    .a(Wb_pc),
    .b(32'd4),
    .sum(Wb_pc_add4)
);


// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======


endmodule
