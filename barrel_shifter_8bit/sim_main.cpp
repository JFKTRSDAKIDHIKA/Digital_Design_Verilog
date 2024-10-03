#include "Vbarrel_shifter_8bit.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    
    // Create instance of the module
    Vbarrel_shifter_8bit* top = new Vbarrel_shifter_8bit{contextp};
    
    // Randomized testing for different shift amounts and control signals
    for(int i = 0; i < 100; i++) { // Run 100 random tests
        // Generate random inputs
        top->din = rand() % 256; // Random 8-bit input
        top->shamt = rand() % 8; // Random shift amount (3 bits)
        top->L_R = rand() % 2;   // Random left/right shift control
        top->A_L = rand() % 2;   // Random arithmetic/logic control

        // Evaluate the design
        top->eval();

        // Calculate expected result manually for assertion checking
        uint8_t expected_result;
        uint8_t fill_bit = top->A_L ? (top->din >> 7) & 1 : 0;  // Arithmetic or logical fill bit
        if (top->L_R == 1) {
            // Left shift
            expected_result = top->din << top->shamt;
        } else {
            // Right shift
	    uint8_t fill_bits = (fill_bit == 1) ? (0xFF << (8 - top->shamt)) : 0;
            expected_result = (top->din >> top->shamt) | fill_bits; // Fill for arithmetic or logical right shift
        }


        // Print debug information for each test
        printf("Test %d: din=%02X, shamt=%d, L_R=%d, A_L=%d -> dout=%02X (expected=%02X)\n",
               i, top->din, top->shamt, top->L_R, top->A_L, top->dout, expected_result);

        // Check the result with assertion
        assert(top->dout == expected_result);
    }


    printf("All tests passed!\n");

    // Clean up
    delete top;
    delete contextp;
    
    return 0;
}

