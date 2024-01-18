#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile("example.txt");

    if (outputFile.is_open()) {
        outputFile << "Hello, File I/O!" << std::endl;
        outputFile.close();
    } else {
        std::cout << "Unable to open the file." << std::endl;
    }

    return 0;
}

// std::ofstream: Output file stream.
// outputFile << "Hello, File I/O!" << std::endl;: Writing to the file.