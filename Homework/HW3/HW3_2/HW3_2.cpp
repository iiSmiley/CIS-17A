/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #3 Exercise#2
 *    PROBLEM DEFINITION: Name Arranger
 * 
 *                  DATE: 04/26/2019
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

int const SIZE = 100;

void spaceFinder(char* cPtr, int*& oPtr, int strLen, int& iteration)
{
    for(int i=0; i<strLen; i++)
    {
        if(cPtr[i]==' ')
        {
            oPtr[iteration]=i;
            iteration++;
        }
    }

};

void output (char* nPtr, int strLen)
{
    for(int i=0; i< strLen+1; i++)
    {
        cout << nPtr[i];
    }
    cout << ".";
}

void slice(char* aPtr, char*& fName, char*& mName, char*& lName, int* oPtr,
           int strLen)
{
    int j=0;
    int l=0;
    
        for(int i=0; i<oPtr[0]; i++)
    {
        fName[i]=aPtr[j];
                j++;
    }
    
        for(int i=0; i<(oPtr[1]-oPtr[0]); i++)
    {
        mName[i]=aPtr[j];
                j++;
    }
    
    j++;
    
        for(int i=0; i<strLen; i++)
    {
        lName[i]=aPtr[j];
                j++;
                l++;
    }   
}

void arrange(char*& arrPtr, char* fName, char* mName, char* lName, int* oPtr,
           int strLen)
{
    int j=0;
    
        for(int i=0; i<(strLen-oPtr[1]); i++)
    {
            arrPtr[j] = lName[i];
            j++;
    }
    
            arrPtr[j]=',';
            j++;
            arrPtr[j]=' ';
            
        for(int i=0; i<oPtr[0]; i++)
    {
            arrPtr[j]=fName[i];
            j++;
    }
            
        for(int i=0; i<oPtr[1]; i++)
    {
            arrPtr[j]=mName[i];
            j++;
    }
    
}

int main()
{   
    int iteration = 0;
    char* name = new char[SIZE];
    int* offSet = new int[SIZE];
    cout << "Enter your name: ";
    
    cin.getline(name,SIZE);
    int strLen = strlen(name);
    
    spaceFinder(name, offSet, strLen, iteration);
    
    char* first = new char[SIZE];
    char* middle= new char[SIZE];
    char* last = new char[SIZE];
    
    slice(name, first, middle, last, offSet, strLen);
    
    char* arranged = new char[SIZE];
    
    arrange(arranged, first, middle, last, offSet, strLen);
    output(arranged, strLen);
    
    delete name;
    delete offSet;
    delete first;
    delete middle;
    delete last;
    
    name   = NULL;
    offSet = NULL;
    first  = NULL;
    middle = NULL;
    last   = NULL;
    
    return 0;
}

