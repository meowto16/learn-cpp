#include <iostream>

using namespace std;

inline int sum(int a, int b) {
  return a + b;
}

int main() {
  cout << sum(1, 2) << endl;
}