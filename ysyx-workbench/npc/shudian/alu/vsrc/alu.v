module alu(
	input [3:0]a,
	input [3:0]b,
	input [2:0]seal,
	output reg [0:0]carry,
	output reg [0:0]overflow,
	output reg [3:0]out);

always @(*)begin
	carry = 1'b0;
	overflow = 1'b0;
	case(seal)
	  3'b000: begin 
			{carry, out} = a + b;
			overflow = ((a[3] == b[3]) && (out[3] != a[3]))? 1'b1:1'b0;
			end
    3'b001: begin
			{carry, out} = a - b;
			if(out[3])
				out = {out[3],~out[2:0]} + 1;
			if ((a[3] != b[3]) && (out[3] != a[3]))
			overflow = 1;
			end
		3'b010: out = ~a;
		3'b011: out = a & b;
		3'b100: out = a | b;
		3'b101: out = a ^ b;
		3'b110: out = (a < b)? 4'b0001:4'b0000;
		3'b111: out = (a == b)? 4'b0001:4'b0000;
		default: begin
						out = 4'b0000;
						carry = 1'b0;
						overflow = 1'b0;
						end
		endcase
	end
endmodule
