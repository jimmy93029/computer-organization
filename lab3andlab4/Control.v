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

    // assign {immUse, memtoReg, regWrite, memRead, memWrite, branch, jump, pcUse} = control;
    // Note : immUse = ALUSrc (Bsel), pcUse = Asel in textbook

    always @(*) begin
        case(opcode)   

            7'b1101111: begin  // J type ex. jal
                immUse   = 1;
                memtoReg = 0;
                regWrite = 1;
                memRead  = 0;
                memWrite = 0;
                branch   = 1;
                jump     = 1;
                pcUse    = 1;
                ALUOp = 2'b00;
            end
            7'b1100111: begin  // I type (1) ex. jalr
                immUse   = 1;
                memtoReg = 0;
                regWrite = 1;
                memRead  = 0;
                memWrite = 0;
                branch   = 0;
                jump     = 1;
                pcUse    = 0;
                ALUOp = 2'b00;
            end
            7'b1100011: begin  // B type ex. beq, bne, bne, bge
                immUse   = 1;
                memtoReg = 0;
                regWrite = 0;
                memRead  = 0;
                memWrite = 0;
                branch   = 1;
                jump     = 0;
                pcUse    = 1;
                ALUOp = 2'b00;
            end
            7'b0000011: begin  // I type (2) ex. lw
                immUse   = 1;
                memtoReg = 1;
                regWrite = 1;
                memRead  = 1;
                memWrite = 0;
                branch   = 0;
                jump     = 0;
                pcUse    = 0;
                ALUOp = 2'b00;
            end
            7'b0100011: begin  // S type ex. sw
                immUse   = 1;
                memtoReg = 0;
                regWrite = 0;
                memRead  = 0;
                memWrite = 1;
                branch   = 0;
                jump     = 0;
                pcUse    = 0;
                ALUOp = 2'b00;
            end
            7'b0010011: begin  // I type (3) ex. addi, andi, ori, slti    
                immUse   = 1;
                memtoReg = 0;
                regWrite = 1;
                memRead  = 0;
                memWrite = 0;
                branch   = 0;
                jump     = 0;
                pcUse    = 0;        
                ALUOp = 2'b11;
            end
            7'b0110011: begin  // R type ex. add, sub, and, or, slt
                immUse   = 0;
                memtoReg = 0;
                regWrite = 1;
                memRead  = 0;
                memWrite = 0;
                branch   = 0;
                jump     = 0;
                pcUse    = 0; 
                ALUOp = 2'b10;
            end
            default: begin
                immUse   = 0;
                memtoReg = 0;
                regWrite = 0;
                memRead  = 0;
                memWrite = 0;
                branch   = 0;
                jump     = 0;
                pcUse    = 0;
                ALUOp = 2'b00;
            end
        endcase
    end

endmodule

