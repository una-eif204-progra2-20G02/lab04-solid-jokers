//
// Created by Maikol Guzman on 8/17/20.
//

#include <iostream>
#include "Game.h"
#include "GameManager.h"
#include "Physical.h"
#include "Digital.h"
#include "IReceiptSender.h"
#include "ScreenReceipt.h"
#include "PrintReceipt.h"
#include "EmailReceipt.h"


using namespace std;

int main() {
    ScreenReceipt *screen = new ScreenReceipt;
    PrintReceipt *print = new PrintReceipt;
    EmailReceipt *email = new EmailReceipt;
    Digital *game = new Digital("Call of Duty: Black Ops 4 (PS4)", 24.66, 0.13);
    std::cout << game->toString();
    GameManager gameManager;
    cout << gameManager.purchase(email);
    gameManager.save("factura.csv", game->toString());

    return 0;
}