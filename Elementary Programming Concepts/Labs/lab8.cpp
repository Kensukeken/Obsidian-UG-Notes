#include <iostream>
#include <cmath> // For pow()
using namespace std;

int main() {
    int choice;
    double area;

    cout << "Welcome to the Calculate Area software!" << endl;
    cout << "What would you like to calculate the area of? \n" <<
            "1) Circle\n" <<
            "2) Square\n" <<
            "3) Rectangle\n" <<
            "Enter a number (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double r;
            cout << "Please enter the radius of the circle: ";
            cin >> r;

            if (r > 0) {
                area = 3.14 * r * r;
                cout << "The area of a circle with radius " << r << " is " << area << endl;
            } else {
                cout << "Error - Radius must be greater than zero." << endl;
            }
            break;
        }
        case 2: {
            double side;
            cout << "Please enter the side length of the square: ";
            cin >> side;

            if (side > 0) {
                area = pow(side, 2);
                cout << "The area of a square with side length " << side << " is " << area << endl;
            } else {
                cout << "Error - Side length must be greater than zero." << endl;
            }
            break;
        }
        case 3: {
            double length, width;
            cout << "Please enter the length of the rectangle: ";
            cin >> length;
            cout << "Please enter the width of the rectangle: ";
            cin >> width;

            if (length > 0 && width > 0) {
                area = length * width;
                cout << "The area of a rectangle with length " << length << " and width " << width << " is " << area << endl;
            } else {
                cout << "Error - Length and width must be greater than zero." << endl;
            }
            break;
        }
        default:
            cout << "Error, please select 1, 2, or 3." << endl;
            break;
    }

    return 0;
}
