#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter the first integer: ";
    std::cin >> a;

    std::cout << "Enter the second integer: ";
    std::cin >> b;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}