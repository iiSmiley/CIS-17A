/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #3 Exercise#5
 *    PROBLEM DEFINITION: weather Statistics
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
#include <iomanip>
using namespace std;

int const SIZE = 12;
int const WD = 20;
string const MONTH []= { "January"  , "February", "March"   , "April",
                         "May"      , "June"    , "July"    , "August",
                         "September", "October" , "November", "December"};

struct WeatherStat 
{
    double rain;
    double htemp;
    double ltemp;
    double atemp;
};

double valueObtainer()
{
    do
    {
    double userVal = 0;
    bool isGood = cin >> userVal;
    if(isGood && userVal<=140 && -100<=userVal)
    {
        return userVal;
    };
    cout << "ERROR!!! Please enter a real value between -100 and 140 degrees F"
            << endl;
    cin.clear();
    cin.ignore(1000,'\n');
    }
    while(true);
}

double rainObtainer()
{
    do
    {
    double userVal = 0;
    bool isGood = cin >> userVal;
    if(isGood && userVal>=0)
    {
        return userVal;
    };
    cout << "ERROR!!! Please enter a real value"
            << endl;
    cin.clear();
    cin.ignore(1000,'\n');
    }
    while(true);
}

void intializer(WeatherStat*& aPtr, int size)
{
    for(int i=0; i<size; i++)
    {
    cout << "For " << MONTH[i] << ", please enter" << endl;
    cout <<"The Total Rain Fall (in inches): ";
    aPtr[i].rain = rainObtainer();
    cout <<"The Highest Recorded Temperature (in Fahrenheit): ";
    aPtr[i].htemp = valueObtainer();
    cout << "The Lowest Recorded Temperature (in Fahrenheit): ";
    aPtr[i].ltemp = valueObtainer();
    aPtr[i].atemp = ((aPtr[i].htemp+aPtr[i].ltemp)/2);
    }
    
}

double lowest(WeatherStat* aPtr,int size, int& month)
{
    double lowest=aPtr[0].htemp;
    
    for(int i=0; i<size; i++)
    {
        if(aPtr[i].ltemp < lowest)
        {
            lowest = aPtr[i].ltemp;
            month = i;
        }
    }
    
    cout << lowest << "in " << month << endl;
    return lowest;
}

double highest(WeatherStat* aPtr,int size, int& month)
{
    double highest=aPtr[0].htemp;
    
    for(int i=0; i<size; i++)
    {
        if(aPtr[i].htemp > highest)
        {
            highest = aPtr[i].htemp;
            month = i;
        }
    }
    
    cout << highest << "in " << month << endl;
    return highest;
}

double aveRain (WeatherStat* aPtr,int size)
{
    double tot=0;
    for(int i=0; i<size; i++)
    {
        tot += aPtr[i].rain;
    }
    
    return tot/size;
}

double totRain (WeatherStat* aPtr,int size)
{
    double tot=0;
    for(int i=0; i<size; i++)
    {
        tot += aPtr[i].rain;
    }
    return tot;
}

double aveTot (WeatherStat* aPtr,int size)
{
    double tot=0;
    for(int i=0; i<size; i++)
    {
        tot += aPtr[i].atemp;
    }
    return tot/size;
}

void output( double aveRain, double totRain, double high, int mHigh,
             double low, int mLow, double aveTot)
{
        cout << "The average monthly rainfall   : " << setprecision(4) <<
                aveRain << endl;
        cout << "The total rainfall for the year: " << setprecision(4) <<
                totRain << endl;
        cout << "The highest temperature was    : " << setprecision(4) <<
                high << endl;
        cout << "Occurred in: "  << MONTH[mHigh] << endl;
        cout << "The lowest temperature was     : " << setprecision(4) <<
                low << endl;
        cout << "Occurred in: " << MONTH[mLow] << endl;
        cout << "The average monthly temperature: " << setprecision(4) <<
                aveTot << endl;
}

int main()
{
    int highMonth = 0;
    int lowMonth  = 0;
    double aveR= 0;
    double totR= 0;
    double low = 0;
    double high= 0;
    double aveT = 0;
    WeatherStat* list = new WeatherStat[SIZE];
    
    intializer(list, SIZE);
    low = lowest(list, SIZE, lowMonth);
    high= highest(list, SIZE, highMonth);
    totR= totRain(list, SIZE);
    aveR= aveRain(list, SIZE);
    aveT= aveTot(list, SIZE);
    
    output(aveR, totR, high, highMonth, low, lowMonth, aveT);
    
    delete list;
    list = NULL;
    return 0;
}

