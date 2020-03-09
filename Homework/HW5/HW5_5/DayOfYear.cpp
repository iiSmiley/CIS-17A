#include "DayOfYear.h"
DayOfYear::DayOfYear(int day)
{
    this -> day = day;
    setMonth();
}

string DayOfYear::getMonthName(const int& month)
{
    return monthName[month];
}
void DayOfYear::setMonth()
{
    int tempMonth = 0;//Holds a temporary value of month while it's being incremented 
    int tempDay   = day;//Holds the value of while it is being decremented 
    bool isTrue = true; //isTrue is used to exit the do while loop
    
    do
    {
    if(tempDay > dayPerMonth[tempMonth])
    {
        tempDay -= dayPerMonth[tempMonth];
        tempMonth++;
        if(tempDay <= dayPerMonth[tempMonth])
        {
            day = tempDay;
            month = tempMonth;
            isTrue = false;
        }
    }
    else
    {
            day = tempDay;
            month = tempMonth;
            isTrue = false; 
    }
    }
    while(isTrue);
}

void DayOfYear::print()
{
    cout << getMonthName(month) << " " << day << "." << endl;
    //The I kept having a problem with the static string 
    //Correction: I fixed the issue. It was a silly typo. I forgot to put a comma
    //after the month of April.
}


string DayOfYear::monthName[]= { "January"  , "February", "March"   , "April", 
                                 "May"      , "June"    , "July"    , "August",
                                 "September", "October" , "November", "December"};


//dayPerMonth
int DayOfYear::dayPerMonth[]= {31,28,31,30,31,30,31,31,30,31,30,31}; 
