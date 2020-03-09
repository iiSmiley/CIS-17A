#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

#include <iostream>
using namespace std;

class DayOfYear
{
private:
    int day;
    int month;
    int dayModified;
    static string monthName[];
    static int dayPerMonth[];
public:
    DayOfYear(int); //Default constructor
    ~DayOfYear();   //Default destructor
    DayOfYear(string, int);             //Modified constructor
    DayOfYear(const DayOfYear&);        //Copy Constructor
    void setDayModified();              //Sets the value of dayModified
    string getMonthName(const int&);    //Display the name of the month
    void setMonth();//Subtract from day to find number of month
    void print();   //Display the converted value
    void printModified();               //Display dayModified
    DayOfYear operator++();         //Prefix increment 
    DayOfYear operator++(int);      //Postfix increment
    DayOfYear operator--();         //Prefix decrement
    DayOfYear operator--(int);      //Postfix decrement
};

#endif /* DAYOFYEAR_H */

