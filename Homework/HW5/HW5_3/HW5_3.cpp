/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #5 Exercise#3
 *    PROBLEM DEFINITION: Freezing and Boiling points.
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
#include "Temperature.h"
using namespace std;
int main() 
{
    Temperature t;
    float tempT;
    cout << "Enter a temperature in Fahrenheit: ";
    cin >> tempT;
    t.setTemperature(tempT);
    t.output();
    return 0;
}

