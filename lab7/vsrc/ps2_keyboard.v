module ps2_keyboard(
    input clk,
    input clrn,
    input ps2_clk,
    input ps2_data,
    input nextdata_n,
    output [7:0] data,
    output reg ready,
    output reg overflow,
    output [7:0] key_count  // 输出按键计数
);
    // internal signal
    reg [9:0] buffer;
    reg [7:0] fifo[7:0];
    reg [2:0] w_ptr, r_ptr;
    reg [3:0] count;
    reg [7:0] key_count_reg;  // 按键计数器
    reg [2:0] ps2_clk_sync;

    // 同步 ps2_clk
    always @(posedge clk) begin
        ps2_clk_sync <= {ps2_clk_sync[1:0], ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    // 主逻辑：检测按键并计数
    always @(posedge clk or negedge clrn) begin
        if (!clrn) begin
            count <= 0; w_ptr <= 0; r_ptr <= 0; overflow <= 0; ready <= 0;
            key_count_reg <= 8'd0;  // 复位按键计数器
        end else begin
            if (ready) begin
                if (nextdata_n == 1'b0) begin
                    r_ptr <= r_ptr + 3'b1;
                    if (w_ptr == (r_ptr + 1'b1))
                        ready <= 1'b0;
                end
            end

            if (sampling) begin
                if (count == 4'd10) begin
                    if ((buffer[0] == 0) && ps2_data && (^buffer[9:1])) begin
                        fifo[w_ptr] <= buffer[8:1];
                        w_ptr <= w_ptr + 3'b1;
                        ready <= 1'b1;
                        overflow <= overflow | (r_ptr == (w_ptr + 3'b1));
                        // 检测到按键按下时增加计数
                        if (buffer[8:1] != 8'b11110000) begin  // 非F0松开码
                            key_count_reg <= key_count_reg + 1;
                        end
                    end
                    count <= 0;
                end else begin
                    buffer[count] <= ps2_data;
                    count <= count + 3'b1;
                end
            end
        end
    end

    // 将 key_count 作为输出
    assign key_count = key_count_reg;
    assign data = fifo[r_ptr];  // 输出数据

endmodule

