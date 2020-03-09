/*
 *
 *            PROGRAMMER: Omar ALkendi
 *         PROBLEM TITLE: Homework #4 Exercise#5
 *    PROBLEM DEFINITION: Car Class
 * 
 *                  DATE: 04/29/2019
 *     SYSTEM - HARDWARE: Intel i7 7700, 16GB RAM, 120GB SSD 
 *            - SOFTWARE: Windows 10 Home premium, Netbeans IDE 8.2
 *         Input Devices: Mouse, Keyboard
 *        Output Devices: Monitor, Terminal screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS:                   
 *                                                              
 */
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

class Car
{
private:
int yearModel;
string make;
int speed;

public:
Car();
int getYear();
string getMake();
int getSpeed();
void setYear(int);
void setMake(string);
void accelerate();
void brake();
};

Car::Car()
{
    yearModel =  0;
    make      = "";
    speed     =  0;
}

int Car::getYear()
{
    return yearModel;
}

string Car::getMake()
{
    return make;
}

int Car::getSpeed()
{
    return speed;
}

void Car::setYear(int year)
{
    (*this).yearModel = year;
}

void Car::setMake(string make)
{
    (*this).make = make;
}

void Car::accelerate()
{
    speed +=5;
}

void Car::brake()
{
    speed -=5;
}


int main()
{
    Car car;
    
    for(int i=0; i<5; i++)
    {
        car.accelerate();
        cout << "Accelerating! The speed is: " << car.getSpeed() << endl;
    }
        for(int i=0; i<5; i++)
    {
        car.brake();
        cout << "Braking! The speed is: " << car.getSpeed() << endl;
    }

    return 0;
}

