#include "uci/interface.h"

namespace uci
{

int InterfaceController::init()
{
  string line;

  while (getline(cin, line) && line != QUIT_CMD)
  {
    if (line == UCI_MODE)
    {
      uciFlag_ = true;
      cout << UCI_MODE_RESPONSE << endl;
    }
    else if (line == IS_READY)
    {
      cout << IS_READY_RESPONSE << endl;
    }
    else
    {
      cout << UNKNOWN_CMD << endl;
    }
  }
  cout << QUIT_MSG << endl;
  return 0;
}

}
