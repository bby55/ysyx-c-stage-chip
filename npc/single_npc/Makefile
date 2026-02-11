# 定义工具和目标名称
VERILATOR = verilator
TOP_MODULE = top
SIM_EXE = obj_dir/V$(TOP_MODULE)

# NEMU根路径（必须正确定义）
NEMU_BASE_PATH = /home/ysyxbby/ysyx-workbench/nemu


# NEMU相关路径
NEMU_LIB_PATH = $(NEMU_BASE_PATH)/build
NEMU_INCLUDE_PATH = $(NEMU_BASE_PATH)/include
NEMU_ISA_INCLUDE_PATH = $(NEMU_BASE_PATH)/src/isa/riscv32/include

# 源文件
VERILOG_SRC = \
   ./vsrc/rv32e.v
CPP_SRC = ./csrc/main.cpp

BASE_VERILATOR_FLAGS = \
    --top-module $(TOP_MODULE) \
    --timescale "1ns/1ns" \
    --no-timing \
    -cc -trace \
    -build -exe $(CPP_SRC) \
    -Wno-EOFNEWLINE \
    -Wno-DECLFILENAME \
    -Wno-MULTITOP \
    -Wno-UNUSEDSIGNAL \
    -Wno-UNUSEDPARAM \
    -CFLAGS "-I$(NEMU_INCLUDE_PATH) -I$(NEMU_ISA_INCLUDE_PATH) -I$(NEMU_LIB_PATH)/include -I/usr/include/SDL2"

# 根据DIFFTEST开关添加选项
ifdef DIFFTEST
VERILATOR_FLAGS = $(BASE_VERILATOR_FLAGS) \
    -CFLAGS "-I$(NEMU_INCLUDE_PATH) -I$(NEMU_ISA_INCLUDE_PATH) -I$(NEMU_LIB_PATH)/include -DENABLE_DIFFTEST" \
    --LDFLAGS "-lreadline -lSDL2 -L$(NEMU_LIB_PATH) $(NEMU_LIB_PATH)/riscv32-nemu-interpreter-so -Wl,-rpath=$(NEMU_LIB_PATH)"
else
# 其他配置不变，添加SDL2支持
VERILATOR_FLAGS = $(BASE_VERILATOR_FLAGS) \
    --LDFLAGS "-lreadline -lSDL2"
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

run-diff:
	@$(MAKE) DIFFTEST=1 sim

# 编译目标（命令行用Tab缩进）
$(SIM_EXE): $(VERILOG_SRC) $(CPP_SRC)
	@echo "Compiling with Verilator..."
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SRC)

# 清理目标（命令行用Tab缩进）
clean:
	@echo "Cleaning up..."
	rm -rf obj_dir
	rm -f *.vcd
	rm -rf rom
    