#include <nvboard.h>
#include <Vtop.h>

static TOP_NAME top;

void nvboard_bind_all_pins(TOP_NAME* top);

static void single_cycle() {
      top.eval();
}


int main() {
  nvboard_bind_all_pins(&top);
  nvboard_init();


  while(1) {
    nvboard_update();
    single_cycle();
  }
}
