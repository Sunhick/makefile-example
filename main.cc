/**
 * main.cc
 *
 * Copyright (c) 2017 Sunil
 */
#include <iostream>

#include "./util.h"
#include "graphics/graphics.h"
#include "math/math.h"

using std::cout;
using std::endl;

int main([[maybe_unused]] int argc, [[maybe_unused]] char **argv) {
  cout << "Hello world from main" << endl;
  util::console c("runner");
  c.print("writing using console");

  graphics_init();
  std::cout << "Graphics initialized @ " << std::hex << vga_address << "\n";

  math::adder a;
  cout << "10 + 90 = " << a.add(10, 90) << endl;
  return 0;
}
