#include <iostream>

int main() {
    int x = 10;

    if (x > 0) {
        std::cout << "Positive number" << std::endl;
    } else if (x < 0) {
        std::cout << "Negative number" << std::endl;
    } else {
        std::cout << "Zero" << std::endl;
    }

    return 0;
}
