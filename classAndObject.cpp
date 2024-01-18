#include <iostream>

class Car {
public:
    std::string brand;
    int year;

    void displayInfo() {
        std::cout << year << " " << brand << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2022;

    myCar.displayInfo();

    return 0;
}

// class Car: Declaration of a class named Car.
// void displayInfo(): Member function (method) of the class.