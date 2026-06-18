#include <iostream>

int main() {
    int first, second;

    std::cout << "Enter the first integer: ";
    std::cin >> first;

    std::cout << "Enter the second integer: ";
    std::cin >> second;

    if (first > second) {
        std::cout << "First value is greater" << std::endl;
    } else {
        std::cout << "Second value is greater" << std::endl;
    }

    return 0;
}