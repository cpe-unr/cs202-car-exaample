//
// Created by Keith Lancaster on 3/2/21.
//

#include "racecar.h"
#include <iostream>


RaceCar::RaceCar(std::string sponsor, bool paddleShifters, bool turboCharger) : sponsor(sponsor),
                                                                                paddleShifters(paddleShifters),
                                                                                turboCharger(turboCharger) {};

RaceCar::RaceCar() {
    std::cout << "in the RaceCar ctor" << std::endl;
}

RaceCar::~RaceCar() {
    std::cout << "in the destr of the race car" << std::endl;
}

void RaceCar::goVroom() {
    std::cout << "My gas mileage is" << gasMileage << std::endl;
    std::cout << "racecar go vroom" << std::endl;
}

