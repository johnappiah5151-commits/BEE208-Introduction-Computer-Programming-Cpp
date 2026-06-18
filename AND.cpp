#include <iostream>
#include <cctype>

int main() {
    char ch;

    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (isalpha(ch) && isupper(ch)) {
        std::cout << "Uppercase letter" << std::endl;
    } else {
        std::cout << "Not an uppercase letter" << std::endl;
    }

    return 0;
}