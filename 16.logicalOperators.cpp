#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    // Logical AND
    if (a > 0 && b > 0) {
        cout << "Both a and b are positive" << endl;
    }

    // Logical OR
    if (a > 10 || b > 0) {
        cout << "At least one condition is true" << endl;
    }

    // Logical NOT
    if (!(a > b)) {
        cout << "a is NOT greater than b" << endl;
    }

    return 0;
}
