//
// Created by Sebastian on 8/21/2020.
//
#include <iomanip>
#include <fstream>
#include "Physical.h"

Physical::Physical(const string& name, double price, double tax,double itemWeight, const string& productDimensions ) : Game(name,price,tax,itemWeight,productDimensions) {
    setName(name);
    setPrice(price);
    setItemWeight(itemWeight);
    setProductDimensions(productDimensions);
    setTax(tax);
}

void Physical::shipment() {
    cout << "this product will have a shipment." << endl;
}

string Physical::toString() {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << "\nItem Weight: " << getItemWeight()
           << "\nProduct Dimensions: " << getProductDimensions()
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax: $" << calculatePriceWithTax() << endl;
    shipment();
    return output.str();

}

Physical::~Physical() = default;