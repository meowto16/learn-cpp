#include <iostream>

using namespace std;

void foo(int a) {
  a = 1;
}

void foo2(int &a) {
  a = 2;
}

void foo3(int *a) {
  *a = 3;
}

int main() {
  int a = 0;

  foo(a);
  cout << a << endl;

  foo2(a);
  cout << a << endl;

  foo3(&a);
  cout << a << endl;
}
