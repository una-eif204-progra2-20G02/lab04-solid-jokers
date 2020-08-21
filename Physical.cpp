//
// Created by Sebastian on 8/21/2020.
//
#include <iomanip>
#include <fstream>
#include "Physical.h"

Physical::Physical(string name, double price, double itemWeight, string productDimensions) : Game(name, price,
                                                                                                  itemWeight,
                                                                                                  productDimensions) {
    setName(name);
    setPrice(price);
    setItemWeight(itemWeight);
    setProductDimensions(productDimensions);
}

void Physical::shipment() {
    cout << "This product can be shipped" << endl;
}

string Physical::toString() {
    stringstream s;
    s << toString() << endl;
    shipment();
    return s.str();
}

Physical::~Physical() {}