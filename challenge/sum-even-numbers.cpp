#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {2, 4, 3, 6, 1, 9};
    double total = 0;

    for (int i = 0; i < v.size(); i++) {
        int element = v[i];
        bool is_even = element % 2 == 0;

        if (is_even) {
            total += element;
        }
    }

    std::cout << "Total: " << total << std::endl;
}