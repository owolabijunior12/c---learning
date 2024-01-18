#include <iostream>

int main() {
    try {
        int result = 10 / 0; // Division by zero
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

// try: Block where exceptions are monitored.
// catch: Block that handles the exception.