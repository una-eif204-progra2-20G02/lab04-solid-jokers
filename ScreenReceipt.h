//
// Created by Sebastian on 9/1/2020.
//

#ifndef LAB04_SOLID_SCREENRECEIPT_H
#define LAB04_SOLID_SCREENRECEIPT_H

#include <iostream>
#include "IReceiptSender.h"

using namespace std;

class ScreenReceipt : public IReceiptSender {
    string receiptSender() override;

};

#endif //LAB04_SOLID_SCREENRECEIPT_H
