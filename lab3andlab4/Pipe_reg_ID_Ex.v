module Pipe_reg_ID_Ex (
    input clk,
    input rst,
    input flush,
    input [31:0] ID_pc,
    input [31:0] ID_imm, 
    input ID_immUse,
    input ID_memtoReg, 
    input ID_regWrite, 
    input ID_memRead, 
    input ID_memWrite, 
    input ID_branch, 
    input ID_jump, 
    input ID_pcUse,
    input [31:0] ID_readData1, 
    input [31:0] ID_readData2, 
    input [3:0] ID_ALUCtl, 
    input [3:0] ID_BranchCtl,
    input [4:0] ID_RegRs1, 
    input [4:0] ID_RegRs2, 
    input [4:0] ID_RegRd,
    output reg [31:0] Ex_pc,
    output reg [31:0] Ex_imm,
    output reg Ex_immUse, 
    output reg Ex_memtoReg, 
    output reg Ex_regWrite, 
    output reg Ex_memRead, 
    output reg Ex_memWrite, 
    output reg Ex_branch, 
    output reg Ex_jump, 
    output reg Ex_pcUse,
    output reg [31:0] Ex_readData1, 
    output reg [31:0] Ex_readData2, 
    output reg [3:0] Ex_ALUCtl, 
    output reg [3:0] Ex_BranchCtl, 
    output reg [4:0] Ex_RegRs1, 
    output reg [4:0] Ex_RegRs2, 
    output reg [4:0] Ex_RegRd
);

    /* verilator lint_off SYNCASYNCNET */
    always @(posedge clk or negedge rst) begin
        if (~rst || flush) begin
            Ex_pc <= 32'b0;
            Ex_imm <= 32'b0;
            Ex_immUse <= 1'b0;
            Ex_memtoReg <= 1'b0; 
            Ex_regWrite <= 1'b0; 
            Ex_memRead <= 1'b0;
            Ex_memWrite <= 1'b0;
            Ex_branch <= 1'b0;
            Ex_jump <= 1'b0;
            Ex_pcUse <= 1'b0;
            Ex_readData1 <= 32'b0; 
            Ex_readData2 <= 32'b0; 
            Ex_ALUCtl <= 4'b0;
            Ex_BranchCtl <= 4'b0;
            Ex_RegRs1 <= 5'b0;
            Ex_RegRs2 <= 5'b0;
            Ex_RegRd <= 5'b0;
        end
        else begin
            Ex_pc <= ID_pc;
            Ex_imm <= ID_imm;
            Ex_immUse <= ID_immUse;
            Ex_memtoReg <= ID_memtoReg; 
            Ex_regWrite <= ID_regWrite; 
            Ex_memRead <= ID_memRead;
            Ex_memWrite <= ID_memWrite;
            Ex_branch <= ID_branch;
            Ex_jump <= ID_jump;
            Ex_pcUse <= ID_pcUse;
            Ex_readData1 <= ID_readData1; 
            Ex_readData2 <= ID_readData2; 
            Ex_ALUCtl <= ID_ALUCtl;
            Ex_BranchCtl <= ID_BranchCtl;
            Ex_RegRs1 <= ID_RegRs1;
            Ex_RegRs2 <= ID_RegRs2;
            Ex_RegRd <= ID_RegRd;
        end
    end
endmodule