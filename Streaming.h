//
// Created by Sebastian on 8/21/2020.
//

#ifndef LAB04_SOLID_STREAMING_H
#define LAB04_SOLID_STREAMING_H
#include <iostream>
#include "IReplace.h"
#include "Game.h"

using namespace std;

class Streaming : public IReplace, Game {
public:
    Streaming(string name, double price, double itemWeight, string productDimensions);

    void replace() override;

    string toString() override;

    ~Streaming();

};


#endif //LAB04_SOLID_STREAMING_H
