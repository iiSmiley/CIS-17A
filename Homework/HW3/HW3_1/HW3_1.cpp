/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #3 Exercise#1
 *    PROBLEM DEFINITION: Date Converter
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

using namespace std;

string const MONTH []= { "January"  , "February", "March"   , "April",
                         "May"      , "June"    , "July"    , "August",
                         "September", "October" , "November", "December"};

int main()
{
    string date;
    cout << "Enter a date in the format mm/dd/yyyy (e.g. 04/28/2019): ";
    
    //Saving the entry of the user as a string.
    getline(cin,date);
    
    //No entry verification is required by the problem.
    
    /* 
     * Assuming the user will enter the string in the specified form, we could
     * utilize the .substr, a member function of string, to return a new
     * string the starts and ends at specific location in the input string.
     *     
     * Disclaimer: I did not find the .substr function in the book, but rather 
     * found it online while searching a simple solution to extract information 
     * from a string without the use of char array and a for loop that finds
     * the char '/' and returns  an offset with the location of the slash.
     * 
     * NOTE: atoi will skip the char '/' once encountered.
     */
    
    int month = atoi(date.substr(0,2).c_str());
    int day = atoi(date.substr(3,5).c_str());
    int year = atoi(date.substr(6).c_str());
    cout <<  MONTH[month-1] << " " <<day << ", " << year;
    
    return 0;
}

