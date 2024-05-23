module Pipe_reg_Mem_Wb (
    input clk,
    input rst,
    input flush,
    input [31:0] Mem_pc,
    input Mem_memtoReg,
    input Mem_regWrite,
    input Mem_jump,
    input [31:0] Mem_ALUOut,    
    input [31:0] Mem_readData3,
    input [4:0] Mem_RegRd,
    output reg [31:0] Wb_pc,
    output reg Wb_memtoReg,
    output reg Wb_regWrite,
    output reg Wb_jump,
    output reg [31:0] Wb_ALUOut,    
    output reg [31:0] Wb_readData3,
    output reg [4:0] Wb_RegRd
);

    /* verilator lint_off SYNCASYNCNET */
    always @(posedge clk, negedge rst) begin
        if (~rst || flush) begin
            // Assign default 0 value when ~rst || flush
            Wb_pc <= 32'b0;
            Wb_memtoReg <= 1'b0;
            Wb_regWrite <= 1'b0;
            Wb_jump <= 1'b0;
            Wb_ALUOut <= 32'b0;    
            Wb_readData3 <= 32'b0;
            Wb_RegRd <= 5'b0;
        end
        else begin
            // Assign Mem variables to Wb variables
            Wb_pc <= Mem_pc;
            Wb_memtoReg <= Mem_memtoReg;
            Wb_regWrite <= Mem_regWrite;
            Wb_jump <= Mem_jump;
            Wb_ALUOut <= Mem_ALUOut;
            Wb_readData3 <= Mem_readData3;
            Wb_RegRd <= Mem_RegRd;
        end
    end

endmodule
