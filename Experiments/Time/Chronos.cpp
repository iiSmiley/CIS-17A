#include "Chronos.h"
#include "TimeStamp.h" 
const int PST = -8;
const int PDT = -7;
const int UTC = 0;
TimeStamp a(PDT,time(0));
const int DEFAULT_YEAR = a.getYear();
int Chronos::year = DEFAULT_YEAR; //Which is the year in which the program was written (2019).
int Chronos::timeZone = PDT; //In UTC -> UTC -7

//Default constructor
Chronos::Chronos()
{
    day = 0;
}
//Copy constructor
Chronos::Chronos(const Chronos& orig)
{
    this->day = orig.day;
}
//Secondary constructor
Chronos::Chronos(const int& day)
{
    this->day = day;
}
//Destructor
Chronos::~Chronos()
{}
//The setYear is required to set the value of the static year value 
void Chronos::setYear(const int& year)
{
    this->year = year;
}
//The setTimeZone function is required to set the value of the static timeZone value 
void Chronos::setTimeZone(const int& timeZone)
{
    this->timeZone = timeZone;
}
//Accessor for year
const int& Chronos::getYear()
{
    return year;
}
//Accessor for timeZone
int Chronos::getTimeZone()
{
    return timeZone;
}
//Accessor for day
const int& Chronos::getDay()
{
    return day;
}
//Definition for the assignment operator
const Chronos& Chronos::operator =(const Chronos& rhs)
{
    if(this == &rhs) return *this;
    this->day = rhs.day;
}

