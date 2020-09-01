//
// Created by Sebastian on 8/21/2020.
//

#include <iomanip>
#include "Digital.h"

string Digital::replace() {
    return "This product can be replaced";
}

double Digital::discount() {
    return 0.15;
}

Digital::Digital(string name, double price, double tax) : Game(name, price, tax) {
    setName(name);
    setPrice(price);
    setTax(tax);
}

string Digital::toString() {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << "\nPrice: $" << getPrice()
           << "\nDiscount of: $" << calculatePriceWithTax() * discount()
           << "\nPrice with Tax and Discount: $" << (calculatePriceWithTax() - (calculatePriceWithTax() * discount()))
           << endl;
    replace();

    return output.str();

}

Digital::~Digital() {}