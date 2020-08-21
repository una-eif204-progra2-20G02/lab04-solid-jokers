//
// Created by Sebastian on 8/21/2020.
//
#include <iostream>

#ifndef LAB04_SOLID_PHYSICAL_H
#define LAB04_SOLID_PHYSICAL_H

#include "IShipment.h"

using namespace std;

class Physical : public IShipment {

public:
    Physical();

    void shipment() override;

    ~Physical();
};


#endif //LAB04_SOLID_PHYSICAL_H
