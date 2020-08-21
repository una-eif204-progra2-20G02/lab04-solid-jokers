//
// Created by Sebastian on 8/21/2020.
//

#include "Streaming.h"
#include <iomanip>
#include <fstream>

void Streaming::replace() {
    cout << "This product can be replaced" << endl;
}

Streaming::Streaming(string name, double price, double itemWeight, string productDimensions) : Game(name, price,
                                                                                                    itemWeight,
                                                                                                    productDimensions) {
    setName(name);
    setPrice(price);
    setItemWeight(itemWeight);
    setProductDimensions(productDimensions);
}

string Streaming::toString() {
    stringstream s;
    s << toString() << endl;
    replace();
    return s.str();
}

Streaming::~Streaming() {}