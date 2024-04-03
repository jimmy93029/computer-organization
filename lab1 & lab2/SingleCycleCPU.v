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
wire [3:0] BranchCtl,
wire signed [31:0] BranchOut,

// main control wires
wire immUse,
wire memtoReg,
wire regWrite,
wire memRead,
wire memWrite,
wire branch,
wire jump,
wire pcUse,
wire[1:0] ALUOp;

// register wires
wire signed [31:0] WriteData_mux1_out;
wire signed [31:0] WriteData_mux2_out;
wire[31:0] readData1;
wire[31:0] readData2;

// Data Memory 
wire[31:0] ReadData3;

// ALU related wires
wire signed [31:0] imm;   
wire signed [31:0] alu_mux_out; 
wire signed [31:0] ALUOut;
wire[3:0] ALUCtl;


// PC related area ----------------------------------------------------
PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(pc_mux_out),
    .pc_o(pc_o)
);

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel((branch & BranchOut) | jump),
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
    .BranchOut(BranchOut),
);

InstructionMemory m_InstMem(
    .readAddr(pc_o),
    .inst(instruction)
);


// Main control ----------------------------------------------------
Control m_Control(
    .opcode(instruction[6:0]),
    .immUse(immUse),
    .memtoReg(memtoReg),
    .regWrite(regWrite)
    .memRead(memRead),
    .memWrite(memWrite),
    .branch(branch),
    .jump(jump),
    .pcUse(pcUse),
    .ALUOp(ALUOp)
);


// Register ----------------------------------------------------
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
    .inst(instruction[31:0]),
    .imm(imm)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(immUse),
    .s0(readData2),
    .s1(imm),
    .out(alu_mux_out)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp),
    .funct7(instruction[30]),
    .funct3(instruction[14:12]),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUCtl(ALUCtl),
    .A(readData1),
    .B(alu_mux_out),
    .ALUOut(ALUOut),
);


// Data Memory related ----------------------------------------
DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWrite),
    .memRead(memRead),
    .address(ALUOut),
    .writeData(readData2),
    .readData(ReadData3)
);

Mux2to1 #(.size(32)) m_Mux1_WriteData(
    .sel(memtoReg),
    .s0(ReadData3),
    .s1(ALUOut),
    .out(WriteData_mux1_out)
);

Mux2to1 #(.size(32)) m_Mux2_WriteData(
    .sel(jump),
    .s0(WriteData_mux1_out),
    .s1(pc_add4),
    .out(WriteData_mux2_out)
)



// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

endmodule
