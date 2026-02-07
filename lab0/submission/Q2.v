`timescale 1 ns/10 ps  // time-unit = 1 ns, precision = 10 ps

// dummy implementation, please replace with your own
module vector_signals ( 
    input [2:0] a,
    input [2:0] b,
    output [2:0] out_or_bitwise,
    output out_or_logical,
    output [5:0] out_not
);

    wire [2:0] not_a;
    wire [2:0] not_b;

    assign out_or_bitwise = a | b;
    assign out_or_logical = a || b;

    assign not_a = ~a;
    assign not_b = ~b;

    assign out_not[5:0] = {not_b, not_a};

endmodule