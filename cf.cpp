#include <iostream>

int main () {

    // This program calculates the circumference of a circle
    const double pi = 3.14; 
    double radius = 10;
    double circumference = 2 * pi * radius;
    
    std::cout << "The circumference of the circle is: " << circumference << '\n';
    
    return 0;
}
