#include <iostream>

int main() {

    int pin = 0;
    int tries = 0;

    std::cout << "BANK OF CODECADEMY\n";

    while (tries < 3) {
        std::cout << "Enter your PIN: ";
        std::cin >> pin;
        tries++;

        if (pin == 1234) {
            std::cout << "PIN accepted!\n";
            std::cout << "You now have access.\n";
            break;
            return 0;
        }
    }

    std::cout << "Sorry, you ran out of attempts to enter a password\n";
}