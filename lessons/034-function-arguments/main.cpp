#include <iostream>

using namespace std;

int foo(int a) {
  return ++a;
}

int main() {
  int value = 1;

  value = foo(value);

  cout << value << endl;
}