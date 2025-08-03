# 定义工具和目标名称
VERILATOR = verilator
TOP_MODULE = top
SIM_EXE = obj_dir/V$(TOP_MODULE)

# 源文件
VERILOG_SRC = vsrc/top.v
CPP_SRC = csrc/main.cpp

# Verilator编译选项
VERILATOR_FLAGS = \
	--top-module $(TOP_MODULE) \
	-cc -trace \
	-build -exe $(CPP_SRC) \
	-Wno-EOFNEWLINE \
	-Wno-DECLFILENAME \
	-Wno-MULTITOP \
	-Wno-UNUSEDSIGNAL \
	-Wno-UNUSEDPARAM \
	--LDFLAGS "-lreadline"

# 默认目标
.PHONY: all sim clean

all: sim

# 仿真目标：检查是否需要复制镜像并运行
sim: $(SIM_EXE)
	@echo "Starting simulation..."
ifdef IMG
	@mkdir -p rom
	@cp $(IMG) rom/text.bin
endif
	@./$(SIM_EXE) $(ARGS)

# 编译目标：使用Verilator生成可执行文件
$(SIM_EXE): $(VERILOG_SRC) $(CPP_SRC)
	@echo "Compiling with Verilator..."
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SRC)

# 清理目标
clean:
	@echo "Cleaning up..."
	rm -rf obj_dir
	rm -f *.vcd