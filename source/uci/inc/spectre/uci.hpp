#ifndef _SPECTRE_UCI_HPP_
#define _SPECTRE_UCI_HPP_

#include <iostream>
#include <mutex>
#include <condition_variable>

namespace spectre
{

class UCI
{
public:
  UCI()=default;

  ~UCI()=default;

  void Initialize();

  void Run();

  void RequestShutdown();

  void Shutdown();

private:
  std::mutex shutdownMutex_{};
  
  std::condition_variable shutdownVar_{};
  
  bool isRunning_{false};

};

}
#endif // _SPECTRE_UCI_HPP_