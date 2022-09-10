#include <iostream>

using namespace std;

int main() {
  char const DRAWING_SYMBOL = '*';
  int length;
  int width;
  int rectangle_type = 1;

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

  cout << "Выберите тип прямоугольника: "
    << endl << "1. Только контур"
    << endl << "2. Контур + закраска"
    << endl << "Введите значение: ";
  cin >> rectangle_type;

  switch (rectangle_type) {
    case 1:
        for (int i = 0; i < width; i++) {
          for (int j = 0; j < length; j++) {
            bool is_point_inside = (i > 0 && i < width - 1) && (j > 0 && j < length - 1);

            cout << (is_point_inside ? ' ' : DRAWING_SYMBOL);
          }
          cout << endl;
        }
      break;
    case 2:
      for (int i = 0; i < width; i++) {
        for (int j = 0; j < length; j++) {
          cout << DRAWING_SYMBOL;
        }
        cout << endl;
      }
      
      break;
    default:
      cout << "Выбран неверный тип прямоугольника" << endl;
      return -1;
  }
}