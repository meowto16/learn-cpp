#include <iostream>

using namespace std;

void foo(int a = 0) {
  for (int i = 0; i < a; i++) {
    cout << "#" << endl;
  }
}

int main() {
  foo();
}