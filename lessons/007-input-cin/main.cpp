#include <iostream>
using namespace std;

int main() {
  setlocale (LC_ALL, "Rus");
  int var, var2;

  cout << "Введите два числа: ";
  cin >> var >> var2;

  cout << "Вы ввели числа " << var << " и " << var2 << endl;
}