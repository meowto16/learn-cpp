#include <iostream>

using namespace std;

int main() {
  int a = 5;
  int *px = &a;
  int *px2 = &a;

  cout << px << endl;
  cout << *px << endl;
}
