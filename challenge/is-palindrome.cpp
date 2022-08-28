#include <iostream>
#include <cmath>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
    for (int i = 0; i < std::floor(text.size() / 2); i++) {
        char first = text[i];
        char second = text[text.size() - 1 - i];

        if (first != second) {
            return false;
        }
    }

    return true;
}

int main() {

    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";

}