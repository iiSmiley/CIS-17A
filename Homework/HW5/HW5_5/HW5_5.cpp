/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #5 Exercise#5
 *    PROBLEM DEFINITION: Day of the Year
 * 
 *                  DATE: 05/03/2019
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

int numObtainer()
{
    int val=0;
    bool isGood;
    do
    {
        isGood = cin >> val;
        if(isGood && val>0 && val <= 365)
        {
            return val;
        }
        cout << "ERROR!!! Please enter a positive integer value between 1 and 365!"
                << endl;
    }
    while(true);
}
int main()
{
    int userInput;
    cout << "Enter a number of days (between 1 and 365): ";
    userInput = numObtainer();
    DayOfYear Date(userInput);
    Date.print();    
    return 0;
}
