module ALU32bits(A, B, Output, FSel);
	input [31:0] A;
	input [31:0] B;
	input [2:0] FSel;
	output [31:0] Output;

	wire ALUSel;
	
	// Internal wires for the inverted inputs
	wire not_num0, not_num1, not_num2, not_num3;

	// NOT gates to invert the input bits
	not (not_num0, FSel[0]);
	not (not_num1, FSel[1]);
	not (not_num2, FSel[2]);

	// AND gate to check if all bits are zero (after inversion)
	and (not_num3, not_num0, not_num1, not_num2);	
	not (ALUSel, not_num3);
        	
	wire [31:0] ADSResult;
	
	wire overflow;
	/* verilator lint_off UNUSEDSIGNAL */
	wire Cout;
	/* verilator lint_on UNUSEDSIGNAL */
	AdderAndSuber32bits ADSUnit (.A(A), .B(B), .Cin(ALUSel), .Cout(Cout), .S(ADSResult), .overflow(overflow));

	wire [31:0]  a , b, c, d, e, f, g;
	assign a = ADSResult; // 加法
	assign b = ADSResult; // 减法
	assign c = ~A; // Invert
	assign d = A & B; // and
        assign e = A | B; // or
	assign f = A ^ B; // exclusive or
	assign g = ({31'b0, overflow} ^ {31'b0, ADSResult[31]});
	
	reg [31:0] h;  // 使用 reg 类型来存储输出

	always @(*) begin
    		if (ADSResult == 32'b0) begin
        		h = 32'b1;  // 当 ADSResult 为零时，h 设为 1
    		end else begin
        		h = 32'b0;  // 否则，h 设为 0
    		end
	end
	
	mux8to1 mux(.sel(FSel), .a(a), .b(b), .c(c), .d(d), .e(e), .f(f), .g(g), .h(h), .y(Output));

endmodule

