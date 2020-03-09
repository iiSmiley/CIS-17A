/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #4 Exercise#4
 *    PROBLEM DEFINITION: Employee Class
 * 
 *                  DATE: 04/29/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS:                   
 *                                                              
 */

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

const int SIZE =  3;
const int WD1  = 20;

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;

    
public:
    Employee();
    Employee(string, int, string, string);
    Employee(string,int);
    string getName();
    int getIdNumber();
    string getDepartment();
    string getPosition();
    void setName(string);
    void setIdNumber(int);
    void setDepartment(string);
    void setPosition(string);
    void output();
};

Employee::Employee()
{
(*this).name       = "";
(*this).idNumber   = 0;
(*this).department = "";
(*this).position   = "";
}

Employee::Employee(string name, int idNumber, string department, string position)
{
(*this).name       = name;
(*this).idNumber   = idNumber;
(*this).department = department;
(*this).position   = position;
}

Employee::Employee(string name, int idNumber)
{
(*this).name       = name;
(*this).idNumber   = idNumber;
(*this).department = "";
(*this).position   = "";
}

string Employee::getName()
{
    return name;
}

int Employee::getIdNumber()
{
    return idNumber;
}

string Employee::getDepartment()
{
    return department;
}

string Employee::getPosition()
{
    return position;
}

void Employee::setName(string name)
{
    (*this).name = name;
}

void Employee::setIdNumber(int idNumber)
{
    (*this).idNumber = idNumber;
}

void Employee::setDepartment(string department)
{
    (*this).department = department;
}

void Employee::setPosition(string position)
{
    (*this).position = position;
}

void Employee::output()
{
    cout << setw(WD1) << left << name;
    cout << setw(WD1) << left << idNumber;
    cout << setw(WD1) << left << department;
    cout << setw(WD1) << left << position << endl;
}

int numObtainer()
{
    do
    {
    int val;
    bool isGood;    
    isGood = cin >> val;
    if(isGood && val>=0)
    {
        return val;
    }
    cout << "ERROR!!! Please enter a positive number"
            << " greater than or equal to 0!"
            << endl;
    }
    while(true);
}

void intializer(Employee* aPtr)
{
    for(int i=0; i<SIZE; i++)
    {
        string tempS;
        int tempI;
        
        cout << "Enter the name of an employee: ";
                cin >> tempS;
                aPtr[i].setName(tempS);
        cout << "Enter the ID Number of " << aPtr[i].getName() << " : ";
                aPtr[i].setIdNumber(numObtainer());
        cout << "Enter the department of " << aPtr[i].getName() << " : ";
                cin >> tempS;
                aPtr[i].setDepartment(tempS);
        cout << "Enter the position of " << aPtr[i].getName() << " : ";
                cin >> tempS;
                aPtr[i].setPosition(tempS);
    }
}

void output(Employee* aPtr)
{
cout << "___________________________________________________________________" << endl;
    cout << setw(WD1) << left << "Name";
    cout << setw(WD1) << left << "ID Number";
    cout << setw(WD1) << left << "Department";
    cout << setw(WD1) << left << "Position" << endl;
cout << "___________________________________________________________________" << endl;

    for(int i=0; i<SIZE; i++)
    {
        aPtr[i].output();
    }
}

int main()
{
    Employee* list = new Employee[SIZE];
    intializer(list);
    output(list);   
    return 0;
}

