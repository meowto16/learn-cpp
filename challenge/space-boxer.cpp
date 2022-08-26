#include <iostream>

int main() {
    double weight;
    double weight_on_planet;
    int planet;

    std::cout << "Hi, Little Mac! What is your Earth weight (kg)? Enter:\n";
    std::cin >> weight;

    std::cout << "\nI have information for the following planets:\n\n";
    std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
    std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";

    std::cout << "OK. Now enter planet number:\n";
    std::cin >> planet;

    switch (planet) {
        case 1:
            weight_on_planet = weight * 0.38;
            break;
        case 2:
            weight_on_planet = weight * 0.91;
            break;
        case 3:
            weight_on_planet = weight * 0.38;
            break;
        case 4:
            weight_on_planet = weight * 2.34;
            break;
        case 5:
            weight_on_planet = weight * 1.06;
            break;
        case 6:
            weight_on_planet = weight * 0.92;
            break;
        case 7:
            weight_on_planet = weight * 1.19;
            break;
        default:
            weight_on_planet = weight;
    }

    std::cout << "Your weight on this planet is " << weight_on_planet << " kg.\n";
}