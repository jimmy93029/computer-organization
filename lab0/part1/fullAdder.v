
// FullAdder compute addition of input cin, a and b,
// then output result to s and carry bit to cout.

// TODO: implement your fullAdder design here
// For testbench verifying, do not modify input and output pin

module fullAdder(input cin, input a, input b, output reg s, output reg cout);
    // FullAdder computes the addition of input cin, a, and b,
    // then outputs the result to s and the carry bit to cout.
    
    assign s = a ^ b ^ cin;
    assign cout = (a & b) | (cin & (a ^ b));

endmodule



