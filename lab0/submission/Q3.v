`timescale 1 ns/10 ps  // time-unit = 1 ns, precision = 10 ps

// dummy implementation, please replace with your own

module module_hierarchy ( 
    input [31:0] a,
    input [31:0] b,
    output [31:0] sum
);

    wire zero;
    wire dump;

    wire [15:0] adder_1_sum;
    wire adder_1_cout;

    wire [15:0] adder_2_sum;

    add16 adder_1 (
        .a(a[15:0]),
        .b(b[15:0]),
        .cin(zero),
        .sum(adder_1_sum),
        .cout(adder_1_cout)
    );

    add16 adder_2 (
        .a(a[31:16]),
        .b(b[31:16]),
        .cin(adder_1_cout),
        .sum(adder_2_sum),
        .cout(dump)
    );

    assign sum = {adder_2_sum, adder_1_sum};

endmodule

module add1 ( input a, input b, input cin,   output sum, output cout );

    assign sum = a ^ b ^ cin;
    assign cout = (a & b) | (a & cin) | (b & cin);

endmodule