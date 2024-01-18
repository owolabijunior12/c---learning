#include <iostream>

int main() {
    int* dynamicNumber = new int; // Allocate memory for an integer
    *dynamicNumber = 7;

    std::cout << "Dynamic Number: " << *dynamicNumber << std::endl;

    delete dynamicNumber; // Deallocate memory

    return 0;
}

// new int: Allocates memory for an integer.
// delete dynamicNumber: Deallocates the memory.