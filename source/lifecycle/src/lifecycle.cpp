#include "spectre/lifecycle.hpp"

namespace spectre
{

std::mutex Lifecycle::sigMutex_{};

std::condition_variable Lifecycle::sigVariable_{};

std::int32_t Lifecycle::sigvar_{0};


std::int32_t Lifecycle::Main(std::int32_t argc, char const *argv[])
{
  DisplayName();
  Execute();
  return 0;
}

void Lifecycle::Execute()
{
  std::cout << "Entry " << __func__ << std::endl;
  signal(SIGINT, Lifecycle::SignalListener);
  UCI uci;
  uci.Initialize();
  auto urun = std::async(&spectre::UCI::Run, &uci);
  //WaitForSignal();
  //uci.RequestShutdown();
  urun.wait();
  uci.Shutdown();
}

void Lifecycle::SignalListener(int signum)
{
  std::cout << "Entry " << __func__ << std::endl;
  std::unique_lock<std::mutex> lck(sigMutex_);
  std::cout << "Received the Signal: " << signum << std::endl;
  sigvar_ = signum;
  sigVariable_.notify_all();
}

void Lifecycle::WaitForSignal()
{
  std::cout << "Entry " << __func__ << std::endl;
  std::unique_lock<std::mutex> lck(sigMutex_);
  sigVariable_.wait(lck, [](){return Lifecycle::sigvar_ != 0;});
}

void Lifecycle::DisplayName()
{
  std::cout << "" << std::endl;
  std::cout << SPECTRE_BANNER_01 << std::endl;
  std::cout << SPECTRE_BANNER_02 << std::endl;
  std::cout << SPECTRE_BANNER_03 << std::endl;
  std::cout << SPECTRE_BANNER_04 << std::endl;
  std::cout << SPECTRE_BANNER_05 << std::endl;
  std::cout << SPECTRE_BANNER_06 << std::endl;
  std::cout << SPECTRE_BANNER_07 << std::endl;
  std::cout << SPECTRE_BANNER_08 << std::endl;
  std::cout << SPECTRE_BANNER_09 << std::endl;
  std::cout << SPECTRE_BANNER_10 << std::endl;
  std::cout << SPECTRE_BANNER_11 << std::endl;
  std::cout << SPECTRE_BANNER_12 << std::endl;
  std::cout << SPECTRE_BANNER_13 << std::endl;
  std::cout << "\t\t\tVersion: " << SPECTRE_VERSION_MAJOR << "." << SPECTRE_VERSION_MINOR << std::endl;
}

}