VERILOG_SRCS = Adder1Bit.v
CPP_SRCS = sim_main.cpp
VERILATOR_FLAGS = --cc --exe --trace --build -j 0 -Wall

sim: $(VERILOG_SRCS) $(CPP_SRCS)
	verilator $(VERILATOR_FLAGS) $(CPP_SRCS) $(VERILOG_SRCS)

clean:
	rm -rf obj_dir
	rm -f *.vcd
