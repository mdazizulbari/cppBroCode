#include <iostream>

int main() {
    std::cout << "--- Example of break ---" << std::endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            std::cout << "Breaking at i = " << i << std::endl;
            break;  // exit the loop completely
        }
        std::cout << "i = " << i << std::endl;
    }

    std::cout << "\n--- Example of continue ---" << std::endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            std::cout << "Skipping i = " << i << std::endl;
            continue;  // skip only this iteration
        }
        std::cout << "i = " << i << std::endl;
    }

    return 0;
}
