/*
 *
 *            PROGRAMMER: Omar Alkendi
 *         PROBLEM TITLE: Homework #2 Problem #4 Backward String
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
using namespace std;

const int SIZE = 101;

char* backwardString (char* aPtr, int length)
{
    char* tempS = new char[length];
    for(int i=0, j=length-1; i<length; i++, j--)
    {
        tempS[i]=aPtr[j];
    }
    return tempS;
}

void displayString (char* aPtr, int size)
{
    cout << "Reversing..." << endl;
    cout << "The backward string is: ";
    for(int i=0; i<size; i++)
    {
        cout << aPtr[i];
    }
}


int main()
{
    int size=SIZE-1;
    int length;
    char* array = new char[size];
    
    cout << "Please enter a string of characters for me to reverse (Max 100 characters): ";
    cin.getline(array, size);
    
    length = strlen(array);
    
    array = backwardString(array,length);
    displayString(array,length);
    
    array=NULL;
    delete array;

    return 0;
}

