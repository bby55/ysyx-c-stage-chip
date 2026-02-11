// define this macro to enable fast behavior simulation
// for flash by skipping SPI transfers
// `define FAST_FLASH

module spi_top_apb #(
  parameter flash_addr_start = 32'h30000000,
  parameter flash_addr_end   = 32'h3fffffff,
  parameter spi_ss_num       = 8
) (
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output                  spi_sck,
  output [spi_ss_num-1:0] spi_ss,
  output                  spi_mosi,
  input                   spi_miso,
  output                  spi_irq_out
);

// ----------------------------------------------------
`ifdef FAST_FLASH
wire [31:0] data;
parameter invalid_cmd = 8'h0;
flash_cmd flash_cmd_i(
  .clock(clock),
  .valid(in_psel && !in_penable),
  .cmd(in_pwrite ? invalid_cmd : 8'h03),
  .addr({8'b0, in_paddr[23:2], 2'b0}),
  .data(data)
);
assign spi_sck    = 1'b0;
assign spi_ss     = {spi_ss_num{1'b0}};
assign spi_mosi   = 1'b1;
assign spi_irq_out= 1'b0;
assign in_pslverr = 1'b0;
assign in_pready  = in_penable && in_psel && !in_pwrite;
assign in_prdata  = data[31:0];

// ----------------------------------------------------
`else

parameter SPI_ADDR_START = 32'h10001000;
parameter SPI_ADDR_END   = 32'h10001fff;


parameter SPI_TX1_OFF   = 5'h04;
parameter SPI_CTRL_OFF  = 5'h10;
parameter SPI_DIV_OFF   = 5'h14;
parameter SPI_SS_OFF    = 5'h18;


parameter CTRL_GO_BSY    = 1 << 8;
parameter CTRL_BASE_CFG  = 32'h2440;
parameter CTRL_RUN_CFG   = CTRL_BASE_CFG | CTRL_GO_BSY;

wire in_flash_xip  = in_psel && !in_pwrite && 
                     (in_paddr >= flash_addr_start) && (in_paddr <= flash_addr_end) &&
                     !(in_paddr >= SPI_ADDR_START && in_paddr <= SPI_ADDR_END) ;

parameter IDLE     = 4'b0000;
parameter SET_DIV  = 4'b0001; 
parameter SET_CTRL = 4'b0010; 
parameter SET_SS   = 4'b0011;
parameter SET_TX1_ADDR = 4'b0100;
parameter SET_BUSY = 4'b0101; 
parameter WAIT     = 4'b0110; 
parameter RX       = 4'b0111; 
parameter RX_WAIT  = 4'b1000;
parameter TX_CPU  = 4'b1001;

reg [3:0]  CurrentState;        
reg [3:0]  NextState;          
reg        spi_init_done;       
reg [31:0] xip_flash_phy_addr;  
reg [4:0]  xip_spi_adr;      
reg [31:0] xip_spi_wdata;   
reg        xip_spi_we;      
reg        xip_spi_stb;  
reg        xip_spi_cyc;    
reg [31:0] xip_rx_data;       
reg        xip_pready;       
reg        xip_pslverr;        
reg [3:0]  xip_sel;

always @(posedge clock or posedge reset) begin
  if (reset) begin
    CurrentState      <= IDLE;
    spi_init_done     <= 1'b0;   
    xip_flash_phy_addr <= 32'h0;
  end else begin
    CurrentState      <= NextState;

    if (CurrentState == IDLE && in_flash_xip && !in_penable) begin
      xip_flash_phy_addr <= {8'h03, in_paddr[23:2], 2'b0};
    end
    if (CurrentState == SET_SS) begin
      spi_init_done <= 1'b1;
    end
  end
end

