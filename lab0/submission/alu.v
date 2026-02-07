module signed_add #(
    parameter DATA_WIDTH = 32
)(
    input signed [DATA_WIDTH-1:0] i_data_a,
    input signed [DATA_WIDTH-1:0] i_data_b,
    output       [DATA_WIDTH-1:0] out,
    output                        overflow
);

    assign out = i_data_a + i_data_b;
    assign overflow = 
                (i_data_a[DATA_WIDTH-1] & i_data_b[DATA_WIDTH-1] & ~out[DATA_WIDTH-1]) 
              | (~i_data_a[DATA_WIDTH-1] & ~i_data_b[DATA_WIDTH-1] & out[DATA_WIDTH-1]);

endmodule

module signed_sub #(
    parameter DATA_WIDTH = 32
)(
    input signed [DATA_WIDTH-1:0] i_data_a,
    input signed [DATA_WIDTH-1:0] i_data_b,
    output       [DATA_WIDTH-1:0] out,
    output                        overflow
);

    assign out = i_data_a - i_data_b;
    assign overflow = 
            (~i_data_a[DATA_WIDTH-1] & i_data_b[DATA_WIDTH-1] & out[DATA_WIDTH-1])
        |   (i_data_a[DATA_WIDTH-1] & ~i_data_b[DATA_WIDTH-1] & ~out[DATA_WIDTH-1]);

endmodule

module signed_mult #(
    parameter DATA_WIDTH = 32
)(
    input signed [DATA_WIDTH-1:0] i_data_a,
    input signed [DATA_WIDTH-1:0] i_data_b,
    output       [DATA_WIDTH-1:0] out,
    output                        overflow
);

    wire signed [2*DATA_WIDTH-1:0] tmp;
    wire        [DATA_WIDTH-1:0]   upper;

    assign tmp          = i_data_a * i_data_b;
    assign upper        = tmp[2*DATA_WIDTH-1:DATA_WIDTH];
    assign out          = tmp[DATA_WIDTH-1:0];
    assign overflow     = (upper != {DATA_WIDTH{out[DATA_WIDTH-1]}});

endmodule

module signed_min #(
    parameter DATA_WIDTH = 32
)(
    input signed [DATA_WIDTH-1:0] i_data_a,
    input signed [DATA_WIDTH-1:0] i_data_b,
    output       [DATA_WIDTH-1:0] out
);

    assign out = (i_data_a < i_data_b) ? i_data_a : i_data_b;

endmodule

module signed_max #(
    parameter DATA_WIDTH = 32
)(
    input signed [DATA_WIDTH-1:0] i_data_a,
    input signed [DATA_WIDTH-1:0] i_data_b,
    output       [DATA_WIDTH-1:0] out
);

    assign out = (i_data_a < i_data_b) ? i_data_b : i_data_a;

endmodule

module unsigned_add #(
    parameter DATA_WIDTH = 32
)(
    input unsigned [DATA_WIDTH-1:0] i_data_a,
    input unsigned [DATA_WIDTH-1:0] i_data_b,
    output         [DATA_WIDTH-1:0] out,
    output                          overflow
);

    wire unsigned [DATA_WIDTH:0] tmp;

    assign tmp          = i_data_a + i_data_b;
    assign out          = tmp[DATA_WIDTH-1:0];
    assign overflow     = tmp[DATA_WIDTH];

endmodule

module unsigned_sub #(
    parameter DATA_WIDTH = 32
)(
    input unsigned [DATA_WIDTH-1:0] i_data_a,
    input unsigned [DATA_WIDTH-1:0] i_data_b,
    output         [DATA_WIDTH-1:0] out,
    output                          overflow
);

    assign out          = i_data_a - i_data_b;
    assign overflow     = (i_data_a < i_data_b);

endmodule

module unsigned_mult #(
    parameter DATA_WIDTH = 32
)(
    input unsigned [DATA_WIDTH-1:0] i_data_a,
    input unsigned [DATA_WIDTH-1:0] i_data_b,
    output         [DATA_WIDTH-1:0] out,
    output                          overflow
);

    wire unsigned [2*DATA_WIDTH-1:0] tmp;
    wire          [DATA_WIDTH-1:0] upper;

    assign tmp          = i_data_a * i_data_b;
    assign out          = tmp[DATA_WIDTH-1:0];
    assign upper        = tmp[2*DATA_WIDTH-1:DATA_WIDTH];
    assign overflow     = (upper != 0);

endmodule

module unsigned_max #(
    parameter DATA_WIDTH = 32
)(
    input unsigned [DATA_WIDTH-1:0] i_data_a,
    input unsigned [DATA_WIDTH-1:0] i_data_b,
    output         [DATA_WIDTH-1:0] out
);

    assign out = (i_data_a < i_data_b) ? i_data_b : i_data_a;

