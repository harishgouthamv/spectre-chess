#include "spectre/uci.hpp"

namespace spectre
{

void UCI::Initialize()
{
  isRunning_ = true;
}

void UCI::Run()
{
  std::cout << "Entry " << __func__ << std::endl;

  std::string icmd;

  do
  {
    if(!getline(std::cin, icmd))
    {
      icmd = "quit";
    }
    std::cout << "in: " << icmd << std::endl;

    std::string token;
    std::istringstream is(icmd);
    is >> std::skipws >> token;

    if(token == "quit")
    {
      isRunning_ = false;
    }

  }
  while(isRunning_);
  std::cout << "Exit " << __func__ << std::endl;
}

void UCI::RequestShutdown()
{
  std::cout << "Entry " << __func__ << std::endl;
  isRunning_ = false;
  std::cout << "Exit " << __func__ << std::endl;
}

void UCI::Shutdown()
{
  std::cout << "Entry " << __func__ << std::endl;

  std::cout << "Exit " << __func__ << std::endl;
}

}