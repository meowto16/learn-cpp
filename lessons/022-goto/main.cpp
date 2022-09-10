#include <iostream>

using namespace std;

int main() {
  cout << "Один" << endl;

  goto link;

  cout << "Два" << endl;

  link:

  cout << "Три" << endl;
  cout << "Четыре" << endl;
}