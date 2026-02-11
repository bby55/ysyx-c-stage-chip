module psram(
  input sck,
  input ce_n,
  inout [3:0] dio
);

  wire reset = ce_n;

  typedef enum [2:0] { cmd_t, addr_t, wait_t, data_t, err_t } state_t;
  reg [2:0]  state;
  reg [7:0]  counter;
  reg [7:0]  counter_wr;
  reg [7:0]  cmd;
  reg [23:0] addr;
  reg [31:0] data;
  wire[31:0] rdata;    



  wire [31:0] raddr = {1'b1,7'b0,addr} + {24'b0,counter_wr};
  wire ren;

  assign ren = ((cmd == 8'h38 || cmd == 8'h03) && ((counter == (in_qpi ? 8'd40-6 : 8'd40)) || (counter == (in_qpi ? 8'd48-6 : 8'd48)) || (counter == (in_qpi ? 8'd56-6 : 8'd56)) || (counter == (in_qpi ? 8'd64-6 : 8'd64)))) ||
               ((cmd == 8'hEB) && (counter == (in_qpi ? 8'd32-6 : 8'd32)));
  
  reg in_qpi;

  always@(posedge sck or posedge reset) begin
     if (cmd == 8'h88)begin
     in_qpi <= 1'b1;
    end
  end

psram_cmd psram_cmd_i(
    .clock(sck),
    .valid(ren),
    .cmd(cmd),
    .addr(raddr),
    .data_in(data[7:0]),
    .data_out(rdata)
  );


  always@(negedge sck or posedge reset) begin
    if (reset) state <= cmd_t;
    else begin
      case (state)
        cmd_t:  state <= (counter == (in_qpi ? 8'd2 : 8'd8 )) ? addr_t : state;
        addr_t: state <= (cmd     != 8'h3 && cmd     != 8'h38 && cmd     != 8'hEB ) ? err_t  :
                         (counter == (in_qpi ? 8'd32-6 : 8'd32)) ? (cmd == 8'hEB ? wait_t : data_t) : state; 
        wait_t: state <= (counter == (in_qpi ? 8'd38-6 : 8'd38)) ? data_t : state;
        data_t: state <= state; 
        default: begin
          state <= state;
        end
      endcase
    end
  end


  always@(posedge sck or posedge reset) begin
    if (reset) counter <= 8'd0;
    else begin
      case (state)
        cmd_t:   counter <= (counter < (in_qpi ? 8'd2 : 8'd8 )) ? counter + 8'd1 : 8'd0;
        addr_t:  counter <= (counter < (in_qpi ? 8'd32-6 : 8'd32)) ? ((cmd == 8'h03) ? counter + 8'd1 : ((cmd == 8'h38 || cmd == 8'hEB) ? counter + 8'd4 : 8'd0)) : 8'd0;
        wait_t:  counter <= (counter < (in_qpi ? 8'd38-6 : 8'd38)) ? counter + 8'd1 : 8'd0; 
        data_t:  counter <= (counter < (in_qpi ? 8'd71-6 : 8'd71)) ? ((cmd == 8'h03) ? counter + 8'd1 : ((cmd == 8'h38 || cmd == 8'hEB) ? counter + 8'd4 : 8'd0)) : 8'd0; // 32位数据：0~31（适配模32）
        default: counter <= 8'd0;
      endcase
    end
  end
always@(posedge sck or posedge reset) begin
    if (reset) counter_wr <= 8'd0;
    else if (ren)begin
      counter_wr <= counter_wr + 1;
    end
  end

  always@(posedge sck or posedge reset) begin
    if (reset)               cmd <= 8'd0;
    else if (state == cmd_t) begin
      if(in_qpi) begin
        case(counter)
          8'd0: cmd[7:4] <= dio[3:0];
          8'd1: cmd[3:0] <= dio[3:0];
          default: ;
        endcase
      end
      else begin
        cmd <= { cmd[6:0], dio[0] };
      end
    end
  end

always@(posedge sck or posedge reset) begin
    if (reset)                addr <= 24'd0;
    else if (state == addr_t) begin
      case(cmd)
      8'h03: addr <= { addr[22:0], dio[0]  };
      8'h38: addr <= { addr[19:0], dio     };
      8'hEB: addr <= { addr[19:0], dio     };
      default: ;
    endcase
    end
  end

  always@(posedge sck or posedge reset) begin
    if (reset) begin
      data <= 32'd0;
    end else if (counter == (in_qpi ? 8'd38-6 : 8'd38))begin 
      data <= rdata;
    end else if (state == data_t && cmd == 8'hEB) begin
       if (counter == (in_qpi ? 8'd46-6 : 8'd46) || counter == (in_qpi ? 8'd54-6 : 8'd54) || counter == (in_qpi ? 8'd62-6 : 8'd62) || counter == (in_qpi ? 8'd70-6 : 8'd70)) begin
        data <= {8'b0,data[31:8]};
      end
    end else if (state == data_t) begin
      case(cmd)
        8'h03: begin
          if (counter == 8'd0) begin
            data <= {data[30:0], 1'b0};
          end
        end
        8'h38: begin
          data <= {data[27:0], dio};
        end
        default : ;
      endcase
    end
  end


  assign dio  = ce_n ? 4'bZZZZ :            
                (state == data_t && cmd == 8'hEB && 
                 (counter == (in_qpi ? 8'd42-6 : 8'd42) || counter == (in_qpi ? 8'd50-6 : 8'd50) || 
                   counter == (in_qpi ? 8'd58-6 : 8'd58)  || counter == (in_qpi ? 8'd66-6 : 8'd66))) ? 
                  data[7:4] : 
                  (state == data_t && cmd == 8'hEB && 
                 (counter == (in_qpi ? 8'd46-6 : 8'd46) || counter == (in_qpi ? 8'd54-6 : 8'd54) || 
                   counter == (in_qpi ? 8'd62-6 : 8'd62)  || counter == (in_qpi ? 8'd70-6 : 8'd70))) ? 
                   data[3:0] :
                4'bZZZZ; 

endmodule


import "DPI-C" function void psram_read(input int addr, output int data);
import "DPI-C" function void psram_write(input int addr, input byte data);

module psram_cmd(
  input             clock,
  input             valid,
  input       [7:0] cmd,
  input      [31:0] addr,
  input      [7:0] data_in,
  output reg [31:0] data_out
    
);

  always@(negedge clock) begin
    if (valid)
      if (cmd == 8'h03 || cmd == 8'hEB) psram_read(addr, data_out);  
      else if (cmd == 8'h38) psram_write(addr, data_in);
      else begin
        $fwrite(32'h80000002, "Assertion failed: Unsupport command `%xh`,  support `03h 38h EBh` read/write command\n", cmd);
        $fatal;
      end
  end
endmodule