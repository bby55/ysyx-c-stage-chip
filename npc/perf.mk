SYNTH_STAT_FILE := /home/ysyxbby/ysyx-workbench/yosys-sta/result/ysyx-500MHz/synth_stat.txt
SYNTH_RPT_FILE := /home/ysyxbby/ysyx-workbench/yosys-sta/result/ysyx-500MHz/ysyx.rpt
MICROBENCH_LOG := /home/ysyxbby/ysyx-workbench/am-kernels/benchmarks/microbench/microbench_test.log
PERF_REPORT := ./build/perf_report.txt

yosys:
	cd $(NPC_HOME)/../yosys-sta && make sta

microbench:
	@echo "运行microbench测试(test)..."
	cd /home/ysyxbby/ysyx-workbench/am-kernels/benchmarks/microbench && \
    echo c | make ARCH=riscv32e-ysyxsoc run mainargs=test > microbench_test.log

perf:
	@cd $(NPC_HOME)/../yosys-sta && make sta > /dev/null 2>&1
	@AREA=$$(grep "Chip area" $(SYNTH_STAT_FILE) | awk '{print $$NF}'); \
	echo "综合面积: $$AREA" > $(PERF_REPORT);
	@FREQ=$$(grep -E -o "[0-9]+\.[0-9]+" $(SYNTH_RPT_FILE) | sed -n '5p'); \
	echo "综合频率: $$FREQ MHz" >> $(PERF_REPORT);
	@grep "总有效指令数:" $(MICROBENCH_LOG) | sed 's/\[0m//g' | awk -F': ' '{print "总有效指令数 = " $$2}' | head -1 >> $(PERF_REPORT)
	@grep "总时钟周期数:" $(MICROBENCH_LOG) | sed 's/\[0m//g' | awk -F': ' '{print "总时钟周期数 = " $$2}' | head -1 >> $(PERF_REPORT)
	@grep "IPC:" $(MICROBENCH_LOG) | sed 's/\[0m//g' | awk -F': ' '{print "IPC = " $$2}' | head -1 >> $(PERF_REPORT)
	@grep "平均每条指令周期数:" $(MICROBENCH_LOG) | sed 's/\[0m//g' | awk -F': ' '{print "平均每条指令周期数 = " $$2}' | head -1 >> $(PERF_REPORT)
	@grep "IFU Count:" $(MICROBENCH_LOG) | sed 's/\[0m//g' | awk -F': ' '{split($$2, arr, " "); print "IFU Count = " arr[1] "\nIFU Cycles = " arr[4] "\nIFU Spent = " arr[7]}' | head -1 >> $(PERF_REPORT)
	@grep "LSU Count:" $(MICROBENCH_LOG) | sed 's/\[0m//g' | awk -F': ' '{split($$2, arr, " "); print "LSU Count = " arr[1] "\nLSU Cycles = " arr[4] "\nLSU Spent = " arr[7]}' | head -1 >> $(PERF_REPORT)
	@grep "EXU Count:" $(MICROBENCH_LOG) | sed 's/\[0m//g' | awk -F': ' '{print "EXU Count = " $$2}' | head -1 >> $(PERF_REPORT)
	@grep "Compute Count:" $(MICROBENCH_LOG) | sed 's/\[0m//g' | awk -F': ' '{print "Compute Count = " $$2}' | head -1 >> $(PERF_REPORT)
	@grep "CSR Count:" $(MICROBENCH_LOG) | sed 's/\[0m//g' | awk -F': ' '{print "CSR Count = " $$2}' | head -1 >> $(PERF_REPORT)
	@grep "Jump Count:" $(MICROBENCH_LOG) | sed 's/\[0m//g' | awk -F': ' '{print "Jump Count = " $$2}' | head -1 >> $(PERF_REPORT)
	@grep "Mem Count:" $(MICROBENCH_LOG) | sed 's/\[0m//g' | awk -F': ' '{print "Mem Count = " $$2}' | head -1 >> $(PERF_REPORT)
	@echo "\n===== 性能数据汇总 ====="
	@cat $(PERF_REPORT)
	@echo ""