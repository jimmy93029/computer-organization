module ALUCtrl (
    input [1:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);

    // TODO: implement your ALU control here
    // For testbench verifying, Do not modify input and output pin
    // Hint: using ALUOp, funct7, funct3 to select exact operation

    always @*
    begin
        case(ALUOp)
            // case ld or sd
            2'b00:
                ALUCtl <= 4'b0010;  // add
            // case beq 
            2'bx1:
                ALUCtl <= 4'b0110;  // sub
            // case R type
            2'b1x:
                case(funct7)
                    7'd0:
                        case(funct3):
                            3'b000: 
                                ALUCtl <= 4'b0010; 
                            3'b111:
                                ALUCtl <= 4'b0000;
                            3'b110:
                                ALUCtl <= 4'b'0001;
                        endcase
                    7'd32:
                        ALUCtl <= 4'b0110;
                endcase

            default: ALUCtl <= 4'b0000; 
        endcase
    end

endmodule

