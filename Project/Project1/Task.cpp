const int MAX_TASKS_PER_DAY = 24;
const int WD1 = 24;
const int WD2 = 6;
#include "Task.h"
#include "Week.h"
//Definition for the static variable nummberOfTasks 
int Task::numberOfTasks =0;
string Task::days[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

//Definition for the default constructor
Task::Task()
{
    //taskDefinition = new string[this->numberOfTasks];
    //taskDay = new int[this->numberOfTasks];
    //taskTime = new int[this->numberOfTasks];
    //taskDuration = new int[this->numberOfTasks];
    taskDefinition = new string[MAX_TASKS_PER_DAY];
    taskDay = new int[MAX_TASKS_PER_DAY];
    taskTime = new int[MAX_TASKS_PER_DAY];
    taskDuration = new int[MAX_TASKS_PER_DAY];
}
Task::~Task()
{
    delete[] taskDefinition;
    delete[] taskDay;
    delete[] taskTime;
    delete[] taskDuration;
}
Task::Task(const Task& task)
{
    cout << "copying..." << endl;
    this -> numberOfTasks = task.numberOfTasks;
    this -> week = task.week;
    this -> taskDefinition = new string[MAX_TASKS_PER_DAY];
    this -> taskDay = new int[MAX_TASKS_PER_DAY];
    this -> taskTime = new int[MAX_TASKS_PER_DAY];
    this -> taskDuration = new int[MAX_TASKS_PER_DAY];
    //Making deep copies
    for(int i=0; i < MAX_TASKS_PER_DAY; i++)
    {
        this -> taskDefinition[i] = task.taskDefinition[i];
    }
    for(int i=0; i < MAX_TASKS_PER_DAY; i++)
    {
        this -> taskDay[i] = task.taskDay[i];
    }
    for(int i=0; i < MAX_TASKS_PER_DAY; i++)
    {
        this -> taskTime[i] = task.taskTime[i];
    }
    for(int i=0; i < MAX_TASKS_PER_DAY; i++)
    {
        this -> taskDuration[i] = task.taskDuration[i];
    }
}
//Definition of the assignment operator
Task Task::operator =(const Task& rhs)
{
    if(this == &rhs)
    {
        cout << "Self Assignment!" << endl;
        return *this;
    }
    this -> week = rhs.week;
    //Making deep copies
    delete[] this -> taskDefinition;
    this -> taskDefinition = new string[25];
    for(int i=0; i < rhs.numberOfTasks; i++)
    {
        this -> taskDefinition[i] = rhs.taskDefinition[i];
    }
        delete[] this -> taskDay;
        this -> taskDay = new int[25];
        for(int i=0; i < rhs.numberOfTasks; i++)
    {
        this -> taskDay[i] = rhs.taskDay[i];
    }   
        delete[] this -> taskTime;
         this -> taskTime = new int[25];
        for(int i=0; i < rhs.numberOfTasks; i++)
    {
        this -> taskTime[i] = rhs.taskTime[i];
    }
        delete [] this -> taskDuration;
        this -> taskDuration = new int[25];
        for(int i=0; i < rhs.numberOfTasks; i++)
    {
        this -> taskDuration[i] = rhs.taskDuration[i];
    }
        return *this;
}
void Task::swapInt(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp; 
}
void Task::swapStr(string& x, string& y)
{
    string temp = x;
    x = y;
    y = temp; 
}
//Definition for the sorter function
void Task::sorter()
{
    //First, sort by day.
    bool isSorted = false;
    while(!isSorted)
    {
        isSorted = true;
        for(int i=0; i < numberOfTasks -1; i++)
        {
            if(taskDay[i] > taskDay[i+1])
            {
                swapInt(taskDay[i],taskDay[i+1]);
                swapInt(taskTime[i],taskTime[i+1]);
                swapInt(taskDuration[i],taskDuration[i+1]);
                swapStr(taskDefinition[i], taskDefinition[i+1]);
                isSorted = false;
            }
        }
    }
    //Second, sort by time;
    isSorted = false;
    while(!isSorted)
    {
        isSorted = true;
        for(int i=0; i < numberOfTasks -1; i++)
        {
            if(taskTime[i] > taskTime[i+1] && taskDay[i]==taskDay[i+1])
            {
                swapInt(taskTime[i],taskTime[i+1]);
                swapInt(taskDuration[i],taskDuration[i+1]);
                swapStr(taskDefinition[i], taskDefinition[i+1]);
                isSorted = false;
            }
        }
    }
}
//Definition of the checkAvailability function
bool Task::checkAvailability(const int& dayLocation, const int& hourLocation)
{
    if((this -> week.getWeek(dayLocation,hourLocation)))
    {
        cout << "ERROR!!! You can't have two tasks at the same time!" << endl;
        return false;
    }
    else if(!(this -> week.getWeek(dayLocation,hourLocation)))
    {
        return true;
    }
}
void Task::addTask(const string& definition, const int& day, const int& time, const int& duration)
{
    bool done = true;
    cout << "Adding a task..." << definition << endl;
        if(checkAvailability(day,time))
        {
            for(int i=time; i < time+duration; i++)
            {
                week.accessWeek(day,i, 1);
                cout << "Changing status..." << endl;
            }
            taskDefinition[this->numberOfTasks] = definition;
            taskDay[this->numberOfTasks] = day;
            taskTime[this->numberOfTasks] = time;
            taskDuration[this->numberOfTasks] = duration;
            this -> numberOfTasks++;
            cout << "Task Added" << endl; 
            done = false;
        }
        else
        {
            cout << "ERROR!!! You can't have two tasks at the same time" << endl;
        }
    
    sorter();
}
string Task::getTask(const int& location)
{
    return this -> taskDefinition[location];
}
int Task::getTaskDay(const int& location)
{
    return this -> taskDay[location];
}
int Task::getTaskTime(const int& location)
{
    return this -> taskTime[location];
}
int Task::getTaskDuration(const int& location)
{
    return this -> taskDuration[location];
}
int Task::getNumberOfTasksk()
{
    return this -> numberOfTasks;
}
void Task::output()
{
    cout << "______________________________________________________________________" << endl;
    cout << setw(WD2) << left << "Day";
    cout << setw(WD1) << left << "Task";
    cout << setw(WD2) << left << "From";
    cout << setw(WD2) << left << "To" << endl;
    cout << "______________________________________________________________________" << endl;
    
    for(int i=0; i <numberOfTasks; i++)
    {
    cout << setw(WD2) << left << days[taskDay[i]-1];
    cout << setw(WD1) << left << taskDefinition[i];
    cout << setw(WD2) << left << taskTime[i];
    cout << setw(WD2) << left << taskTime[i]+taskDuration[i] << endl;
    }
}