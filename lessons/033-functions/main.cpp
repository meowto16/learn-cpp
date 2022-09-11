#include <iostream>

using namespace std;

void foo() {
  cout << "Cout example" << endl;
}

int sum(int a, int b) {
  return a + b;
}

int main() {
  cout << sum(1, 2) << endl;
}