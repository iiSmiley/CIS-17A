/* 
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #6 Exercise#1
 *    PROBLEM DEFINITION: Day of the Year Modification
 * 
 *                  DATE: 05/06/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS:                   
 *                                                              
 */
#include "DayOfYear.h"
using namespace std;
const int DayPerMonth[]= {31,28,31,30,31,30,31,31,30,31,30,31};
const string MonthName[]= { "January"  , "February", "March"   , "April", 
                            "May"      , "June"    , "July"    , "August",
                            "September", "October" , "November", "December"};
int numObtainer()
{
    int val=0;
    bool isGood;
    do
    {
        isGood = cin >> val;
        if(isGood && val>0 && val <= 31)
        {
            return val;
        }
        cout << "ERROR!!! Please enter a positive integer value between 1 and 31!"
                << endl;
    }
    while(true);
}
int main() 
{
    int userDay;
    string userMonth;
    cout << "Enter the name of the month (e.g. January): ";
    cin >> userMonth;
    cout << "Enter the day: ";
    userDay = numObtainer();
    DayOfYear Date(userMonth,userDay);
    Date.printModified();
    Date--;
    Date.printModified();
    Date++;
    Date.printModified();
    return 0;
}

