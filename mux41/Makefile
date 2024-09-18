VERILOG_SRCS = mux41.v
CPP_SRCS = sim_main.cpp
VERILATOR_FLAGS = --cc --exe --trace --build -j 0 -Wall

sim: $(VERILOG_SRCS) $(CPP_SRCS)
	verilator $(VERILATOR_FLAGS) $(CPP_SRCS) $(VERILOG_SRCS) m_mux21.v

clean:
	rm -rf obj_dir
	rm -f *.vcd
