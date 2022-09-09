#include <vector>
#include <algorithm>

bool small_enough(std::vector<int> arr, int limit) {
  return all_of(arr.begin(), arr.end(), [limit](int number) {
    return number <= limit;
  });
}