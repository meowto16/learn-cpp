// https://www.codewars.com/kata/5513795bd3fafb56c200049e

#include <vector>
#include <iostream>

std::vector<int> countBy(int n, int multiplies) {
    std::vector<int> v;

    for (int i = n; i <= multiplies * n; i+= n) {
        v.push_back(i);
    }

    return v;
}

int main() {
    std::vector<int> res = countBy(1, 10);

    for (auto const& c : res)
        std::cout << c << ' ';
}