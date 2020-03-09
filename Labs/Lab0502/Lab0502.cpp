#include <cstdlib>
#include <iostream>
using namespace std;
/*class Person
{
private:
    string name;
    int age;
public:
    Person();
    ~Person();
    Person(const Person&);
    friend ostream& operator <<(ostream&,const Person&);
};

Person::Person()
{
    name = "";
    age  = 0;
}

Person::~Person()
{
}

Person::Person(const Person& rhs)
{
    this -> name = rhs.name;
    this -> name = rhs.age;
}

ostream& operator <<(ostream& out,const Person& rhs)
{
    out << "name is: " << rhs.name << endl;
    out << "age is: " << rhs.age << endl;
    return out;
}*/
/*
class LabRoom
{
private:
    int size;
    int* sid;
    string name;
public:
    LabRoom();
   ~LabRoom();
    LabRoom(const LabRoom&);
    LabRoom operator=(const LabRoom&);
};

LabRoom::LabRoom()
{
    size = 0;
    sid = new int[size];name
    name = "";
}
LabRoom::~LabRoom()
{
    delete[] sid;
    size=0;
    name= "";
}
LabRoom::LabRoom(const LabRoom&)
{
    
}
LabRoom LabRoom::operator =(const LabRoom&)
{
    
}*/

const string MONTH[]={"January", "February", "March", "April", "May",
                      "June", "July","August", "September", "October",
                      "November", "December"};

class Month
{
private:
    string month;
    int monthNumber;
public:
    Month();
    Month(string);
    void setMonth(string);
    void setMonthNumber(int);
    string getMonth();
    int getMonthNumber();
    Month operator++();
    Month operator++(int);
};

Month::Month()
{
    month = "January";
    monthNumber = 1;
}

Month::Month(string month)
{
    this -> month = month;
    int tempIndex=0;
    for(int i=0; i<12; i++)
    {
        if(MONTH[i]==month)
        {
            tempIndex = i;
        }
    }
    this -> monthNumber =tempIndex+1;
}

void Month::setMonth(string month)
{
    this -> month = month;
}

void Month::setMonthNumber(int monthNumber)
{
    this -> monthNumber = monthNumber;
}
string Month::getMonth()
{
    return month;
}

int Month::setMonthNumber(int)
{
    return monthNumber;
}


int main()
{
   /* Person P;
    
    cout << P;
*/
    
    
    return 0;
}

