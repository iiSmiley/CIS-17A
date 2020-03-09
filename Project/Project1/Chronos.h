#ifndef CHRONOS_H
#define CHRONOS_H
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <cctype>
using namespace std;

/*
 * Chronos, from the Greek word for time, is a class that represents the
 * 24 hours of a day in a dynamically allocated array.
 * 1 Chronos == 1 Day == 24 Hours
 * The chronos array will have a value of either 0, which represents an hour 
 * that has not been allocated for any task, or 1, which means the hour has been
 * allocated for a task.
 */

class Chronos
{
private:
    bool* hoursOfDay;        //Pointer to the dynamic array HoursOfDay
public:
    Chronos();              //Default constructor
    ~Chronos();             //Destructor
    Chronos(const Chronos&);//Copy constructor
    Chronos operator=(const Chronos&);  //Assignment operator
    void setHoursOfDay(int const&, bool);//Sets the HousrOfDay to 0 or 1 at a specific location
    bool getHoursOfDay(int const&);      //Returns the value of HoursOfDay at a specific location
};

#endif /* CHRONOS_H */

