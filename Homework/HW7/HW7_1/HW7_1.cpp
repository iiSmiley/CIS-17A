/*
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #7 Exercise#1
 *    PROBLEM DEFINITION: Encryption Filter
 * 
 *                  DATE: 05/14/2019
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
#include <fstream>
#include <cstring>
using namespace std;
const int SIZE = 20;
void output(char* aPtr)
{
    for(int i=0; i<SIZE; i++)
    {
        cout << aPtr[i];
    }
    cout << endl;
}
void arrayToFile(string fileName, char* aPtr, const int& size)
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
void encrypt(char* aPtr, string fileName)
{
    char* xPtr = new char[SIZE];
    for(int i=0; i<24; i++)
    {
        xPtr[i] = aPtr[i] + 10;
    }
    fileName += "Enc";
    arrayToFile(fileName, xPtr, SIZE);
    output(xPtr);
}
int main()
{
    char* array = new char[SIZE];
    string fileName;
    cout << "Enter a string to encrypt (20 characters max): ";
    cin.getline(array,20);
    cout << "Enter a name for the file: ";
    cin >> fileName;
    arrayToFile(fileName, array, SIZE);
    encrypt(array,fileName);
    return 0;
}

