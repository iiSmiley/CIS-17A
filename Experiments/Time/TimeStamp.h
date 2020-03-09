#ifndef TIMESTAMP_H
#define TIMESTAMP_H
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
class TimeStamp {
public:
    TimeStamp();                    //Default constructor
    TimeStamp(const TimeStamp&);    //Copy constructor
    TimeStamp(const int& timeZone); //The only constructor to be actually used
    TimeStamp(const int& timeZone, const int& addTime);//Special constructor 
    virtual ~TimeStamp();           //Destructor
    int getYear();                  //Returns the value of year
    const TimeStamp& operator=(const TimeStamp&);   //The overload for the assignment operator
    friend ostream& operator<<(ostream&, const TimeStamp&);//The overload for the insertion operator
private:
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int second;
};


#endif /* TIMESTAMP_H */

