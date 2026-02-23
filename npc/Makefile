# 定义工具和目标名称
VERILATOR = verilator
TOP_MODULE = ysyxSoCFull
SIM_EXE = obj_dir/V$(TOP_MODULE)
INC_PATH ?=
LDFLAGS ?=
NXDC_FILES = constr/ysyxSoCFull.nxdc
# NEMU根路径（必须正确定义）
NEMU_BASE_PATH = /home/ysyxbby/ysyx-workbench/nemu

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# 定义需要添加的include搜索路径
UART_RTL_PATH = /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/uart16550/rtl
SPI_RTL_PATH = /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/spi/rtl

# NEMU相关路径
NEMU_LIB_PATH = $(NEMU_BASE_PATH)/build
NEMU_INCLUDE_PATH = $(NEMU_BASE_PATH)/include
NEMU_ISA_INCLUDE_PATH = $(NEMU_BASE_PATH)/src/isa/riscv32/include

include $(NVBOARD_HOME)/scripts/nvboard.mk

# 源文件
VERILOG_SRC = \
    /home/ysyxbby/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v \
    $(shell find /home/ysyxbby/ysyx-workbench/npc/vsrc -name "*.v")\
    $(shell find /home/ysyxbby/ysyx-workbench/ysyxSoC/perip -name "*.v")
    
# 修正1：统一变量名，定义为CPP_SRC（后续全程使用该变量，匹配编译依赖）
CPP_SRC = csrc/main.cpp \
          csrc/mem.c \
          csrc/dpi.c \
          csrc/utils.c \
          csrc/exec.c \
          csrc/cmd.c
CPP_SRC += $(SRC_AUTO_BIND)

# 基础Verilator编译选项（修正2：移除FLAGS中的源文件，仅保留编译选项）
BASE_VERILATOR_FLAGS = \
    --top-module $(TOP_MODULE) \
    --timescale "1ns/1ns" \
    --no-timing \
    -MMD -O3 --x-assign fast --x-initial fast --noassert \
    -cc -trace --autoflush \
    -build -exe \
    -I$(UART_RTL_PATH) \
    -I$(SPI_RTL_PATH) \
    -Wno-EOFNEWLINE \
    -Wno-DECLFILENAME \
    -Wno-MULTITOP \
    -Wno-UNUSEDSIGNAL \
    -Wno-UNUSEDPARAM \
    -CFLAGS "-I. -I$(NEMU_INCLUDE_PATH) -I$(NEMU_ISA_INCLUDE_PATH) -I$(NEMU_LIB_PATH)/include  -I$(INC_PATH)" \
    -LDFLAGS "-lreadline -lSDL2 -ldl -pthread -mcmodel=large $(LDFLAGS)" \
    -LDFLAGS "$(NVBOARD_ARCHIVE)" \
	$(addprefix -LDFLAGS , $(LDFLAGS)) \
	$(addprefix -CFLAGS , $(CXXFLAGS))


VERILATOR_FLAGS = $(BASE_VERILATOR_FLAGS)


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


$(SIM_EXE): $(VERILOG_SRC) $(CPP_SRC) $(NVBOARD_ARCHIVE)
	@echo "Compiling with Verilator..."
	$(VERILATOR) $(VERILATOR_FLAGS) $^ 

# 清理目标（命令行用Tab缩进）
clean:
	@echo "Cleaning up..."
	rm -rf obj_dir
	rm -f *.vcd
	rm -rf rom


include $(NPC_HOME)/perf.mk