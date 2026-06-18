#include <iostream>

int main() {
    int first, second;

    std::cout << "Enter the first integer: ";
    std::cin >> first;

    std::cout << "Enter the second integer: ";
    std::cin >> second;

    int larger = (first > second) ? first : second;

    std::cout << "The larger value is: " << larger << std::endl;

    return 0;
}