#include "Chronos.h"
#include "Week.h"
const int DAYS_PER_WEEK = 7;
//Definition for the default constructor
Week::Week()
{
    this -> week = new Chronos[DAYS_PER_WEEK];
}
//Definition for the destructor
Week::~Week()
{

    delete[] this -> week; 
}
//Definition for the copy constructor
Week::Week(const Week& week)
{
    this -> week = new Chronos[DAYS_PER_WEEK];
    for(int i=0; i < DAYS_PER_WEEK; i++)
    {
        this -> week[i] = week.week[i];
    }
}
//Definition for the assignment operator
Week Week::operator =(const Week& rhs)
{
    if(this==&rhs)
    {
        cout << "Week self assignment..." << endl;
        return *this;
    }
    delete[] this -> week;
    this -> week = new Chronos[DAYS_PER_WEEK];
    for(int i=0; i < DAYS_PER_WEEK; i++)
    {
        this -> week[i] = rhs.week[i];
    }
    return *this;
}
//Definition for the setter
//Sets the status of a specific hour in a specific day of the week

void Week::accessWeek(const int& dayLocation, const int& hourLocation, bool status)
{
    this -> week[dayLocation].setHoursOfDay(hourLocation, status);
}
bool Week::getWeek(const int& dayLocation, const int& hourLocation)
{
    return this -> week[dayLocation].getHoursOfDay(hourLocation);
}