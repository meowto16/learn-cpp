#include <iostream>
#include <ctime>

using namespace std;

int main() {
  srand(time(NULL));
  int rows;
  int cols;

  cout << "Enter rows: ";
  cin >> rows;

  cout << "Enter columns: ";
  cin >> cols;

  int **arr = new int*[rows];

  for (int i = 0; i < rows; i++) {
    arr[i] = new int[cols];
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      arr[i][j] = rand() % 101;
    }
  }

  for (int i = 0; i < rows; i++) {
    cout << "== Row " << i << " ==" << endl;
    cout << "[ ";
    for (int j = 0; j < cols; j++) {
      cout << arr[i][j] << ", ";
    }
    cout << "]" << endl;
  }

  for (int i = 0; i < rows; i++) {
    delete [] arr[i];
  }

  delete[] arr;
}