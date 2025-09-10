#include <iostream>

int main(){

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "It is January";
        break;
    case 2:
        std::cout << "It is Feb";
        break;
    case 3:
        std::cout << "It is Mar";
        break;
    
    default:
        std::cout << "Please enter in only number (1-3)";
    }

    return 0;
}