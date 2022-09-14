#include <iostream>

using namespace std;

template<class T>
void swap_variables(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int a = 10, b = 1000;
  double ad = 5.0, bd = 15.0;
  string as = "as", bs = "bs";

  cout << "Int: a = " << a << ", b = " << b << endl;
  cout << "Double: ad = " << ad << ", bd = " << bd << endl;
  cout << "String: as = " << as << ", bs = " << bs << endl;

  cout << "=== Swapping variables ===" << endl;
  swap_variables(a, b);
  swap_variables(ad, bd);
  swap_variables(as, bs);

  cout << "Int: a = " << a << ", b = " << b << endl;
  cout << "Double: ad = " << ad << ", bd = " << bd << endl;
  cout << "String: as = " << as << ", bs = " << bs << endl;
}