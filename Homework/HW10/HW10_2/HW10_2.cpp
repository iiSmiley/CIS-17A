/*
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #10 Exercise#2
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
#include "DynamicStack.h"
using namespace std;
int main()
{
    DynamicStack<int> s;
    s.output();
    s.push(1);
    s.push(2);
    s.output();
    s.pop();
    s.output();
    DynamicStack<string> a;
    a.push("Omar");
    a.push("Matthew");
    a.output();
    DynamicStack<char> b;
    b.push('A');
    b.push('B');
    b.output();
    b.pop();
    b.pop();
    b.output();
    return 0;
}

