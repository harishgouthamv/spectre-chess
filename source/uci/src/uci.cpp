#include "spectre/uci.hpp"

namespace spectre
{

void UCI::Initialize()
{
  std::unique_lock lck{shutdownMutex_};
  std::cout << "Entry " << __func__ << std::endl;

  isRunning_ = true;
  std::cout << "Exit " << __func__ << std::endl;
}

void UCI::Run()
{
  std::unique_lock lck{shutdownMutex_};
  std::cout << "Entry " << __func__ << std::endl;
  while(isRunning_)
  {
    shutdownVar_.wait(lck);
  }
  std::cout << "Exit " << __func__ << std::endl;
}

void UCI::RequestShutdown()
{
  std::unique_lock lck{shutdownMutex_};
  std::cout << "Entry " << __func__ << std::endl;
  isRunning_ = false;
  shutdownVar_.notify_all();
  std::cout << "Exit " << __func__ << std::endl;
}

void UCI::Shutdown()
{
  std::cout << "Entry " << __func__ << std::endl;

  std::cout << "Exit " << __func__ << std::endl;
}

}