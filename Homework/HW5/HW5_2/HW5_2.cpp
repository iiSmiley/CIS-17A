/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #5 Exercise#2
 *    PROBLEM DEFINITION: Coin Toss
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
#include "Coin.h"
using namespace std;

int main()
{
Coin c;         //Creating an object c
    
    cout << "The randomly initialized side is: " << c.getSideUp() << endl;
    cout << "Tossing the coin 20 time..." << endl;
    
                    //Tossing c 20 times...
    for(int i=0; i<21; i++)
    {
        c.toss();
        cout << c.getSideUp() << endl;
    }
    return 0;
}

