#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number % 2 != 0) {
        std::cout << "Odd number" << std::endl;
    } else {
        std::cout << "Even number" << std::endl;
    }

    return 0;
}