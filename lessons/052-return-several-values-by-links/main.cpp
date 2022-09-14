#include <iostream>

using namespace std;

void foo(int &a, int &b, int &c) {
  a *= 100;
  b /= 100;
  c %= 100;
}

int main() {
  int a = 1000, b = 1000, c = 1000;

  cout << a << " " << b << " " << c << " " << endl;

  foo(a, b, c);

  cout << a << " " << b << " " << c << " " << endl;
}