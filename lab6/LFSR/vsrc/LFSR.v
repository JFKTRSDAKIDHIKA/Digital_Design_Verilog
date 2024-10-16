module LFSR(
    input wire clk,
    output reg [7:0] Q
);
    
    wire feedback = Q[0] ^ Q[4] ^ Q[2] ^ Q[3];

    initial begin
        Q = 8'b00000001;
    end 

always @(posedge clk) begin

	if (Q == 8'b00000000) begin
		Q <= 8'b00000001;
	end else begin
		Q <= {feedback, Q[7:1]};
	end
end 

endmodule
