#include "TimeStamp.h"
//All needed constants for TimeStamp to function properly.
const int DAYS_PER_MONTH[] = {31,28,31,30,31,30,31,31,30,31,30,31};
const int DAYS_PER_MONTH_LEAP[] = {31,29,31,30,31,30,31,31,30,31,30,31};
const int START_YEAR = 1970;    //time(0) returns all the seconds from 01/01/1970
const int SECONDS_PER_DAY = 86400;
const int SECONDS_PER_HOUR = 3600;
const int MINUTES_PER_HOUR = 60;
const int LEAP_FACTOR = 4;
const int WIDTH = 2;
const char FILLER = '0';    //Used ti fill the empty gaps in the time stamp (ex. 9:30 -> 09:30)
//The definition for the constructor that is going to be used;
//The definition of the useless default constructor
TimeStamp::TimeStamp()
{
    this->day   = 0;
    this->month = 0;
    this->year  = 0;
    this->hour  = 0;
    this->minute= 0;
    this->second= 0;
    
}
//This constructor will be used to keep the clock on the program up to date
//whenever the Task list is displayed.
TimeStamp::TimeStamp(const int& timeZone)
{
    //All the codes from here are based on basic mathematical calculation.
    int timeDifference = 24 + timeZone; //Since the time(0) function will return 
                                        //the number of seconds with respect to 
                                        //UTC time zone, the difference in time 
                                        //zone must be passed for accurate stamping.
    int days = ((time(0)+(timeDifference*SECONDS_PER_HOUR))/SECONDS_PER_DAY);
    //days = ((time(0)+(timeDifferance*3600))/84600).
    //The variable days holds the number of days since 01/01/1970.
    int year = START_YEAR;  //year = 1970.
    //The do-while loop will subtract the number of days till the current year 
    //is reached.
    do
    {
        if(year%LEAP_FACTOR == 0 && days>366)
        {
            days-= 366;
            year++;
        }
        else if(year%LEAP_FACTOR != 0 && days>365)
        {
            days-=365;
            year++;
        }
    }
    while(days>365);
    //Now the remaining days are subtracted by DAYS_PER_MONTH till the
    //current month is reached  
    int tempMonth = 0;
    int i = 0;
    if(year%LEAP_FACTOR == 0)
    {
        while(days > DAYS_PER_MONTH[i])
        {
            days -= DAYS_PER_MONTH_LEAP[i];
            tempMonth++;
            i++;
        }
    }
    else
    {
        while(days > DAYS_PER_MONTH[i])
        {
            days -= DAYS_PER_MONTH[i];
            tempMonth++;
            i++;
        } 
    }
    //Now we have the current year, month, and day which are the elements of a date.
    //The time is calculated using mathematical relations between the number of
    //seconds and other values.
    this->day   = days;
    this->month = tempMonth+1;//The 1 is added to overcome the offset
    this->year  = year;
    this->hour  = (((time(0)+(timeDifference*SECONDS_PER_HOUR))%SECONDS_PER_DAY)/SECONDS_PER_HOUR);
    this->minute= ((((time(0)+(timeDifference*SECONDS_PER_HOUR)))%SECONDS_PER_DAY)/MINUTES_PER_HOUR-(((time(0)+(timeDifference*SECONDS_PER_HOUR))%SECONDS_PER_DAY)/SECONDS_PER_HOUR)*MINUTES_PER_HOUR);
    this->second= ((time(0)+(timeDifference*SECONDS_PER_HOUR))%SECONDS_PER_DAY)-((((time(0)+(timeDifference*SECONDS_PER_HOUR))%86400)/MINUTES_PER_HOUR)*MINUTES_PER_HOUR);
    //Since this is a timestamp class, it would make sense that it will be called
    //whenever a timestamp is needed. Thus, to reduce the code required for it 
    //TimeStamp to make its stamp, the output has been included in the constructor.
    cout << *this;
}
//This constructor will be used to calculate the Task addTime whenever the 
//task is displayed 
TimeStamp::TimeStamp(const int& timeZone, const int& addTime)
{
    //All the codes from here are based on basic mathematical calculation.
    int timeDifference = 24 + timeZone; //Since the time(0) function will return 
                                        //the number of seconds with respect to 
                                        //UTC time zone, the difference in time 
                                        //zone must be passed for accurate stamping.
    int days = ((addTime+(timeDifference*SECONDS_PER_HOUR))/SECONDS_PER_DAY);
    //days = ((time(0)+(timeDifferance*3600))/84600).
    //The variable days holds the number of days since 01/01/1970.
    int year = START_YEAR;  //year = 1970.
    //The do-while loop will subtract the number of days till the current year 
    //is reached.
    do
    {
        if(year%LEAP_FACTOR == 0 && days>366)
        {
            days-= 366;
            year++;
        }
        else if(year%LEAP_FACTOR != 0 && days>365)
        {
            days-=365;
            year++;
        }
    }
    while(days>365);
    //Now the remaining days are subtracted by DAYS_PER_MONTH till the
    //current month is reached  
    int tempMonth = 0;
    int i = 0;
    if(year%LEAP_FACTOR == 0)
    {
        while(days > DAYS_PER_MONTH[i])
        {
            days -= DAYS_PER_MONTH_LEAP[i];
            tempMonth++;
            i++;
        }
    }
    else
    {
        while(days > DAYS_PER_MONTH[i])
        {
            days -= DAYS_PER_MONTH[i];
            tempMonth++;
            i++;
        } 
    }
    //Now we have the current year, month, and day which are the elements of a date.
    //The time is calculated using mathematical relations between the number of
    //seconds and other values.
    this->day   = days;
    this->month = tempMonth+1;//The 1 is added to overcome the offset
    this->year  = year;
    this->hour  = (((addTime+(timeDifference*SECONDS_PER_HOUR))%SECONDS_PER_DAY)/SECONDS_PER_HOUR);
    this->minute= ((((addTime+(timeDifference*SECONDS_PER_HOUR)))%SECONDS_PER_DAY)/MINUTES_PER_HOUR-(((addTime+(timeDifference*SECONDS_PER_HOUR))%SECONDS_PER_DAY)/SECONDS_PER_HOUR)*MINUTES_PER_HOUR);
    this->second= ((addTime+(timeDifference*SECONDS_PER_HOUR))%SECONDS_PER_DAY)-((((addTime+(timeDifference*SECONDS_PER_HOUR))%86400)/MINUTES_PER_HOUR)*MINUTES_PER_HOUR);
    //Since this is a timestamp class, it would make sense that it will be called
    //whenever a timestamp is needed. Thus, to reduce the code required for it 
    //TimeStamp to make its stamp, the output has been included in the constructor.
}
//Definition for the copy constructor
TimeStamp::TimeStamp(const TimeStamp& orig)
{
    this->day   = orig.day;
    this->month = orig.month;
    this->year  = orig.year;
    this->hour  = orig.hour;
    this->minute= orig.minute;
    this->second= orig.second;
}
//No data has been dynamically allocated 
TimeStamp::~TimeStamp()
{}
int TimeStamp::getYear()
{
    return year;
}
const TimeStamp& TimeStamp::operator =(const TimeStamp& rhs)
{
    if(this == &rhs) return *this;
    this->day   = rhs.day;
    this->month = rhs.month;
    this->year  = rhs.year;
    this->hour  = rhs.hour;
    this->minute= rhs.minute;
    this->second= rhs.second;
}
ostream& operator<<(ostream& out, const TimeStamp& rhs)
{
    //The insertion overload, once used with cout, will output
    //the TimeStamp in this format: mm/dd/yyyy at HH:MM:SS 
    out << right << setw(WIDTH) << setfill(FILLER) << rhs.month << "/";
    out << right << setw(WIDTH) << setfill(FILLER) << rhs.day << "/";
    out << rhs.year << " at ";
    out << right << setw(WIDTH) << setfill(FILLER) << rhs.hour << ":";
    out << right << setw(WIDTH) << setfill(FILLER) << rhs.minute << ":";
    out << right << setw(WIDTH) << setfill(FILLER) << rhs.second;
}

