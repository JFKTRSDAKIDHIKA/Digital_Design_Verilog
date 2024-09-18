  #include "Vmux41.h"
  #include "verilated.h"
  #include <stdio.h>
  #include <stdlib.h>
  #include <assert.h>

  int main(int argc, char** argv) {
      VerilatedContext* contextp = new VerilatedContext;
      contextp->commandArgs(argc, argv);
      Vmux41* top = new Vmux41{contextp};
	  for(int i = 0; i <= 10; i++ ){
	  top->D0 = rand() % 2;
	  top->D1 = rand() % 2;
	  top->D2 = rand() % 2;
	  top->D3 = rand() % 2;
	  top->S = rand() % 4;

	  top->eval();

	  if(top->S == 0)
             assert(top->Y == top->D0);
	  if(top->S == 1)
             assert(top->Y == top->D1);
	  if(top->S == 2)
             assert(top->Y == top->D2);
	  if(top->S == 3)
             assert(top->Y == top->D3);
	  }     
      printf("Tests passed!\n");

      delete top;
      delete contextp;
      return 0;
  }
