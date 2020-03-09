/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   staticExp.cpp
 * Author: User 1
 *
 * Created on June 7, 2019, 10:03 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
class Static
{
private:
    static int timeZone;
    int val;
public:
    Static();
    ~Static();
    Static(const int& val);
    void setTime(const int& time);
    int getTime();
    void output();
};
Static::Static()
{
    val = 0;
}
Static::Static(const int& val)
{
    this->val = val;
}
int Static::timeZone = 0;
Static::~Static()
{}
int Static::getTime()
{
    return timeZone;
}
void Static::setTime(const int& time)
{
    this->timeZone = time;
    cout << this->timeZone << endl;
}
void Static::output()
{
    cout << "val: " << val << endl;
    cout << "timeZone: " << timeZone << endl;
}
/*
 * 
 */
int main()
{
    Static a(5);
    a.output();
    a.setTime(-7);
    Static b(9);
    a.output();
    b.output();

    return 0;
}

