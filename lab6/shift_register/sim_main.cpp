#include "Vshift_register.h" // 包含 Verilog 模块的头文件
#include "verilated.h"
#include <iostream>
#include <assert.h>
#include <bitset>

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vshift_register* top = new Vshift_register{contextp}; // 实例化 shift_register 模块

    // 定义输入变量
    uint8_t init_value = 0b10101010; // 初始值，用于置数操作
    uint8_t serial_in = 1;           // 串行输入
    uint8_t expected_output;         // 期望输出
    
    // 测试每种模式
    for (int mode = 0; mode < 8; ++mode) {
        top->clk = 0;  // 时钟初始为低
        top->D = init_value; // 设置 D 输入为 8 位初始值
        top->serial_in = serial_in; // 串行输入设置为 1
        top->mode = mode; // 设置当前模式
        top->eval();      // 计算

        // 触发时钟上升沿
        top->clk = 1;
        top->eval(); // 时钟上升沿时执行操作

        // 根据当前模式计算期望的 Q 值
        switch (mode) {
            case 0: // 清零
                expected_output = 0;
                break;
            case 1: // 置数
                expected_output = init_value;
                break;
            case 2: // 逻辑右移
                expected_output = init_value >> 1;
		init_value = expected_output;
                break;
            case 3: // 逻辑左移
                expected_output = init_value << 1;
		init_value = expected_output;
                break;
            case 4: // 算术右移
                expected_output = (init_value >> 1) | (init_value & 0x80); // 保持符号位
		init_value = expected_output;
                break;
            case 5: // 串行右移
                expected_output = (init_value >> 1) | (serial_in << 7); // 串行输入进入最高位
		init_value = expected_output;
                break;
            case 6: // 循环右移
                expected_output = (init_value >> 1) | (init_value << 7); // 循环右移
		init_value = expected_output;
                break;
            case 7: // 循环左移
                expected_output = (init_value << 1) | (init_value >> 7); // 循环左移
		init_value = expected_output;
                break;
        }

        // 验证输出是否符合预期
        assert(top->Q == expected_output && "Output mismatch!");

        // 打印测试结果
        std::cout << "Test mode=" << mode << " -> Q=" << std::bitset<8>(top->Q)
                  << " expected=" << std::bitset<8>(expected_output) << " passed!" << std::endl;
    }


    std::cout << "All tests passed!" << std::endl;

    // 清理资源
    delete top;
    delete contextp;
    return 0;
}

