#ifndef TASK_H
#define TASK_H
#include "Week.h"
/*
 * The class Task is the core of My Week application. Task utilizes the classes
 * Chronos and Week to create a one week planner. 
 */

class Task
{
private:
    static int numberOfTasks;       //Holds the total number of tasks
    static string days[];     //To be used for output
    Week week;              //Creates the time frame for one week
    string* taskDefinition; //Holds user defined strings for the tasks 
    int* taskDay;           //Holds user defined day in the week for the task
    int* taskTime;          //Holds user defined time im a day for the task
    int* taskDuration;      //Holds the user estimated duration for the task
    int size;
public:
    Task();                 //Default constructor
    ~Task();                //Destructor
    Task(const Task&);      //Copy constructor
    Task operator=(const Task&);//Assignment operator
    void sorter();          //Arrange tasks per day and time
    void swapInt(int&, int&);   //Used by arrange function
    void swapStr(string&, string&);//Used by the arrange function;
    bool checkAvailability(const int&, const int&);//Checks if the a time location is used or not
    void addTask(const string&, const int&, const int&, const int&);//Adds a new task to the list
    string getTask(const int&);
    int getTaskDay(const int&);
    int getTaskTime(const int&);
    int getTaskDuration(const int&);
    int getNumberOfTasksk();
    void output();
};

#endif /* TASK_H */

