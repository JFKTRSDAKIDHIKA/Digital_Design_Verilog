module encode (
	input [7:0] x,
	output reg [2:0] y
);
	
	
  	integer i;
  	always @(x) begin
	  y = 0;
      	  for( i = 0; i <= 7; i = i+1)
            if(x[i] == 1)  y = i[2:0];
   	end
endmodule
	
