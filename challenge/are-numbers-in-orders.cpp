// https://www.codewars.com/kata/56b7f2f3f18876033f000307
#include <vector>

bool isAscOrder(std::vector<int> arr)
{
    if (size(arr) <= 1) return true;
    int previous = arr[0];
  
    for (int i = 1; i < size(arr); i++) {
      int current = arr[i];
      
      if (current < previous) {
        return false;
      }
      
      previous = current;
    }
  
    return true;
}
