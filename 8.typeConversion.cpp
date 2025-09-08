#include <iostream>

int main(){

    // Implicit = automatic
    int y = 3.14; // automaticaly converted to 3 only
    double x = 3.14;

    std::cout << y << "\n";
    std::cout << x << "\n";

    // Explicit
    std::cout << (char) 100 << "\n"; // converting it to the character that have the value 100 in ascii -- character "d"

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
    std::cout << score << "%";


    return 0;
}