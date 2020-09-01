//
// Created by Sebastian on 8/21/2020.
//

#ifndef LAB04_SOLID_DIGITAL_H
#define LAB04_SOLID_DIGITAL_H

#include <iostream>
#include <sstream>
#include "IDiscount.h"
#include "IReplace.h"
#include "Game.h"

using namespace std;

class Digital : public IDiscount, IReplace, public Game {
public:
    Digital(string name, double price, double tax);

    double discount() override;

    string replace() override;

    string toString() override;

    ~Digital();
};


#endif //LAB04_SOLID_DIGITAL_H
