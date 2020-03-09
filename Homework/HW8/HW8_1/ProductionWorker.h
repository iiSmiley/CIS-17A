#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
using namespace std;
class ProductionWorker: public Employee
{
private:
    int shift;
    double payRate;
public:
    ProductionWorker();                         //Default constructor
    ~ProductionWorker();                        //Destructor
    ProductionWorker(const ProductionWorker&);  //Copy constructor
    ProductionWorker(int shift, double, string name, int number, string hireDate);//Generic constructor
    int getShift();                             //Returns the value of shift
    double getPayRate();                        //Return the value of payRate
    void setShift(int);                         //Assigns a value for shift
    void setPayRate(double);                    //Assigns a value for payRate
    const ProductionWorker& operator=(const ProductionWorker&);//Assignment operator
    void outputProductionWorker();              //Displays the unique values of ProductionWorker
    void output();                              //Displays the unique and the inherited values of ProductionWorker
    string shiftName();
};

#endif /* PRODUCTIONWORKER_H */

