`timescale 1 ns/10 ps  // time-unit = 1 ns, precision = 10 ps

// dummy implementation, please replace with your own
module fsm ( 
        input clk,    // Clocks are used in sequential circuits
        input reset,
        input seq,
        output detected 
    );// seq detector 1101, once detected, output 1 for 1 clock cycle

    // states
    wire [3:0] S0;
    wire [3:0] S1;
    wire [3:0] S2;
    wire [3:0] S3;
    wire [3:0] S4;

    assign S0 = 3'b000;
    assign S1 = 3'b001;
    assign S2 = 3'b010;
    assign S3 = 3'b011;
    assign S4 = 3'b100;

    reg [2:0] state;
    reg [2:0] next_state;

    always @(posedge clk) begin
        if (reset) begin
            state <= S0;
        end else begin
            state <= next_state;
        end
    end

    always @(*) begin
        case (state)
            S0: next_state = seq ? S1 : S0;
            S1: next_state = seq ? S2 : S0;
            S2: next_state = seq ? S2 : S3;
            S3: next_state = seq ? S4 : S0;
            S4: next_state = seq ? S2 : S0;
        endcase
    end

    assign detected = (state == S4);
    
endmodule