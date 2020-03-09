#include "TeamLeader.h"
using namespace std;
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
    cout << "Monthly Bonus          : $" << monthlyBonus << endl;
    cout << "Required Training Hours:  " << requiredTrainingHours << endl;
    cout << "Acquired Training Hours:  " << trainingHours << endl;
}
void TeamLeader::output()
{
    ProductionWorker::output();
    outputTeamLeader();
}