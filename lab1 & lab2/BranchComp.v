module BranchComp (
    input [3:0] BranchCtl,
    input signed [31:0] A,B,
    output reg BranchOut
);


always @(*) begin
    case (BranchCtl)
        4'b0111: 
            BranchOut = A < B ? 1'b1 : 1'b0; 
        4'b1011:
            BranchOut = !(A < B) ? 1'b1 : 1'b0;
        4'b1100: 
            BranchOut = A == B ? 1'b1 : 1'b0;  
        4'b1101: 
            BranchOut = !(A == B) ? 1'b1 : 1'b0; 
        default: 
            BranchOut = 1'b0;       
    endcase
end