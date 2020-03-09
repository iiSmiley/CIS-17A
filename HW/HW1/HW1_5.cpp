/*
 *
 *            PROGRAMMER: Omar ALkendi
 *            Student ID: 2750876
 *                  Date: 04/19/2019
 *                    HW: 1
 *               Problem: 5
 *         I certify this is my own work and code
 *
 *    PROBLEM DEFINITION: Test scores #2
 * 
 *                  DATE: 04/18/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS:                   
 *                                                              
 */

//All needed directives are here
#include <iostream> 
using namespace std;

void programHeader()
{
    cout << "|*|*|*|*|The Amazing Test Scores Calculator|*|*|*|*|" << endl;
}

int valueObtainer()
{
     do
    {

        int Value;
        bool isGood = cin >> Value;
        if ( isGood && ( Value > 0) )
        {
            return Value;
        }
        cout << "ERROR: Invalid value entered (must be a real number greater"<<
                " than\n or equal to 0)." << endl;
        cin.clear();
        cin.ignore(10000,'\n');

    } while (true);
}

void swap(int& x, int& y)
{
    int temp = x;
    x=y;
    y=temp;
}

bubbleSort(int* aPtr, int size)
{
    bool isSorted = false;
    
    while(!isSorted)
    {
        isSorted = true;
        for(int i=0; i < size -1; i++)
        {
            if(aPtr[i] > aPtr[i+1])
            {
                swap(aPtr[i],aPtr[i+1]);
                isSorted = false;
            }
        }
    }
}

int* dropper(int* aPtr, int& size)
{
    int* temp = new int[size];
    
    for(int i=0; i < size-1; i++)
    {
        temp[i]=aPtr[i+1];
    }
    size--;
    return temp;
}

int sum(int* aPtr, int size)
{
    int sum = 0;
    
    for(int i=0; i<size; i++)
    {
        sum += aPtr[i];
    }
    return sum;
}
int main()
{
    int size = 0;
    int total = 0;
    int value = 0;
    float ave = 0;
    
    programHeader();
    
    cout << "How many tests would you like to calculate? ";
    size = valueObtainer();
    
    int* score = new int[size];
    
    for(int i=0; i<size; i++)
        {
            cout << "Enter the score #" << i+1 << ": ";
            value=valueObtainer();
            score[i] = value;
        }
    
        bubbleSort(score,size);
        score = dropper(score,size);
        
        total = sum(score,size);
        ave = total/size;
        
        for (int i=0; i<size; i++)
        {
            cout << "Score" << i+1 <<" is: " << score[i] << endl;
        }
         
        cout << "Total is:     " << total << endl;
        cout << "Average is:   " << ave << endl;
        
        cout << "\nThank you for using the Amazing Test Scores Calculator.";
    
        score=NULL;
        delete score;
        
    return 0;
}

