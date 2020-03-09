/*
 *
 *            PROGRAMMER: Omar Alkendi
 *         PROBLEM TITLE: Homework #2 Problem #1 Reverse array
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


#include <iostream>
#include <cstdlib>
#include <cctype>
#include <iomanip>
using namespace std;
int* reverseArray(int* aPtr, int size)
{
    int* temp = new int[size];
    
    for(int i=0, j=size-1; i < size; i++, j--)
    {
        temp[j]=aPtr[i];
    }
    return temp;
}

int myRand()
{
    int random=0;
    random=rand()%99;
    
    return random;
}

void programHeader()
{
    cout << "This program will create a random array and reverse its elements."
            << endl;
}

int valueObtainer()
{   
    int value=0;
    bool isGood;
    do
    {
    cout << "Enter the size of array: ";
    isGood = cin >> value;
        if(isGood && value>0) 
        {
            return value;
        }
    cin.clear();
    cin.ignore(10000,'\n');
    cout << "Please enter a positive integer value!" << endl;
    }
    while(true);
}

void arrayOutputter(int* aPtr, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << setw(4) << aPtr[i] << "|";
    }
}

void arrayIntializer(int* array, int size)
{
    for(int i=0; i<size; i++)
    {
        array[i] = myRand();
    }
}
int main()
{   
    int size=0;
        programHeader();
        size=valueObtainer();
    int* array = new int[size];
        arrayIntializer(array,size);
        arrayOutputter(array,size);
        cout << "\nReversing..." << endl;
        array = reverseArray(array,size);
        arrayOutputter(array,size);
        
    array=NULL;
    delete array;
    
    return 0;
}

