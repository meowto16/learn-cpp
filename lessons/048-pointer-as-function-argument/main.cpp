#include <iostream>

using namespace std;

void foo(int *pa) {
  (*pa)++;
}

int main() {
  int a = 0;
  cout << a << endl;

  foo(&a);

  cout << a << endl;
}