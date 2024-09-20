#include "Vdecode38.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vdecode38* top = new Vdecode38{contextp};  // 修正了初始化错误

    top->x = 4;
    top->en = 1;
    top->eval();
    printf("output=%d\n", top->y);
    

    printf("All tests passed!\n");

    // 释放资源
    delete top;
    delete contextp;
    return 0;
}
