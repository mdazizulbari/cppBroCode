#include <iostream>

int main() {
    for (int i = 1; i <= 3; i++) {               // outer loop
        for (int j = 1; j <= 5; j++) {           // inner loop
            std::cout << i << " x " << j << " = " << i * j << std::endl;
        }
        std::cout << "----" << std::endl;        // separator after each row
    }
    return 0;
}
