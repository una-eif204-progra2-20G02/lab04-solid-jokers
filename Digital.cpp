//
// Created by Sebastian on 8/21/2020.
//

#include "Digital.h"

void Digital::replace() {
    cout << "This product can be replaced" << endl;
}

double Digital::discount() {
    double dis;
    dis= (calculatePriceWithTax()*0.15)-calculatePriceWithTax();
    return dis;
}

double Digital::calculatePriceWithTax()
{
    return getPrice() + (getPrice() * getTax());
}

Digital::Digital() {}

Digital::~Digital() {}