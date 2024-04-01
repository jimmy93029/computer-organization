module BranchComp (
    input [3:0] Branchctl,
    input signed [31:0] A,B,
    output reg signed [31:0] CompOut,
    output zero
);