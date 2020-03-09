/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #3 Exercise#4
 *    PROBLEM DEFINITION: Movie Profit
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
#include <iomanip>
using namespace std;
int const SIZE = 2 ;
int const WD1  = 25;
int const WD2  = 12;
int const WD3 = 24;

struct MovieData
{
    string title;
    string director;
    string year;
    string time;
    string cast;
    string revenue;
};

void obtainer(MovieData*& aPtr, int size)
{

    for (int i=0; i < size; i++)
    {
        cout << "For movie #" << i+1 << " enter" << endl;
    
            cout << "Title: ";
            cin >> aPtr[i].title;
            cout << "Director: ";
            cin >> aPtr[i].director;
            cout << "year: ";
            cin >> aPtr[i].year;
            cout << "Running time: ";
            cin >> aPtr[i].time;
            cout << "Revenue: ";
            cin >> aPtr[i].revenue;
    }   
}

void programHeader()
{
    cout << "|||The Tigers Box Office|||" << endl;
}

void output(MovieData* aPtr, int size)
{
    
            cout << "#n |";
            cout << setw(WD1) << left << "Title" << "|";
            cout << setw(WD1) << left << "Director" << "|";
            cout << setw(WD2) << left << "Year" << "|";
            cout << setw(WD2) << left << "Running Time" << "|";
            cout << setw(WD3+1) << left << "Revenues" << "|" << endl;
                
            for(int i=0; i<size; i++)
        {
            cout << setw(2) << left << "#" << i+1 << "|"; 
            cout << setw(WD1) << left << aPtr[i].title << "|";
            cout << setw(WD1) << left << aPtr[i].director << "|";
            cout << setw(WD2) << left << aPtr[i].year << "|";
            cout << setw(WD2) << left << aPtr[i].time << "|";
            cout << setw(WD3) << left << aPtr[i].revenue << "$|" << endl;
        }
            
}
int main()
{
    programHeader();
    MovieData* list = new MovieData[SIZE];   
    obtainer(list, SIZE); 
    output(list,SIZE);
    
    //Deleting the dynamic array causes the program to fail after displaying 
    //the data. Further investigations are required.
    //delete list;
    //list = NULL;
    return 0;
}

