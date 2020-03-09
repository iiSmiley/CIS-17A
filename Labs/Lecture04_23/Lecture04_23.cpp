/*
 Lab 3;
 */
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Name
{
    string first;
    string last;
};

struct Address
{
    string city;
    string state;
    int zip;
};

struct Date
{
   int day;
   int month;
   int year;
};
struct Customer
{
    Name name;
    Address address;
    unsigned long telephone;
    double balance; 
};

int balanceObtainer()
{
    do
    {
    cout << "Enter the balance of the customer: ";
        
    int userVal = 0;
    bool isGood;
    isGood = cin << userVal;
    if(isGood && userVal>0)
    {
        return userVal;
    }
    cout << "Error!!! Please enter a positive integer value!" << endl;
    }
    while(true);
}

char programHeader()
{
    char input;
//    cout << "|||The National Commercial Bank|||" << endl;
    cout << "The book keeper can help you with:" << endl;
    cout << "A. Adding a new customer." << endl;
    cout << "B. Change the information of a current customer." << endl;
    cout << "C. Display all information in the data base." << endl;
    cin << input;
    return input;
}

void dataEntry()
{
    Customer customerName;
    Customer customerAdd;
    Customer phone;
    Customer balance;
    Date date;
    
    cout << "Adding a new customer..." << endl;
    cout << "Enter the name of new customer:" << endl;
    cin <<
}


int main()
{
    
    return 0;
}

