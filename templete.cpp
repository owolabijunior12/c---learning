#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int sumInt = add(3, 4);
    double sumDouble = add(2.5, 3.7);

    std::cout << "Sum (int): " << sumInt << std::endl;
    std::cout << "Sum (double): " << sumDouble << std::endl;

    return 0;
}

// template <typename T>: Template declaration.
// T add(T a, T b): Generic functio