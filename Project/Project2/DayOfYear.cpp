#include "DayOfYear.h"
const string DayOfYear::MONTH_NAME[]= { "JAN", "FEB", "MAR", "APR", 
                                        "MAY", "JUN", "JUL", "AUG",
                                        "SEP", "OCT", "NOV", "DEC"};
//dayPerMonth
const int DayOfYear::DAY_PER_MONTH[]     = {31,28,31,30,31,30,31,31,30,31,30,31}; 
const int DayOfYear::DAY_PER_MONTH_LEAP[]= {31,29,31,30,31,30,31,31,30,31,30,31}; 
//Default constructor
DayOfYear::DayOfYear()
{
    this->day = 0;
    this->month = 0;
    this->year = 0;
    this->dayModified = 0;
}
//Destructor
DayOfYear::~DayOfYear()
{
    //No memory got dynamically allocated. 
}
//Secondary constructor 
DayOfYear::DayOfYear(const int& day, const int& year)
{
    this->day = day;
    this->year = year;
    setMonth();
}
//Tertiary constructor
DayOfYear::DayOfYear(const string& month, const int& day, const int& year)
{
    this->day = day;
    this->year = year;
    for(int i=0; i<12; i++)
    {
        if(month==MONTH_NAME[i])
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
//the setDayModified return the number of the day in the year
void DayOfYear::setDayModified()
{
    int tempDays=0;
    if(year%4 == 0)//Is it a leap year?
    {
        for(int i=0; i< month; i++)
        {
            tempDays += DAY_PER_MONTH_LEAP[i];
        }
        this -> dayModified = day + tempDays;
    }
    else if(year%4 != 0)//Is it a normal year
    {
        for(int i=0; i< month; i++)
        {
            tempDays += DAY_PER_MONTH[i];
        }
        this -> dayModified = day + tempDays;
    }
}
//Returns the name of the month
string DayOfYear::getMonthName()
{
    return MONTH_NAME[month];
}
void DayOfYear::setMonth()
{
    int tempMonth = 0;//Holds a temporary value of month while it's being incremented 
    int tempDay   = day;//Holds the value of while it is being decremented 
    bool isTrue = true; //isTrue is used to exit the do while loop
    if(year%4 == 0)//Is it a leap year?
    {
        do
        {
        if(tempDay > DAY_PER_MONTH_LEAP[tempMonth])
        {
            tempDay -= DAY_PER_MONTH_LEAP[tempMonth];
            tempMonth++;
            if(tempDay <= DAY_PER_MONTH_LEAP[tempMonth])
            {
                day = tempDay;
                month = tempMonth;
                isTrue = false;
            }
        }
        }
        while(isTrue);        
    }
    else if(year%4 != 0)//Is it a normal year?
    {
        do
        {
        if(tempDay > DAY_PER_MONTH[tempMonth])
        {
            tempDay -= DAY_PER_MONTH[tempMonth];
            tempMonth++;
            if(tempDay <= DAY_PER_MONTH[tempMonth])
            {
                day = tempDay;
                month = tempMonth;
                isTrue = false;
            }
        }
        }
        while(isTrue);
    }
}
const int& DayOfYear::getDayModified()
{
    return dayModified;
}
void DayOfYear::print()
{
    cout << getMonthName() << " " << day << "." << endl;
}
void DayOfYear::printModified()
{
    cout << "The number of total days till the entered date is: "
            << dayModified << "." << endl;
}
//Assignment operator
const DayOfYear& DayOfYear::operator =(const DayOfYear& rhs)
{
    if(this == &rhs) return *this;
    this->day = rhs.day;
    this->dayModified = rhs.dayModified;
    this->month = rhs.month;
    this->year = rhs.year;
}
//Prefix ++
const DayOfYear& DayOfYear::operator ++()
{
    if(dayModified == 365 && year%4 != 0 || dayModified == 366 && year%4 == 0)
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
const DayOfYear& DayOfYear::operator ++(int)
{
    DayOfYear temp(*this);
    if(dayModified == 365 && year%4 != 0 || dayModified == 366 && year%4 == 0)
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
const DayOfYear& DayOfYear::operator --()
{
    if(dayModified==1)
    {
        if(year%4 == 0) dayModified = 366;
        else dayModified = 365;
    }
    else
    {
        dayModified--;
    };
    return *this;
}
//Postfix --
const DayOfYear& DayOfYear::operator --(int)
{
    DayOfYear temp(*this);
    if(dayModified==1)
    {
        if(year%4 == 0) dayModified = 366;
        else dayModified = 365;
    }
    else
    {
        dayModified--;
    };
    return temp;
}
ostream& operator<<(ostream& out, const DayOfYear& rhs)
{
    out << DayOfYear::MONTH_NAME[rhs.month] << " " << rhs.day;
    return out;
}

