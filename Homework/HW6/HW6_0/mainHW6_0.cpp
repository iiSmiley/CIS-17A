/*            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #6 Exercise#0
 *    PROBLEM DEFINITION: Write a copy constructor and a destructor for all
 *                        problems in chapter 14.
 *                  DATE: 05/06/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS: The class                   
 *                                                              
 */
#include <cstdlib>
#include <iomanip>
using namespace std;

//There are 15 Challenging problems in chapter 14.
//Exercise 1/15: Number Class

class Numbers
{
private:
    int number;
    string description;
    static string lessThan20[];
    static string hundred[];
    static string thousands[];
public:
    Numbers(int);               //Default constructor.
    ~Numbers();                 //Destructor.
    Numbers(const Numbers&);    //Copy constructor.
};
//Starting with the copy constructor.
//There are no arrays to copy, hence the copy is going to be a deep copy
Numbers::Numbers(const Numbers& rhs)
{
    this ->  number = rhs.number;
    this -> description = rhs.description;
}
//There are no dynamically allocated arrays and no static variables that 
//need to be altered. Thus, writing an destructor would be a waste of time and
//space However, I do not want to risk it with my grades.
Numbers::~Numbers()
{
    //No memory got dynamically allocated. Further instructions are not required.
}

//Exercise 2/15: Day of the Year
class DayOfYear
{
private:
    int days;
    string month;
    static string monthName[];
    static int dayPerMonth[];
public:
    DayOfYear(int);             //Default constructor
    ~DayOfYear();
    DayOfYear(const DayOfYear&);//Copy constructor
};
//Definition of the destructor
DayOfYear::~DayOfYear()
{
    //No memory got dynamically allocated. Further instructions are not required. 
}
//Definition of copy constructor
DayOfYear::DayOfYear(const DayOfYear& rhs)
{
    this -> days = rhs.days;
    this -> month = rhs.month;
}

//Exercise 3/15: Day of the year Modification
class DayOfYearM
{
private:
    int days;
    string month;
    static string monthName[];
    static int dayPerMonth[];
public:
    DayOfYearM(int, string);             //Default constructor
    ~DayOfYearM();
    DayOfYear(const DayOfYearM&);//Copy constructor
};
//Definition of the destructor
DayOfYearM::~DayOfYearM()
{
    //No memory got dynamically allocated. Further instructions are not required. 
}
//Definition of copy constructor
DayOfYearM::DayOfYearM(const DayOfYearM& rhs)
{
    this -> days = rhs.days;
    this -> month = rhs.month;
}

//Exercise 4/15: NumDays Class
class NumDays
{
private:
    int hours;
    double days;
public:
    NumDays();
    ~NumDays();
    NumDays(const NumDays);
};
//Definition of the destructor
NumDays::~NumDays()
{
    //No memory got dynamically allocated. Further instructions are not required. 
}
//Definition of copy constructor
NumDays::NumDays(const NumDays& rhs)
{
    this -> days = rhs.days;
    this -> hours = rhs.hours;
}

//Exercise 5/15: Time Off
class TimeOff
{
private:
    NumDays maxSicDays;
    NumDays sicTaken;
    NumDays maxVacation;
    NumDays vacTaken;
    NumDays maxUnpaid;
    NumDays unpaidTaken;
    string name;
    int id;
public:
    TimeOff();
    ~TimeOff();
    TimeOff(const TimeOff&);
};
//Definition of the destructor fro 5/15
TimeOff::~TimeOff()
{
    //No memory got dynamically allocated. Further instructions are not required. 
}
//Definition for the copy constructor for 5/15.
//So far, no class had a dynamically allocated array as a member variable. Therefore, No special
//copy algorithms are needed.
TimeOff::TimeOff(const TimeOff& rhs)
{
    this -> maxSicDays = rhs.maxSicDays;
    this -> sicTaken = rhs.sicTaken;
    this -> maxVacation = rhs.maxVacation;
    this -> vacTaken = rhs.vacTaken;
    this -> maxUnpaid = rhs.maxUnpaid;
    this -> unpaidTaken = rhs.unpaidTaken;
    this -> name = rhs.name;
    this -> id = rhs.id;
}

//Exercise 6/15: Personal Report
//Exercise 6 does not have a class but rather uses the classes from problems 4 and5.

//Exercise 7/15: Month Class
class Month
{
private:
    string name;
    int monthNumber;
public:
    Month();
    ~Month();
    Month(int);
    Month(const Month&);
    void setName(string);
    void setMonthNumber(int);
    //The rest are unnecessary, for only the copy constructor and destructor are
    //required.
};
Month::~Month()
{
    //No memory got dynamically allocated. Further instructions are not required. 
}
//Copy constructor for 7/15
Month::Month(const Month& rhs)
{
    this -> name = rhs.name;
    this -> monthNumber = rhs.monthNumber;
}

//Exercise 8/15: Month Class

int main()
{
    return 0;
}

