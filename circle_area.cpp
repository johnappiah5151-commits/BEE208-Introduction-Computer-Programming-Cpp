#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    const double PI = 3.14159265358979;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = PI * pow(radius, 2);

    cout << "\nArea of the circle = " << PI << " * " << radius << "^2" << endl;
    cout << "Area = " << area << endl;

    return 0;
}