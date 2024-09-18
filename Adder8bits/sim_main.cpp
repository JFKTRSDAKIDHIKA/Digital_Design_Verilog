#include "VAdder8bits.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    VAdder8bits* top = new VAdder8bits{contextp};  // 修正了初始化错误

    for (int a = 0; a < 256; ++a) {
        for (int b = 0; b < 256 ;++b) {
            // 设置输入 A 和 B
            top->A = a;
            top->B = b;

            // 运行仿真
            top->eval();

            // 计算期望的 Sum 和 Carry
            int expected_sum = (a + b) & 0xFF;   // 计算 4 位和
            int expected_carry = (a + b) >> 8;  // 计算进位

            // 验证仿真结果
            assert(top->S == expected_sum && "Sum mismatch!");
            assert(top->Cout == expected_carry && "Carry mismatch!");

            // 打印当前测试的结果
            std::cout << "Test A=" << a << ", B=" << b 
                      << " -> Sum=" << static_cast<int>(top->S)
                      << ", Carry=" << static_cast<int>(top->Cout) 
                      << " passed!" << std::endl;
        }
    }
    
    printf("All tests passed!\n");

    // 释放资源
    delete top;
    delete contextp;
    return 0;
}
