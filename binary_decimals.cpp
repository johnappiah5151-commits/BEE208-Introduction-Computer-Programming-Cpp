#include <iostream>
#include <string>
#include <cmath>

int main() {
    std::string binary;

    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    int decimal = 0;
    int length = binary.length();

    for (int i = 0; i < length; i++) {
        char bit = binary[i];

        if (bit == '1') {
            // Position from the right, raised as a power of 2
            decimal += std::pow(2, length - i - 1);
        } else if (bit != '0') {
            std::cout << "Invalid binary digit encountered: " << bit << std::endl;
            return 1;
        }
    }

    std::cout << "Decimal equivalent: " << decimal << std::endl;

    return 0;
}