#include <iostream>
#include <cstring>

using namespace std;

namespace uci
{

class InterfaceController
{
private:
  static constexpr string_view UCI_MODE = "uci";

  static constexpr string_view UCI_MODE_RESPONSE = "uciok";

  static constexpr string_view IS_READY= "isready";

  static constexpr string_view IS_READY_RESPONSE = "readyok";

  static constexpr string_view UNKNOWN_CMD = "Unknown Command!";

  static constexpr string_view QUIT_CMD = "quit";

  static constexpr string_view QUIT_MSG = "Quitting the program!!!";

  bool uciFlag_ = false;

public:
  int init();
};

}
