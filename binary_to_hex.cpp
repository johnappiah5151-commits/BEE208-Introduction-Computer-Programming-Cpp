#include <iostream>
#include <string>
#include <bitset>

using namespace std;

// Converts a binary string to a decimal integer
int binaryToDecimal(const string& binary) {
    int decimal = 0;
    for (char bit : binary) {
        decimal = decimal * 2 + (bit - '0');
    }
    return decimal;
}

int main() {
    string binary;
    int choice;

    cout << "Enter a binary number: ";
    cin >> binary;

    // Convert binary -> decimal first, since hex/octal conversions build on it
    int decimal = binaryToDecimal(binary);

    cout << "\n--- Conversion Menu ---" << endl;
    cout << "1. Binary to Decimal" << endl;
    cout << "2. Binary to Hexadecimal" << endl;
    cout << "3. Binary to Octal" << endl;
    cout << "4. Show all conversions" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Decimal: " << decimal << endl;
            break;

        case 2:
            cout << "Hexadecimal: " << hex << uppercase << decimal << dec << endl;
            break;

        case 3:
            cout << "Octal: " << oct << decimal << dec << endl;
            break;

        case 4:
            cout << "Decimal: " << decimal << endl;
            cout << "Hexadecimal: " << hex << uppercase << decimal << dec << endl;
            cout << "Octal: " << oct << decimal << dec << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
            return 1;
    }

    return 0;
}