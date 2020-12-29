#include <iostream>
#include <cstring>
#include <regex>

using namespace std;

namespace uci
{
/// @brief class shall be responsible for the external user interface.
class InterfaceController
{
private:
  /// @brief Request for UCI mode of operation.
  static constexpr string_view UCI_MODE = "uci";

  /// @brief Positive Response for UCI mode of operation.
  static constexpr string_view UCI_MODE_RESPONSE = "uciok";

  /// @brief Request to synchronize with GUI.
  static constexpr string_view IS_READY= "isready";

  /// @brief Positive Response to synchronize with GUI.
  static constexpr string_view IS_READY_RESPONSE = "readyok";

  /// @brief Generic log message command.
  static constexpr string_view UNKNOWN_CMD = "Unknown Command!";

  /// @brief Request to quit the program.
  static constexpr string_view QUIT_CMD = "quit";

  /// @brief Generic message to display when quitting the program.
  static constexpr string_view QUIT_MSG = "Quitting the program!!!";

  /// @brief flag to track the UCI mode of operation.
  bool uciFlag_ = false;

  /// @brief Get the command Request from UI.
  bool GetOption(string& str);

public:

  /// @brief Initialize the UCI mode of operation.
  /// @return Integer status code.
  int Init();
};

}
