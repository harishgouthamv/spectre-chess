#include "uci/interface.h"

namespace uci
{

int InterfaceController::Init()
{
  string line;

  while (GetOption(line) && line != QUIT_CMD)
  {
    string_view response;
    if (line == UCI_MODE)
    {
      uciFlag_ = true;
      response = UCI_MODE_RESPONSE;
    }
    else if (line == IS_READY)
    {
      response = IS_READY_RESPONSE;
    }
    else
    {
      response = UNKNOWN_CMD;
    }
    cout << response << endl;
  }
  cout << QUIT_MSG << endl;
  return 0;
}

bool InterfaceController::GetOption(string& str)
{
  string line;
  getline(cin, line);
  line = regex_replace(line, regex("^\\s+"), string(""));
  line = regex_replace(line, regex("\\s+$"), string(""));
  line = regex_replace(line, regex("\\s{2,}"), string(" "));
  str = line;
  return true;
}

}
