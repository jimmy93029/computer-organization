module Mux2to1 #(
    parameter size = 32
) 
(
    input sel,
    input signed [size-1:0] s0,
    input signed [size-1:0] s1,
    output signed [size-1:0] out
);
    // TODO: implement your 2to1 multiplexer here

    always @(*) begin  
        case (sel)
            0: out <= s0;
            1: out <= s1;
        endcase
    end;
    
endmodule

