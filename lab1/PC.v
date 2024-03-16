module PC (
    input clk,
    input rst,
    input [31:0] pc_i,
    output reg [31:0] pc_o
);

    // TODO: implement your program counter here
    always @(posedge clk) begin
        if (rst)
            pc_o <= 32'd0; // Synchronous reset: Reset PC to 0 on the rising edge of clk when rst is asserted
        else
            pc_o <= pc_i; // Update PC synchronously: On the rising edge of clk, update PC to pc_i
    end

endmodule

