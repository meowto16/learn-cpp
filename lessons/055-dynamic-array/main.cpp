#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
  srand(time(NULL));

  int size = 0;
  cout << "Enter array size: ";
  cin >> size;
  int *arr = new int[size];

  for (int i = 0; i < size; i++) {
    arr[i] = rand() % 101;
  }

  for (int i = 0; i < size; i++) {
    cout << "Ячейка памяти: " << (arr + i) << ". Значение: " << arr[i] << endl;
  }

  delete [] arr;
}