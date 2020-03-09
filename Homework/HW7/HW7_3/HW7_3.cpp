/* 
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #7 Exercise#9
 *    PROBLEM DEFINITION: Array/File Functions
 * 
 *                  DATE: 05/13/2019
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
#include <fstream>
using namespace std;
void arrayToFile(string fileName, int* aPtr, const int& size)
{
    fileName += ".bin";
    fstream outFile;
    outFile.open(fileName.c_str(), ios::out | ios::binary);
        if(outFile)
        {
            outFile.write(reinterpret_cast<char*>(aPtr), sizeof(*aPtr)*size);
            outFile.close();
            cout << "The file " << fileName << " was successfully written." << endl;
        }
        else
        {
            cout << "ERROR!!! Could not open " << fileName << endl;
        }
}
void fileToArray(string fileName, int* aPtr, const int& size)
{
    fileName += ".bin";
    fstream inFile;
    inFile.open(fileName.c_str(), ios::in | ios::binary);
        if(inFile)
        {
            inFile.read(reinterpret_cast<char*>(aPtr), sizeof(*aPtr)*size);
            inFile.close();
            cout << "The file " << fileName << " was successfully read." << endl;
        }
        else
        {
            cout << "ERROR!!! Could not open " << fileName << endl;
        }
}
void output(int* aPtr, const int& size)
{
    for(int i=0; i< size; i++)
    {
        cout << "Element " << i+1 << " is; " << aPtr[i] << endl;
    }
}
char menu(char& choice)
{
    cout << "           |||MENU|||          " << endl;
    cout << "Please make a choice A~C:" << endl;
    cout << "A) Create a dynamic array of a size of your choice, gets filled randomly, and saved as binary file." << endl;
    cout << "B) Open a pre-existing binary file and output its values." << endl;
    cout << "C) Close the application." << endl;
        do
        {
               cin >> choice;
               if(toupper(choice) >= 'A' && toupper(choice) <= 'C')
               {
                   return toupper(choice);
               }
               else
               {
                   cout << "ERROR!!! Please make a valid selection." << endl;
               }
        }
        while(true);
}
void firstFunction()
{
    int size;
    cout << "How big do you want the array to be? ";
    cin >> size;
    int* array = new int[size];
        for(int i=0; i<size; i++)
        {
            array[i] = rand();
        }
    cout << "Enter a name for the file (e.g. Array): ";
    string fileName;
    cin >> fileName;
    output(array, size);
    arrayToFile(fileName, array, size);  
}
void secondFunction()
{
    int size;
    cout << "How big is the array that you want to read? ";
    cin >> size;
    int* array = new int[size];
    cout << "Enter the name of the file (e.g. Array): ";
    string fileName;
    cin >> fileName;
    fileToArray(fileName, array, size);
    output(array, size);
}
int main()
{
    char choice;
        do
        {
            choice = menu(choice);
            switch(choice)
            {
                case 'A': firstFunction();
                    break;
                case 'B': secondFunction();
                    break;
            }
        }
        while(choice != 'C');
    return 0;
}

