module Pipe_reg_IF_ID (
    input clk,
    input rst,
    input flush,
    input [31:0] IF_pc,
    input [31:0] IF_inst,
    output reg [31:0] ID_pc,
    output reg [31:0] ID_inst
);

    /* verilator lint_off SYNCASYNCNET */
    always @(posedge clk, negedge rst) begin
        if (~rst || flush) begin
            ID_pc <= 32'b0;
            ID_inst <= 32'b0;
        end
        else begin
            ID_pc <= IF_pc;
            ID_inst <= IF_inst;
        end
    end

endmodule
