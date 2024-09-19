#include "VAdderAndSuber32bits.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
/*
 * All oprands can be positive or negative, eg. A>0, B>0
 * If Cin=1, Cout=A-B;
 * If Cin=0, Cout=A+B 
 *
 *
 *
 * */
int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    VAdderAndSuber32bits* top = new VAdderAndSuber32bits{contextp};  // 修正了初始化错误
    
    printf("Subtractor test begin!\n");
    for (int a = - 128; a < 128; ++a) {
        for (int b = -128; b < 128; ++b) {
            // 设置输入 A 和 B
            top->A = a;
            top->B = b;
	    top->Cin = 1;

            // 运行仿真
            top->eval();

            // 计算期望的 Sum 和 Carry
            int expected_sum = (a - b) & 0xFFFFFFFF;   // 计算 4 位和
            //int expected_carry = (a - b) >> 4;  // 计算进位
             
            assert((top->S & 0xFFFFFFFF) == expected_sum && "Sum mismatch!");
            //assert(top->Cout == expected_carry && "Carry mismatch!");

            // 打印当前测试的结果
            std::cout << "Test A=" << a << ", B=" << b 
                      << " -> Sum=" << static_cast<int>(top->S)
                      << ", Carry=" << static_cast<int>(top->Cout) 
                      << " passed!" << std::endl;
            // 验证仿真结果
        }
    }
    
    printf("Subtractor tests passed!\n");


    printf("Adder tests begin!\n");
    for (int a = -128; a < 128 ;++a) {
        for (int b = -128; b < 128; ++b) {
            // 设置输入 A 和 B
            top->A = a;
            top->B = b;
	    top->Cin = 0;

            // 运行仿真
            top->eval();

            // 计算期望的 Sum 和 Carry
            int expected_sum = (a + b) & 0xFFFFFFFF;   // 计算 4 位和
            //int expected_carry = (a - b) >> 4;  // 计算进位
             
            assert((top->S & 0xFFFFFFFF) == expected_sum && "Sum mismatch!");
            //assert(top->Cout == expected_carry && "Carry mismatch!");

            // 打印当前测试的结果
            std::cout << "Test A=" << a << ", B=" << b 
                      << " -> Sum=" << static_cast<int>(top->S)      
                      << ", Carry=" << static_cast<int>(top->Cout) 
                      << " passed!" << std::endl;
            // 验证仿真结果
        }
    }
    
    printf("Adder tests passed!\n");
    
    printf("减数是最小负数时 tests begin!\n");
    // when a positive number minus -2147483648, must overflow.
    for(int i = 0; i <= 10; i++){
    	top->A = 10000 * i;
    	top->B = -2147483648;
    	top->Cin = 1;
    	top->eval();
    	assert((top->overflow & 0b1) == 1 && "Overflow mismatch!"); 
    // int expected_sum = (0 - (-2147483648)) & 0xFFFFFFFF;   
    // 没有溢出的原因是因为位掩码 & 0xFFFFFFFF 操作将溢出的值限制在 32 位范围内。
    // when A-B, we come out 2147483648, namely 2^31, which is overflowing!\n。 
    	std::cout << "Sum=" << (int)(top->S) << std::endl; 
    }
    
    // when a negative number minus -2147483648, must be correct.
    for(int i = 0; i <= 10; i++){
    	top->A = -2147483648 + 10000 * i;
    	top->B = -2147483648;
    	top->Cin = 1;
    	top->eval();
	int expected_sum = ((-2147483648 + 10000 * i) - (-2147483648)) & 0xFFFFFFFF;
    	assert((top->overflow & 0b1) == 0 && "Overflow mismatch!");
 	assert(((top->S & 0xFFFFFFFF) == expected_sum) && "Sum mismatch");
    	std::cout << "Sum=" << (int)(top->S) << std::endl; 

    }
    printf("减数是最小负数时 tests passed!\n");


    printf("Overflow tests begin!\n");
    top->A = 2147483648 - 1;
    top->B = 2147483648 - 1;
    top->Cin = 0;
    top->eval();
    assert((top->overflow & 0b1) == 1 && "Overflow mismatch!");
    std::cout << "Overflow=" << (int)(top->overflow)<< std::endl;


    top->A = -2147483648;
    top->B = -2147483648;
    top->Cin = 0;
    top->eval();
    assert((top->overflow & 0b1) == 1 && "Overflow mismatch!");
    std::cout << "Overflow=" << (int)(top->overflow)<< std::endl;


    top->A = 2147483648 - 1;
    top->B = -2147483648;
    top->Cin = 1;
    top->eval();
    assert((top->overflow & 0b1) == 1 && "Overflow mismatch!");
    std::cout << "Overflow=" << (int)(top->overflow)<< std::endl;


    top->A = -2147483648;
    top->B = 2147483648 - 1;
    top->Cin = 1;
    top->eval();
    assert((top->overflow & 0b1) == 1 && "Overflow mismatch!");
    std::cout << "Overflow=" << (int)(top->overflow)<< std::endl;

    top->A = 2147483648 - 1;
    top->B = 100;
    top->Cin = 1;
    top->eval();
    assert((top->overflow & 0b1) == 0 && "Overflow mismatch!");
    std::cout << "Overflow=" << (int)(top->overflow)<< std::endl;

    printf("Overflow tests passed!\n");

    // 释放资源
    delete top;
    delete contextp;
    return 0;
}
