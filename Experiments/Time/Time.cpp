/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Time.cpp
 * Author: Omar Alkendi
 * Created on May 23, 2019, 10:03 PM
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #x Exercise#x
 *    PROBLEM DEFINITION: Day of the Year
 * 
 *                  DATE: xx/xx/20xx
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS:                   
 *                                                              
 */
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include "TimeStamp.h"
#include "DayOfYear.h"
#include "Chronos.h"
//#include "TaskNode.h"
#include "TaskList.h"
#include "Task.h"
using namespace std;
const int DAYS_PER_MONTH[] = {31,28,31,30,31,30,31,31,30,31,30,31};
int day(int days)
{
    cout << "From main " << days << endl;
    int year = 1970;
    do
    {
        if(year%4==0 && days>366)
        {
            days-= 366;
            year++;
        }
        else if(year%4!=0 && days>365)
        {
            days-=365;
            year++;
        }
    }
    while(days>365);
    cout << year << endl;
    bool isMonth = true;
    int tempDay = 0;
    tempDay = days;
    int tempMonth = 0;
    int i=0;
    while(tempDay > DAYS_PER_MONTH[i])
    {
        tempDay -= DAYS_PER_MONTH[i];
        tempMonth++;
        i++;
    }
    cout <<  "Added: " << tempMonth +1 << "/" << tempDay << "/" << year << " ";
    return year;
}
int main()

{
    /*
    //do
    //{
        int Diff = 0;
        int val;
        cout << "Enter time difference in UTC: ";
        cin >> val;
        if(val<0)
        {
            Diff = 24 + val;
        }
        else if(val>0)
        {
            Diff = 24 + val; 
        }

        day(((time(0)+(Diff*3600))/86400));
        cout << setfill('0') << setw(2) << (((time(0)+(Diff*3600))%86400)/3600) << ":" <<  setfill('0') << setw(2) << ((((time(0)+(Diff*3600)))%86400)/60-(((time(0)+(Diff*3600))%86400)/3600)*60) << ":" <<  setfill('0') << setw(2) << ((time(0)+(Diff*3600))%86400)-((((time(0)+(Diff*3600))%86400)/60)*60) << " PDT" << endl;
    //}
    //while(true);
    */
    /*TimeStamp t(-7);
    int i = time(0);
    long int l = time(0);
    TimeStamp x(-7,1559967702);
    cout << endl <<  x << endl;
     */
    /*
    DayOfYear a("DEC",30,2012);
    a.printModified();
    a++;
    a.printModified();
    ++a;
    a.printModified();
    a--;
    a.printModified();
    --a;
    a.printModified();
    a.print();
    */
    /*
     * TimeStamp y(-7,time(0));
    cout << y.getYear() << endl;
    */
    /*
    DayOfYear a("DEC", 30, 2019);
    Chronos c(a.getDayModified());
    cout << c.getDay() << endl;
    cout << c.getTimeZone() << endl;
    cout << c.getYear() << endl;
    c.setYear(2020);
    cout << c.getYear() << endl;
    Chronos d(a.getDayModified());
    cout << d.getTimeZone() << endl;
    */
    
    char a[30];
    strcpy(a, "CIS-17A Project 2");
    Chronos c;
    DayOfYear d("DEC", 30, c.getYear());
    Task t(a, 1230, 1330, d.getDayModified());
    //cout << t << endl;
    
    
    TaskList l;
    l.insert(t);
    l.insert(t);
    l.output();
    l.remove(1);
    l.output();
    
    return 0;
}

