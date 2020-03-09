/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #5 Exercise#1
 *    PROBLEM DEFINITION: Number Array Class
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
#include <cstdlib>
#include "NumberArray.h"
using namespace std;

int main()
{
        int size;
    cout << "Enter a size for the array: ";
    cin >> size;
    NumberArray n(size);
    for(int i=0; i<size; i++)
    {   
        float temp=0;
        cout << "Enter a float value for element #" << i+1 << ": ";
        cin >> temp;
        n.setElement(i,temp);
    }
    cout << "Highest value is: " << n.highest() << endl;
    cout << "Lowest value is: " << n.lowest() << endl;
    cout << "The average is: " << n.average() << endl;

    return 0;
}

