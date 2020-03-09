#ifndef INVENTORY_H
#define INVENTORY_H
using namespace std;

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>

class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
    Inventory();
    Inventory(int,int,double);
    void setItemNumber(int);
    void setQuantity(int);
    void setCost(double);
    void setTotalCost(int, double);
    int getItemNumber();
    int getQuantity();
    double getCost();
    double getTotalCost();
    void output();
};

#endif /* INVENTORY_H */

