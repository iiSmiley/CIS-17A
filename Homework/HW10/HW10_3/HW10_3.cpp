/*
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #10 Exercise#3
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
#include "StaticQueue.h"
using namespace std;
int main()
{
    StaticQueue<int> s(5);
    s.output();
    s.enqueue(1);
    s.enqueue(2);
    s.output();
    s.dequeue();
    s.output();
    StaticQueue<string> a(5);
    a.enqueue("Omar");
    a.enqueue("Matthew");
    a.output();
    StaticQueue<char> b(5);
    b.enqueue('A');
    b.enqueue('B');
    b.output();
    b.dequeue();
    b.dequeue();
    b.output();
    return 0;
}

