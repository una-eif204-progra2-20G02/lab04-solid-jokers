//
// Created by Maikol Guzman on 8/17/20.
//

#include <iostream>
#include "Game.h"
#include "Physical.h"
#include "Digital.h"


using namespace std;

int main() {
    auto game = new Digital("Call of Duty: Black Ops 4 (PS4)", 24.66, 0.564,
                            "3.94 x 0.59 x 5.91 inches; 0.56 Ounces", 0.13);
    std::cout << game->toString();
    dynamic_cast<Game *>(game)->save("factura.csv");

    return 0;
}