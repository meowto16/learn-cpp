#include <iostream>
#include <ctime>

using namespace std;

int main() {
  srand(time(NULL));

  int a = rand() % 13 + 23;

  cout << a << endl;

  a = rand() % 13 + 23;

  cout << a << endl;
}