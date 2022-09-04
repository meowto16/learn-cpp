#include <any>
#include <iostream>

using namespace std;

void ask(string question, int &var) {
  cout << question;
  cin >> var;
}

int main() {
  int a, b, c;

  ask("Введите первое число: ", a);
  ask("Введите второе число: ", b);
  ask("Введите третье число: ", c);

  int sum = a + b + c;
  int mult = a * b * c;
  float average = sum / 3.0;

  cout << "Вы ввели числа: " << a << ", " << b << ", " << c << endl;
  cout << "Сумма чисел: " << sum << endl;
  cout << "Произведение чисел: " << mult << endl;
  cout << "Среднее арифметическое чисел: " << average << endl;
}