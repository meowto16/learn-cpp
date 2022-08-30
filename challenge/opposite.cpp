// https://www.codewars.com/kata/56dec885c54a926dcd001095/

#include <iostream>

int opposite(int number) {
    return -number;
}

int main() {
    int result = opposite(5);

    std::cout << result << std::endl;
}