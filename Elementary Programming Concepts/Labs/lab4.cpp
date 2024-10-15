#include <iostream>
#include <iomanip>

int main() {
    // Input
    std::cout << "Enter a degree in Celsius: ";
    double Celsius;
    std::cin >> Celsius;

    // Fahrenheit
    double fahrenheit = (Celsius * 9.0 / 5.0) + 32;
    std::cout << std::fixed << std::setprecision(2) << Celsius << " Celsius is " << fahrenheit << " Fahrenheit" << std::endl;

    return 0;
}
