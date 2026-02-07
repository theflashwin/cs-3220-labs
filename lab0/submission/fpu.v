module floating_point_addition #(
    parameter DATA_WIDTH = 32
)(
    input   [DATA_WIDTH-1:0] i_data_a,
    input   [DATA_WIDTH-1:0] i_data_b,
    output  [DATA_WIDTH-1:0] out
);

    // extract out the useful info from i_data_a
    wire sign_a = i_data_a[DATA_WIDTH-1];
    wire [7:0] exponent_a = i_data_a[DATA_WIDTH-2:DATA_WIDTH-9];
    wire [23:0] mantissa_a = {1'b1, i_data_a[DATA_WIDTH-10:0]};

    // extract out the useful info i_data_b
    wire sign_b = i_data_b[DATA_WIDTH-1];
    wire [7:0] exponent_b = i_data_b[DATA_WIDTH-2:DATA_WIDTH-9];
    wire [23:0] mantissa_b = {1'b1, i_data_b[DATA_WIDTH-10:0]};

    reg [47:0] larger_exp_extended_mantissa;
    reg [47:0] smaller_exp_extended_mantissa;
    reg [7:0] exponent;

    always @(*) begin
        if (exponent_a >= exponent_b) begin
            larger_exp_extended_mantissa = {mantissa_a, 24'b0};
            smaller_exp_extended_mantissa = {mantissa_b, 24'b0} >> (exponent_a - exponent_b);
            exponent = exponent_a;
        end else begin
            larger_exp_extended_mantissa = {mantissa_b, 24'b0};
            smaller_exp_extended_mantissa = {mantissa_a, 24'b0} >> (exponent_b - exponent_a);
            exponent = exponent_b;
        end
    end

    reg sign;
    reg [48:0] mantissa_sum;

    always @(*) begin
        if (sign_a == sign_b) begin
            sign = sign_a;
            mantissa_sum = {1'b0, larger_exp_extended_mantissa} + {1'b0, smaller_exp_extended_mantissa};
        end else begin

            if (exponent_a > exponent_b) begin
                sign = sign_a;
            end else if (exponent_a < exponent_b) begin
                sign = sign_b;
            end else begin
                sign = (larger_exp_extended_mantissa >= smaller_exp_extended_mantissa) ? sign_a : sign_b;
            end

            if (larger_exp_extended_mantissa >= smaller_exp_extended_mantissa) begin
                mantissa_sum = {1'b0, larger_exp_extended_mantissa} - {1'b0, smaller_exp_extended_mantissa};
            end else begin
                mantissa_sum = {1'b0, smaller_exp_extended_mantissa} - {1'b0, larger_exp_extended_mantissa};
            end

        end

    end

    reg [23:0] pos_of_first_one;
    integer i;

    always @(*) begin
        pos_of_first_one = 24'd0;
        for (i = 0; i <= 48; i = i + 1) begin
            if (mantissa_sum[i]) begin
                pos_of_first_one = i[23:0];
            end
        end
    end

    reg [48:0]  normalized_mantissa;
    reg [7:0]   normalized_exp;

    always @(*) begin
        if (mantissa_sum == 49'b0) begin
            normalized_mantissa = 49'b0;
            normalized_exp      = 8'b0; 
        end else if (mantissa_sum[48]) begin
            normalized_mantissa = mantissa_sum >> 2;
            normalized_exp = exponent + 1;
        end else if (mantissa_sum[47]) begin
            normalized_mantissa = mantissa_sum >> 1;
            normalized_exp = exponent;
        end else begin
            normalized_mantissa = mantissa_sum << (46 - pos_of_first_one);
            normalized_exp = exponent - (8'd47 - pos_of_first_one);
        end
    end

    wire [22:0] unrounded_mantissa;
    wire        first_bit;
    wire        second_bit;
    wire        right_bit;

    assign unrounded_mantissa   = normalized_mantissa[45:23];
    assign first_bit            = normalized_mantissa[22];
    assign second_bit           = normalized_mantissa[21];
    assign right_bit            = |normalized_mantissa[20:0];

    reg        should_round_up;
    reg [22:0]  rounded_mantissa;
    reg [7:0]   rounded_exponent;

    always @(*) begin
        should_round_up = first_bit && (second_bit || right_bit || (!second_bit && !right_bit && unrounded_mantissa[0]));
        if (should_round_up) begin
            if (unrounded_mantissa == 23'h7FFFFF) begin
                rounded_mantissa = 23'b0;
                rounded_exponent = normalized_exp + 1;
            end else begin
                rounded_mantissa = unrounded_mantissa + 1;
                rounded_exponent = normalized_exp;
            end
        end else begin
            rounded_mantissa = unrounded_mantissa;
            rounded_exponent = normalized_exp;
        end
    end

    assign out = (mantissa_sum == 0) ? {sign, 31'b0} : {sign, rounded_exponent, rounded_mantissa};

endmodule

module floating_point_multiplication #(
    parameter DATA_WIDTH = 32
)(
    input   [DATA_WIDTH-1:0] i_data_a,
    input   [DATA_WIDTH-1:0] i_data_b,
    output  [DATA_WIDTH-1:0] out
);

    // extract out the useful info from i_data_a
    wire        sign_a      = i_data_a[DATA_WIDTH-1];
    wire [7:0]  exponent_a  = i_data_a[DATA_WIDTH-2:DATA_WIDTH-9];
    wire [23:0] mantissa_a  = {1'b1, i_data_a[DATA_WIDTH-10:0]};

    // extract out the useful info i_data_b
    wire        sign_b      = i_data_b[DATA_WIDTH-1];
    wire [7:0]  exponent_b  = i_data_b[DATA_WIDTH-2:DATA_WIDTH-9];
    wire [23:0] mantissa_b  = {1'b1, i_data_b[DATA_WIDTH-10:0]};

    wire        sign;
    wire [8:0]  raw_exponent;
    wire [47:0] raw_product;

    assign sign = sign_a ^ sign_b;
    assign raw_exponent = {1'b0, exponent_a} + {1'b0, exponent_b} - 9'd127;
    assign raw_product = mantissa_a * mantissa_b;

    // normalize
    reg [7:0]  normalized_exponent;
    reg [47:0] normalized_product;

    always @(*) begin
        if (raw_product[47]) begin
            normalized_product  = raw_product >> 1;
            normalized_exponent = raw_exponent[7:0] + 1;
        end else begin
            normalized_product  = raw_product;
            normalized_exponent = raw_exponent[7:0];
        end
    end

    wire [22:0] unrounded_mantissa;
    wire        first_bit;
    wire        second_bit;
    wire        right_bit;

    assign unrounded_mantissa = normalized_product[45:23];
    assign first_bit          = normalized_product[22];
    assign second_bit         = normalized_product[21];
    assign right_bit          = |normalized_product[20:0];

    reg         should_round_up;
    reg [22:0]  rounded_mantissa;
    reg [7:0]   rounded_exponent;

    always @(*) begin

        should_round_up = first_bit && (second_bit || right_bit || (!second_bit && !right_bit && unrounded_mantissa[0]));
        if (should_round_up) begin
            if (unrounded_mantissa == 23'h7FFFFF) begin
                rounded_mantissa = 23'b0;
                rounded_exponent = normalized_exponent + 1;
            end else begin
                rounded_mantissa = unrounded_mantissa + 1;
                rounded_exponent = normalized_exponent;
            end
        end else begin
            rounded_mantissa = unrounded_mantissa;
            rounded_exponent = normalized_exponent;
        end

    end

    assign out = {sign, rounded_exponent, rounded_mantissa};

endmodule

module fpu #(
    parameter DATA_WIDTH = 32,
    parameter INST_WIDTH = 1
)(
    input                   i_clk,
    input                   i_rst_n,
    input  [DATA_WIDTH-1:0] i_data_a,
    input  [DATA_WIDTH-1:0] i_data_b,
    input  [INST_WIDTH-1:0] i_inst,
    input                   i_valid,
    output [DATA_WIDTH-1:0] o_data,
    output                  o_valid
);

    // instructions
    wire [3:0] OP_ADD;
    wire [3:0] OP_MULT;

    assign OP_ADD   = 1'd0;
    assign OP_MULT  = 1'd1;

    wire [DATA_WIDTH-1:0] adder_out;
    wire [DATA_WIDTH-1:0] mult_out;

    floating_point_addition #(.DATA_WIDTH(DATA_WIDTH)) adder (
        .i_data_a(i_data_a),
        .i_data_b(i_data_b),
        .out(adder_out)
    );

    floating_point_multiplication #(.DATA_WIDTH(DATA_WIDTH)) multer (
        .i_data_a(i_data_a),
        .i_data_b(i_data_b),
        .out(mult_out)
    );

    reg [DATA_WIDTH-1:0] o_data_raw;
    reg                  o_valid_raw;

    always @(posedge i_clk or negedge i_rst_n) begin

        if (!i_rst_n) begin
            o_data_raw      <= {DATA_WIDTH{1'b0}};
            o_valid_raw     <= 1'b0;
        end else begin 

            o_valid_raw <= i_valid;

            if (i_valid) begin
                case (i_inst)
                    OP_ADD: begin
                        o_data_raw <= adder_out;
                    end
                    OP_MULT: begin
                        o_data_raw <= mult_out;
                    end
                    default: begin
                        o_data_raw <= {DATA_WIDTH{1'b0}};
                    end
                endcase
            end
        end
    end

    assign o_data   = o_data_raw;
    assign o_valid  = o_valid_raw;

endmodule