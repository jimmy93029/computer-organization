module SingleCycleCPU (
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
wire [31:0] pc_o;  
wire signed [31:0] pc_mux_out;
wire signed [31:0] pc_add4;
wire [31:0] instruction;
wire [3:0] BranchCtl;
wire BranchOut;

// main control wires
wire immUse;   // sel to alu_mux2. determine whether to use immediate on inputB of ALU
wire memtoReg;
wire regWrite;
wire memRead;
wire memWrite;
wire branch;
wire jump;     // when jump. we have to link pc + 4 into reg, and put alu ouput into pc  
wire pcUse;    // sel to alu_mux1. determine whether to use pc on inputA of ALU
wire[1:0] ALUOp;

// register wires and Data Memory 
wire signed [31:0] WriteData_mux1_out;
wire signed [31:0] WriteData_mux2_out;
wire[31:0] readData1;
wire[31:0] readData2;
wire[31:0] readData3;

// ALU related wires
wire signed [31:0] imm;   
wire signed [31:0] alu_mux1_out; 
wire signed [31:0] alu_mux2_out;
wire signed [31:0] ALUOut;
wire[3:0] ALUCtl;


// PC related area -----------------------------------------------------
PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(pc_mux_out),
    .pc_o(pc_o)
);

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel((branch && BranchOut) || jump),
    .s0(pc_add4),   
    .s1(ALUOut),
    .out(pc_mux_out)
);

Adder m_Adder_1(
    .a(pc_o),
    .b(32'd4),
    .sum(pc_add4)
);

BranchComp m_BranchComp (
    .BranchCtl(BranchCtl),
    .A(readData1),
    .B(readData2),
    .BranchOut(BranchOut)
);

InstructionMemory m_InstMem(
    .readAddr(pc_o),
    .inst(instruction)
);


// Main control ---------------------------------------------------------
Control m_Control(
    .opcode(instruction[6:0]),
    .immUse(immUse),
    .memtoReg(memtoReg),
    .regWrite(regWrite),
    .memRead(memRead),
    .memWrite(memWrite),
    .branch(branch),
    .jump(jump),
    .pcUse(pcUse),
    .ALUOp(ALUOp)
);


// Register ------------------------------------------------------------
// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.
Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(regWrite),
    .readReg1(instruction[19:15]),
    .readReg2(instruction[24:20]),
    .writeReg(instruction[11:7]),
    .writeData(WriteData_mux2_out),
    .readData1(readData1),
    .readData2(readData2)
);


// ALU related -----------------------------------------------
ImmGen m_ImmGen(
    .inst(instruction[31:0]),   // Note that : I imcorperate shift left one into ImmGen
    .imm(imm)                   // that is, for branch, jump instruction, ImmGen will output shift left 1 offset automatically
);

ALU m_ALU(
    .ALUCtl(ALUCtl),
    .A(alu_mux1_out),
    .B(alu_mux2_out),
    .ALUOut(ALUOut)
);


Mux2to1 #(.size(32)) m_Mux1_ALU(
    .sel(pcUse),
    .s0(readData1),
    .s1(pc_o),
    .out(alu_mux1_out)
);

Mux2to1 #(.size(32)) m_Mux2_ALU(
    .sel(immUse),
    .s0(readData2),
    .s1(imm),
    .out(alu_mux2_out)
);

ALU_Branch_Ctrl m_ALU_Branch_Ctrl(
    .ALUOp(ALUOp),
    .funct7(instruction[30]),
    .funct3(instruction[14:12]),
    .ALUCtl(ALUCtl),
    .BranchCtl(BranchCtl)
);


// Data Memory related ----------------------------------------
DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWrite),
    .memRead(memRead),
    .address(ALUOut),
    .writeData(readData2),
    .readData(readData3)
);

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
