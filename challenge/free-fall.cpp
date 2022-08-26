#include <iostream>
#include <cmath>

int main() {
    double height;

    double earth_ga = 9.80665;
    double mars_ga = 3.71;

    std::cout << "Enter height (meter):\n";
    std::cin >> height;

    std::cout << "Height: " << height << " meter(s)\n";

    std::cout << "\n";

    double earth_free_fall_time = std::sqrt((2 * height) / earth_ga);
    double mars_free_fall_time = std::sqrt((2 * height) / mars_ga);

    std::cout << "Free fall time on Earth: " << earth_free_fall_time << " seconds.\n";
    std::cout << "Free fall time on Mars: " << mars_free_fall_time << " seconds.\n";
}