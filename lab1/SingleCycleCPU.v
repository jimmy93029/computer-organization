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
wire [31:0] pc_mux_out;
wire [31:0] pc_add;
wire [31:0] instruction;
wire [31:0] shift1_out;
wire [31:0] add2_sum;

// main control wires
wire branch; 
wire memRead;
wire memtoReg;
wire memWrite;
wire ALUSrc;
wire regWrite;
wire[1:0] ALUOp;

// register wires
wire[31:0] WriteData_mux_out;
wire[31:0] readData1;
wire[31:0] readData2;

// immedidate generator unit wires
wire[31:0] imm;   

// ALU related wires
wire[31:0] alu_mux_out; 
wire[31:0] ALUOut;
wire[3:0] aluctl;
wire zero;


// PC related area ----------------------------------------------------
PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(pc_mux_out),
    .pc_o(pc_o)
);

Adder m_Adder_1(
    .a(pc_o),
    .b(32'd4),
    .sum(pc_add)
);

Adder m_Adder_2(
    .a(pc_o),
    .b(shift1_out),
    .sum(add2_sum)
);

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(branch),
    .s0(pc_add),
    .s1(add2_sum),
    .out(pc_mux_out)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(imm),
    .o(shift1_out)
);

InstructionMemory m_InstMem(
    .readAddr(pc_o),
    .inst(instruction)
);


// Main control ----------------------------------------------------
Control m_Control(
    .opcode(instruction[6:0]),
    .branch(branch),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
    .regWrite(regWrite)
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
    .writeData(WriteData_mux_out),
    .readData1(readData1),
    .readData2(readData2)
);


// immediate generator unit ------------------------------------
ImmGen m_ImmGen(
    .inst(instruction[31:0]),
    .imm(imm)
);


// ALU related -----------------------------------------------
Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc),
    .s0(readData2),
    .s1(imm),
    .out(alu_mux_out)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp),
    .funct7(instruction[30]),
    .funct3(instruction[14:12]),
    .ALUCtl(aluctl)
);

ALU m_ALU(
    .ALUctl(aluctl),
    .A(readData1),
    .B(alu_mux_out),
    .ALUOut(ALUOut),
    .zero(zero)
);


// DataMemory related ----------------------------------------
DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWrite),
    .memRead(memRead),
    .address(ALUOut),
    .writeData(readData2),
    .readData(ReadData3)
);

Mux2to1 #(.size(32)) m_Mux_WriteData(
    .sel(regWrite),
    .s0(ReadData3),
    .s1(ALUOut),
    .out(WriteData_mux_out)
);


// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

endmodule
