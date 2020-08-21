//
// Created by Sebastian on 8/21/2020.
//
#include <iostream>

#ifndef LAB04_SOLID_PHYSICAL_H
#define LAB04_SOLID_PHYSICAL_H

#include "IShipment.h"
#include "Game.h"
using namespace std;

class Physical : public IShipment, Game {

public:
    Physical(string name, double price, double itemWeight, string productDimensions);

    void shipment() override;

    ~Physical();

    string toString() override;

};


#endif //LAB04_SOLID_PHYSICAL_H
