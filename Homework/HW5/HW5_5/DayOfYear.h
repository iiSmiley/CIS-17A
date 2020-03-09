#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

#include <iostream>
using namespace std;

class DayOfYear
{
private:
    int day;
    int month;
    static string monthName[];
    static int dayPerMonth[];
public:
    DayOfYear(int); //Default constructor
    string getMonthName(const int&);
    void setMonth();//Subtract from day to find number of month
    void print();   //Display the converted value
};

#endif /* DAYOFYEAR_H */

