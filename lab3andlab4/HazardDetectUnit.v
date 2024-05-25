module HazardDetectUnit (
    input Ex_memRead,
    input Ex_jump_or_branch,
    input [4:0] Ex_RegRd,
    input [4:0] ID_RegRs1,
    input [4:0] ID_RegRs2,
    output reg IF_ID_flush,
    output reg ID_Ex_flush,
    output reg IF_ID_freeze,
    output reg pc_freeze
);


always @* begin
    if (Ex_jump_or_branch) begin
        IF_ID_flush = 1;
        ID_Ex_flush = 1;
        IF_ID_freeze = 0;
        pc_freeze = 0;
    end
    else if (Ex_memRead && ((Ex_RegRd == ID_RegRs1) || (Ex_RegRd == ID_RegRs2))) begin
        IF_ID_flush = 0;
        ID_Ex_flush = 1;
        IF_ID_freeze = 1;
        pc_freeze = 1;
    end
    else begin
        IF_ID_flush = 0;
        ID_Ex_flush = 0;
        IF_ID_freeze = 0;
        pc_freeze = 0;
    end
end
 

endmodule
