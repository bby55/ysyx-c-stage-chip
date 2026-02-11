module bitrev (
  input  sck,
  input  ss,
  input  mosi,
  output reg miso
);
  reg [7:0] rx_data;
  reg [7:0] tx_data;
  reg [2:0] cnt;


always @(posedge sck or posedge ss) begin
  if(ss) begin          
    cnt <= 3'b0;
  end else begin       
    cnt <= cnt + 3'b1;
  end
end


always @(negedge sck or posedge ss) begin
  if (ss) begin 
    rx_data <= 8'b0;
  end else begin
    rx_data <= {rx_data[6:0], mosi};
  end
end


always @(posedge sck or posedge ss) begin
  if (ss) begin      
    tx_data <= 8'b0;
    miso <= 1'b1;     
  end else begin

    if (cnt == 3'b111) begin
      tx_data <= {rx_data[0], rx_data[1], rx_data[2], rx_data[3],
                  rx_data[4], rx_data[5], rx_data[6], rx_data[7]};
    end

    miso <= tx_data[cnt];
  end
end

endmodule