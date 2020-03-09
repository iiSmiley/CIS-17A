/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #1 Exercise#2
 *    PROBLEM DEFINITION: Remove an element from a dynamic array
 *
 *                  DATE: 04/18/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS: Straight forward. I wasted a full hour trying to know
 *                        why the deleter wasn't working to find later that it 
 *                        was returning the same array and not temp.                           
 */

//All needed directives are here
#include <iostream> 
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

string* deleteEntry(string* aPtr, int& size, int loc)
{
    string* temp = new string[size];
    
    for (int i=0, j=0; i<size, j<size; i++, j++)
    {   
        if(i==loc)
        {
            j++;
        }
            temp[i] = aPtr[j];
    }

    size -=1;
    
    return temp;
}

int programHeader(string* aPtr, int size)
{
    cout << "Hello Tiger,\n"
            <<"We have noticed that you have registered more than 4 classes\n"
            <<"this semester. Unfortunately, you can only register 4!\n"
            <<"The class that you have tried to register are:\n";
    
    for(int i=0; i<size; i++)
    {
        cout << i+1 << ") " << aPtr[i] << "." << endl;
    }
    int loc = 0;
    
    cout << "Choose the number of class you would like to drop: ";
        do
    {
            cin >> loc;
            cin.clear();
            cin.ignore(10000,'\n');
        if(loc>=size) cout << "Please enter a valid location." << endl;   
    }
    while (loc >= size);

    
    
    return loc-1;        
}
int main()
{
    int size = 5;
    string list[] = {"PHY4C", "BIO1", "CIS17A", "MAT1C", "PHY4D"};
    int loc = programHeader(list, size);
    string* array = new string[size];
    array = deleteEntry(list, size, loc);
        cout << "your new classes are:" << endl;
        
        for(int i=0; i<size; i++)
        {
           cout << i+1 << ") " << array[i] << "." << endl;
        }
    
    array = NULL;
    delete array;
    
    return 0;
}

