//
// Created by Sebastian on 8/21/2020.
//

#include "Streaming.h"
#include <iomanip>
#include <fstream>

string Streaming::replace() {
    return "This product can be replaced";
}

Streaming::Streaming(const string &name, double price, double tax) : Game(name, price, tax) {
    setName(name);
    setPrice(price);

    setTax(tax);
}

string Streaming::toString() {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax: $" << calculatePriceWithTax() << endl;
    replace();
    return output.str();

}

Streaming::~Streaming() = default;