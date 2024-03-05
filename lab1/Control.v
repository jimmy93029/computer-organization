module Control (
    input [6:0] opcode,
    output reg branch,
    output reg memRead,
    output reg memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    assign {ALUSrc, memtoReg, regWrite, memRead, memWrite, branch, ALUOp} = control;

    always @(*) begin
        case(opcode)
            7'0110011:  
                control <= 8'b00100010;  // R type
            7'0010011:
                control <= 8'b11110000;  // I type
            7'0100011: 
                control <= 8'b1x001000;  // S type
            7'1100011:
                control <= 8'b0x000101;  // B type
            default:
                control <= 8'bxxxxxxxx;
        endcase
    end

endmodule

