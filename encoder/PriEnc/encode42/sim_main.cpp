#include "Vencode42.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vencode42* top = new Vencode42{contextp};  // 修正了初始化错误


    top->en=0b1;
    top->x =0b0011;
    top->eval();
    printf("output is %d\n", top->y);
    // 释放资源
    delete top;
    delete contextp;
    return 0;
}
