#include <iostream>
#include <iomanip> // For std::setw and std::setprecision
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (9.0 / 5) * celsius + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (5.0 / 9) * (fahrenheit - 32);
}

int main() {
    cout << "Celsius  Fahrenheit   |  Fahrenheit  Celsius" << endl;
    cout << "--------------------------------------------" << endl;

    double celsius = 40.0;
    double fahrenheit = 120.0;

    while (celsius >= 31.0) {
        double fahrenheitResult = celsiusToFahrenheit(celsius);
        double celsiusResult = fahrenheitToCelsius(fahrenheit);

        // Use std::setw for formatting the output
        cout << setw(8) << fixed << setprecision(1) << celsius
             << setw(12) << fixed << setprecision(1) << fahrenheitResult
             << " |  "
             << setw(11) << fixed << setprecision(1) << fahrenheit
             << setw(6) << fixed << setprecision(2) << celsiusResult << endl;

        celsius--;
        fahrenheit -= 10;
    }

    return 0;
}
