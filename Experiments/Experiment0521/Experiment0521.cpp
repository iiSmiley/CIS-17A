/*
 * Employee and Production Classes
 */
#include <cstdlib>
#include <iostream>
const int DAY   = 1;
const int NIGHT = 2;
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
    cout << "Shift type     : " << shiftName() << endl;
    cout << "Hourly pay rate: " << payRate << endl;
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
ShiftSupervisor::ShiftSupervisor()
                :Employee()
{
    this -> annualSalary = 0.0;
    this -> annualProductionBonus = 0.0;
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
    cout << "Annual Salary          : " << annualSalary << endl;
    cout << "Annual Production Bonus: " << annualProductionBonus << endl;
}
void ShiftSupervisor::output()
{
    Employee::output();
    outputShiftSupervisor();
}
class TeamLeader: public ProductionWorker
{
private:
    double monthlyBonus;
    double requiredTrainingHours;
    double trainingHours;
public:
    TeamLeader();                   //Default constructor
    ~TeamLeader();                  //Destructor
    TeamLeader(const TeamLeader&);  //Copy constructor
    TeamLeader(double monthlyBonus, double requiredTrainingHours,
               double trainingHours,int shift, double payRate, string name,
               int number, string hireDate);/*
                                             *  The humongous 2nd constructor 
                                             * (Monthly bonus, Required Hours,
                                             *  Acquired. Hours, Shift,
                                             *  Pay, Name, Number, hire)
                                             */
    double getMonthlyBonus();           //Returns the value of monthlyBonus
    double getRequiredTrainingHours();  //Returns the value of requiredTrainingHours
    double getTrainingHours();          //Returns the value of trainingHours
    void setMonthlyBonus(double);       //Sets the value of monthlyBonus
    void setRequiredTrainingHours(double);//Sets the value of requiredTrainingHours
    void settrainingHours(double);      //Set the value of trainingHours
    const TeamLeader& operator=(const TeamLeader&);//Assignment operator
    void outputTeamLeader();            //Display the unique values of TeamLeader
    void output();                      //Displays the unique and the inherited values of TeamLeader
};
TeamLeader::TeamLeader()
           :ProductionWorker()
{
    this -> monthlyBonus = 0.0;
    this -> requiredTrainingHours = 0.0;
    this -> trainingHours = 0.0;
}
TeamLeader::TeamLeader(const TeamLeader& TeamLeader)
           :ProductionWorker(TeamLeader)
{
    this -> monthlyBonus = TeamLeader.monthlyBonus;
    this -> requiredTrainingHours = TeamLeader.requiredTrainingHours;
    this -> trainingHours = TeamLeader.trainingHours;
}
TeamLeader::TeamLeader(double monthlyBonus, double requiredTrainingHours,
                       double trainingHours, int shift, double payRate,
                       string name, int number, string hireDate)
           :ProductionWorker(shift, payRate, name, number, hireDate)
{
    this -> monthlyBonus = monthlyBonus;
    this -> requiredTrainingHours = requiredTrainingHours;
    this -> trainingHours = trainingHours;
}
TeamLeader::~TeamLeader()
{
    //Nothing Goes here.
}
double TeamLeader::getMonthlyBonus()
{
    return monthlyBonus;
}
double TeamLeader::getRequiredTrainingHours()
{
    return requiredTrainingHours;
}
double TeamLeader::getTrainingHours()
{
    return trainingHours;
}
void TeamLeader::setMonthlyBonus(double monthlyBonus)
{
    this -> monthlyBonus = monthlyBonus;
}
void TeamLeader::setRequiredTrainingHours(double requiredTrainingHours)
{
    this -> requiredTrainingHours = requiredTrainingHours;
}
void TeamLeader::settrainingHours(double trainingHours)
{
    this -> trainingHours = trainingHours;
}
const TeamLeader& TeamLeader::operator =(const TeamLeader& rhs)
{
    if(this == &rhs)
    {
        return *this;
    }
    ProductionWorker::operator =(rhs);
    this -> monthlyBonus = rhs.monthlyBonus;
    this -> requiredTrainingHours = rhs.requiredTrainingHours;
    this -> trainingHours = rhs.trainingHours;
    return *this;
}
void TeamLeader::outputTeamLeader()
{
    cout << "Monthly Bonus          : " << monthlyBonus << endl;
    cout << "Required Training Hours: " << requiredTrainingHours << endl;
    cout << "Acquired Training Hours: " << trainingHours << endl;
}
void TeamLeader::output()
{
    ProductionWorker::output();
    outputTeamLeader();
}
int main()
{

    return 0;
}

