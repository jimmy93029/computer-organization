module ImmGen (
    /* verilator lint_off UNUSEDSIGNAL */
    input [31:0] inst,
    output reg signed [31:0] imm
);
    // ImmGen generate imm value base opcode

    wire [6:0] opcode = inst[6:0];
    always @(*) begin
        case(opcode)
            // TODO: implement your ImmGen here
            // Hint: follow the RV32I opcode map (table in spec) to set imm value
                
            7'b1101111: begin
                imm = {13{inst[31]}, inst[19:12], inst[20], inst[30:21]};  // J type ex. jal
                imm = imm << 1;
            end
            7'b1100111: begin
                imm = {{21{inst[31]}}, inst[30:20]};  // I type (1) ex. jalr 
            end
            7'b1100011: begin
                imm = {{21{inst[31]}}, inst[7], inst[30:25], inst[11:8]};  // B type ex. beq, bne, blt, bge  
                imm = imm << 1;
            end            
            7'b0000011: 
                imm = {{21{inst[31]}}, inst[30:20]};  // I type (2) ex. lw
            
            7'b0010011:
                imm = {{21{inst[31]}}, inst[30:20]};  // I type (3) ex. addi, slti, ori, andi
            
            7'b0100011:
                imm = {{21{inst[31]}}, inst[30:25], inst[11:7]};  // S type ex. sw
            default:
                imm = 32'bx;

        endcase
    end

endmodule

