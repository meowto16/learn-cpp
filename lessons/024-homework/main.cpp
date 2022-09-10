#include <iostream>

using namespace std;

int main() {
  char const DRAWING_SYMBOL = '*';
  int length;
  int width;

  cout << "Введите длину прямоугольника (больше 0): ";
  cin >> length;

  if (length <= 0) {
    cout << "Неверная длина прямоугольника. Значение должно быть больше 0." << endl;
    return -1;
  }

  cout << "Введите ширину прямоугольника (значение больше 0): ";
  cin >> width;

  if (width <= 0) {
    cout << "Неверная ширина прямоугольника. Значение должно быть больше 0." << endl;
    return -1;
  }

  for (int i = 0; i < width; i++) {
    for (int j = 0; j < length; j++) {
      cout << DRAWING_SYMBOL;
    }

    cout << endl;
  }
}