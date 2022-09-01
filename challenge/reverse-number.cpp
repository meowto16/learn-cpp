#include <string>
#include <iostream>

long long reverseNumber(long long n) {
  bool is_negative = n < 0;
  std::string n_string = std::to_string(n);
  std::reverse(n_string.begin(), n_string.end());
  
  long long result = std::stoll(n_string);
  
  return is_negative
    ? -result
    : result;
}

int main() {
  std::cout << reverseNumber(123) << std::endl;
  std::cout << reverseNumber(-321) << std::endl;
}