#include "VSuber4bits.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    VSuber4bits* top = new VSuber4bits{contextp};  // 修正了初始化错误

    for (int a = -8; a < 7; ++a) {
        for (int b = 0; b < 8; ++b) {
            // 设置输入 A 和 B
            top->A = a;
            top->B = b;

            // 运行仿真
            top->eval();

            // 计算期望的 Sum 和 Carry
            int expected_sum = (a - b) & 0xF;   // 计算 4 位和
            //int expected_carry = (a - b) >> 4;  // 计算进位
             
            assert((top->S & 0xF) == expected_sum && "Sum mismatch!");
            //assert(top->Cout == expected_carry && "Carry mismatch!");

            // 打印当前测试的结果
            std::cout << "Test A=" << a << ", B=" << b 
                      << " -> Sum=" << ((top->S & 0x8) ? (top->S | ~0xF) : top->S)
                      << ", Carry=" << static_cast<int>(top->Cout) 
                      << " passed!" << std::endl;
            // 验证仿真结果
        }
    }
    
    printf("All tests passed!\n");

    // 释放资源
    delete top;
    delete contextp;
    return 0;
}
