module bcd7seg(
  input  [3:0] b,
  output reg [7:0] h
);
  always @(*) begin
    case (b)
      4'h0: h = 8'b00000011; // 0
      4'h1: h = 8'b10011111; // 1
      4'h2: h = 8'b00100101; // 2
      4'h3: h = 8'b00001101; // 3
      4'h4: h = 8'b10011001; // 4
      4'h5: h = 8'b01001001; // 5
      4'h6: h = 8'b01000001; // 6
      4'h7: h = 8'b00011111; // 7
      4'h8: h = 8'b00000001; // 8
      4'h9: h = 8'b00001001; // 9
      4'hA: h = 8'b00010001; // A
      4'hB: h = 8'b11000001; // B
      4'hC: h = 8'b01100011; // C
      4'hD: h = 8'b10000101; // D
      4'hE: h = 8'b01100001; // E
      4'hF: h = 8'b01110001; // F
      default: h = 8'b11111111; // all segments off, including dot
    endcase
  end
endmodule

