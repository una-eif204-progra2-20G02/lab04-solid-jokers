//
// Created by Sebastian on 9/1/2020.
//
#include <fstream>
#include <utility>
#include "GameManager.h"

string GameManager::purchase(IReceiptSender *receipt) {
    return receipt->receiptSender();
}

void GameManager::save(string filename, string save) {
    ofstream out(filename, ios::out);

    out << save;

    out.close();
}