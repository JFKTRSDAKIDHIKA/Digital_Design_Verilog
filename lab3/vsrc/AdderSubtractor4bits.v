module AdderSubtractor4bits (A, B, AddSub, CarryOut, Sum, Overflow);
    input [3:0] A, B;               // A 和 B 是 4 位输入
    wire [3:0] B_XOR_AddSub;        // B的每个位与AddSub进行异或得到
    input AddSub;                   // 加法/减法控制信号 (1 for subtraction, 0 for addition)
    wire [4:0] Carry;               // 存储每一位的进位
    output [3:0] Sum;               // 结果输出
    output CarryOut;                // 最后的进位输出
    output Overflow;                // 溢出标志

    assign Carry[0] = AddSub;        // 初始进位设置为AddSub的值，控制加法或减法

    genvar i;
    generate
        for(i = 0; i < 4; i = i + 1) begin : adder_stage
            assign B_XOR_AddSub[i] = B[i] ^ AddSub;  // B的每一位和AddSub进行异或，得到B_XOR_AddSub
            Adder1bit u (.X(A[i]), .Y(B_XOR_AddSub[i]), .Cin(Carry[i]), .Cout(Carry[i + 1]), .Sum(Sum[i]));
        end
    endgenerate

    assign CarryOut = Carry[4];          // 最后的进位
    assign Overflow = Carry[4] ^ Carry[3];  // 判断溢出
endmodule

