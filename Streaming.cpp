//
// Created by Sebastian on 8/21/2020.
//

#include "Streaming.h"
#include <iomanip>
#include <fstream>

void Streaming::replace() {
    cout << "This product can be replaced" << endl;
}

Streaming::Streaming(string name, double price, double itemWeight, string productDimensions, double tax) : Game(name,
                                                                                                                price,
                                                                                                                itemWeight,
                                                                                                                productDimensions,
                                                                                                                tax) {
    setName(name);
    setPrice(price);
    setItemWeight(itemWeight);
    setProductDimensions(productDimensions);
    setTax(tax);
}

string Streaming::toString() {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << "\nItem Weight: " << getItemWeight()
           << "\nProduct Dimensions: " << getProductDimensions()
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax: $" << calculatePriceWithTax() << endl;
    replace();
    return output.str();

}

Streaming::~Streaming() {}