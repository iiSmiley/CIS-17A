#include "Employee.h"
Employee::Employee()
{
    this -> name = "";
    this -> number = 0;
    this -> hireDate = "";
}
Employee::~Employee()
{
    //No memory got allocated dynamically. Thus, nothing goes here.
}
Employee::Employee(const Employee& employee)
{
    this -> name = employee.name;
    this -> number = employee.number;
    this -> hireDate = employee.hireDate;
}
Employee::Employee(string name, int number, string hireDate)
{
    this -> name = name;
    this -> number = number;
    this -> hireDate = hireDate;
}
string Employee::getName()
{
    return name;
}
int Employee::getNumber()
{
    return number;
}
string Employee::getHireDate()
{
    return hireDate;
}
void Employee::setName(string name)
{
    this -> name = name;
}
void Employee::setNumber(int number)
{
    this -> number = number;
}
void Employee::setHireDate(string hireDate)
{
    this -> hireDate = hireDate;
}
const Employee& Employee::operator =(const Employee& rhs)
{
    if(this == &rhs)
    {
        return *this;
    }
    this -> name = rhs.name;
    this -> number = rhs.number;
    this -> hireDate = rhs.hireDate;
    return *this;
}
void Employee::output()
{
    cout << "Employee name is  : " << name << endl;
    cout << "Employee number is: " << number << endl;
    cout << "Hire date is      : " << hireDate << endl;
}