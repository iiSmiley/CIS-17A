#ifndef TASK_H
#define TASK_H
#include "Chronos.h"
#include "DayOfYear.h"
#include <cstring>
#include <cctype>
using namespace std;
const int DEFINITION_SIZE = 30;
class Task: public Chronos
{
public:
    Task();                     //Default constructor
    Task(const Task& orig);     //Copy constructor
    virtual ~Task();            //Destructor
    Task (const char*, const int& startTime,
          const int& endTime, const int& days);//Secondary constructor
    void setTimeStamp();        //Auto-generates the time stamp
    void setIsModifiedTrue();
    void setTaskDefinition(const char*);
    void setStartTime(const int&);
    void setEndTime(const int&);
    void setDay(const int&);
    int getStartTime();
    int getEndTime();
    const Task& operator=(const Task&);
    friend ostream& operator<<(ostream&, const Task&);
    class OutOfRange {};
private:
    //User defined inputs:
    char taskDefinition[DEFINITION_SIZE];   //Will hold the definition of the task (eg. "Work on CIS-17A Project 2")
    int startTime;           //Holds the projected starting time in military style (eg. 12:30 -> 1230)
    int endTime;             //Holds the projected finish time in military style (eg. 12:30 -> 1230)
    //Auto-generated variables
    int TimeStamp;     //Uses time(0) to show the user when was the task added or last modified
    bool isModified;   //To print last modified instead of added to the time stamp 
};
#endif /* TASK_H */

