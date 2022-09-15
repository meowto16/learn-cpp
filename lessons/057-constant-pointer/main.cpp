#include <iostream>

using namespace std;

void fill_array(int* const arr, const int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = rand() % 10;
  }
}

void show_array(const int* const arr, const int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << "\t";
  }
  cout << endl;
}

int main() {
  int size = 10;
  int arr[size];

  fill_array(arr, size);
  show_array(arr, size);
}