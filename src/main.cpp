#include <iostream>

#include "spectre_chess_config.h"
#include "uci/interface.h"

using namespace std;

void displayName();

int main(int argc, char const *argv[]) {
  displayName();
  uci::InterfaceController controller;
  return controller.init();
}

void displayName()
{
  cout << "" << endl;
  cout << SPECTRE_BANNER_01 << endl;
  cout << SPECTRE_BANNER_02 << endl;
  cout << SPECTRE_BANNER_03 << endl;
  cout << SPECTRE_BANNER_04 << endl;
  cout << SPECTRE_BANNER_05 << endl;
  cout << SPECTRE_BANNER_06 << endl;
  cout << SPECTRE_BANNER_07 << endl;
  cout << SPECTRE_BANNER_08 << endl;
  cout << SPECTRE_BANNER_09 << endl;
  cout << SPECTRE_BANNER_10 << endl;
  cout << SPECTRE_BANNER_11 << endl;
  cout << SPECTRE_BANNER_12 << endl;
  cout << SPECTRE_BANNER_13 << endl;
  cout << "\t\t\tVersion: " << SPECTRE_VERSION_MAJOR << "." << SPECTRE_VERSION_MINOR << endl;
}
