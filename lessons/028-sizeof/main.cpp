#include <iostream>
#include <string>

using namespace std;

int main() {
  int arr[4] = { 1, 2, 3, 5 };

  for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
    cout << arr[i] << endl;
  }
}