module ForwardUnit(
    input Mem_regWrite,
    input Wb_regWrite,
    input [4:0] Mem_RegRd,
    input [4:0] Wb_RegRd,
    input [4:0] Ex_RegRs1,
    input [4:0] Ex_RegRs2,
    output reg [1:0] forwardA,
    output reg [1:0] forwardB
);

always @* begin
    // Default values
    forwardA = 2'b00;
    forwardB = 2'b00;

    // EX hazard
    if (Mem_regWrite && (Mem_RegRd != 0) && (Mem_RegRd == Ex_RegRs1))
        forwardA = 2'b10;  // Corrected value to fit 2-bit size
    
    if (Mem_regWrite && (Mem_RegRd != 0) && (Mem_RegRd == Ex_RegRs2))
        forwardB = 2'b10;  // Corrected value to fit 2-bit size

    // Mem hazard
    if (Wb_regWrite && (Wb_RegRd != 0) && (Wb_RegRd == Ex_RegRs1) &&
        !(Mem_regWrite && (Mem_RegRd != 0) && (Mem_RegRd == Ex_RegRs1)))
        forwardA = 2'b01;
    
    if (Wb_regWrite && (Wb_RegRd != 0) && (Wb_RegRd == Ex_RegRs2) &&
        !(Mem_regWrite && (Mem_RegRd != 0) && (Mem_RegRd == Ex_RegRs2)))
        forwardB = 2'b01;
end

endmodule
