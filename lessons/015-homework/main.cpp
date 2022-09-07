// Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователе.

#include <iostream>

using namespace std;

int main() {
  int rangeBegin;
  int rangeEnd;
  int odd_or_even;

  cout << "Введите начало диапазона (число больше 0): ";
  cin >> rangeBegin;

  if (rangeBegin <= 0) {
    cout << "Начало диапазона должно быть больше 0" << endl;
    cout << "- Введено: " << endl;
    cout << "-- Начало диапазона: " << rangeBegin << endl;
    return 0;
  }

  cout << "Введите конец диапазона (число больше начала диапазона): ";
  cin >> rangeEnd;

  if (rangeEnd <= rangeBegin) {
    cout << "Конец диапазона должен быть больше начала диапазона" << endl;
    cout << "- Введено: " << endl;
    cout << "-- Начало диапазона: " << rangeBegin << endl;
    cout << "-- Конец диапазона: " << rangeEnd << endl;
    return 0;
  }

  cout << "Укажите какие числа нужны (четные/нечетные)" 
    << endl << "- 0 (Четные)"
    << endl << "- 1 (Нечетные)"
    << endl
    << "Введите 0 или 1: ";
  cin >> odd_or_even;

  if (odd_or_even != 0 && odd_or_even != 1) {
    cout << "Нужно ввести 0 или 1. Не удается понять нужны (четные или нечетные)";
    return 0;
  }

  cout << endl;

  int idx;
  int sum = 0;

  if (odd_or_even == 0) {
    idx = (rangeBegin % 2 == 0)
      ? rangeBegin
      : rangeBegin + 1;
  }

  if (odd_or_even == 1) {
    idx = (rangeBegin % 2 != 0)
      ? rangeBegin
      : rangeBegin + 1;
  }

  while (idx <= rangeEnd) {
    cout << idx << " ";
    sum += idx;

    idx += 2;
  }

  cout << endl << "Сумма всех чисел в диапазоне: " << sum << endl;
}