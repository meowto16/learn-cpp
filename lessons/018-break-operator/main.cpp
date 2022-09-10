#include <iostream>

using namespace std;

int main() {
  for (int i = 0; true; i++) {
    cout << i << endl;
    if (i == 5) break;
  }
}