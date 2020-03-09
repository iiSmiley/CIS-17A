/*
 *
 *            PROGRAMMER: Omar ALkendi
 *            Student ID: 2750876
 *                  Date: 04/19/2019
 *                    HW: 1
 *               Problem: 3
 *         I certify this is my own work and code
 *
 *                  DATE: 04/18/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS:                             
 */

//All needed directives are here
#include <iostream> 
#include <cstdlib>
#include <iomanip>
using namespace std;

int coinToss()
{
    int val=0;
    val=rand()%2+1;
    
        if(val==1)
        {
            cout << "heads." << endl;
        }
        else
            cout << "tails." << endl;
            
}


main()
{   
    int times;
    cout << "How many times would you like to toss the coin? ";
    cin >> times;
    
    for(int i=0; i < times; i++)
    {
        coinToss();
    }
    return 0;
}