/*
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework 6x Exercise#2
 *    PROBLEM DEFINITION: FeetInches Modification
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
#include "FeetInches.h"
using namespace std;

void programHeader()
{
    cout << "||| The Retarded Units Calculator |||" << endl;
    cout << "Please, enter two measurements in inches for me to compare." << endl;
}
int numObtainer()
{
    int userVal;
    bool isGood;
    do
    {
        isGood = cin >> userVal;
        if(isGood && userVal > 0)
        {
            return userVal;
        }
    cout << "ERROR!!! Please enter a positive value! ";
    }
    while(true);
}
int main()
{
    FeetInches input1;
    FeetInches input2;
    programHeader();
    cout << "First measurement: ";
    input1.setInches(numObtainer());
    cout << "second measurement: ";
    input2.setInches(numObtainer());
    cout << "First is: ";
    input1.output();
    cout << "Second is: ";
    input2.output();
    if(input1 >= input2)
        cout << "You first measurement is greater than or equal to the second one" << endl;
    if(input1 <= input2)
        cout << "You first measurement is less than or equal to the second one" << endl;
    if(input1 != input2)
        cout << "You first measurement is not equal to the second one" << endl;
    return 0;
}

