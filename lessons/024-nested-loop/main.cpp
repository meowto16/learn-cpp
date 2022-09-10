#include <iostream>

using namespace std;

int main() {
  for (int i = 1; i < 5; i++) {
    cout << "Сработал 1й цикл for. Итерация " << i << endl;

    for (int j = 1; j < 5; j++) {
      cout << "\tСработал второй цикл for. Итерация " << j << endl;
    }
  }
}