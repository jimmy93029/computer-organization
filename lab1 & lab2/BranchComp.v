module BranchComp (
    input [3:0] BranchCtl,
    input signed [31:0] A,B,
    output reg signed [31:0] BranchOut,
);


always @(*) begin
    case (BranchCtl)
        4'b0111: 
            BranchOut = A < B; 
        4'b1011:
            BranchOut = !(A < B);
        4'b1100: 
            BranchOut = A == B;  
        4'b1101: 
            BranchOut = A != B; 
        default: 
            BranchOut = 32'd0;       
    endcase
end