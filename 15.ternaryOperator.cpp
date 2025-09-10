#include <iostream>

int main(){

    int grade = 50;

    // grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";
    std::cout << (grade >= 60 ? "You pass!" : "You fail!");

    return 0;
}