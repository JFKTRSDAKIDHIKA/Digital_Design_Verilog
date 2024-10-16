module top (
	input [7:0] sw,
	output [7:0] seg0,
	output [3:0] ledr
);
	wire [2:0] y;

	encode my_encode (sw, y);

	wire input_with_indicator;
	assign input_with_indicator = | sw;

	led my_led (input_with_indicator, y, ledr);

	wire [3:0] y_with_enable;
	assign y_with_enable = {1'b1, y};



	bcd7seg myseg (y_with_enable, seg0);
endmodule
