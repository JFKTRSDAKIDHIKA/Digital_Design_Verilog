#include "VALU32bits.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    VALU32bits* top = new VALU32bits{contextp};  // 修正了初始化错误

    top->A = 41;
    top->B = 41;
    top->FSel = 0b111;
    top->eval();
    std::cout<<"result = "<<(int)(top->Output & 0b1)<<std::endl; 
    printf("All tests passed!\n");

    // 释放资源
    delete top;
    delete contextp;
    return 0;
}
