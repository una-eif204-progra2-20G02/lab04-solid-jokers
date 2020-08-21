//
// Created by Sebastian on 8/21/2020.
//

#ifndef LAB04_SOLID_DIGITAL_H
#define LAB04_SOLID_DIGITAL_H
#include "iostream"
#include "IDiscount.h"
#include "IReplace.h"

using namespace std;
class Digital : public IDiscount, IReplace {
public:
    Digital();

    void discount() override;

    void replace() override;

    ~Digital();
};


#endif //LAB04_SOLID_DIGITAL_H
