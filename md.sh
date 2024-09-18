#!/bin/bash

# 检查是否提供了至少一个参数
if [ $# -lt 1 ]; then
    echo "Usage: $0 <verilog_sources> [directory_name]"
    exit 1
fi

# 获取第一个参数作为 Verilog 源文件
VERILOG_SRCS=$1


# 创建目录
mkdir -p "$VERILOG_SRCS"
touch ./$VERILOG_SRCS/"$VERILOG_SRCS".v
touch ./$VERILOG_SRCS/sim_main.cpp


# 生成 Makefile
cat > "$VERILOG_SRCS/Makefile" << EOL
VERILOG_SRCS = $VERILOG_SRCS
CPP_SRCS = sim_main.cpp
VERILATOR_FLAGS = --cc --exe --trace --build -j 0 -Wall

sim: \$(VERILOG_SRCS) \$(CPP_SRCS)
	verilator \$(VERILATOR_FLAGS) \$(CPP_SRCS) \$(VERILOG_SRCS)

clean:
	rm -rf obj_dir
	rm -f *.vcd
EOL

echo "Makefile created in $VERILOG_SRCS"

