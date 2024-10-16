module top(
    input [4:0] btn,
    output wire [7:0] seg0,
    output wire [7:0] seg1
);

wire [7:0] binary_in;
LFSR my_LFSR (btn[2], binary_in);
bin2seg7 my_bin2seg7 (binary_in, seg0, seg1);
endmodule
