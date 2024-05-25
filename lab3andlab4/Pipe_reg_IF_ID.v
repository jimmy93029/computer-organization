module Pipe_reg_IF_ID (
    input clk,
    input rst,
    input flush,
    input freeze,
    input [31:0] IF_pc,
    input [31:0] IF_inst,
    input [31:0] ID_pc_i,
    input [31:0] ID_inst_i,    
    output reg [31:0] ID_pc,
    output reg [31:0] ID_inst
);

    /* verilator lint_off SYNCASYNCNET */
    always @(posedge clk, negedge rst) begin
        if (~rst || flush) begin
            ID_pc <= 32'b0;
            ID_inst <= 32'b0;
        end
        else if (freeze) begin
            ID_pc <= ID_pc_i;
            ID_inst <= ID_inst_i;
        end
        else begin
            ID_pc <= IF_pc;
            ID_inst <= IF_inst;
        end
    end

endmodule
