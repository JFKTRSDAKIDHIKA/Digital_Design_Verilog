#include "VAdder1Bit.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    VAdder1Bit* top = new VAdder1Bit{contextp};  // 修正了初始化错误

    // 遍历所有可能的输入组合 (X, Y, Cin)
    for (int i = 0; i < 8; i++) {
        // 提取 X, Y, Cin 三个信号的组合
        top->X = (i >> 2) & 1;  // 提取最高位 X
        top->Y = (i >> 1) & 1;  // 提取中间位 Y
        top->Cin = i & 1;       // 提取最低位 Cin

        // 运行仿真
        top->eval();

        // 计算预期的 Sum 和 Cout
        int expected_sum = (top->X ^ top->Y ^ top->Cin);
        int expected_cout = (top->Y & top->Cin) | (top->X & top->Cin) | (top->X & top->Y);

        // 验证仿真结果是否与预期一致
        assert(top->Sum == expected_sum && "Sum mismatch!");
        assert(top->Cout == expected_cout && "Cout mismatch!");

        // 打印当前测试通过的信息
        printf("Test %d: X=%d, Y=%d, Cin=%d -> Sum=%d, Cout=%d passed!\n",
               i, top->X, top->Y, top->Cin, top->Sum, top->Cout);
    }

    printf("All tests passed!\n");

    // 释放资源
    delete top;
    delete contextp;
    return 0;
}

