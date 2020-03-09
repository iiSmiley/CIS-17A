/*
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #10 Exercise#1
 *    PROBLEM DEFINITION: 
 * 
 *                  DATE: 06/04/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS:                   
 *                                                              
 */
#include <cstdlib>
#include "StaticStack.h"
using namespace std;
int main()
{
    StaticStack<int> s(5);
    s.output();
    s.push(1);
    s.push(2);
    s.output();
    s.pop();
    s.output();
    StaticStack<string> a(5);
    a.push("Omar");
    a.push("Matthew");
    a.output();
    StaticStack<char> b(5);
    b.push('A');
    b.push('B');
    b.output();
    b.pop();
    b.pop();
    b.output();
    return 0;
}

