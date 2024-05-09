module ALU (
    input [3:0] ALUCtl,
    input signed [31:0] A,B,
    output reg signed [31:0] ALUOut
);
    // ALU has two operand, it execute different operator based on ALUctl wire 
    // output zero is for determining taking branch or not (or you can change the design as you wish)

    // TODO: implement your ALU here
    // Hint: you can use operator to implement
    
       
always @(*) begin
    case (ALUCtl)
        4'b0010:
            ALUOut = A + B;
        4'b0110: 
            ALUOut = A - B;
        4'b0000:
            ALUOut = A & B; 
        4'b0001:
            ALUOut = A | B;
        4'b0111:
            ALUOut = (A < B) ? 32'd1 : 32'd0;
        default: 
            ALUOut = 32'd0;       
    endcase
end
    
    
endmodule

