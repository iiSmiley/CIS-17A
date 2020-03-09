/* 
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #9
 *    PROBLEM DEFINITION: 
 * 
 *                  DATE: 05/28/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS:                   
 *                                                              
 */
#include "LinkedList.h"
using namespace std;
int main()
{
    LinkedList a;
    a.append(1);
    a.append(2);
    a.append(4);
    a.print();
    a.insert(3);
    a.print();
    a.insert(7);
    a.print();
    a.search(7);
    a.remove(7);
    a.print();
    a.remove(2);
    a.remove(1);
    a.print();
    return 0;
}

