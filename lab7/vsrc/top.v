module top(
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output [7:0] seg0,
    output [7:0] seg1,
    output [7:0] seg2,
    output [7:0] seg3,
    output [7:0] seg4,
    output [7:0] seg5
);

wire [7:0] data_read;
wire [7:0] ascii;
wire ready;
wire [7:0 ]int_seg0;
wire [7:0 ]int_seg1;
wire [7:0 ]int_seg2;
wire [7:0 ]int_seg3;
wire [7:0 ]key_count;

ps2_keyboard my_keyboard(
    .clk(clk),
    .clrn(~rst),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data),
    .nextdata_n(1'b0),
    .data(data_read),
    .ready(ready),
    .overflow(),
    .key_count(key_count)
);

bcd7seg my_bcd7seg0 (data_read[3:0], int_seg0);

bcd7seg my_bcd7seg1 (data_read[7:4], int_seg1);

scan2ascii my_sca2ascii (data_read, ascii);

bcd7seg my_bcd7seg2 (ascii[3:0], int_seg2);

bcd7seg my_bcd7sege (ascii[7:4], int_seg3);

assign seg0 = (data_read == 8'b11110000) ? 8'b11111111 : int_seg0;
assign seg1 = (data_read == 8'b11110000) ? 8'b11111111 : int_seg1;
assign seg2 = (data_read == 8'b11110000) ? 8'b11111111 : int_seg2;
assign seg3 = (data_read == 8'b11110000) ? 8'b11111111 : int_seg3;


bcd7seg my_bcd7seg4 (key_count[3:0], seg4);

bcd7seg my_bcd7seg5 (key_count[7:4], seg5);


endmodule
