module Control (
    input [6:0] opcode,
    output reg immUse,
    output reg memtoReg,
    output reg regWrite,
    output reg memRead,
    output reg memWrite,
    output reg branch,
    output reg jump,
    output reg pcUse,
    output reg [1:0] ALUOp
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal

    reg[7:0] control; 
    assign {immUse, memtoReg, regWrite, memRead, memWrite, branch, jump, pcUse} = control;
    // Note : immUse = ALUSrc (Bsel), pcUse = Asel in textbook

    always @(*) begin
        case(opcode)   

            7'b1101111: begin
                control = 8'b10100111;  // J type ex. jal
                ALUOp = 2'b00;
            end
            7'b1100111: begin
                control = 8'b10100010;  // I type (1) ex. jalr
                ALUOp = 2'b00;
            end
            7'b1100011: begin
                control = 8'b0x000101;  // B type ex. beq, bne, bne, bge
                ALUOp = 2'b00;
            end
            7'b0000011: begin
                control = 8'b11110000;  // I type (2) ex. lw
                ALUOp = 2'b00;
            end
            7'b0100011: begin
                control = 8'b1x001000;  // S type ex. sw
                ALUOp = 2'b00;
            end
            7'b0010011: begin           
                control = 8'b10100000;  // I type (3) ex. addi, slti, ori, andi
                ALUOp = 2'b11;
            end
            7'b0110011: begin
                control = 8'b00100000;  // R type
                ALUOp = 2'b10;
            end
            default: begin
                control = 8'bxxxxxxxx;
                ALUOp = 2'bxx;
            end
        endcase
    end

endmodule

