#include <iostream>

int main() {
    int number;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number > 0 && (number & (number - 1)) == 0) {
        std::cout << number << " is a power of 2" << std::endl;
    } else {
        std::cout << number << " is not a power of 2" << std::endl;
    }

    return 0;
}