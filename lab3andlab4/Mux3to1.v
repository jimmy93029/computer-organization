module Mux3to1 #(
    parameter size = 32
) 
(
    input [1:0] sel,
    input signed [size-1:0] s0,
    input signed [size-1:0] s1,
    input signed [size-1:0] s2,
    output signed [size-1:0] out
);


always @* begin
    if (sel == 2'd00)
        out = s0;
    else if (sel == 2'd01)
        out = s1;
    else
        out = s2;
end
    

endmodule

