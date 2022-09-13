#include <iostream>

using namespace std;

int main() {
  const int SIZE = 5;
  int arr[SIZE] = { 4, 55, 79, 1, 4 };

  for (int i = 0; i < SIZE; i++) {
    cout << arr[i] << endl;
  }

  int *pArr = arr;

  cout << "==========" << endl;

  for (int i = 0; i < SIZE; i++) {
    cout << pArr[i] << endl;
  }

  cout << "==========" << endl;

  for (int i = 0; i < SIZE; i++) {
    cout << (arr + i) << endl;
  }
}