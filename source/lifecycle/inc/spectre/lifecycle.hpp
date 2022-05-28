#ifndef _SPECTRE_LIFECYCLE_HPP_
#define _SPECTRE_LIFECYCLE_HPP_

#include <csignal>
#include <iostream>
#include <mutex>
#include <condition_variable>
#include <future>

#include "spectre_chess_config.h"
#include "spectre/uci.hpp"

namespace spectre
{

class Lifecycle
{
public:
  static std::int32_t Main(std::int32_t argc, char const *argv[]);

  static void SignalListener(int signum);

private:

  static std::mutex sigMutex_;

  static std::condition_variable sigVariable_;

  static std::int32_t sigvar_;
  
  static void Execute();

  static void DisplayName();

  static void WaitForSignal();

};

}

#endif