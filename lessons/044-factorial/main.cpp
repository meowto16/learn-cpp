#include <iostream>

using namespace std;

int factorial_recursive(int N) {
  if (N == 0 || N == 1)
    return 1;

  return N * factorial_recursive(N - 1);
}

int factorial_loop(int N) {
  int result = 1;

  while (N > 0) {
    result *= N;
    N--;
  }

  return result;
}

int main() {
  cout << factorial_recursive(4) << endl;
  cout << factorial_loop(4) << endl;
}