//Разработать программу, которая выводит на экран линию из символов. 
// Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь. 

#include <iostream>

using namespace std;

int main() {
  char symbol;
  char line_type;
  int symbols_count;

  cout << "Введите нужный символ: ";
  cin >> symbol;

  cout << "Сколько раз будем выводить? (число): ";
  cin >> symbols_count;

  if (symbols_count <= 0) {
    cout << "- Необходимо ввести число больше 0" << endl;

    return 0;
  }

  cout << "Вертикально или горизонтально?"
    << endl << "- H (Горизонтально, по-умолчанию)"
    << endl << "- V (Вертикально)"
    << endl << endl
    << "Введите V или H: ";
  cin >> line_type;

  cout << endl << "Результат: " << endl;

  int idx = 0;
  while (idx < symbols_count) {
    cout << symbol << ((line_type == 'V' || line_type == 'v') ? "\n" : "");
    idx++;
  }

  cout << endl;
}