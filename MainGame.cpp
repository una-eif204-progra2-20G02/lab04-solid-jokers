//
// Created by Maikol Guzman on 8/17/20.
//

#include <iostream>
#include "Game.h"
#include "Physical.h"
#include "Digital.h"
#include "Streaming.h"
#include <sstream>

using namespace std;

int main() {
    Game *game = new Game;
    game->setName("Call of Duty: Black Ops 4 (PS4)");
    game->setItemWeight(0.564);
    game->setProductDimensions("3.94 x 0.59 x 5.91 inches; 0.56 Ounces");
    game->setPrice(24.66);
    game->setTax(0.13);
    cout << dynamic_cast<Digital *>(game)->toString();

    game->save("game.txt");

    return 0;
}