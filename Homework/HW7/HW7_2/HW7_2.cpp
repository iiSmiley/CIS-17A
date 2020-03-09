/*
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #7 Exercise#2
 *    PROBLEM DEFINITION: Decryption Filter
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
void fileToArray(string fileName, char* aPtr, const int& size)
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
void decrypt(char* aPtr, string fileName)
{
    char* xPtr = new char[SIZE];
    fileToArray(fileName, xPtr, SIZE);
    for(int i=0; i<24; i++)
    {
        xPtr[i] = aPtr[i] - 10;
    }
    output(xPtr);
}
int main()
{
    char* array = new char[SIZE];
    string fileName;
    cout << "Enter the name of a file to read (e.g. sample): "; //sample, samples, and samplex are preexisting files.
    cin >> fileName;
    fileToArray(fileName, array, SIZE);
    decrypt(array,fileName);
    return 0;
}

