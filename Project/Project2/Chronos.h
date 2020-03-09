#ifndef CHRONOS_H
#define CHRONOS_H
#include <iostream>
#include "TimeStamp.h"
class Chronos {
public:
    Chronos();
    Chronos(const Chronos& orig);
    Chronos(const int&);
    virtual ~Chronos();
    void setYear(const int&);
    void setTimeZone(const int&);
    const int& getYear();
    int getTimeZone();
    const int& getDay();
    const Chronos& operator=(const Chronos&);
private:
    static int year;
    static int timeZone;
protected:
    int day;
};

#endif /* CHRONOS_H */

