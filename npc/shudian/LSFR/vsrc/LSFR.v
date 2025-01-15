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

module LSFR(
    input clk,
		//input [7:0]init,
    input reset,    
		input seal,
    output reg [7:0] q,
		output reg [6:0]h1,
		output reg [6:0]h0,
		output reg [6:0]h2,
		output reg [6:0]h3,
		output reg [6:0]h4,
		output reg [6:0]h5,
		output reg [6:0]h6,
		output reg [6:0]h7
); 
		reg feedback;

    always @(posedge clk)begin
				if(reset)
					q <= 0;
        else if(reset ==0 && seal == 1)begin
					feedback = ~(q[7] ^ q[5] ^ q[4] ^ q[3]);
					q[7] <= feedback;
					q[6:0] <= q[7:1];
				end	
    end
		bcd7seg seg0({3'b000,q[0]},h0);
		bcd7seg seg1({3'b000,q[1]},h1);
		bcd7seg seg2({3'b000,q[2]},h2);
		bcd7seg seg3({3'b000,q[3]},h3);
		bcd7seg seg4({3'b000,q[4]},h4);
		bcd7seg seg5({3'b000,q[5]},h5);
		bcd7seg seg6({3'b000,q[6]},h6);
		bcd7seg seg7({3'b000,q[7]},h7);
endmodule

