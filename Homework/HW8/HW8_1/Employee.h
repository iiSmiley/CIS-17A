#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;
class Employee
{
private:
    string name;
    int number;
    string hireDate;
public:
    Employee();                 //Default constructor
    ~Employee();                //Destructor
    Employee(const Employee&);  //Copy constructor
    Employee(string name, int number, string hireDate); //2nd constructor
    string getName();           //Returns name
    int getNumber();            //Returns number
    string getHireDate();       //Returns hireDate
    void setName(string);       //Sets name
    void setNumber(int);        //Sets number
    void setHireDate(string);   //Sets hireDate
    const Employee& operator=(const Employee&);         //Assignment operator
    void output();              //Generic output function
};

#endif /* EMPLOYEE_H */

