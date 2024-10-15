#include <iostream>
#include <cmath>

int main() {
    double area;
    double volume;
    double radius, length;
    std::cout << "Enter the radius and length of a cylinder: " << std::endl;
    std::cin >> radius >> length;

    area = M_PI * radius * radius;
    std::cout << "The area is " << area << std::endl;

    volume = area * length;
    std::cout << "The volume is " << volume << std::endl;

    return 0;
}
