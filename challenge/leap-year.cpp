#include <iostream>

int main() {
    int year;

    std::cout << "Input year:\n";
    std::cin >> year;

    if (year < 1000 || year >= 10000) {
        std::cout << "Invalid input. Year should have 4 digits\n";
    }
    else if (year % 4 == 0) {
        if (year % 100 == 0 && year % 400 != 0) {
            std::cout << "Not leap year\n";
        } else {
            std::cout << "Leap year\n";
        }
    }
    else {
        std::cout << "Not leap year\n";
    }
}