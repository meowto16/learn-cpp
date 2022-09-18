#include <iostream>
#include <ctime>

using namespace std;

void fill_array(int* const arr, const int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = rand() % 10;
  }
}

void show_array(const int* const arr, const int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
}

int main() {
  srand(time(NULL));

  int size = 5;
  int *firstArray =  new int[size];
  int *secondArray = new int[size];

  fill_array(firstArray, size);
  fill_array(secondArray, size);

  cout << "First array: ";
  show_array(firstArray, size);
  cout << endl;

  cout << "Second array: ";
  show_array(secondArray, size);
  cout << endl;
  cout << "====== " << endl;

  delete[] firstArray;
  firstArray = new int[size];

  for (int i = 0; i < size; i++) {
    firstArray[i] = secondArray[i];
  }

  cout << "First array: ";
  show_array(firstArray, size);
  cout << endl;

  cout << "Second array: ";
  show_array(secondArray, size);
  cout << endl;
  cout << "====== " << endl;

  delete[]secondArray;
  delete[]firstArray;
}