endmodule

module unsigned_min #(
    parameter DATA_WIDTH = 32
)(
    input unsigned [DATA_WIDTH-1:0] i_data_a,
    input unsigned [DATA_WIDTH-1:0] i_data_b,
    output         [DATA_WIDTH-1:0] out
);

    assign out = (i_data_a < i_data_b) ? i_data_a : i_data_b;

endmodule

module bit_reverse #(
    parameter DATA_WIDTH = 32
)(
    input   [DATA_WIDTH-1:0] i_data_a,
    output  [DATA_WIDTH-1:0] out
);

    integer i;
    reg [DATA_WIDTH-1:0] raw_out;

    always @(*) begin
        for (i = 0; i < DATA_WIDTH; i = i + 1) begin
            raw_out[i] = i_data_a[DATA_WIDTH-i-1];
        end
    end

    assign out = raw_out;

endmodule

module alu #(
    parameter DATA_WIDTH = 32,
    parameter INST_WIDTH = 4
)(
    input                   i_clk,
    input                   i_rst_n,
    input  [DATA_WIDTH-1:0] i_data_a,
    input  [DATA_WIDTH-1:0] i_data_b,
    input  [INST_WIDTH-1:0] i_inst,
    input                   i_valid,
    output [DATA_WIDTH-1:0] o_data,
    output                  o_overflow,
    output                  o_valid
);

    // instructions
    wire [3:0] OP_SIGNED_ADD;
    wire [3:0] OP_SIGNED_SUB;
    wire [3:0] OP_SIGNED_MULT;
    wire [3:0] OP_SIGNED_MAX;
    wire [3:0] OP_SIGNED_MIN;
    wire [3:0] OP_UNSIGNED_ADD;
    wire [3:0] OP_UNSIGNED_SUB;
    wire [3:0] OP_UNSIGNED_MULT;
    wire [3:0] OP_UNSIGNED_MAX;
    wire [3:0] OP_UNSIGNED_MIN;
    wire [3:0] OP_AND;
    wire [3:0] OP_OR;
    wire [3:0] OP_XOR;
    wire [3:0] OP_BIT_FLIP;
    wire [3:0] OP_BIT_REVERSE;

    assign OP_SIGNED_ADD    = 4'd0;
    assign OP_SIGNED_SUB    = 4'd1;
    assign OP_SIGNED_MULT   = 4'd2;
    assign OP_SIGNED_MAX    = 4'd3;
    assign OP_SIGNED_MIN    = 4'd4;
    assign OP_UNSIGNED_ADD  = 4'd5;
    assign OP_UNSIGNED_SUB  = 4'd6;
    assign OP_UNSIGNED_MULT = 4'd7;
    assign OP_UNSIGNED_MAX  = 4'd8;
    assign OP_UNSIGNED_MIN  = 4'd9;
    assign OP_AND           = 4'd10;
    assign OP_OR            = 4'd11;
    assign OP_XOR           = 4'd12;
    assign OP_BIT_FLIP      = 4'd13;
    assign OP_BIT_REVERSE   = 4'd14;

    // module outputs
    wire [DATA_WIDTH-1:0]   signed_add_out;
    wire                    signed_add_overflow;
    wire [DATA_WIDTH-1:0]   signed_sub_out;
    wire                    signed_sub_overflow;
    wire [DATA_WIDTH-1:0]   signed_mult_out;
    wire                    signed_mult_overflow;
    wire [DATA_WIDTH-1:0]   signed_min_out;
    wire [DATA_WIDTH-1:0]   signed_max_out;
    wire [DATA_WIDTH-1:0]   unsigned_add_out;
    wire                    unsigned_add_overflow;
    wire [DATA_WIDTH-1:0]   unsigned_sub_out;
    wire                    unsigned_sub_overflow;
    wire [DATA_WIDTH-1:0]   unsigned_mult_out;
    wire                    unsigned_mult_overflow;
    wire [DATA_WIDTH-1:0]   unsigned_max_out;
    wire [DATA_WIDTH-1:0]   unsigned_min_out;
    wire [DATA_WIDTH-1:0]   bit_reverse_out;

    // modules
    signed_add #(.DATA_WIDTH(DATA_WIDTH)) signed_adder (
        .i_data_a(i_data_a),
        .i_data_b(i_data_b),
        .out(signed_add_out),
        .overflow(signed_add_overflow)
    );

    signed_sub #(.DATA_WIDTH(DATA_WIDTH)) signed_subber (
        .i_data_a(i_data_a),
        .i_data_b(i_data_b),
        .out(signed_sub_out),
        .overflow(signed_sub_overflow)
    );

    signed_mult #(.DATA_WIDTH(DATA_WIDTH)) signed_multer (
        .i_data_a(i_data_a),
        .i_data_b(i_data_b),
        .out(signed_mult_out),
        .overflow(signed_mult_overflow)
    );

    signed_min #(.DATA_WIDTH(DATA_WIDTH)) signed_minner (
        .i_data_a(i_data_a),
        .i_data_b(i_data_b),
        .out(signed_min_out)
    );

    signed_max #(.DATA_WIDTH(DATA_WIDTH)) signed_maxxer (
        .i_data_a(i_data_a),
        .i_data_b(i_data_b),
        .out(signed_max_out)
    );

    unsigned_add #(.DATA_WIDTH(DATA_WIDTH)) unsigned_adder (
        .i_data_a(i_data_a),
        .i_data_b(i_data_b),
        .out(unsigned_add_out),
        .overflow(unsigned_add_overflow)
    );

    unsigned_sub #(.DATA_WIDTH(DATA_WIDTH)) unsigned_subber (
        .i_data_a(i_data_a),
        .i_data_b(i_data_b),
        .out(unsigned_sub_out),
        .overflow(unsigned_sub_overflow)
    );

    unsigned_mult #(.DATA_WIDTH(DATA_WIDTH)) unsigned_multer (
        .i_data_a(i_data_a),
        .i_data_b(i_data_b),
        .out(unsigned_mult_out),
        .overflow(unsigned_mult_overflow)
    );

    unsigned_max #(.DATA_WIDTH(DATA_WIDTH)) unsigned_maxxer (
        .i_data_a(i_data_a),
        .i_data_b(i_data_b),
        .out(unsigned_max_out)
    );

    unsigned_min #(.DATA_WIDTH(DATA_WIDTH)) unsigned_minner (
        .i_data_a(i_data_a),
        .i_data_b(i_data_b),
        .out(unsigned_min_out)
    );

    bit_reverse #(.DATA_WIDTH(DATA_WIDTH)) bit_reverser (
        .i_data_a(i_data_a),
        .out(bit_reverse_out)
    );

    // top-level outputs
    reg [DATA_WIDTH-1:0] raw_out;
    reg                  raw_valid;
    reg                  raw_overflow;

    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            raw_out         <= '0;
            raw_valid       <= 1'b0;
            raw_overflow    <= 1'b0;
        end else begin

            raw_valid <= i_valid;
            
            if (i_valid) begin
                case (i_inst)
                    OP_SIGNED_ADD: begin
                        raw_out         <= signed_add_out;
                        raw_overflow    <= signed_add_overflow;
                    end
                    OP_SIGNED_SUB: begin
                        raw_out         <= signed_sub_out;
                        raw_overflow    <= signed_sub_overflow;
                    end
                    OP_SIGNED_MULT: begin
                        raw_out         <= signed_mult_out;
                        raw_overflow    <= signed_mult_overflow;
                    end
                    OP_SIGNED_MIN: begin
                        raw_out         <= signed_min_out;
                        raw_overflow    <= 1'b0;
                    end
                    OP_SIGNED_MAX: begin
                        raw_out         <= signed_max_out;
                        raw_overflow    <= 1'b0;
                    end
                    OP_UNSIGNED_ADD: begin
                        raw_out         <= unsigned_add_out;
                        raw_overflow    <= unsigned_add_overflow;
                    end
                    OP_UNSIGNED_SUB: begin
                        raw_out         <= unsigned_sub_out;
                        raw_overflow    <= unsigned_sub_overflow;
                    end
                    OP_UNSIGNED_MULT: begin
                        raw_out         <= unsigned_mult_out;
                        raw_overflow    <= unsigned_mult_overflow;
                    end
                    OP_UNSIGNED_MIN: begin
                        raw_out         <= unsigned_min_out;
                        raw_overflow    <= 1'b0;
                    end
                    OP_UNSIGNED_MAX: begin
                        raw_out         <= unsigned_max_out;
                        raw_overflow    <= 1'b0;
                    end
                    OP_AND: begin
                        raw_out         <= i_data_a & i_data_b;
                        raw_overflow    <= 1'b0;
                    end
                    OP_OR: begin
                        raw_out         <= i_data_a | i_data_b;
                        raw_overflow    <= 1'b0;
                    end
                    OP_XOR: begin
                        raw_out         <= i_data_a ^ i_data_b;
                        raw_overflow    <= 1'b0;
                    end
                    OP_BIT_FLIP: begin
                        raw_out         <= ~i_data_a;
                        raw_overflow    <= 1'b0;
                    end
                    OP_BIT_REVERSE: begin
                        raw_out         <= bit_reverse_out;
                        raw_overflow    <= 1'b0;
                    end
                    default: begin
                        raw_out         <= '0;
                        raw_overflow    <= 1'b0;
                    end
                endcase
            end
        end
    end

    assign o_data       = raw_out;
    assign o_overflow   = raw_overflow;
    assign o_valid      = raw_valid;
    
endmodule