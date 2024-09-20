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
    
    for(int i = 0; i <= 10; i++){
    	top->A = i;
    	top->B = 2 * i - 30;
    	top->FSel = 0b000;
    	top->eval();
	int expected_output = i + (2 * i - 30) & 0xFFFFFFFF; 
	assert(((top->Output & 0xFFFFFFFF) == expected_output) && "Sum mismatch");
    	std::cout<<"result = "<<(int)(top->Output)<<std::endl; 
    }
    

    for(int i = 0; i <= 10; i++){
    	top->A = i;
    	top->B = 2 * i - 30;
    	top->FSel = 0b001;
    	top->eval();
	int expected_output = i - (2 * i - 30) & 0xFFFFFFFF; 
	assert(((top->Output & 0xFFFFFFFF) == expected_output) && "Sub mismatch");
    	std::cout<<"result = "<<(int)(top->Output)<<std::endl; 
    }


    for(int i = 0; i <= 10; i++){
    	top->A = i;
    	top->B = 2 * i + 30;
    	top->FSel = 0b110;
    	top->eval();
	assert(((top->Output & 0b1) == 0b1) && "Less mismatch");
    	std::cout<<"result = "<<(int)(top->Output)<<std::endl; 
    }



    for(int i = 0; i <= 10; i++){
    	top->A = i;
    	top->B = i;
    	top->FSel = 0b111;
    	top->eval();
	assert(((top->Output & 0b1) == 0b1) && "Equal mismatch");
    	std::cout<<"result = "<<(int)(top->Output)<<std::endl; 
    }
    printf("All tests passed!\n");

    // 释放资源
    delete top;
    delete contextp;
    return 0;
}
