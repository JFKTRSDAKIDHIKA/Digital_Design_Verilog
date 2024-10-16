module led (
  input indicator,
  input [2:0] x,
  output [3:0] ledr
);
	
  assign ledr = {indicator, x};

endmodule


