# 定义工具和目标名称
VERILATOR = verilator
TOP_MODULE = top
SIM_EXE = obj_dir/V$(TOP_MODULE)

# 源文件
VERILOG_SRC = vsrc/top.v
CPP_SRC = csrc/main.cpp

# Verilator编译选项
# --top-module: 指定顶层模块，解决多顶层模块警告
# -Wno-*: 禁用特定警告
# -Wall
VERILATOR_FLAGS = \
	--top-module $(TOP_MODULE) \
	-cc -trace \
	-build -exe $(CPP_SRC) \
	-Wno-EOFNEWLINE \
	-Wno-DECLFILENAME \
	-Wno-MULTITOP \
	-Wno-UNUSEDSIGNAL \
	-Wno-UNUSEDPARAM

# 默认目标：运行仿真
.PHONY: all sim clean

all: sim

# 仿真目标：先编译再运行
sim: $(SIM_EXE)
	@echo "Starting simulation..."
	./$(SIM_EXE)

# 编译目标：使用Verilator生成可执行文件
$(SIM_EXE): $(VERILOG_SRC) $(CPP_SRC)
	@echo "Compiling with Verilator..."
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SRC)

# 清理目标：删除生成的文件
clean:
	@echo "Cleaning up..."
	rm -rf obj_dir
	rm -f *.vcd  # 移除波形文件（如果有）
