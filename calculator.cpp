#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Enter first integer: ";
    cin >> a;

    cout << "Enter second integer: ";
    cin >> b;

    cout << "\n--- Results ---" << endl;
    cout << "Sum:        " << a << " + " << b << " = " << (a + b) << endl;
    cout << "Difference: " << a << " - " << b << " = " << (a - b) << endl;
    cout << "Product:    " << a << " * " << b << " = " << (a * b) << endl;

    if (b != 0)
        cout << "Quotient:   " << a << " / " << b << " = " << (a / b) << endl;
    else
        cout << "Quotient:   Division by zero is undefined." << endl;

    return 0;
}