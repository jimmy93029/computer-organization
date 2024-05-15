module PipelineCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);


// When input start is zero, cpu should reset
// When input start is high, cpu start running

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module


// PC related wires
wire [31:0] IF_pc, ID_pc, Ex_pc;  
wire signed [31:0] IF_pc_mux;
wire signed [31:0] pc_add4;
wire [31:0] IF_instruction, ID_instruction;
wire [3:0] ID_BranchCtl, Ex_BranchCtl;
wire Ex_BranchOut;


// main control wires
wire ID_immUse. Ex_immUse;   
wire ID_memtoReg, Ex_memtoReg, Mem_memtoReg, Wb_memtoReg;
wire ID_regWrite, Ex_regWrite, Mem_regWrite, Wb_regWrite;
wire ID_memRead, Ex_memRead, Mem_memRead;
wire ID_memWrite, Ex_memWrite, Mem_memWrite;
wire ID_branch, Ex_branch;
wire ID_jump, Ex_jump;     
wire ID_pcUse, Ex_pcUse; 
wire[1:0] ID_ALUOp, Ex_ALUOp;


// register data wires, Memory 
wire signed [31:0] Wb_writeData_mux1;
wire signed [31:0] Wb_writeData_mux2;
wire[31:0] ID_readData1, Ex_readData1;
wire[31:0] ID_readData2, Ex_readData2;
wire[31:0] Mem_readData3, Wb_readData3;


// register address wires
input [5:0] Ex_RegRs, Mem_RegRs;
input [5:0] Ex_RegRt;
input [5:0] Ex_RegRd, Mem_RegRd, Wb_RegRd;


// ALU related wires
wire signed [31:0] ID_imm, Ex_imm; 
wire signed [31:0] Ex_aluSrc1; 
wire signed [31:0] Ex_aluSrc2;
wire signed [31:0] Ex_ALUOut, Mem_ALUOut;
wire[3:0] ID_ALUCtl, Ex_ALUCtl;


// forwarding unit
wire [1:0] forwardA;
wire [1:0] forwardB;


/* Stage 1 : IF (insruction fetch) ------------------------------------------------------ */

PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(IF_pc_mux),
    .pc_o(IF_pc)
);


Mux2to1 #(.size(32)) m_Mux_PC(
    .sel((Ex_branch && Ex_BranchOut) || Ex_jump),
    .s0(pc_add4),   
    .s1(Ex_ALUOut),
    .out(IF_pc_mux)
);


Adder m_Adder_1(
    .a(IF_pc),
    .b(32'd4),
    .sum(pc_add4)
);


InstructionMemory m_InstMem(
    .readAddr(IF_pc),
    .inst(IF_instruction)
);


Pipe_reg m_IF_ID(
    .clk(clk),
    .rst(start),
    .flush()
    .data_i({IF_pc, IF_insruction}),
    .data_o({ID_pc, ID_instruction})
)


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
    .writeReg(ID_instruction[11:7]),
    .writeData(Wb_writeData_mux2),
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


Pipe_reg m_IF_ID(
    .clk(clk),
    .rst(start),
    .flush(),               //-------------------- unfill in -------------------------//
    .data_i({ID_immUse, ID_memtoReg, ID_regWrite, ID_memRead, ID_memWrite, ID_branch, ID_jump, ID_pcUse, ID_ALUOp, ID_pc, ID_imm, 
                ID_readData1, ID_readData2, ID_ALUCtl, ID_BranchCtl, ID_instruction[19:15], ID_instruction[24:20], ID_instruction[11:7]}),
    .data_o({Ex_immUse, Ex_memtoReg, Ex_regWrite, Ex_memRead, Ex_memWrite, Ex_branch, Ex_jump, Ex_pcUse, Ex_ALUOp, Ex_pc, Ex_imm, 
                Ex_readData1, Ex_readData2, Ex_ALUCtl, Ex_BranchCtl, Ex_RegRt, Ex_RegRs, Ex_RegRd})
)


/* Stage 3 : Ex (execution)--------------------------------------------------------- */

ALU m_ALU(
    .ALUCtl(Ex_ALUCtl),
    .A(Ex_aluSrc1_mux2),
    .B(Ex_aluSrc2_mux2),
    .ALUOut(Ex_ALUOut)
);


BranchComp m_BranchComp (
    .BranchCtl(Ex_BranchCtl),
    .A(Ex_readData1),
    .B(Ex_readData2),
    .BranchOut(Ex_BranchOut)
);


wire signed [31:0] out1, out2;

Mux2to1 #(.size(32)) m_Mux1_ALUSrc1(
    .sel(Ex_pcUse),
    .s0(Ex_readData1),
    .s1(Ex_pc),
    .out(out1)
);


Mux3to1 #(.size(32)) m_Mux2_ALUSrc1(
    .sel(),
    .s0(out2),
    .s1(),
    .s2(),
    .out(Ex_aluSrc1)
);


Mux2to1 #(.size(32)) m_Mux2_ALU(
    .sel(Ex_immUse),
    .s0(Ex_readData2),
    .s1(Ex_imm),
    .out(out2)
);


Mux3to1 #(.size(32)) m_Mux2_ALUSrc1(
    .sel(),
    .s0(out2),
    .s1(),
    .s2(),
    .out(Ex_aluSrc2)
);


ForwardUnit m_ForwardUnit(
    .Mem_regWrite(Mem_regWrite),
    .Wb_regWrite(Wb_regWrite),
)


// stage 4 : Mem (memory read) ----------------------------------------------------

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWrite),
    .memRead(memRead),
    .address(ALUOut),
    .writeData(readData2),
    .readData(readData3)
);

// stage 5 : Wb (write back) -------------------------------------------------------

Mux2to1 #(.size(32)) m_Mux1_WriteData(
    .sel(memtoReg),
    .s0(ALUOut),
    .s1(readData3),
    .out(WriteData_mux1_out)
);

Mux2to1 #(.size(32)) m_Mux2_WriteData(
    .sel(jump),
    .s0(WriteData_mux1_out),
    .s1(pc_add4),
    .out(WriteData_mux2_out)
);


// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======


endmodule
