//
// Created by Keith Lancaster on 3/2/21.
//
#include <iostream>
#include "car.h"

int Car::getGasMileage() const {
    return gasMileage;
}

Car::Car(int speed, int gasMileage, std::string color) : speed(speed), gasMileage(gasMileage), color(color) {};

Car::Car() {
    std::cout << "in the car ctor" << std::endl;
};

 Car::~Car() {
    std::cout << "in the destr" << std::endl;
}

void drive() {
    std::cout << "lets drive" << std::endl;
}
