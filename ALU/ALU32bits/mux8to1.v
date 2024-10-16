module mux8to1 (
     // Input signal 默认是wire类型的
    input [2:0] sel,  // 3 位的选择信号
    input [31:0] a,          // 输入信号 a
    input [31:0] b,          // 输入信号 b
    input [31:0] c,          // 输入信号 c
    input [31:0] d,          // 输入信号 d
    input [31:0] e,          // 输入信号 a
    input [31:0] f,          // 输入信号 b
    input [31:0] g,          // 输入信号 c
    input [31:0] h,          // 输入信号 d
    output reg [31:0] y          // 输出信号 y
);
    always @(*) begin
        case (sel)
            3'b000: y = a;  // sel = 00 时，选择 a
            3'b001: y = b;  // sel = 01 时，选择 b
            3'b010: y = c;  // sel = 10 时，选择 c
            3'b011: y = d;  // sel = 11 时，选择 d
            3'b100: y = e;  // sel = 00 时，选择 a
            3'b101: y = f;  // sel = 01 时，选择 b
            3'b110: y = g;  // sel = 10 时，选择 c
            3'b111: y = h;  // sel = 11 时，选择 d
            default: y = a; // 默认情况下选择 a
        endcase
    end
endmodule

