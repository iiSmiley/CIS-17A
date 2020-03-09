/*
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Project2
 *    PROBLEM DEFINITION: My Year
 * 
 *                  DATE: 06/08/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen                                                      
 */
#include <cstdlib>
#include "Chronos.h"
#include "DayOfYear.h"
#include "Task.h"
#include "TaskList.h"
#include "TimeStamp.h"
#include <fstream>
const string MONTH_NAME[]= { "JAN", "FEB", "MAR", "APR", 
                             "MAY", "JUN", "JUL", "AUG",
                             "SEP", "OCT", "NOV", "DEC"};
void showMenu1();
void showMenu2();
void subMenu(TaskList&);
void open();
void create();
void addTask(TaskList&);
void removeTask(TaskList&);
void changeTimeZone();
void fileOut(TaskList&);
using namespace std;
int main()
{
    int choice;
    int size = 0;
    do
    {
        showMenu1(); //Display the main menu and waits for user's entry.
        cin >> choice;
        cin.clear();
        cin.ignore(1000,'\n');
        if(choice < 1 || choice > 3)
        {
            cout << "ERROR! Please chose a correct option from 1 to 3." << endl;
        }
        switch(choice)
        {
            case 1: open();
                break;
            case 2: create();
                break;
        }
    }
    while(choice != 3);
    
    return 0;
}
void showMenu1()
{
    cout << "|||  Main Menu   |||" << endl;
    cout << "Please make a choice 1~3:" << endl;
    cout << "1) Open a My Year file." << endl;
    cout << "2) Create a My Year file." << endl;
    cout << "3) To close the program." << endl;
}
void showMenu2()
{
    cout << "|||  My Year   |||" << endl;
    cout << "Please make a choice 1~3:" << endl;
    cout << "1) Add a new task ." << endl;
    cout << "2) Remove a task." << endl;
    cout << "3) Save changes." << endl; 
    cout << "4) Change the time zone." << endl;
    cout << "5) To go back to the main menu." << endl;  
}
void subMenu(TaskList& taskList)
{
    int choice;
    int size = 0;
    do
    {
        showMenu2(); //Display the main menu and waits for user's entry.
        cin >> choice;
        cin.clear();
        cin.ignore(1000,'\n');
        if(choice < 1 || choice > 5)
        {
            cout << "ERROR! Please chose a correct option from 1 to 5." << endl;
        }
        switch(choice)
        {
            case 1: addTask(taskList);
                break;
            case 2: removeTask(taskList);
                break;
            case 3: fileOut(taskList);
                break;
            case 4: changeTimeZone();
                break;    
        }
    }
    while(choice != 5);
}
void open()
{
    TaskList taskList;
    Task task;
    string filename;
    cout << "Enter a name for the file you would like to read and don't\n"
          <<"worry about the file extension, (ex. .bin) I will add them\n"
          <<"for you :";
    cin >> filename;
    filename+=".txt";
    ifstream inFile;
    inFile.open(filename.c_str(),ios::in|ios::binary);
    if (inFile)
    {
        inFile.read(reinterpret_cast<char*>(&task),sizeof(task));
        while(!inFile.eof())
        {
            taskList.insert(task);
            inFile.read(reinterpret_cast<char*>(&task),sizeof(task));
        }
        cout << "File: " << filename << " was successfully read.\n";        
    }
    else
    {
        cout << "Could not open " << filename <<"for output\n";
    }
    taskList.output();
    subMenu(taskList);
}
void create()
{
    cout << "For what year would like to create My File? " << endl;
    cout << "Note: It has to be a current or a future year! " << endl;
    Chronos c;
    int year;
    int currentYear = c.getYear();
    bool tryAgain = true;
    cout << "At which date would you like to add the task?" << endl;
    while(tryAgain)
    {
        try
        {
            cout << "Enter a year: ";
            cin >> year;
            cin.clear();
            cin.ignore(10000,'\n');
            if(year < c.getYear())
            {
                throw Task::OutOfRange();
            }
            tryAgain = false;
        }
        catch(Task::OutOfRange exception)
        {
            cout << "ERROR! Please enter a current or a future year!.";
            cout << "The current year is " << currentYear << endl;
        }
    }
    TaskList a;
    cout << "A new My Year File has been created" << endl;
    a.output();
    subMenu(a);   
}
void removeTask(TaskList& taskList)
{
    cout << "Which task would you like to remove? ";
    int taskId;
    cin >> taskId;
    cin.clear();
    cin.ignore(10000,'\n');
        if(taskId > taskList.getNumTasks() || taskId < 1);
        {
            cout << "ERROR Task #" << taskId << " doesn't exist!" << endl;
            cout << "The total number of tasks in the list is " << taskList.getNumTasks() << endl;
        }
    taskList.remove(taskId);
    taskList.output();
}
void addTask(TaskList& taskList)
{
    Chronos c;
    string month;
    int tempMonth;
    int day;
    string taskDefinition;
    bool tryAgain = true;
    cout << "At which date would you like to add the task?" << endl;
    while(tryAgain)
    {
        try
        {
            cout << "Enter the number of the month: ";
            cin >> tempMonth;
            cin.clear();
            cin.ignore(10000,'\n');
            if(tempMonth > 12 || tempMonth < 1)
            {
                throw Task::OutOfRange();
            }
            tempMonth--;
            month = MONTH_NAME[tempMonth];
            tryAgain = false;
        }
        catch(Task::OutOfRange exception)
        {
            cout << "ERROR! Please enter a correct month number 1~12.";
        }
    }
    tryAgain = true;
    while(tryAgain)
    {
        try
        {
            cout << "Enter the number of the day: ";
            cin >> day;
            cin.clear();
            cin.ignore(10000,'\n');
            if(tempMonth == 3 || tempMonth == 5 || tempMonth == 8 ||
                    tempMonth == 10 && day > 30)
            {
                throw Task::OutOfRange();
            }
            else if(tempMonth == 1 && c.getYear()%4 == 0 && day > 29)
            {
                throw Task::OutOfRange();
            }
            else if(tempMonth == 1 && c.getYear()%4 != 0 && day > 28)
            {
                throw Task::OutOfRange();
            }
            else if(day > 31)
            {
                throw Task::OutOfRange();
            }
            tryAgain = false;
        }
        catch(Task::OutOfRange exception)
        {
            cout << "ERROR! Please enter a correct date 1~31 or 28~29 For FEB." << endl;
        }
    }
    int tempHours =0;
    int tempMinutes=0;
    tryAgain = true;
    int startTime;
    cout << "Enter the starting time" << endl;
    while(tryAgain)
    {
        try
        {
            cout << "NOTE:THE INPUT VALIDATION DOESN'T WORK! Enter the hour (0~24) : ";
            cin >> tempHours;
            cin.clear();
            cin.ignore(10000,'\n');
            if(tempHours>24 || tempHours<0)
            {
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
                throw Task::OutOfRange();
            }
            tryAgain = false;
        }
        catch(Task::OutOfRange exception)
        {
            cout << "ERROR! Make sure the hours are between 0 and 24." << endl;
        }
        try
        {
            cout << "Enter the minutes (0~59) : ";
            cin >> tempHours;
            cin.clear();
            cin.ignore(10000,'\n');
            if(tempHours>24 || tempHours<0)
            {
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
                throw Task::OutOfRange();
            }
            tryAgain = false;
        }
        catch(Task::OutOfRange exception)
        {
            cout << "ERROR! Make sure the minutes between 0 and 59."<< endl;
        }
        tempHours = tempHours*100;
        startTime = tempHours + tempMinutes;
        //cout << startTime << endl;
    };
    tryAgain = true;
    int endTime;
    cout << "Enter the expected finishing time" << endl;
    while(tryAgain)
    {
        try
        {
            cout << "Enter the hour (0~24): ";
            cin >> tempHours;
            cin.clear();
            cin.ignore(10000,'\n');
            if(tempHours > 24 || tempHours < 0)
            {
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
                throw Task::OutOfRange();
            }
            cout << "NOTE:THE INPUT VALIDATION DOESN'T WORK! Enter the minutes (0~59): ";
            cin >> tempMinutes;
            cin.clear();
            cin.ignore(10000,'\n');
            if(tempMinutes > 59 || tempMinutes < 0)
            {
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
                throw Task::OutOfRange();
            }
            tryAgain = false;
        }
        catch(Task::OutOfRange exception)
        {
            cout << "ERROR! Make sure the hours are between 0 and 24 and the minutes between 0 and 59."<< endl;
        }
        tempHours = tempHours*100;
        endTime = tempHours + tempMinutes;
        //cout << endTime << endl;
    };
    tryAgain = true;
    cout << "Enter a definition for the task (e.g. CIS-17A Project 2) MAX 30 Characters" << endl;
    char d[30];
    while(tryAgain)
    {
        try
        {
            cout << "Enter the task definition: ";
            cin.get(d,30);
            cin.get();
            tryAgain = false;
        }
        catch(Task::OutOfRange exception)
        {
            cout << "ERROR! Make sure your task definition is 30 Characters long!." << endl;;
        }
    };
    DayOfYear y(month, day, c.getYear());
    int days = y.getDayModified();
    Task newTask(d, startTime, endTime, days);
    taskList.insert(newTask);
    taskList.output();
}
void changeTimeZone()
{
    Chronos c;
    int timeZone = c.getTimeZone();
    if(timeZone < 0)
    {
        cout << "The current time zone is UTC " << timeZone << endl;
    }
    else
    {
        cout << "The current time zone is UTC +" << timeZone << endl;
    }
    int newTimeZone=0;
    bool tryAgain = true;
    cout << "Enter a new time zone in UTC between -12 and +12: " << endl;
    while(tryAgain)
    {
        try
        {
            cout << "Time zone: ";
            cin >> newTimeZone;
            cin.clear();
            cin.ignore(10000,'\n');
            if(newTimeZone < -12 || newTimeZone > 12)
            {
                throw Task::OutOfRange();
            }
            tryAgain = false;
        }
        catch(Task::OutOfRange exception)
        {
            cout << "ERROR! Please enter a correct time zone value between -12 and +12!.";
        }
    }
    c.setTimeZone(newTimeZone);
}
void fileOut(TaskList& taskList)
{
    string fileName;
    cout << "Enter a name for the file you have created and don't\n"
          <<"worry about the file extension, (ex. .bin) I will add them\n"
          <<"for you: ";
    cin >> fileName;
    taskList.fileOut(fileName); 
}