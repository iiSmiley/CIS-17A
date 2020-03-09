/*
 *
 *            PROGRAMMER: Omar ALkendi
 *            Student ID: 2750876
 *                  Date: 04/19/2019
 *                    HW: 1
 *               Problem: 1
 *         I certify this is my own work and code
 *
 *         PROBLEM TITLE: Homework #1 Exercise#1
 *    PROBLEM DEFINITION: Create these functions:
 *                        1) creates an array
 *                        2) fills array with random values
 *                        3) sorts random values in the array
 *                        4) outputs all values in the array
 *                              NOTE: Use dynamic array
 * 
 *                  DATE: 04/19/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS: The user should define the size of the array, and
 *                        the random numbers should be between 0 and 100.
 *                        Implement the bubble sort algorithms for sorting
 *                        the array.                     
 *                                                              
 */

//All needed directives are here
#include <iostream> 
#include <cstdlib>
#include <iomanip>
#include <cstdlib>
using namespace std;

//Function prototypes are here
void programHeader();
void sizeObtainer(int&);
int* arrayIntializer(int);
void arrayRandomizer(int*, int);
void arraySorter(int*);
void arrayOutputter(int*, int);
void swap(int*, int*);
void isBig(int*, int*);

const int WIDTH = 3;

void programHeader()
{
    cout << "This program will:\n"
            << "1) Create an array.\n"
            << "2) Fill the array with random values.\n"
            << "3) Sort the random values in the array.\n"
            << "4) Output all values in the array.\n";
}

void sizeObtainer(int& userSize)
{
    cout << "Enter the size of array: ";
    cin >> userSize;
    
}

int* arrayIntializer(int userSize)
{   
    int* aPtr = new int[userSize];
    return aPtr;
}

void arrayRandomizer(int* aPtr, int size)
{
    for (int i=0; i<size; i++ )
        {
            aPtr[i]=rand()%100; //%100 is to set the range of random values 
        }                       //between 0 and 100.
}

void arrayOutputter(int* aPtr, int size)
{
    for (int i=0; i<size; i++ )
        {
            cout << setw(WIDTH) << aPtr[i] << "|";
        }
    
}

int main() 
{
    
    int size;
    programHeader();
    sizeObtainer(size);
    cout << "size is: " << size << endl;
    int* array = arrayIntializer(size);
    arrayRandomizer(array,size);
    arrayOutputter(array,size);

    
    
    return 0;
}
