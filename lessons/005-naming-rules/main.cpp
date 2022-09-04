#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "Rus");

  // тип_данных имя_переменной
  double a = 1.1551;
  char b = 'f';
  bool c = true;
  float d = 1.52;
  unsigned short g = 65535;

  cout << a << b << " " << c << " " << d << " " << g << endl;
}