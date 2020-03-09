#include "Chronos.h"
const int HOURS_PER_DAY = 24;
const int DAYS_PER_WEEK = 7;
//Definition for the default constructor
Chronos::Chronos()
{
    this -> hoursOfDay = new bool[HOURS_PER_DAY];
}
//Definition for the destructor
Chronos::~Chronos()
{
    //cout << "Chronos destructor..." << endl;
    delete[] hoursOfDay;
}
//Definition for the copy constructor
Chronos::Chronos(const Chronos& chronos)
{
    this -> hoursOfDay = new bool[HOURS_PER_DAY];
    for(int i=0; i < HOURS_PER_DAY; i++)
    {
        this -> hoursOfDay[i] = chronos.hoursOfDay[i];
    }
}
//Definition for the assignment operator
Chronos Chronos::operator =(const Chronos& rhs)
{
    if(this == &rhs)
    {
        return *this;
    }
    //Making a deep copy
    delete this -> hoursOfDay;
    this -> hoursOfDay = new bool[HOURS_PER_DAY];
    for(int i=0; i < HOURS_PER_DAY; i++)
    {
        this -> hoursOfDay[i] = rhs.hoursOfDay[i];
    }
    return *this;
}
//Definition for the setter
//the status variable switches the values in the array between 0 and 1 (Boolean) 
void Chronos::setHoursOfDay(const int& hourLocation, bool status)
{
    this -> hoursOfDay[hourLocation] = status;
}
//Definition for the getter
//Returns the status of a specific hour in the array
bool Chronos::getHoursOfDay(const int& hourLocation)
{
    return this -> hoursOfDay[hourLocation];
}


