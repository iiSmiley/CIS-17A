#include "Task.h"
const int WIDTH_A = 2;
const int WIDTH_B = 3;
const char FILLER= '0';
//Default constructor
Task::Task()
     :Chronos()
{
    strcpy(taskDefinition, "                              ");
    startTime = 0;
    endTime = 0;
    TimeStamp = time(0);
    isModified = false;
}
//Copy constructor
Task::Task(const Task& orig)
{
    strcpy(this->taskDefinition, orig.taskDefinition);
    this->startTime = orig.startTime;
    this->endTime = orig.endTime;
    this->TimeStamp = orig.TimeStamp;
    this->isModified - orig.isModified;
}
//Destructor
Task::~Task()
{}
//Secondary constructor
Task::Task(const char* taskDefinition, const int& startTime,
           const int& endTime, const int& days)
     :Chronos(days), startTime(startTime), endTime(endTime)
{
    strcpy(this->taskDefinition, taskDefinition);
    setTimeStamp();
    this->isModified = false;
}
void Task::setTimeStamp()
{
    this->TimeStamp = time(0);
}
void Task::setIsModifiedTrue()
{
    this->isModified = true;
}
void Task::setTaskDefinition(const char* definition)
{
    if(strlen(definition)> 30)
    {
        throw OutOfRange();
    }
    strcpy(taskDefinition, definition);
}
void Task::setStartTime(const int& start)
{
    if(start < 0 || start > 2400)
    {
        throw OutOfRange();
    }
    startTime = start;
}
void Task::setEndTime(const int& end)
{
        if(end < 0 || end > 2400)
    {
        throw OutOfRange();
    }
        endTime = end;
}
void Task::setDay(const int& day)
{
    this->day = day;
}
int Task::getStartTime()
{
    return startTime;
}
int Task::getEndTime()
{
    return endTime;
}
const Task& Task::operator =(const Task& rhs)
{
    Chronos::operator =(rhs);
    if(this == &rhs) return *this;
    strcpy(this->taskDefinition, rhs.taskDefinition);
    this->startTime = rhs.startTime;
    this->endTime = rhs.endTime;
    this->TimeStamp = rhs.TimeStamp;
    this->isModified = rhs.isModified;
    this->day = rhs.day;
    return *this;
}
ostream& operator<<(ostream& out, const Task& rhs)
{
    //outputs in the form:
    //CIS-17A Project 2              | DEC 31 | 12:30 | 13:30 | Added 06/08/2019 at 13:38:18
    //or
    //CIS-17A Project 2              | DEC 31 | 12:30 | 13:30 | Last update 06/08/2019 at 13:38:18
    Chronos c = rhs;
    DayOfYear d(rhs.day, c.getYear());
    TimeStamp a(c.getTimeZone(),rhs.TimeStamp);
    out << left << setfill(' ') << setw(DEFINITION_SIZE) << rhs.taskDefinition << " | ";
    out << right << d << " | ";
    out << right << setw(WIDTH_A) << setfill(FILLER) << (rhs.startTime)/100 << ":";     //prints HH: 
    out << right << setw(WIDTH_A) << setfill(FILLER) << (rhs.startTime)%100 << " | ";   //prints MM | 
    out << right << setw(WIDTH_A) << setfill(FILLER) << (rhs.endTime)/100 << ":";       //prints HH:
    out << right << setw(WIDTH_A) << setfill(FILLER) << (rhs.endTime)%100 << " | ";     //prints MM | 
    if(rhs.isModified)
    {
        out << "Last update " << a;
    }
    else out << "Added " << a;
    return out;
}