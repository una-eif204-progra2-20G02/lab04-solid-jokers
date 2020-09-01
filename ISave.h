//
// Created by Sebastian on 9/1/2020.
//

#ifndef LAB04_SOLID_ISAVE_H
#define LAB04_SOLID_ISAVE_H

#include <iostream>
#include "Game.h"

using namespace std;

class ISave {
public:
    virtual void save(string filename, string save) = 0;

    ~ISave();
};

#endif //LAB04_SOLID_ISAVE_H
