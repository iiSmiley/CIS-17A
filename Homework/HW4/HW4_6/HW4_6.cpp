/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #4 Exercise#6
 *    PROBLEM DEFINITION: Inventory Class
 * 
 *                  DATE: 04/29/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS:                   
 *                                                              
 */
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

const int WD1 = 20; //Defining a constant value for the width of columns.

//Designing the specified Inventory class by the problem.
//The class and the definition of its member variables begins here.
//The functions are self explanatory.

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

//The class definition ends here.

//The numObtainer is a function with a purpose of validating the input of the
//user.
int numObtainer()
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
//The dNumObtainer is like the numObtainer, but it's used to obtain value
//of type double
double dNumObtainer()
{
    double val=0;
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
//Generic output function.
void output(Inventory* aPtr, int size)
{
    cout << "______________________________________________________________________" << endl;
    cout << setw(WD1) << left << "Item Number";
    cout << setw(WD1) << left << "Quantity";
    cout << setw(WD1) << left << "Cost";
    cout << setw(WD1) << left << "Total Cost" << endl;
    cout << "______________________________________________________________________" << endl;
    
    for(int i=0; i<size; i++)
    {
        aPtr[i].output();
    }
}

void showMenu()
{
    cout << "|||  Main Menu   |||" << endl;
    cout << "Please make a choice:" << endl;
    cout << "A) Display inventory." << endl;
    cout << "B) Add new item." << endl;
    cout << "C) To close the program." << endl;
}

void add(Inventory* aPtr, int&size)
{   //The add function allows the user to add new elements to the inventory list.
    int tempIndex  = size;
    //The temp index is used to let the add function starts from the end of the
    //array. Hence, it won't overwrite previous entries. To witness the
    //necessity of this variable, try adding items separately, but of 
    //of course without terminating the run.
    
    cout << "How many items would you like to add? ";
    size += (numObtainer());
    //the add function will return a new size for the array list that is equal
    //to the previous size + the number of elements the user will add.
    for(int i=tempIndex; i<size; i++)
    {
        cout << "Enter the item number: ";
                aPtr[i].setItemNumber(numObtainer());
        cout << "Enter quantity of item number " << aPtr[i].getItemNumber() << " : ";
                aPtr[i].setQuantity(numObtainer());
        cout << "Enter the cost of item number " << aPtr[i].getItemNumber() << " : ";
                aPtr[i].setCost(dNumObtainer());
                aPtr[i].setTotalCost(aPtr[i].getQuantity(),aPtr[i].getCost());
                //The last line was added to circumvent the issue related to 
                //the setTotalCost function. Due to the way the codes were
                //written in, the setYotalCost function won't work unless 
                //called manually.
    }
    //To lit the user see the updated list, an output function was incorporated
    //in the add function.
        for(int i=0; i<size; i++)
    {
        aPtr[i].output();
    }
}

int main()
{
    //This is a simple menu driven application that utilizes the class inventory.
    char choice;
    int size = 0;
    Inventory* list = new Inventory[size];
    do
    {
        showMenu(); //Display the main menu and waits for user's entry.
        cin >> choice;
        choice = toupper(choice); //Whether the user inputs a lower case or an
                                  //upper case char, toupper will take care 
                                  //of the input.
        switch(choice)
        {
            case 'A': output(list, size);
                break;
            case 'B': add(list, size);
                break;
        }
    }
    while(toupper(choice) != 'C'); 

    delete list;
    list =NULL;
    return 0;
}

