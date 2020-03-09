/*
 *
 *            PROGRAMMER: Omar Alkendi
 *         PROBLEM TITLE: Homework #2 Problem #5 Name arranger
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
#include <cstring>
#include <iostream>
using namespace std;
const int SIZE = 101;


void arranged(char* fPtr,char* mPtr,char* lPtr, int fLen,  int mLen,  int lLen)
{
    int count=0;
    char* arrang = new char[SIZE];
    
    for(int i=0; i<lLen; i++)
    {
        arrang[count]=lPtr[i];
        count++;
    }
    arrang[count]=',';
        count++;
    arrang[count]=' ';
        count++;
        
        for(int i=0; i<lLen; i++)
        {
            cout << arrang[i];
        }
    for(int i=0; i<fLen; i++)
    {
        arrang[count]=fPtr[i];
        count++;  
    }
        arrang[count]=' ';
        count++;
    for(int i=0; i<mLen; i++)
    {
        arrang[count]=mPtr[i];
        count++;  
    }
        arrang[count]='.';
        count++;
     
    cout << "Your name is: ";
    for(int i=0; i < count; i++)
    {
        cout << arrang[i];
    }
    
}


int main()
{
    char* first  = new char[SIZE];
    char* middle = new char[SIZE];
    char* last   = new char[SIZE];
    int fLen;
    int mLen;
    int lLen;
    
    cout << "First name: ";
    cin.getline(first,SIZE);
    fLen=strlen(first);
    
    cout << "Middle name (or initials): ";
    cin.getline(middle,SIZE);
    mLen=strlen(middle);
    
    cout << "Last name: ";
    cin.getline(last,SIZE);
    lLen=strlen(last);
    
    arranged(first, middle, last, fLen, mLen, lLen);

    first=NULL;
    delete first;
    
    first=NULL;
    delete first;
    
    first=NULL;
    delete first;
    
    return 0;
}

