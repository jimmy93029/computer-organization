module ForwardUnit(
    input Mem_regWrite,
    input Wb_regWrite,
    input [5:0] Mem_RegRd,
    input [5:0] Wb_RegRd,
    input [5:0] Ex_RegRs,
    input [5:0] Ex_RegRt,
    output [1:0] forwardA,
    output [1:0] forwardB
)


always @* begin
    // EX hazard
    if (Mem_regWrite and (Mem_RegRd != 0) and (Mem_RegRd == Ex_RegRs))
        forwardA = 2'd10;
    
    if (Mem_regWrite and (Mem_RegRd != 0) and (Mem_RegRd == Ex_RegRt))
        forwardB = 2'd10;

    // Mem_hazard
    if (Wb_regWrite and (Wb_RegRd != 0) and (Wb_RegRd == Ex_RegRs) and
        not (Mem_regWrite and (Mem_RegRd != 0) and (Mem_RegRd == Ex_RegRs)))
        forwardA = 2'd01;
    
    if (Wb_regWrite and (Wb_RegRd != 0) and (Wb_RegRd == Ex_RegRt) and
        not (Mem_regWrite and (Mem_RegRd != 0) and (Mem_RegRd == Ex_RegRt)))
        forwardB = 2'd01;

end