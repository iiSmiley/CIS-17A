/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #4 Exercise#3
 *    PROBLEM DEFINITION: Date (Not the fruit)
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
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

const int SIZE = 3; //If more players are needed, change size.
string const MONTH []= { "January"  , "February", "March"   , "April",
                         "May"      , "June"    , "July"    , "August",
                         "September", "October" , "November", "December"};

class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date();
    int getDay();
    int getMonth();
    int getYear();
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    void form1();
    void form2();
    void form3();
};

Date::Date()
{
    day=0;
    month=0;
    year=0;
}

int Date::getDay()
{
 return day;   
}

int Date::getMonth()
{
 return month;   
}

int Date::getYear()
{
 return year;   
}

void Date::setYear(int year)
{
(*this).year = year;   
}

void Date::setMonth(int month)
{
(*this).month = month;   
}

void Date::setDay(int day)
{
(*this).day = day;   
}

//The getters could have been used in the formX functions, but would 
//I over load it?

void Date::form1()
{
cout << month << "/" << day << "/" << year << endl;   
}

void Date::form2()
{
cout << MONTH[month-1] << " " << day << ", " << year << endl;   
}

void Date::form3()
{
cout << day << " " << MONTH[month-1] << " " << year << endl;   
}

int monthObtainer()
{
    do
    {
    int val;
    bool isGood;    
    isGood = cin >> val;
    if(isGood && val>=0 && val<=12)
    {
        return val;
    }
    cout << "ERROR!!! Please enter a positive number between 1 and 12!" << endl;
    }
    while(true);
}
int dayObtainer()
{
    do
    {
    int val;
    bool isGood;    
    isGood = cin >> val;
    if(isGood && val>=0 && val<=31)
    {
        return val;
    }
    cout << "ERROR!!! Please enter a positive number between 1 and 31!" << endl;
    }
    while(true);
}

int yearObtainer()
{
    do
    {
    int val;
    bool isGood;    
    isGood = cin >> val;
    if(isGood && val>=0)
    {
        return val;
    }
    cout << "ERROR!!! Please enter a positive number greater than 0!" << endl;
    }
    while(true);
}

int main()
{
    int day;
    int month;
    int year;
    Date user;
    
    cout << "Enter a day (e.g. 29): ";
    day = dayObtainer();
    user.setDay(day);
    
    cout << "Enter a month (e.g. 4): ";
    month = monthObtainer();
    user.setMonth(month);
    
    cout << "Enter a year (e.g. 2019): ";
    year = yearObtainer();
    user.setYear(year);
    
    user.form1();
    user.form2();
    user.form3();
    return 0;
}

