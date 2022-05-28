#include <iostream>
#include <cstdint>

#include "spectre/lifecycle.hpp"

std::int32_t main(std::int32_t argc, char const *argv[])
{
  spectre::Lifecycle::Main(argc, argv);
  return 0;
}
