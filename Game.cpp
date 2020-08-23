//
// Created by Maikol Guzman on 8/17/20.
//

#include <fstream>
#include <utility>
#include "Game.h"

Game::Game() {
    name="";
    price=0.0;
    tax=0.0;
    itemWeight = 0.0;
    productDimensions="";
}

Game::Game(std::string name, double price, double tax) : name(std::move(name)), price(price), tax(tax){}

Game::Game(std::string name, double price,double tax, double itemWeight,std::string productDimensions) : name(std::move(name)), price(price),tax(tax), itemWeight(itemWeight),productDimensions(std::move(productDimensions)) {}

const std::string &Game::getName() const {
    return name;
}

void Game::setName(const std::string &name) {
    Game::name = name;
}

double Game::getPrice() const {
    return price;
}

void Game::setPrice(double price) {
    Game::price = price;
}

double Game::getTax() const {
    return tax;
}

void Game::setTax(double tax) {
    Game::tax = tax;
}

double Game::getItemWeight() const {
    return itemWeight;
}

void Game::setItemWeight(double itemWeight) {
    Game::itemWeight = itemWeight;
}

const std::string &Game::getProductDimensions() const {
    return productDimensions;
}

void Game::setProductDimensions(const std::string &productDimensions) {
    Game::productDimensions = productDimensions;
}

double Game::calculatePriceWithTax() {
    return getPrice() + (getPrice() * getTax());
}

/**
 * Save the information into a text file
 * @param filename the name of the text file
 */
void Game::save(const std::string &filename) {
   ofstream out(filename, ios::out);

    out << toString();

    out.close();
}

string Game::toString() {
    return "";
}
