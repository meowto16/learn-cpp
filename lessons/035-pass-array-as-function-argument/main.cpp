#include <iostream>

using namespace std;

void fill_array(int arr[], const int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = rand() % 10;
  }
}

void print_array(int arr[], const int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
}

int main() {
  const int SIZE = 10;
  int arr[SIZE];

  fill_array(arr, SIZE);
  print_array(arr, SIZE);
}