#include <cstdlib>
#include <iostream>

class NumDays
{
private:
    int hours;
    double days;
public:
    NumDays();
    NumDays(int);
    NumDays(const NumDays&);
    NumDays operator+(const NumDays&);
    NumDays operator-(const NumDays&);
    void setHours(int);
    int getHours();
    double getDays();
};

NumDays::NumDays()
{
    hours=0;
    days=0;
}

NumDays::NumDays(int hours)
{
    this -> hours = hours;
    this -> days = hours/8;
}

NumDays::NumDays(const NumDays& numDays)
{
    this -> hours = numDays.hours;
    this -> days = numDays.days;
}

NumDays NumDays::operator+(const NumDays& rhs)
{
    int newHours = this -> hours + rhs.hours;
    double newDays= newHours/8.0;
    return newHours;
}

NumDays NumDays::operator-(const NumDays& rhs)
{
    int newHours = this -> hours - rhs.hours;
    double newDays= newHours/8.0;
    return newHours;
}

void NumDays::setHours(int hours)
{
    this -> hours = hours;
    this -> days = hours/8.0;
}

double NumDays::getDays()
{
    return days;
}

int NumDays::getHours()
{
    return hours;
}

using namespace std;

int main()
{

    int temp;
    NumDays day1;
    NumDays day2;
    
    cout << "Enter hours for day 1 ";
    cin >> temp;
    day1.setHours(temp);
    
    cout << "Enter hours for day 2 ";
    cin >> temp;
    day2.setHours(temp);
    
    cout << "Days for day1: " << day1.getDays() << " and day2: " << day2.getDays() << endl;
    
    NumDays day3= day1+day2;
    cout << "Hours for day3: " << day3.getHours() << " and days: " << day3.getDays() << endl;
    
            
            
    return 0;
}

