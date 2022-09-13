#include <iostream>

using namespace std;

int foo(int a) {
  if (a < 1)
    return 0;

  cout << a << endl;
  return foo(--a);
}

int main() {
  foo(5);
}