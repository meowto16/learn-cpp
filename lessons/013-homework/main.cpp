#include <iostream>

using namespace std;

void print_result(int a, int b, char operation, float result) {
  cout << "Результат: " << a << " " << operation << " " << b << " = " << result << endl;
}

int main() {
  int a;
  int b;
  char operation;

  cout << "Введите первое число: ";
  cin >> a;

  cout << "Введите второе число: ";
  cin >> b;

  cout << "Выберите оператор: "
    << endl << "+ (плюс)"
    << endl << "- (минус)"
    << endl << "* (умножение)"
    << endl << "/ (деление)"
    << endl << "% (остаток от деления)"
    << endl
    << endl << "Ваш оператор (знак): ";
  cin >> operation;

  switch (operation) {
    case '+':
      print_result(a, b, operation, a + b);
      break;
    case '-':
      print_result(a, b, operation, a - b);
      break;
    case '/':
      print_result(a, b, operation, (float)a / b);
      break;
    case '*':
      print_result(a, b, operation, a * b);
      break;
    case '%':
      print_result(a, b, operation, a % b);
      break;
    default:
      cout << "Введен неверный оператор, или введено неправильное число" << endl;
  }
}