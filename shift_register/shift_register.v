module shift_register(
    input wire clk,
    input wire [2:0] mode,
    input wire [7:0] D,
    input wire serial_in,
    output reg [7:0] Q
);


always @(posedge clk) begin
	case (mode)
	    3'b000: Q <= 8'b0;
            3'b001: Q <= D; 
	    3'b010: Q <= {1'b0, Q[7:1]};
	    3'b011: Q <= {Q[6:0], 1'b0};
	    3'b100: Q <= {Q[7], Q[7:1]};
            3'b101: Q <= {serial_in, Q[7:1]};
	    3'b110: Q <= {Q[0], Q[7:1]}; 
	    3'b111: Q <= {Q[6:0], Q[7]}; 
	 endcase
end 

endmodule
