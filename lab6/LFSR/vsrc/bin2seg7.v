module bin2seg7(
    input wire [7:0] binary_in,         // 8位二进制输入
    output wire [7:0] my_seg0,             // 数码管0显示
    output wire [7:0] my_seg1              // 数码管1显示
);
    wire [3:0] nibble0;                 // 低4位
    wire [3:0] nibble1;                 // 高4位

    // 分别提取高4位和低4位
    assign nibble0 = binary_in[3:0];    // 低4位
    assign nibble1 = binary_in[7:4];    // 高4位

    // 实例化两个7段显示器的模块，分别显示高4位和低4位
    bcd7seg seg_decoder0 (
        .b(nibble0),   // 输入低4位二进制数
        .h(my_seg0)       // 输出对应的7段显示器码
    );

    bcd7seg seg_decoder1 (
        .b(nibble1),   // 输入高4位二进制数
        .h(my_seg1)       // 输出对应的7段显示器码
    );
endmodule
