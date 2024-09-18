// 4-input (4:1) MUX
// Module level: As a combination of 2-input (2:1) MUXes

module mux41 (D0, D1, D2, D3, S, Y);
	input D0, D1, D2, D3;
	input [1:0] S;
	output Y;
	wire W1, W2;


m_mux21 mux0_21 (.a(D0), .b(D1), .s(S[0]), .y(W1));	
m_mux21 mux1_21 (.a(D2), .b(D3), .s(S[0]), .y(W2));	
m_mux21 mux2_21 (.a(W1), .b(W2), .s(S[1]), .y(Y));	

endmodule
