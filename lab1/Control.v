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
    reg[5:0] control; 
    assign {ALUSrc, memtoReg, regWrite, memRead, memWrite, branch} = control;

    always @(*) begin
        case(opcode)   
            7'b0110011: begin
                control <= 6'b001000;    // R type
                ALUOp <= 2'b10;
            end
            7'b0010011: begin
                control <= 6'b111100;    // I type
                ALUOp <= 2'b00;
            end
            7'b0100011: begin
                control <= 6'b1x0010;    // S type
                ALUOp <= 2'b00;
            end
            7'b1100011: begin
                control <= 6'b0x0001;    // B type
                ALUOp <= 2'b01;
            end
            default: begin
                control <= 6'bxxxxxx;
                ALUOp <= 2'bxx;
            end
        endcase
    end

endmodule

