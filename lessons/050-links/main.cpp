#include <iostream>

using namespace std;

int main() {
  int a = 5;

  int *pa = &a;

  int &aref = *pa;

  int *ppa = &aref;

  cout << "a\t" << a << endl;
  *ppa = 12;
  cout << "a\t" << a << endl;
}