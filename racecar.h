//
// Created by Keith Lancaster on 3/2/21.
//

#ifndef UNTITLED1_RACECAR_H
#define UNTITLED1_RACECAR_H

#include "car.h"

class RaceCar : public Car {
    std::string sponsor;
    bool paddleShifters;
    bool turboCharger;
public:
    RaceCar(std::string sponsor, bool paddleShifters, bool turboCharger);
    RaceCar();
    ~RaceCar();

    void goVroom();
};

#endif //UNTITLED1_RACECAR_H
