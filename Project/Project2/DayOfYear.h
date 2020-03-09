#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <iostream>
using namespace std;
//This DayOfYear class is used to convert the inputs from and the outputs to the
//user to make the node task manageable by storing the day of the month as
//the day of the year and vise-versa.
class DayOfYear
{
private:
    int day;
    int month;
    int dayModified;
    int year;                   //Year is used to determine if the year is leap 
    const static string MONTH_NAME[];
    const static int DAY_PER_MONTH[];
    const static int DAY_PER_MONTH_LEAP[];
    void setMonth();//Subtract from day to find number of month
public:
    DayOfYear();        //Default constructor
    ~DayOfYear();       //Default destructor
    DayOfYear(const int&, const int&);  //Secondary constructor takes a number of day of year (eg. 365)
                                        //and finds the date equivalent (eg. DEC 31)
    DayOfYear(const string&, const int&, const int&);//Tertiary constructor
    DayOfYear(const DayOfYear&);        //Copy Constructor
    void setDayModified();      //Sets the value of dayModified
    string getMonthName();      //Returns the name of the month
    const int& getDayModified();       //Returns the value of dayModified
    void print();               //Displays day and the name of the month
    void printModified();       //Displays dayModified
    const DayOfYear& operator=(const DayOfYear&);
    const DayOfYear& operator++();         //Prefix increment 
    const DayOfYear& operator++(int);      //Postfix increment
    const DayOfYear& operator--();         //Prefix decrement
    const DayOfYear& operator--(int);      //Postfix decrement
    friend ostream& operator<<(ostream&, const DayOfYear&);
};
#endif /* DAYOFYEAR_H */