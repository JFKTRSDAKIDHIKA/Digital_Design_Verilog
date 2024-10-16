module barrel_shifter_8bit(
    input wire [7:0] din,
    input wire [2:0] shamt,
    input wire L_R,
    input wire A_L,
    output reg [7:0] dout
);

    reg [7:0] stage1, stage2, stage3;
    wire fill_bit;

    assign fill_bit = A_L ? din[7] : 1'b0;

    always @(*) begin
        case (L_R)
	    1'b1: stage1 = shamt[0] ? {din[6:0], 1'b0} : din;  // 左移
            1'b0: stage1 = shamt[0] ? {fill_bit, din[7:1]} : din;  // 右移
        endcase
    end

    always @(*) begin
        case (L_R)
            1'b1: stage2 = shamt[1] ? {stage1[5:0], 2'b00} : stage1;  // 左移
            1'b0: stage2 = shamt[1] ? {fill_bit, fill_bit, stage1[7:2]} : stage1;  // 右移
        endcase
    end

    always @(*) begin
        case (L_R)
            1'b1: stage3 = shamt[2] ? {stage2[3:0], 4'b0000} : stage2;  // 左移
            1'b0: stage3 = shamt[2] ? {fill_bit, fill_bit, fill_bit, fill_bit, stage2[7:4]} : stage2;  // 右移
        endcase
    end

    always @(*) begin
        dout = stage3;
    end

endmodule
