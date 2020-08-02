#include <iostream>

#include "uci/interface.h"

using namespace std;

int main(int argc, char const *argv[]) {
  uci::InterfaceController controller;
  return controller.init();
}
