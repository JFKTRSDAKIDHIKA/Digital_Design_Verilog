module Adder8bits (A, B, Cout, S);
	input [7:0] A, B;
	wire [8:0] C;
	output [7:0] S;
	output Cout;

	assign C[0] = 1'b0;
/*
	Adder1bit add0(.X(A[0]), .Y(B[0]), .Cin(C[0]), .Cout(C[1]), .Sum(S[0]));
	
	Adder1bit add1(.X(A[1]), .Y(B[1]), .Cin(C[1]), .Cout(C[2]), .Sum(S[1]));

	Adder1bit add2(.X(A[2]), .Y(B[2]), .Cin(C[2]), .Cout(C[3]), .Sum(S[2]));
	
	Adder1bit add3(.X(A[3]), .Y(B[3]), .Cin(C[3]), .Cout(C[4]), .Sum(S[3]));
*/	
	genvar i;
	generate
		for(i = 0; i < 8; i = i + 1) begin : adders
			Adder1bit u (.X(A[i]), .Y(B[i]), .Cin(C[i]), .Cout(C[i + 1]), .Sum(S[i]));
		end 
	endgenerate


	assign Cout = C[8];


endmodule
