#include <iostream>

int main() {
    double temperature;
    char unit;

    std::cout << "Enter temperature: ";
    std::cin >> temperature;

    std::cout << "Enter unit (C for Celsius, F for Fahrenheit): ";
    std::cin >> unit;

    if (unit == 'C' || unit == 'c') {
        // Convert Celsius to Fahrenheit
        double fahrenheit = (temperature * 9.0 / 5.0) + 32;
        std::cout << temperature << "°C = " << fahrenheit << "°F" << std::endl;
    } 
    else if (unit == 'F' || unit == 'f') {
        // Convert Fahrenheit to Celsius
        double celsius = (temperature - 32) * 5.0 / 9.0;
        std::cout << temperature << "°F = " << celsius << "°C" << std::endl;
    } 
    else {
        std::cout << "Invalid unit. Please enter 'C' or 'F'." << std::endl;
    }

    return 0;
}
