module scan2ascii (
  input [7:0] scancode, // 输入扫描码
  output reg [7:0] ascii // 输出 ASCII 码
);

  // ROM 作为查找表，初始化 ASCII 码
  reg [7:0] rom [0:255];

  // 初始化 ROM
  initial begin
    // 数字 0-9 键
    rom[8'h45] = 8'h30; // 0 键
    rom[8'h16] = 8'h31; // 1 键
    rom[8'h1E] = 8'h32; // 2 键
    rom[8'h26] = 8'h33; // 3 键
    rom[8'h25] = 8'h34; // 4 键
    rom[8'h2E] = 8'h35; // 5 键
    rom[8'h36] = 8'h36; // 6 键
    rom[8'h3D] = 8'h37; // 7 键
    rom[8'h3E] = 8'h38; // 8 键
    rom[8'h46] = 8'h39; // 9 键

    // 大写字母 A-Z 键
    rom[8'h1C] = 8'h41; // A 键
    rom[8'h32] = 8'h42; // B 键
    rom[8'h21] = 8'h43; // C 键
    rom[8'h23] = 8'h44; // D 键
    rom[8'h24] = 8'h45; // E 键
    rom[8'h2B] = 8'h46; // F 键
    rom[8'h34] = 8'h47; // G 键
    rom[8'h33] = 8'h48; // H 键
    rom[8'h43] = 8'h49; // I 键
    rom[8'h3B] = 8'h4A; // J 键
    rom[8'h42] = 8'h4B; // K 键
    rom[8'h4B] = 8'h4C; // L 键
    rom[8'h3A] = 8'h4D; // M 键
    rom[8'h31] = 8'h4E; // N 键
    rom[8'h44] = 8'h4F; // O 键
    rom[8'h4D] = 8'h50; // P 键
    rom[8'h15] = 8'h51; // Q 键
    rom[8'h2D] = 8'h52; // R 键
    rom[8'h1B] = 8'h53; // S 键
    rom[8'h2C] = 8'h54; // T 键
    rom[8'h3C] = 8'h55; // U 键
    rom[8'h2A] = 8'h56; // V 键
    rom[8'h1D] = 8'h57; // W 键
    rom[8'h22] = 8'h58; // X 键
    rom[8'h35] = 8'h59; // Y 键
    rom[8'h1A] = 8'h5A; // Z 键

    // 小写字母 a-z 键 (如果直接支持小写)
    rom[8'h1C] = 8'h61; // a 键
    rom[8'h32] = 8'h62; // b 键
    rom[8'h21] = 8'h63; // c 键
    rom[8'h23] = 8'h64; // d 键
    rom[8'h24] = 8'h65; // e 键
    rom[8'h2B] = 8'h66; // f 键
    rom[8'h34] = 8'h67; // g 键
    rom[8'h33] = 8'h68; // h 键
    rom[8'h43] = 8'h69; // i 键
    rom[8'h3B] = 8'h6A; // j 键
    rom[8'h42] = 8'h6B; // k 键
    rom[8'h4B] = 8'h6C; // l 键
    rom[8'h3A] = 8'h6D; // m 键
    rom[8'h31] = 8'h6E; // n 键
    rom[8'h44] = 8'h6F; // o 键
    rom[8'h4D] = 8'h70; // p 键
    rom[8'h15] = 8'h71; // q 键
    rom[8'h2D] = 8'h72; // r 键
    rom[8'h1B] = 8'h73; // s 键
    rom[8'h2C] = 8'h74; // t 键
    rom[8'h3C] = 8'h75; // u 键
    rom[8'h2A] = 8'h76; // v 键
    rom[8'h1D] = 8'h77; // w 键
    rom[8'h22] = 8'h78; // x 键
    rom[8'h35] = 8'h79; // y 键
    rom[8'h1A] = 8'h7A; // z 键

    // 功能键和符号键
    rom[8'h0E] = 8'h60; // ` 键
    rom[8'h4E] = 8'h2D; // - 键
    rom[8'h55] = 8'h3D; // = 键
    rom[8'h5D] = 8'h5C; // \ 键
    rom[8'h54] = 8'h5B; // [ 键
    rom[8'h5B] = 8'h5D; // ] 键
    rom[8'h4C] = 8'h3B; // ; 键
    rom[8'h52] = 8'h27; // ' 键
    rom[8'h41] = 8'h2C; // , 键
    rom[8'h49] = 8'h2E; // . 键
    rom[8'h4A] = 8'h2F; // / 键
    rom[8'h5A] = 8'h0A; // Enter 键 (换行)
    rom[8'h29] = 8'h20; // 空格键
  end

  always @(*) begin
    ascii = rom[scancode];
  end

endmodule

