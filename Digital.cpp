//
// Created by Sebastian on 8/21/2020.
//

#include "Digital.h"
#include <iomanip>
#include <fstream>

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

Digital::Digital(string name, double price, double itemWeight, string productDimensions) : Game(name, price, itemWeight,
                                                                                                productDimensions) {
    setName(name);
    setPrice(price);
    setItemWeight(itemWeight);
    setProductDimensions(productDimensions);
}

string Digital::toString() {
    stringstream s;
    s << toString() << endl;
    discount();
    replace();
    return s.str();
}

Digital::~Digital() {}