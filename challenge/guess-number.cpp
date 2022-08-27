#include <iostream>
#include <random>

int main() {
    int guess;
    int guess_answer = (rand() % 10) + 1;

    int tries = 0;
    int max_tries = 5;

    std::cout << "I have a number 1-10. You have " << max_tries << " attempts.\n";

    while (guess != guess_answer && tries < max_tries) {
        std::cout << "Enter a number: ";
        std::cin >> guess;
        tries++;
    }

    if (guess == guess_answer) {
        std::cout << "You won!\n";
        return 1;
    }

    if (tries == max_tries) {
        std::cout << "Sorry, but you ran out of attempts.\n";
        std::cout << "Answer: " << guess_answer << "\n";
        return 0;
    }

}