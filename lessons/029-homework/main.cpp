#include <iostream>
#include <ctime>

using namespace std;

int main() {
  srand(time(NULL));

  int arr[10];

  for (int i = 0; i < size(arr); i++) {
    while (true) {
      int candidate = rand() % 21;
      bool is_unique_number = true;

      for (int j = 0; j < size(arr); j++) {
        if (candidate == arr[j]) {
          is_unique_number = false;
          break;
        }
      }

      if (is_unique_number) {
        arr[i] = candidate;
        break;
      }
    }

    cout << arr[i] << endl;
  }
}