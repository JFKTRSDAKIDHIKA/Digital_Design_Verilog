#include "VAdderAnybits.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    VAdderAnybits* top = new VAdderAnybits{contextp};  // 修正了初始化错误
    int width = 32;
    for (unsigned long long a = 0; a < (2ULL << width); ++a) {
        for (unsigned long long b = 0; b < (2ULL << width) ;++b) {
            // 设置输入 A 和 B

            top->A = a;
            top->B = b;

            // 运行仿真
            top->eval();

            // 计算期望的 Sum 和 Carry
            unsigned long long expected_sum = (a + b) & 0xFFFFFFFF;   // 计算 4 位和
            unsigned long long expected_carry = (a + b) >> width;  // 计算进位

            // 验证仿真结果
            assert(top->S == expected_sum && "Sum mismatch!");
            assert(top->Cout == expected_carry && "Carry mismatch!");

            // 打印当前测试的结果
            std::cout << "Test A=" << a << ", B=" << b 
                      << " -> Sum=" << static_cast<unsigned long long>(top->S)
                      << ", Carry=" << static_cast<unsigned long long>(top->Cout) 
                      << " passed!" << std::endl;
        }
    }
    
    printf("All tests passed!\n");

    // 释放资源
    delete top;
    delete contextp;
    return 0;
}
