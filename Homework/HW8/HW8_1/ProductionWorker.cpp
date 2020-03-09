#include "ProductionWorker.h"

ProductionWorker::ProductionWorker()
                 :Employee()
{
    this -> shift = 1;
    this -> payRate = 0.0;
}
ProductionWorker::~ProductionWorker()
{
    //Nothing goes here.
}
ProductionWorker::ProductionWorker(int shift, double payRate, string name, int number, string hireDate)
                 :Employee(name, number, hireDate)
{
    this -> shift = shift;
    this -> payRate = payRate;
}
ProductionWorker::ProductionWorker(const ProductionWorker& ProductionWorker)
                 :Employee(ProductionWorker)
{
    this -> shift = ProductionWorker.shift;
    this -> payRate = ProductionWorker.payRate;
}
int ProductionWorker::getShift()
{
    return shift;
}
double ProductionWorker::getPayRate()
{
    return payRate;
}
void ProductionWorker::setShift(int shift)
{
    this -> shift = shift;
}
void ProductionWorker::setPayRate(double)
{
    this -> payRate = payRate;
}
string ProductionWorker::shiftName()
{
    if(shift == 1)
    {
        return "Day shift";
    }
    else if(shift ==2)
    {
        return "Night shift";
    }
}
void ProductionWorker::outputProductionWorker()
{
    cout << "Shift type        : " << shiftName() << endl;
    cout << "Hourly pay rate   : $" << payRate << endl;
}
void ProductionWorker::output()
{
    Employee::output();
    outputProductionWorker();
}
const ProductionWorker& ProductionWorker::operator =(const ProductionWorker& rhs)
{
    if(this ==&rhs)
    {
        return *this;
    }
    Employee::operator =(rhs);
    this -> shift = rhs.shift;
    this -> payRate = rhs.payRate;
    return *this;
}