#include <iostream>

using namespace std;

int main() {
  int user_number;

  cout << "Введите число: ";
  cin >> user_number;

  cout << "Ваше число - " << ((user_number % 2 == 0) ? "чётное" : "нечётное") << endl; 
}
