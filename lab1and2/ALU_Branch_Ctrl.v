module ALU_Branch_Ctrl (
    input [1:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl,
    output reg [3:0] BranchCtl
);

    // TODO: implement your ALU control here
    // For testbench verifying, Do not modify input and output pin
    // Hint: using ALUOp, funct7, funct3 to select exact operation

always @*
begin
    case(ALUOp)

        // case J type, I type (1), I type (2), S type, B type
        2'b00:
            ALUCtl = 4'b0010;          // jal, jalr, lw, sw, beq, bnq, blt, bge : add
            
        // case I type (3)
        2'b11:
            case(funct3)
                3'b000:
                    ALUCtl = 4'b0010;  // addi : add
                3'b010:
                    ALUCtl = 4'b0111;  // slti: slt
                3'b110:
                    ALUCtl = 4'b0001;  // ori: or 
                3'b111:
                    ALUCtl = 4'b0000;  // andi: and
                default:
                    ALUCtl = 4'bxxxx;
            endcase

        // case R type
        2'b10:
            case(funct7)
                1'b0:
                    case(funct3)
                        3'b000: 
                            ALUCtl = 4'b0010;  // add
                        3'b010:
                            ALUCtl = 4'b0111;  // slt : A < B
                        3'b110:
                            ALUCtl = 4'b0001;  // or
                        3'b111:
                            ALUCtl = 4'b0000;  // and
                        default:
                            ALUCtl = 4'bxxxx;
                    endcase
                1'b1:
                    case(funct3)
                        3'b000:
                            ALUCtl = 4'b0110;  // sub
                        default:
                            ALUCtl = 4'bxxxx;
                    endcase
            endcase
        default: ALUCtl = 4'bxxxx;  // Unsupported
    endcase
end


// signal to branch compare 
always @* begin

    // case B type
    case(funct3)
        3'b000:
            BranchCtl = 4'b1100;  // beq : A == B
        3'b001:
            BranchCtl = 4'b1101;  // bne : A != B
        3'b100:
            BranchCtl = 4'b0111;  // blt : A < B
        3'b101:
            BranchCtl = 4'b1011;  // bge : A >= B
        default:
            BranchCtl = 4'bxxxx;

    endcase
end


endmodule


