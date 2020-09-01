//
// Created by Sebastian on 9/1/2020.
//

#ifndef LAB04_SOLID_GAMEMANAGER_H
#define LAB04_SOLID_GAMEMANAGER_H

#include "ISave.h"
#include <iostream>
#include "IReceiptSender.h"

using namespace std;

class GameManager : public ISave, public IReceiptSender {
public:
    void save(string fileName, string save) override;

    string purchase(IReceiptSender *receipt);
};


#endif //LAB04_SOLID_GAMEMANAGER_H
