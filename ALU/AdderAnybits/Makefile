VERILOG_SRCS = AdderAnybits.v
CPP_SRCS = sim_main.cpp
VERILATOR_FLAGS = --cc --exe --trace --build -j 0 -Wall
WIDTH=32
sim: $(VERILOG_SRCS) $(CPP_SRCS)
	verilator $(VERILATOR_FLAGS) $(CPP_SRCS)  $(VERILOG_SRCS) Adder1bit.v -Gwidth=$(WIDTH)
# verlator命令最终生成的可执行文件名称就是V<顶层模块名>

clean:
	rm -rf obj_dir
	rm -f *.vcd
