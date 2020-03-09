/*
 *
 *            PROGRAMMER: Omar Alkendi
 *         PROBLEM TITLE: Homework #2 Problem #3 String Length
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

#include <iostream>
#include <cstring>
using namespace std;

void programHeader()
{
    cout << "|||The Mind-blowing C-String Length Assessor|||\n\n";
    cout << "Hello deer user, I am... you know who I am, but you do not know my"
            <<" story.\n" << "My programmer created me for a homework, and then"
            << "he left me alone to rot.\nI hope that I would be of use to you."
            << endl;
}

int main()
{
    programHeader();
    
    const int size = 101;
    char* array = new char[size];
    
    cout << "Enter a string that you would like to measure (Max 100 characters): ";
    cin.getline(array,size, '\n');
    
    cout << "Measuring..." << endl;
    
    int length = strlen(array);
    
    cout << "Your string is " << length << " character(s) long." <<endl;
    cout << "Thank you for using the Mind-blowing C-String Length Assessor.";
    
    array = NULL;
    delete array;
    
    return 0;
}

