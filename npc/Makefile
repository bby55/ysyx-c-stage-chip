# 定义工具和目标名称
VERILATOR = verilator
TOP_MODULE = ysyxSoCFull
SIM_EXE = obj_dir/V$(TOP_MODULE)

# NEMU根路径（必须正确定义）
NEMU_BASE_PATH = /home/ysyxbby/ysyx-workbench/nemu

# 定义需要添加的include搜索路径
UART_RTL_PATH = /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/uart16550/rtl
SPI_RTL_PATH = /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/spi/rtl

# NEMU相关路径
NEMU_LIB_PATH = $(NEMU_BASE_PATH)/build
NEMU_INCLUDE_PATH = $(NEMU_BASE_PATH)/include
NEMU_ISA_INCLUDE_PATH = $(NEMU_BASE_PATH)/src/isa/riscv32/include


# 源文件
VERILOG_SRC = \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v \
    vsrc/ysyx.v \
    vsrc/IFU/ysyx_ifu.v \
    vsrc/IFU/PC.v \
    vsrc/IDU/ysyx_idu.v \
    vsrc/Mux/Mux.v \
    vsrc/EXU/ysyx_alu.v \
    vsrc/WBU/WBU.v \
    vsrc/WBU/REG.v \
    vsrc/WBU/CSR.v \
    vsrc/LSU/ysyx_lsu.v \
    vsrc/Arbiter/Arbiter.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/gpio/gpio_top_apb.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/uart16550/rtl/raminfr.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/uart16550/rtl/uart_top_apb.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/uart16550/rtl/uart_defines.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/uart16550/rtl/uart_tfifo.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/uart16550/rtl/uart_receiver.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/uart16550/rtl/uart_regs.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/uart16550/rtl/uart_sync_flops.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/uart16550/rtl/uart_transmitter.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/uart16550/rtl/uart_rfifo.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/amba/axi4_delayer.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/amba/apb_delayer.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/psram/psram.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/psram/psram_top_apb.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/psram/efabless/EF_PSRAM_CTRL.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/psram/efabless/EF_PSRAM_CTRL_wb.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/bitrev/bitrev.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/vga/vga_top_apb.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/flash/flash.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/ps2/ps2_top_apb.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/sdram/sdram_top_apb.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/sdram/sdram_top_axi.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/sdram/core_sdram_axi4/sdram_axi_core.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/sdram/core_sdram_axi4/sdram_axi_pmem.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/sdram/core_sdram_axi4/sdram_axi.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/spi/rtl/spi_top.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/spi/rtl/spi_clgen.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/spi/rtl/spi_defines.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/spi/rtl/spi_top_apb.v \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/spi/rtl/spi_shift.v
    
# 修正1：统一变量名，定义为CPP_SRC（后续全程使用该变量，匹配编译依赖）
CPP_SRC = csrc/main.cpp \
          csrc/mem.c \
          csrc/dpi.c \
          csrc/utils.c \
          csrc/exec.c \
          csrc/cmd.c


# 基础Verilator编译选项（修正2：移除FLAGS中的源文件，仅保留编译选项）
BASE_VERILATOR_FLAGS = \
    --top-module $(TOP_MODULE) \
    --timescale "1ns/1ns" \
    --no-timing \
    -cc -trace --autoflush \
    -build -exe \
    -I$(UART_RTL_PATH) \
    -I$(SPI_RTL_PATH) \
    -Wno-EOFNEWLINE \
    -Wno-DECLFILENAME \
    -Wno-MULTITOP \
    -Wno-UNUSEDSIGNAL \
    -Wno-UNUSEDPARAM \
    -CFLAGS "-I. -I$(NEMU_INCLUDE_PATH) -I$(NEMU_ISA_INCLUDE_PATH) -I$(NEMU_LIB_PATH)/include -I/usr/include/SDL2" \
    --LDFLAGS "-lreadline -lSDL2 -ldl -pthread -mcmodel=large"

# 根据DIFFTEST开关添加选项（修正5：仅追加-DENABLE_DIFFTEST，不覆盖原有CFLAGS）
ifdef DIFFTEST
VERILATOR_FLAGS = $(BASE_VERILATOR_FLAGS) \
    -CFLAGS "-DENABLE_DIFFTEST" \
    --LDFLAGS "-L$(NEMU_LIB_PATH) $(NEMU_LIB_PATH)/riscv32-nemu-interpreter-so -Wl,-rpath=$(NEMU_LIB_PATH)"
else
# 非差分测试，直接使用基础选项
VERILATOR_FLAGS = $(BASE_VERILATOR_FLAGS)
endif

# 默认目标
.PHONY: all sim clean run run-diff

all: sim

# 仿真目标（命令行必须用Tab缩进，不能用空格）
sim: $(SIM_EXE)
	@echo "Starting simulation..."
ifdef IMG
	@mkdir -p rom
	@cp $(IMG) rom/text.bin
endif
	@./$(SIM_EXE) $(ARGS)

# 便捷目标
run: sim

# 差分测试目标：传递DIFFTEST=1，复用sim逻辑
run-diff:
	@$(MAKE) DIFFTEST=1 sim IMG=$(IMG) ARGS=$(ARGS)

# 编译目标（修正6：依赖为Verilog源文件+C/C++源文件，编译命令最后追加CPP_SRC）
$(SIM_EXE): $(VERILOG_SRC) $(CPP_SRC)
	@echo "Compiling with Verilator..."
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SRC) $(CPP_SRC)

# 清理目标（命令行用Tab缩进）
clean:
	@echo "Cleaning up..."
	rm -rf obj_dir
	rm -f *.vcd
	rm -rf rom