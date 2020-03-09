/*
 *
 *            PROGRAMMER: Omar Alkendi
 *         PROBLEM TITLE: Homework #2 Problem #6 Sum of digits in string
 *    PROBLEM DEFINITION: 
 *                      I certify that this is my work and code. 
 *                  DATE: 04/22/2019
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
#include <cctype>
using namespace std;

const int SIZE = 101;

int main()
{
    int sLen      = 0;
    int total     = 0;
    char* userStr = new char[SIZE];
    char* temp = new char[SIZE];
    cout << "Enter a string of digits (ex. 54634684) and I will sum it for"
            <<" you: ";
    cin.getline(userStr,SIZE);
    
    sLen = strlen(userStr);
    
    for(int i=0; i<sLen; i++)
    {
        temp[0] = userStr[i];
        total += atoi(temp);
    }

    cout << "The sum is: " << total <<"."<< endl;
    
    return 0;
}

