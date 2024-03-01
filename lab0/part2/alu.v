    // alu has two input operand a and b.
    // It executes different operation over input a and b based on input s
    // then generate result to output y
    
    // TODO: implement your 4bits ALU design here and using your own fulladder module in this module
    // For testbench verifying, do not modify input and output pin

module alu(
    input [3:0] a,
    input [3:0] b,
    input [2:0] s,
    output reg [3:0] y
); 

always @* begin
    case(s)
        3'b000: y = a + b; // Addition
        3'b001: y = a - b; // Subtraction
        3'b010: y = a & b; // Bitwise AND
        3'b011: y = a | b; // Bitwise OR
        3'b100: y = a ^ b; // Bitwise XOR
        3'b101: begin       // Greater than (GT)
            if (a > b)
                y = 1;
            else
                y = 0;
        end
        3'b110: begin       // Equal to (EQL)
            if (a == b)
                y = 1;
            else
                y = 0;
        end
        3'b111: y = ~a; // Bitwise NOT
        default: y = 4'bxxxx; // Invalid opcode, result is undefined
    endcase
end

endmodule


