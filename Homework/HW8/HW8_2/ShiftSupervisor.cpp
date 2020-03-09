#include "ShiftSupervisor.h"
ShiftSupervisor::ShiftSupervisor()
                :Employee()
{
    this -> annualSalary = 0.0;
    this -> annualProductionBonus = 0.0;
}
ShiftSupervisor::~ShiftSupervisor()
{
    //Nothing goes here.
}
ShiftSupervisor::ShiftSupervisor(double annualSalary, double annualProductionBonus, string name, int number, string hireDate)
                :Employee(name, number, hireDate)
{
    this -> annualSalary = annualSalary;
    this -> annualProductionBonus = annualProductionBonus;
}
ShiftSupervisor::ShiftSupervisor(const ShiftSupervisor& ShiftSupervisor)
                :Employee(ShiftSupervisor)
{
    this -> annualSalary = ShiftSupervisor.annualSalary;
    this -> annualProductionBonus = ShiftSupervisor.annualProductionBonus;
}
double ShiftSupervisor::getAnnualSalary()
{
    return annualSalary;
}
double ShiftSupervisor::getAnnualProductionBonus()
{
    return annualProductionBonus;
}
void ShiftSupervisor::setAnnualSalary(double annualSalary)
{
    this -> annualSalary = annualSalary;
}
void ShiftSupervisor::setAnnualProductionBonus(double annualProductionBonus)
{
    this -> annualProductionBonus = annualProductionBonus;
}
const ShiftSupervisor& ShiftSupervisor::operator =(const ShiftSupervisor& rhs)
{
    if(this == &rhs)
    {
        return *this;
    }
    Employee::operator =(rhs);
    this -> annualSalary = rhs.annualSalary;
    this -> annualProductionBonus = rhs.annualProductionBonus;
    return *this;
}
void ShiftSupervisor::outputShiftSupervisor()
{
    cout << "Annual Salary          : $" << annualSalary << endl;
    cout << "Annual Production Bonus: $" << annualProductionBonus << endl;
}
void ShiftSupervisor::output()
{
    Employee::output();
    outputShiftSupervisor();
}