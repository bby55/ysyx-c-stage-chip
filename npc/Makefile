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
VERILOG_SRC = vsrc/top.v
CPP_SRC = csrc/main.cpp

# 基础编译选项（注意：反斜杠后直接换行，不要加注释）
BASE_VERILATOR_FLAGS = \
    --top-module $(TOP_MODULE) \
    -cc -trace \
    -build -exe $(CPP_SRC) \
    -Wno-EOFNEWLINE \
    -Wno-DECLFILENAME \
    -Wno-MULTITOP \
    -Wno-UNUSEDSIGNAL \
    -Wno-UNUSEDPARAM \
    -CFLAGS "-I$(NEMU_INCLUDE_PATH) -I$(NEMU_ISA_INCLUDE_PATH) -I$(NEMU_LIB_PATH)/include"

# 根据DIFFTEST开关添加选项
ifdef DIFFTEST
VERILATOR_FLAGS = $(BASE_VERILATOR_FLAGS) \
    -CFLAGS "-I$(NEMU_INCLUDE_PATH) -I$(NEMU_ISA_INCLUDE_PATH) -I$(NEMU_LIB_PATH)/include -DENABLE_DIFFTEST" \
    --LDFLAGS "-lreadline -L$(NEMU_LIB_PATH) -lriscv32-nemu-interpreter -Wl,-rpath=$(NEMU_LIB_PATH)"
else
VERILATOR_FLAGS = $(BASE_VERILATOR_FLAGS) \
    --LDFLAGS "-lreadline"
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
    