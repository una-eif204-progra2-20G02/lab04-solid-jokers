//
// Created by Sebastian on 8/21/2020.
//

#include <iomanip>
#include "Digital.h"

void Digital::replace() {
    cout << "This product can be replaced" << endl;
}

double Digital::discount() {
    return 0.15;
}

Digital::Digital(string name, double price, double itemWeight, string productDimensions, double tax) : Game(name, price,
                                                                                                            itemWeight,
                                                                                                            productDimensions,
                                                                                                            tax) {
    setName(name);
    setPrice(price);
    setItemWeight(itemWeight);
    setProductDimensions(productDimensions);
    setTax(tax);
}

string Digital::toString() {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << "\nItem Weight: " << getItemWeight()
           << "\nProduct Dimensions: " << getProductDimensions()
           << "\nPrice: $" << getPrice()
           << "\nDiscount of: $" << calculatePriceWithTax() * discount()
           << "\nPrice with Tax and Discount: $" << (calculatePriceWithTax() - (calculatePriceWithTax() * discount()))
           << endl;
    replace();

    return output.str();

}

Digital::~Digital() {}