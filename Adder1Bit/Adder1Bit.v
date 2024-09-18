module Adder1Bit(X, Y, Cin, Cout, Sum);
	input X, Y, Cin;
	output Cout, Sum;


	assign Cout = Y & Cin | X & Cin | X & Y;
	assign Sum = X ^ Y ^ Cin;
	/* 对于三个信号 xor就是当且仅当这三个信号中有奇数个1时，输出为1；
如果有偶数个1，则输出为0。  */
endmodule
	
