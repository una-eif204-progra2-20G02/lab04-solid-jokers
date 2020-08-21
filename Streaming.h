//
// Created by Sebastian on 8/21/2020.
//

#ifndef LAB04_SOLID_STREAMING_H
#define LAB04_SOLID_STREAMING_H

#include "IReplace.h"

class Streaming : public IReplace {
public:
    Streaming();

    void replace() override;

    ~Streaming();

};


#endif //LAB04_SOLID_STREAMING_H
