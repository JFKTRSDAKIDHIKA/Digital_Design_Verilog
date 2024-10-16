VERILOG_SRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CPP_SRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
VERILATOR_FLAGS = --cc --exe --trace --build -j 0 -Wall

sim: $(VERILOG_SRCS) $(CPP_SRCS)
	verilator $(VERILATOR_FLAGS) $(CPP_SRCS) $(VERILOG_SRCS)

clean:
	rm -rf obj_dir
	rm -f *.vcd
