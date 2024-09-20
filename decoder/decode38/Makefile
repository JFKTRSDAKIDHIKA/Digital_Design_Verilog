VRILOG_SRCS=decode38.v
CPP_SRCS=sim_main.cpp
VERILATOR_FLAGS=--cc --exe --trace --build -j 0 -Wall

sim: $(VERILOG_SRCS) $(CPP_SRCS)
	verilator $(VERILATOR_FLAGS) $(CPP_SRCS)  $(VRILOG_SRCS)
	./obj_dir/Vdecode38
# verlator命令最终生成的可执行文件名称就是V<顶层模块名>

clean:
	rm -rf obj_dir
	rm -f *.vcd
