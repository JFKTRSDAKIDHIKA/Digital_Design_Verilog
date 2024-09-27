module bcd7seg(
  input  [3:0] b,
  output reg [7:0] h
);
  always @(*) begin
    if (b[3] == 1'b0) begin 
	    h = 8'b11111111;
    end else begin
	    case (b[2:0])
	        3'b000: h = 8'b00000011; // 0
                3'b001: h = 8'b10011111; // 1
                3'b010: h = 8'b00100101; // 2
                3'b011: h = 8'b00001101; // 3
                3'b100: h = 8'b10011001; // 4
                3'b101: h = 8'b01001001; // 5
                3'b110: h = 8'b01000001; // 6
                3'b111: h = 8'b00011111; // 7
		default: h = 8'b11111111;
	    endcase
    end 
  end

endmodule
