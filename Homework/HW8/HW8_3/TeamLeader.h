#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "ProductionWorker.h"
using namespace std;
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
#endif /* TEAMLEADER_H */

