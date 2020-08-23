//
// Created by Maikol Guzman on 8/17/20.
//

#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H

#include <sstream>
#include <iostream>

using namespace std;

 class Game {
 public:
     Game();

     Game(std::string name, double price, double tax);

     Game(std::string name, double price, double tax, double itemWeight, std::string productDimensions);

     [[nodiscard]] const std::string &getName() const;

     void setName(const std::string &name);

    [[nodiscard]] double getPrice() const;

    void setPrice(double price);

    [[nodiscard]] double getTax() const;

    void setTax(double tax);

    [[nodiscard]] double getItemWeight() const;

    void setItemWeight(double itemWeight);

    [[nodiscard]] const std::string &getProductDimensions() const;

    void setProductDimensions(const std::string &productDimensions);

    virtual double calculatePriceWithTax();

    virtual void save(const std::string &filename);

    virtual std::string toString();
private:
    std::string name;
    double price;
    double tax;
    double itemWeight{};
    std::string productDimensions;
};


#endif //LAB04_SOLID_GAME_H
