/* 
 * File:   HW8_2.cpp
 * Author: Omar Alkendi
 * Created on May 21, 2019, 9:57 PM
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #8 Exercise#2
 *    PROBLEM DEFINITION: 
 * 
 *                  DATE: 05/21/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS:                   
 *                                                              
 */
#include "ShiftSupervisor.h"
using namespace std;
int main()
{
    ShiftSupervisor s(500000, 40000, "Matthew", 777, "05/21/2019");
    s.output();
    return 0;
}

