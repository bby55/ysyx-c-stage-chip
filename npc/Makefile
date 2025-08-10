# 定义工具和目标名称
VERILATOR = verilator
TOP_MODULE = top
SIM_EXE = obj_dir/V$(TOP_MODULE)

NEMU_LIB_PATH = /home/ysyxbby/ysyx-workbench/nemu/build
NEMU_LIB_NAME = :riscv32-nemu-interpreter-so  # 修正原可能存在的多余冒号问题

# 源文件
VERILOG_SRC = vsrc/top.v
CPP_SRC = csrc/main.cpp

# 基础编译选项
BASE_VERILATOR_FLAGS = \
    --top-module $(TOP_MODULE) \
    -cc -trace \
    -build -exe $(CPP_SRC) \
    -Wno-EOFNEWLINE \
    -Wno-DECLFILENAME \
    -Wno-MULTITOP \
    -Wno-UNUSEDSIGNAL \
    -Wno-UNUSEDPARAM \
    -CFLAGS "-I$(NEMU_LIB_PATH)/include"

# 根据DIFFTEST开关决定是否添加difftest相关选项
ifdef DIFFTEST
VERILATOR_FLAGS = $(BASE_VERILATOR_FLAGS) \
    -CFLAGS "-DENABLE_DIFFTEST" \
    --LDFLAGS "-lreadline -L$(NEMU_LIB_PATH) -l$(NEMU_LIB_NAME) -Wl,-rpath=$(NEMU_LIB_PATH)"
else
VERILATOR_FLAGS = $(BASE_VERILATOR_FLAGS) \
    --LDFLAGS "-lreadline"
endif

# 默认目标
.PHONY: all sim clean run run-diff

all: sim

# 仿真目标：检查是否需要复制镜像并运行
sim: $(SIM_EXE)
	@echo "Starting simulation..."
ifdef IMG
	@mkdir -p rom
	@cp $(IMG) rom/text.bin
endif
	@./$(SIM_EXE) $(ARGS)

# 便捷目标：直接运行（默认不启用difftest）
run: sim

# 便捷目标：运行并启用difftest
run-diff:
	@$(MAKE) DIFFTEST=1 sim

# 编译目标：使用Verilator生成可执行文件
$(SIM_EXE): $(VERILOG_SRC) $(CPP_SRC)
	@echo "Compiling with Verilator..."
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SRC)

# 清理目标
clean:
	@echo "Cleaning up..."
	rm -rf obj_dir
	rm -f *.vcd
	rm -rf rom
