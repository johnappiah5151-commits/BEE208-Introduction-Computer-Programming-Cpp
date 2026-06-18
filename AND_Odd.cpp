#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number % 2 != 0 && number % 3 == 0) {
        std::cout << "The number is both odd and divisible by 3" << std::endl;
    } else {
        std::cout << "The number is not both odd and divisible by 3" << std::endl;
    }

    return 0;
}