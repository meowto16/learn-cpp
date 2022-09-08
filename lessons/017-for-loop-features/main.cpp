#include <iostream>

using namespace std;

int main() {
  for (int i = 0, j = 10; i < 10 && j >= 5; i++, j--) {
    cout << "Переменная i = " << i << ". Переменная j: " << j << endl;
  }
}