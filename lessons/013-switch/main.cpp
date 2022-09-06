#include <iostream>

using namespace std;

int main() {
  int a = 1;

  switch (a) {
    case 1:
      cout << "case 1" << endl;
      [[fallthrough]];
    case 2:
      cout << "case 2" << endl;
      break;
    default:
      cout << "case default" << endl;
  }
}