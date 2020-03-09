/*
 *
 *            PROGRAMMER: Omar Alkendi
 *         PROBLEM TITLE: Homework #2 Problem #2 Movie Statistics
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
#include <iomanip>
using namespace std;

void programHeader()
{
    cout << "|||The Students Box Office|||" << endl;
    cout << "This program will aid you in gathering statistical data about\n"
            << "the number of movies college students see in a month." << endl;
}

int sum(int* aPtr, int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum += aPtr[i];
    }
    return sum;
}

int valueObtainer()
{
    int value=0;
    bool isGood;
    cout << "How many students were surveyed? ";
    do
    {
        isGood = cin >> value;
        if (isGood && value>0)
        {
            return value;
        }
        cin.clear();
        cin.ignore(10000,'\n');
        
        cout << "Please enter a valid positive integer" << endl;
    }
    while (true);
}

int elementObtainer()
{
    int value=0;
    bool isGood;
    do
    {
        isGood = cin >> value;
        if (isGood && value>0)
        {
            return value;
        }
        cin.clear();
        cin.ignore(10000,'\n');
        
        cout << "Please enter a valid positive integer" << endl;
    }
    while (true);
}

int mode(int* aPtr, int size)
{
    int element=0;
    int count=0;
    int tempE=0;
    int tempC=0;
    
    for(int i=0; i<size; i++)
    {
        tempE = aPtr[i];
        tempC=0;
                for(int j=0; j<size; j++)
                {
                    if(tempE==aPtr[j])
                    {
                        tempC++;
                    }
                    if(tempC > count)
                    {
                        element = tempE;    
                        count = tempC;
                    }
                }
    }
        if(count == 1)
        {
            return -1;
        }
        return element;
}

void arrayIntializer(int* aPtr, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << "Enter the answer of student #" << i+1 << ": ";
        aPtr[i] = elementObtainer();
    }
}

int main()
{
    int size;
    size=valueObtainer();
    
    int* array = new int[size];
    arrayIntializer(array,size);
    
    int trend = mode(array,size);
    float total = sum(array,size);
    float ave = total/size;
    
    cout << "The average number of movies is " <<
            setprecision(2) << ave <<" movie(s) per month." << endl;
    cout << "Most students watch " << trend << " movie(s) per month." << endl;
    
    array=NULL;
    delete array;
    
    return 0;
}

