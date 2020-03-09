#ifndef WEEK_H
#define WEEK_H
#include "Chronos.h"
class Week
{
private:
    Chronos* week;      //Hold the value of seven chorona
public:
    Week();     //Default constructor
    ~Week();    //Destructor
    Week(const Week&);          //Copy constructor
    Week operator=(const Week&);//Assignment operator
    void accessWeek(const int&, const int&, bool);  //setter
    bool getWeek(const int&, const int&);           //getter
};

#endif /* WEEK_H */

