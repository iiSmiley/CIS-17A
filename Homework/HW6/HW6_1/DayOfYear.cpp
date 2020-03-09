#include "DayOfYear.h"
//Default constructor
DayOfYear::DayOfYear(int day)
{
    this -> day = day;
    setMonth();
}

//Destructor
DayOfYear::~DayOfYear()
{
    //No memory got dynamically allocated. 
}

DayOfYear::DayOfYear(string month, int day)
{
    this -> day = day;
    for(int i=0; i<12; i++)
    {
        if(month==monthName[i])
        {
            this -> month = i;
            break;
        }
    }
    setDayModified();
}

//Copy constructor
DayOfYear::DayOfYear(const DayOfYear& rhs)
{
    this -> day = rhs.day;
    this -> day = rhs.month;
}

void DayOfYear::setDayModified()
{
    int tempDays=0;
    for(int i=0; i< month; i++)
    {
        tempDays += dayPerMonth[i];
    }
    this -> dayModified = day + tempDays;
}

//Returns the name of the month
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

void DayOfYear::printModified()
{
    cout << "The number of total days till the entered date is: "
            << dayModified << "." << endl;
}

//Prefix ++
DayOfYear DayOfYear::operator ++()
{
    if(dayModified==365)
    {
        dayModified = 1;
    }
    else
    {
        dayModified++;
    };
    return *this;
    
}

//Postfix ++
DayOfYear DayOfYear::operator ++(int)
{
    DayOfYear temp(*this);
    if(dayModified==365)
    {
        dayModified = 1;
    }
    else
    {
        dayModified++;
    };
    return temp;
}

//Prefix --
DayOfYear DayOfYear::operator --()
{
    if(dayModified==1)
    {
        dayModified = 365;
    }
    else
    {
        dayModified--;
    };
    return *this;
    
}

//Postfix --
DayOfYear DayOfYear::operator --(int)
{
    DayOfYear temp(*this);
    if(dayModified==1)
    {
        dayModified = 365;
    }
    else
    {
        dayModified--;
    };
    return temp;
}

string DayOfYear::monthName[]= { "January"  , "February", "March"   , "April", 
                                 "May"      , "June"    , "July"    , "August",
                                 "September", "October" , "November", "December"};


//dayPerMonth
int DayOfYear::dayPerMonth[]= {31,28,31,30,31,30,31,31,30,31,30,31}; 
