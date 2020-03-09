#include "Inventory.h"
const int WD1 = 20;

Inventory::Inventory()
{
    (*this).cost        = 0;
    (*this).itemNumber  = 0;
    (*this).quantity    = 0;
    (*this).totalCost   = 0;
}

Inventory::Inventory(int itemNumber, int quantity, double cost)
{
    (*this).cost        = cost;
    (*this).itemNumber  = itemNumber;
    (*this).quantity    = quantity;
    setTotalCost(quantity,cost); 
    (*this).totalCost   = totalCost;  
}

void Inventory::setCost(double cost)
{
    (*this).cost = cost;
}

void Inventory::setItemNumber(int itemNumber)
{
    (*this).itemNumber = itemNumber;
}

void Inventory::setQuantity(int quantity)
{
    (*this).quantity = quantity;
}

void Inventory::setTotalCost(int quantity, double cost)
{
    (*this).totalCost = cost * quantity;
}

double Inventory::getCost()
{
    return cost;
}

int Inventory::getItemNumber()
{
    return itemNumber;
}

int Inventory::getQuantity()
{
    return quantity;
}

double Inventory::getTotalCost()
{
    return totalCost;
}

//The member output function is an addition to the class by me, the programmer, 
//to compact the codes in the general output function. 

void Inventory::output()
{
    cout << setw(WD1) << left << itemNumber;
    cout << setw(WD1) << left << quantity;
    cout << "$" << setw(WD1) << left << cost;
    cout << "$" << setw(WD1) << left << totalCost << endl;
}