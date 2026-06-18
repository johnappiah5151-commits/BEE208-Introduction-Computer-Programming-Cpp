#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (input == "hello") {
        std::cout << "Hello!" << std::endl;
    } else {
        std::cout << "Goodbye!" << std::endl;
    }

    return 0;
}