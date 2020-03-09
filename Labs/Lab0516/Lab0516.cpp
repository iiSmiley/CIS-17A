#include <cstdlib>
#include <iostream>
using namespace std;
class PersonData
{
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    int zip;
    int phone;
public:
    PersonData();
    ~PersonData();
    PersonData(const PersonData&);
    const PersonData& operator=(const PersonData&);
    void setLastName(string);
    void setFisrtName(string);
    void setAddress(string);
    void setState(string);
    void setZip(int);
    void setPhone(int);
    string getLastName();
    string getFisrtName();
    string getAddress();
    string getState();
    int getZip();
    int getPhone();
    void output();
};

int main()
{

    return 0;
}