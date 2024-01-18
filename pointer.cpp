#include <iostream>

int main() {
    int number = 42;
    int* pointerToNumber = &number;

    std::cout << "Value: " << *pointerToNumber << std::endl;

    return 0;
}

// int* pointerToNumber: Declaration of a pointer to an integer.
// &number: Taking the address of the variable number.
// *pointerToNumber: Dereferencing the pointer to access the value it points to.