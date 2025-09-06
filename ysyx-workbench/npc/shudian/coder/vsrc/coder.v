module coder(
	input [7:0]in,
	input [0:0]en,
  output reg [6:0] h,
	output reg [0:0]seal,
	output reg [6:0]h1,
	output reg [6:0]h0,
	output reg [6:0]h2,
	output reg [6:0]h3,
	output reg [2:0]out);

	integer i;
	reg [3:0]temp;
	always @(*)begin
		if(en)begin
			out = 3'b0;
			seal = 1'b0;
			temp = 4'b0000;
			for(i = 0;i<=7;i++)
				if(in[i] == 1)begin
					out = i[2:0];
					seal = 1'b1;
					temp = i[3:0];
			end
		end
		else begin
			out = 3'b0;
			seal = 1'b0;
			temp = 4'b0000;
			end
	end
	bcd7seg seg4(temp,h);
	bcd7seg seg0({3'b000,out[0]},h0);
	bcd7seg seg1({3'b000,out[1]},h1);
	bcd7seg seg2({3'b000,out[2]},h2);
	bcd7seg seg3({3'b000,seal},h3);
endmodule	
module bcd7seg(
  input  [3:0] b,
  output reg [6:0] h
);
always @(*) begin
    case(b)
        4'b0000: h = 7'b1000000;  // 0
        4'b0001: h = 7'b1111001;  // 1
        4'b0010: h = 7'b0100100;  // 2
        4'b0011: h = 7'b0110000;  // 3
        4'b0100: h = 7'b0011001;  // 4
        4'b0101: h = 7'b0010010;  // 5
        4'b0110: h = 7'b0000010;  // 6
        4'b0111: h = 7'b1111000;  // 7
        4'b1000: h = 7'b0000000;  // 8
        4'b1001: h = 7'b0010000;  // 9
        4'b1010: h = 7'b0001000;  // A
        4'b1011: h = 7'b0000011;  // b
        4'b1100: h = 7'b1000110;  // C
        4'b1101: h = 7'b0100001;  // d
        4'b1110: h = 7'b0000110;  // E
        4'b1111: h = 7'b0001110;  // F
        default: h = 7'b1111111;  // Default (turn off all segments)
    endcase
end
endmodule
