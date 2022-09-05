#include <iostream>

using namespace std;

int main() {
  int a;

  cout << "Введите число: ";
  cin >> a;

  if (a > 5) {
    cout << "Ваше число больше 5-ти" << endl;
  } else {
    cout << "Ваше число меньше 5-ти" << endl;
  }
}