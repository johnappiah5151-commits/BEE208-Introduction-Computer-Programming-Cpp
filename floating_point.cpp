#include <iostream>

int main() {
    double first, second;

    std::cout << "Enter the first floating point number: ";
    std::cin >> first;

    std::cout << "Enter the second floating point number: ";
    std::cin >> second;

    double larger = (first > second) ? first : second;

    std::cout << "The larger value is: " << larger << std::endl;

    return 0;
}