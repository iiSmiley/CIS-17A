/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #4 Exercise#1
 *    PROBLEM DEFINITION: Soccer scores
 * 
 *                  DATE: 04/29/2019
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

const int SIZE = 3; //If more players are needed, change size.
const int WD1  = 20;
const int WD2  = 4;


struct Player
{
    string name;
    int number;
    int score;
    
};

int valueObtainer()
{
    do
    {
    int val;
    bool isGood;    
    isGood = cin >> val;
    if(isGood && val>=0)
    {
        return val;
    }
    cout << "ERROR!!! Please enter a positive number greater than 0!" << endl;
    }
    while(true);
}

int highest (Player* aPtr)
{
    int index  =0;
    for(int i=0; i<SIZE-1; i++)
    {
        if(aPtr[i].score < aPtr[i+1].score)
        {
            index = i;
        }
    }
    return index;
}

void output(Player* aPtr, int index, int total)
{
    
    cout << "____________________________________________________________________" 
            << endl;
    cout << setw(WD2) << left << "# " << "|";
    cout << setw(WD1) << left << "Name" << "|"; 
    cout << setw(WD1) << left << "Number" << "|";
    cout << setw(WD1) << left << "Score" << "|" << endl;
    cout << "____________________________________________________________________" 
            << endl;
    
    
    for(int i=0; i<SIZE; i++)
    {
       cout << setw(WD2-1) << "#" << i+i << "|"; 
       cout << setw(WD1) << aPtr[i].name << "|";
       cout << setw(WD1) << aPtr[i].number << "|";
       cout << setw(WD1) << aPtr[i].score << "|" << endl;
    }
    
    cout << "The total points are : " << total << endl;
    cout << "The highest score is: " << aPtr[index].score << " and belong to "
             << aPtr[index].name << " whose number is "  << aPtr[index].number;
}

int sum(Player* aPtr)
{
    int total=0;
    for(int i=0; i<SIZE; i++)
    {
        total += aPtr[i].score;
    }
    return total;
}
int main()
{
    
    Player* list = new Player[SIZE];
    int tempVal   =0;
    int highIndex =0;
    int total     =0;
    for(int i=0; i<SIZE; i++)
    {
        cout << "Enter the name of a player: ";
        cin >> list[i].name;
        cout << "Enter the number of " << list[i].name << " : ";
        list[i].number = valueObtainer();
        cout << "Enter the score of " << list[i].name << " : ";
        list[i].score = valueObtainer();  
    }
    
    highIndex = highest(list);
    total = sum(list);
    output(list, highIndex, total);
    
    delete list;
    list = NULL;
    return 0;
    
    
}

