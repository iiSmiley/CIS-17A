#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
#include "Employee.h"
using namespace std;
class ShiftSupervisor: public Employee
{
private:
    double annualSalary;
    double annualProductionBonus;
public:
    ShiftSupervisor();                      //Default constrictor
    ~ShiftSupervisor();                     //Destructor
    ShiftSupervisor(const ShiftSupervisor&);//Copy constructor
    ShiftSupervisor(double AnnualSalary, double AnnualProductionBonus, string name, int number, string hireDate);  //2nd constructor
    double getAnnualSalary();               //Returns the value of annualSalary
    double getAnnualProductionBonus();      //Returns the value of annualProductionBonus
    void setAnnualSalary(double);           //Sets the value of annualSalary  
    void setAnnualProductionBonus(double);  //Sets the value of annualProductionSalary
    const ShiftSupervisor& operator=(const ShiftSupervisor&);//Assignment operator
    void outputShiftSupervisor();           //Displays the unique values of ShiftSupervisor
    void output();                          //Displays the unique and the inherited values of ShiftSupervisor
};

#endif /* SHIFTSUPERVISOR_H */

