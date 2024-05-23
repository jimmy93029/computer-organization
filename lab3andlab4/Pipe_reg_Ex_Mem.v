module Pipe_reg_Ex_Mem (
    input clk,
    input rst,
    input flush,
    input [31:0] Ex_pc,
    input Ex_memWrite,
    input Ex_memRead,
    input Ex_jump,
    input [4:0] Ex_RegRd,
    input [3:0] Ex_ALUOut,
    input [31:0] Ex_readData2,
    output reg [31:0] Mem_pc,
    output reg Mem_memWrite,
    output reg Mem_memRead,
    output reg Mem_jump,
    output reg [4:0] Mem_RegRd,
    output reg [3:0] Mem_ALUOut,
    output reg [31:0] Mem_readData2
);

    /* verilator lint_off SYNCASYNCNET */
    always @(posedge clk, negedge rst) begin
        if (~rst || flush) begin
            // Assign default 0 value
            Mem_pc <= 32'b0;
            Mem_memWrite <= 1'b0;
            Mem_memRead <= 1'b0;
            Mem_jump <= 1'b0;
            Mem_RegRd <= 5'b0;
            Mem_ALUOut <= 4'b0;
            Mem_readData2 <= 32'b0;
        end
        else begin
            // Assign Ex variables to Mem variables
            Mem_pc <= Ex_pc;
            Mem_memWrite <= Ex_memWrite;
            Mem_memRead <= Ex_memRead;
            Mem_jump <= Ex_jump;
            Mem_RegRd <= Ex_RegRd;
            Mem_ALUOut <= Ex_ALUOut;
            Mem_readData2 <= Ex_readData2;
        end
    end

endmodule
