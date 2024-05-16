module ForwardUnit(
    input Mem_regWrite,
    input Wb_regWrite,
    input [5:0] Mem_RegRd,
    input [5:0] Wb_RegRd,
    input [5:0] Ex_RegRs1,
    input [5:0] Ex_RegRs2,
    output [1:0] forwardA,
    output [1:0] forwardB
)


always @* begin
    // EX hazard
    if (Mem_regWrite and (Mem_RegRd != 0) and (Mem_RegRd == Ex_RegRs1))
        forwardA = 2'd10;
    
    if (Mem_regWrite and (Mem_RegRd != 0) and (Mem_RegRd == Ex_RegRs2))
        forwardB = 2'd10;

    // Mem_hazard
    if (Wb_regWrite and (Wb_RegRd != 0) and (Wb_RegRd == Ex_RegRs1) and
        not (Mem_regWrite and (Mem_RegRd != 0) and (Mem_RegRd == Ex_RegRs1)))
        forwardA = 2'd01;
    
    if (Wb_regWrite and (Wb_RegRd != 0) and (Wb_RegRd == Ex_RegRs2) and
        not (Mem_regWrite and (Mem_RegRd != 0) and (Mem_RegRd == Ex_RegRs2)))
        forwardB = 2'd01;

end