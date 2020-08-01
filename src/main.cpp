#include <cstdio>
#include <iostream>

#include "spectre_chess_config.h"

int main(int argc, char const *argv[]) {
  std::cout << "Hello World" << std::endl;
  if (argc < 2) {
    // report version
    std::cout << argv[0] << " Version " << SPECTRE_VERSION_MAJOR << "."
        << SPECTRE_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    // return 1;
  }
  return 0;
}
