module top(
    // SW0和SW1作为控制端Y，SW2—SW9作为四个两位数据输入端X0–X3。
    input [7:0] sw,
    // 将两位的输出端F接到发光二极管LEDR0和LEDR1上显示输出
    output [15:0] ledr,
);

mux my_mux(
    .X0(sw[3:2]),
    .X1(sw[5:4]),
    .X2(sw[6:5]),
    .X3(sw[7:6]),
    .Y(sw[1:0]),
    .F(ledr[1:0])
);

endmodule
