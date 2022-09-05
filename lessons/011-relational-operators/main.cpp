#include <iostream>

using namespace std;

int main() {
  int a = 1;
  int b = 2;
  int c = 10;
  int d = 100;
  int e = 1000;

  cout << (a < b) << endl;
  cout << (a > b) << endl;
  cout << (a <= b) << endl;
  cout << (a >= b) << endl;

  cout << (!(e < a) && (d > e)) << endl;
  cout << ((a < b) || (c < d)) << endl;
}