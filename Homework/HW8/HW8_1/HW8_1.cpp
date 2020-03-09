/* 
 * File:   HW8_1.cpp
 * Author: Omar Alkendi
 * Created on May 21, 2019, 9:51 PM
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #8 Exercise#1
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
#include "ProductionWorker.h"
using namespace std;
int main()
{
    ProductionWorker p(1,200.0,"Omar", 115, "05/21/2019");
    p.output();
    return 0;
}

