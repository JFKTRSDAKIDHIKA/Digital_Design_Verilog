module Adder1bit(X, Y, Cin, Cout, Sum);
	input X, Y, Cin;
	output Cout, Sum;


	assign Cout = Y & Cin | X & Cin | X & Y;
	assign Sum = X ^ Y ^ Cin;

endmodule
	
