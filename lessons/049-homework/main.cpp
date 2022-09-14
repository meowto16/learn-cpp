#include <iostream>

using namespace std;

template<class T> 
void swap_variables(T *pa, T *pb) {
  T p_temporal = *pa;

  *pa = *pb;
  *pb = p_temporal;
}

template<class T>
void swap_variables(T &pa, T &pb) {
  T pc = pa;
  pa = pb;
  pb = pc;
}


int main() {
  int a = 1, b = 2;

  cout << "a == " << a << endl;
  cout << "b == " << b << endl;

  swap_variables(&a, &b);

  cout << "a == " << a << endl;
  cout << "b == " << b << endl;

  swap_variables(a, b);

  cout << "a == " << a << endl;
  cout << "b == " << b << endl;
}