always @(*) begin
  NextState      = CurrentState;
  xip_rx_data   = 32'b0;
  xip_spi_adr    = 5'h00;
  xip_spi_wdata  = 32'h00000000;
  xip_spi_we     = 1'b0;
  xip_spi_stb    = 1'b1; 
  xip_spi_cyc    = 1'b1; 
  xip_pready     = 1'b0;
  xip_pslverr    = 1'b0;
  xip_sel        = 4'b1111;
  case (CurrentState)
    IDLE: begin
      if (in_flash_xip) begin
        NextState = spi_init_done ? SET_TX1_ADDR: SET_DIV;
      end else begin
        NextState = IDLE;
      end
    end

    SET_DIV: begin  
      xip_spi_adr   = SPI_DIV_OFF;
      xip_spi_wdata = 32'h00000001;
      xip_spi_we    = 1'b1;
      if(wb_ack_o) NextState     = SET_CTRL;
    end

    SET_CTRL: begin 
      xip_spi_adr   = SPI_CTRL_OFF;
      xip_spi_wdata = CTRL_BASE_CFG;
      xip_spi_we    = 1'b1;
      if(wb_ack_o) NextState     = SET_SS;
    end

    SET_SS: begin
      xip_spi_adr   = SPI_SS_OFF;
      xip_spi_wdata = 32'h00000001;
      xip_spi_we    = 1'b1;
      if(wb_ack_o) NextState     = SET_TX1_ADDR;
    end

    SET_TX1_ADDR: begin 
      xip_spi_adr   = SPI_TX1_OFF;
      xip_spi_wdata = xip_flash_phy_addr;
      xip_spi_we    = 1'b1;
      if(wb_ack_o) NextState     = SET_BUSY;
    end


    SET_BUSY: begin   
      xip_spi_adr   = SPI_CTRL_OFF;
      xip_spi_wdata = CTRL_RUN_CFG;
      xip_spi_we    = 1'b1;
      if(wb_ack_o) NextState     = WAIT;
    end

    WAIT: begin 
      xip_spi_adr   = SPI_CTRL_OFF;
      xip_spi_we    = 1'b0; 
      if ((wb_dat_o & CTRL_GO_BSY) == 32'b0) begin
        NextState = RX;
      end else if (wb_ack_o)begin
        NextState = WAIT;
      end
    end
    RX: begin 
      xip_spi_adr   = SPI_TX1_OFF; 
      xip_spi_we    = 1'b0;   
      NextState     = RX_WAIT;    
    end
    RX_WAIT:begin
      if(wb_ack_o) NextState     = TX_CPU;  
    end
    TX_CPU:begin
      xip_spi_stb   = 1'b0; 
      xip_spi_cyc   = 1'b0;
      xip_rx_data   = {wb_dat_o[7:0], wb_dat_o[15:8], wb_dat_o[23:16], wb_dat_o[31:24]};
      xip_pready    = in_penable && in_psel && !in_pwrite;
      NextState     = IDLE;
    end
    default: begin 
      NextState     = IDLE;
      xip_rx_data   = 32'b0;
      xip_spi_we    = 1'b0;
      xip_spi_stb   = 1'b0;
      xip_spi_cyc   = 1'b0;
      xip_pready    = 1'b0;
      xip_pslverr   = 1'b0;
    end
  endcase
end


wire [4:0]  wb_adr_i = in_flash_xip ? xip_spi_adr   : in_paddr[4:0];
wire [31:0] wb_dat_i = in_flash_xip ? xip_spi_wdata : in_pwdata;
wire        wb_we_i  = in_flash_xip ? xip_spi_we    : in_pwrite;
wire        wb_stb_i = in_flash_xip ? xip_spi_stb   : in_psel;
wire        wb_cyc_i = in_flash_xip ? xip_spi_cyc   : in_penable;
wire [3:0]  wb_sel_i = in_flash_xip ? xip_sel       : in_pstrb;    

wire        wb_ack_o;  
wire [31:0] wb_dat_o;  
wire        wb_err_o; 
wire        wb_int_o;  


assign in_pready  = in_flash_xip ? xip_pready   : wb_ack_o;
assign in_prdata  = in_flash_xip ? xip_rx_data  : wb_dat_o;
assign in_pslverr = in_flash_xip ? xip_pslverr  : wb_err_o;
assign spi_irq_out= in_flash_xip ? 1'b0         : wb_int_o;


spi_top u0_spi_top (
  .wb_clk_i(clock),
  .wb_rst_i(reset),
  .wb_adr_i(wb_adr_i),
  .wb_dat_i(wb_dat_i),
  .wb_dat_o(wb_dat_o),
  .wb_sel_i(wb_sel_i),
  .wb_we_i (wb_we_i),
  .wb_stb_i(wb_stb_i),
  .wb_cyc_i(wb_cyc_i),
  .wb_ack_o(wb_ack_o),
  .wb_err_o(wb_err_o),
  .wb_int_o(wb_int_o),

  .ss_pad_o(spi_ss),
  .sclk_pad_o(spi_sck),
  .mosi_pad_o(spi_mosi),
  .miso_pad_i(spi_miso)
);

`endif // FAST_FLASH
endmodule