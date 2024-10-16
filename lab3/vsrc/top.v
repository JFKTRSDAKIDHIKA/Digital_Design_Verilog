module top (sw, ledr);
    // [0:3]和[4:7]是两个二进制输入数字。[8:10]是功能。
    input [15:0] sw;
    output [15:0] ledr;
    // Add operation
    wire [3:0] result_add;
    wire CarryOut_add, Overflow_add;

    wire [3:0] result_sub;
    wire CarryOut_sub, Overflow_sub;

    wire [3:0] result_not;
    wire [3:0] result_and;
    wire [3:0] result_or;
    wire [3:0] result_xor;
    wire [3:0] result_eq;
    
    wire [3:0] result_cmp;
    wire Overflow_cmp;

    // 实例化AdderSubtractor4bits
    // 加法
    AdderSubtractor4bits my_AS4 (.A(sw[3:0]), .B(sw[7:4]), .AddSub(1'b0), .CarryOut(CarryOut_add), .Sum(result_add), .Overflow(Overflow_add));
    // 减法 
    AdderSubtractor4bits my_AS4_sub (.A(sw[3:0]), .B(sw[7:4]), .AddSub(1'b1), .CarryOut(CarryOut_sub), .Sum(result_sub), .Overflow(Overflow_sub));
    // 取反
    not my_not (result_not, sw[3:0]);  
    // 与
    and my_and (result_and, sw[3:0], sw[7:4]);
    // 或
    or my_or (result_or, sw[3:0], sw[7:4]);
    // 异或 
    xor my_xor (result_xor, sw[3:0], sw[7:4]);
    // 比较大小
    AdderSubtractor4bits my_cmp (.A(sw[3:0]), .B(sw[7:4]), .AddSub(1'b1), .CarryOut(), .Sum(result_cmp), .Overflow(Overflow_cmp)); 
    // 比较相等
    AdderSubtractor4bits my_eq (.A(sw[3:0]), .B(sw[7:4]), .AddSub(1'b1), .CarryOut(), .Sum(result_eq), .Overflow());
    



always @(*) begin
    case (sw[10:8])
      3'b000: ledr[5:0] = {Overflow_add, CarryOut_add, result_add};
      3'b001: ledr[5:0] = {Overflow_sub, CarryOut_sub, result_sub};
      3'b010: ledr[5:0] = {2'b0, result_not};
      3'b011: ledr[5:0] = {2'b0, result_and};
      3'b100: ledr[5:0] = {2'b0, result_or};
      3'b101: ledr[5:0] = {2'b0, result_xor};
      3'b110: ledr[5:0] = {5'b0, result_cmp[3] ^ Overflow_cmp};
      3'b111: ledr[0:0] = ~(|result_eq);
    endcase
end

endmodule
