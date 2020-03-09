#include "FeetInches.h"

FeetInches::FeetInches()
{
    feet   = 0;
    inches = 0;
}
FeetInches::~FeetInches()
{
    //No memory was dynamically allocated. 
}
FeetInches::FeetInches(const FeetInches& orig)
{
    this -> feet = orig.feet;
    this -> inches = orig.inches;
}
void FeetInches::setFeet(int feet)
{
    this -> feet = feet;
}
void FeetInches::setInches(int inches)
{
    this -> inches = inches;
    simplify();
}
int FeetInches::getFeet()
{
    return feet;
}
int FeetInches::getInches()
{
    return inches;
}
void FeetInches::output()
{
    cout << feet << "'" << inches << '"' << endl;
}
FeetInches FeetInches::operator +(const FeetInches& rhs)
{
    FeetInches temp;
    temp.feet = feet + rhs.feet;
    temp.inches = inches + rhs.inches;
    return temp;
}
FeetInches FeetInches::operator -(const FeetInches& rhs)
{
    FeetInches temp;
    temp.feet = feet - rhs.feet;
    temp.inches = inches - rhs.inches;
    return temp;
}
FeetInches FeetInches::operator =(const FeetInches& rhs)
{
    if(this == &rhs)
    {
        return *this;
    }
    FeetInches temp;
    this -> feet = rhs.feet;
    this -> inches = rhs.inches;
    return *this;
}
FeetInches FeetInches::operator ++()
{
    inches++;
    simplify();
}
FeetInches FeetInches::operator ++(int)
{
    FeetInches temp(*this);
    inches++;
    simplify();
    return temp;
}
FeetInches FeetInches::operator --()
{
    inches--;
    simplify();
}
FeetInches FeetInches::operator --(int)
{
    FeetInches temp(*this);
    inches--;
    simplify();
    return temp;
}
bool FeetInches::operator<=(const FeetInches& rhs)
{
    bool status;
    if(this -> feet < rhs.feet)
        status = true;
    else if(this -> feet == rhs.feet && this -> inches <= rhs.inches)
        status = true;
    else
        status = false;
    return status;
}
bool FeetInches::operator>=(const FeetInches& rhs)
{
      bool status;
    if(this -> feet > rhs.feet)
        status = true;
    else if(this -> feet == rhs.feet && this -> inches >= rhs.inches)
        status = true;
    else
        status = false;
    return status;  
}
bool FeetInches::operator!=(const FeetInches& rhs)
{
        bool status;
    if(this -> feet != rhs.feet || this -> inches != rhs.inches)
        status = true;
    else
        status = false;
    return status;
}
//This function is from the book
void FeetInches::simplify()
{
    if(inches >= 12)
    {
        feet += (inches/12);
        inches = inches %12;//The modulus will save the remainder of the division
    }
    else if(inches < 0)
    {
        feet -= ((abs(inches)/12)+1);
        inches = 12 - (abs(inches)%12);
    }
}