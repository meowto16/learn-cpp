// https://www.codewars.com/kata/515f51d438015969f7000013/cpp

#include <vector>
#include <cstdlib>

std::vector<std::vector<int>> pyramid(std::size_t n) {
  int level = n;
  std::vector<std::vector<int>> pyramid_arr = {};

  while (level > 0) {
    std::vector<int> level_elements;

    for (int i = 0; i < n - level + 1; i++) {
      level_elements.push_back(1);
    }
    
    pyramid_arr.push_back(level_elements);
    
    level--;
  }
  
  return pyramid_arr;
}
