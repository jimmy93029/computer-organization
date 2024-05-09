module Pipe_reg (
    input clk,
    input rst,
    input [31:0] data_i,
    output reg [31:0] data_o
);

    /* verilator lint_off SYNCASYNCNET */
    always @(posedge clk) begin
        if (~rst)
            data_o <= 32'd0; 
        else
            data_o <= pc_i; 
    end

endmodule