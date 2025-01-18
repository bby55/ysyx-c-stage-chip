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

module rom(
    input [7:0] key_code,  // 按键扫描码
    output reg [7:0] ascii_code  // 对应的 ASCII 码
);

always @(*) begin
    case (key_code)
        // 数字键 0-9（上排）
				8'h00: ascii_code = 8'h00;
        8'h16: ascii_code = 8'h31;  // 1
        8'h1E: ascii_code = 8'h32;  // 2
        8'h26: ascii_code = 8'h33;  // 3
        8'h25: ascii_code = 8'h34;  // 4
        8'h2E: ascii_code = 8'h35;  // 5
        8'h36: ascii_code = 8'h36;  // 6
        8'h3D: ascii_code = 8'h37;  // 7
        8'h3E: ascii_code = 8'h38;  // 8
        8'h46: ascii_code = 8'h39;  // 9
        8'h45: ascii_code = 8'h30;  // 0

        // 字母键 A-Z
        8'h1C: ascii_code = 8'h41;  // A
        8'h32: ascii_code = 8'h42;  // B
        8'h21: ascii_code = 8'h43;  // C
        8'h23: ascii_code = 8'h44;  // D
        8'h24: ascii_code = 8'h45;  // E
        8'h2B: ascii_code = 8'h46;  // F
        8'h34: ascii_code = 8'h47;  // G
        8'h33: ascii_code = 8'h48;  // H
        8'h43: ascii_code = 8'h49;  // I
        8'h3B: ascii_code = 8'h4A;  // J
        8'h42: ascii_code = 8'h4B;  // K
        8'h4B: ascii_code = 8'h4C;  // L
        8'h3A: ascii_code = 8'h4D;  // M
        8'h31: ascii_code = 8'h4E;  // N
        8'h44: ascii_code = 8'h4F;  // O
        8'h4D: ascii_code = 8'h50;  // P
        8'h15: ascii_code = 8'h51;  // Q
        8'h2D: ascii_code = 8'h52;  // R
        8'h1B: ascii_code = 8'h53;  // S
        8'h2C: ascii_code = 8'h54;  // T
        8'h3C: ascii_code = 8'h55;  // U
        8'h2A: ascii_code = 8'h56;  // V
        8'h1D: ascii_code = 8'h57;  // W
        8'h22: ascii_code = 8'h58;  // X
        8'h35: ascii_code = 8'h59;  // Y
        8'h1A: ascii_code = 8'h5A;  // Z

        // 特殊符号
        8'h0E: ascii_code = 8'h60;  // `
        8'h4E: ascii_code = 8'h2D;  // -
        8'h55: ascii_code = 8'h3D;  // =
        8'h5D: ascii_code = 8'h5C;  // \
        8'h54: ascii_code = 8'h5B;  // [
        8'h5B: ascii_code = 8'h5D;  // ]
        8'h4C: ascii_code = 8'h3B;  // ;
        8'h52: ascii_code = 8'h27;  // '
        8'h41: ascii_code = 8'h2C;  // ,
        8'h49: ascii_code = 8'h2E;  // .
        8'h4A: ascii_code = 8'h2F;  // /
        8'h29: ascii_code = 8'h20;  // Space (空格)

        // 控制键
        8'h66: ascii_code = 8'h08;  // Backspace
        8'h0D: ascii_code = 8'h09;  // Tab
        8'h5A: ascii_code = 8'h0D;  // Enter
        8'h76: ascii_code = 8'h1B;  // Esc

        // 默认值
        default: ascii_code = 8'hff;  // 未知按键
    endcase
end

endmodule

module PS_control(
    input clk,resetn,ps2_clk,ps2_data,
    output reg [9:0] cur_key,        // ps2_data bits
    output reg [3:0] count,  // count ps2_data bits
		output reg [7:0] num,
		output reg update
		);
		reg [9:0] buffer;
    reg [2:0] ps2_clk_sync;
		reg [1:0]seal;
		reg [1:0]state,next_state;
		parameter A = 2'b00,B = 2'b01,C = 2'b10;
    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

		always @(posedge clk or posedge resetn)begin
			if(~resetn)begin
				state <= A;
				end
			else begin
				state <= next_state;	
				end
			end
    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (resetn == 0) begin // reset
            count <= 0;
						num <= 0;
						cur_key <= 0;
        end
        else begin
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity
										case(state)
												A: next_state = (buffer[8:1] == 8'hf0)? B:A;
												B: next_state = (buffer[8:1] == 8'hf0)? B:C;
												C: next_state = A;
												default: next_state = A;
											endcase
										case(state)
												A:seal = A;
												B:seal = B;
												C:seal = C;
												default: seal = A;
											endcase

										if(buffer[8:1] == 8'hf0)
											num <= num + 1;
										if(state == 2'b10 || seal ==2'b00)begin
											cur_key <= buffer;
										end else begin
											cur_key <= 0;
										end
               end
                count <= 0;     // for next
              end else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
            end
        end
    end
		endmodule
module PS(input clk,
	input rst,
	input ps2_clk,
	input ps2_data,
	output reg [7:0] num,
	output reg [9:0] cur_key,
	output [7:0] ascii,
	output reg [6:0]h0,h1,h2,h3,h4,h5
);


	reg [3:0] count;
	reg update;
	//reg [6:0]hh0,hh1,hh2,hh3,hh4,hh5;
	PS_control MY_PS(clk,rst,ps2_clk,ps2_data,cur_key,count,num,update); 
	rom rom1 (cur_key[8:1],ascii);
	bcd7seg seg0(cur_key[4:1],h0);
	bcd7seg seg1(cur_key[8:5],h1);
	bcd7seg seg2(ascii[3:0],h2);
	bcd7seg seg3(ascii[7:4],h3);
	bcd7seg seg4(num[3:0],h4);
	bcd7seg seg5(num[7:4],h5);
	//$strobe("strobe top cur_key %x",cur_key[8:1]);
/*
	parameter A = 1,B = 0;
	reg state,next_state;
	reg seal;
	always @(posedge clk, posedge rst)begin
		if(rst)begin
			state <= B;
		end
		else begin
			state <= next_state;	
			end
		end
	always @(*)begin
		case(state)
			A: next_state = (nextdata_n)? B:A;
			B: next_state = (nextdata_n)? A:B;
		endcase
	end
	always @(*) begin
    case(state)
			A:seal = A;
      B:seal = B;
    endcase
    end
*/
/*		
	always @(posedge clk)begin
			h0 = 7'b1000000;
			h1 = 7'b1000000;
			h2 = 7'b1000000;
		 	h3 = 7'b1000000;
			h4 = 7'b1000000;
			h5 = 7'b1000000;
		if(cur_key[8:1] == 8'hF0)begin
			h0 = 7'b1000000;
			h1 = 7'b1000000;
			h2 = 7'b1000000;
		 	h3 = 7'b1000000;
			h4 = 7'b1000000;
			h5 = 7'b1000000;
		end else begin
			h0 = hh0;
			h1 = hh1;
			h2 = hh2;
			h3 = hh3;
			h4 = hh4;
			h5 = hh5;
	end
end
*/
	endmodule

