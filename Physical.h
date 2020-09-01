//
// Created by Sebastian on 8/21/2020.
//
#include <iostream>

#ifndef LAB04_SOLID_PHYSICAL_H
#define LAB04_SOLID_PHYSICAL_H

#include "IShipment.h"
#include "Game.h"
using namespace std;

class Physical : IShipment, public Game {

public:
    Physical(const string& name, double price,double tax, double itemWeight, const string& productDimensions);

    string shipment() override;

    ~Physical();

    string toString() override;

};


#endif //LAB04_SOLID_PHYSICAL_H
