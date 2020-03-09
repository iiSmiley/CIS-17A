#include "CashRegister.h"

CashRegister::CashRegister()
{
    itemNumber  = 0;
    quantity    = 0;
    cost        = 0;
    price       = 0;
    tax         = 0; 
    total       = 0;
    index       = 0;
}

void CashRegister::setItemNumber(Inventory* aPtr, const int& size)
{
    bool isTrue; //To exit the loop
    do
    {   
        isTrue = true;
        int tempNumber=0;
        cout << "Enter the item number: ";
        tempNumber = numObtainer();
        for(int i=0; i<size; i++)
        {
            if(aPtr[i].getItemNumber()== tempNumber)
            {
                this -> itemNumber = tempNumber;
                this -> index = i;
                this -> cost = aPtr[index].getCost();
                //cout << this ->cost << endl;
                this -> price = ((this -> cost)+(this -> cost) * 0.3);
                //cout << this -> price << endl;
                this -> tax = (this -> price)*0.06;
                isTrue = false;
            }
            else
            {
                cout << "ERROR!!! could not find the item in inventory." << endl;
                cout << "Please check your entry." << endl;   
            }
        }

    }
    while(isTrue);
}

void CashRegister::setQuantity(Inventory* aPtr, const int& size)
{
    bool isTrue;
    do
    {
        isTrue = true;
        int tempNumber;
        cout << "Enter the quantity you would like to sell: ";
        tempNumber = numObtainer();
        if(aPtr[index].getQuantity() >= tempNumber)
        {   
            int tempVal = aPtr[index].getQuantity();
            this -> quantity = tempNumber;
            this -> total = ((this -> price)+(this -> tax)) * (this -> quantity);
            aPtr[index].setQuantity(tempVal-tempNumber);
            aPtr[index].setTotalCost(aPtr[index].getQuantity(), aPtr[index].getCost());
            isTrue = false;
        }
        else
        {
            cout << "You only have " << aPtr[index].getQuantity() << " on hand." << endl;
            cout << "You can't give what you don't have!" << endl;
            cout << "Please enter a correct quantity." << endl;
        }
    }
    while(isTrue);
}

int CashRegister::getItemNumber()
{
   return itemNumber;
}

int CashRegister::getQuantity()
{
    return quantity;
}

double CashRegister::getPrice()
{
    return price;
}

double CashRegister::getTax()
{
    return tax;
}

double CashRegister::getTotal()
{
    return total;
}

int CashRegister::numObtainer()
{
    int val=0;
    bool isGood;
    do
    {
        isGood = cin >> val;
        if(isGood && val>0)
        {
            return val;
        }
        cout << "ERROR!!! Please enter a positive integer value that is greater"
                << " than 0!" << endl;
    }
    while(true);
}

//The numObtainer is a function with a purpose of validating the input of the
//user.
