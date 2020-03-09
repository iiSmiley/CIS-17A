/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CashRegister.h
 * Author: User 1
 *
 * Created on May 3, 2019, 10:07 PM
 */

#ifndef CASHREGISTER_H
#define CASHREGISTER_H
#include "Inventory.h"
using namespace std;

class CashRegister
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double price;
    double tax;
    double total;
    int index;
public:
    CashRegister();
    void setItemNumber(Inventory*, const int&);
    void setQuantity(Inventory*, const int&);
    void setCost(Inventory*, const int&);
    int getItemNumber();
    int getQuantity();
    double getPrice();
    double getTax();
    double getTotal();
    int numObtainer();
};

#endif /* CASHREGISTER_H */

