module Mux3to1 #(
    parameter size = 32
) 
(
    input sel,
    input signed [size-1:0] s0,
    input signed [size-1:0] s1,
    input signed [size-1:0] s2,
    output signed [size-1:0] out
);
    // TODO: implement your 3to1 multiplexer here


always@* begin
    case (sel) begin
        2'd0:
            out = s1;
        2'd1:
            out = s2;
        2'd2:
            out = s3;
    end
end
    
    
endmodule