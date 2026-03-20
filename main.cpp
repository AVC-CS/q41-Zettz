#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159265358979;
    int choice;
    double width, height, radius, base;
    double area;

    cout << "Geometry Calculator\n";
    cout << "\t1. Calculate the Area of Circle\n";
    cout << "\t2. Calculate the Area of Rectangle\n";
    cout << "\t3. Calculate the Area of Triangle\n";
    cout << "\t4. Quit\n\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // TODO
    switch (choice)
    {    case 1:
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        area = PI * pow(radius, 2);
        break;
    case 2:
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << "Enter the height of the rectangle: ";
        cin >> height;
        area = width * height;
        break;
    case 3:
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        area = 0.5 * base * height;
        break;
    case 4:
        cout << "Program Stopped" << endl;
        return 0;
    default:
        cout << "Wrong Number" << endl;
        return 0;
    }

    cout << left << setprecision(2) << fixed;
    cout << "The area is " << area << endl;

    return 0;
}
