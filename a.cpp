#include <iostream>
#include <string>

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (input.find('a') != std::string::npos) {
        std::cout << "Contains 'a'" << std::endl;
    } else {
        std::cout << "Does not contain 'a'" << std::endl;
    }

    return 0;
}