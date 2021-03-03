//
// Created by Keith Lancaster on 3/2/21.
//

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "tire.h"

class Car {
    int speed;
    std::string color;
    Tire tire;
protected:
    int gasMileage;
public:

    int getGasMileage() const;

    Car(int speed, int gasMileage, std::string color);

    Car();

    virtual ~Car();

    void drive();

};


#endif //CAR_H
