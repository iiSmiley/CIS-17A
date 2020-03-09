#include "Car.h"


Car::Car()
    :Vehicle()
{
    numWheels = 4;
    horsepower = 0;
}
Car::Car(int wheels, int hp, string brand, int cap)
    :Vehicle(brand, cap)
{
    this -> numWheels = wheels;
    this -> horsepower = hp;
}
void Car::output()
{
    Vehicle::output();
    cout << "Number of wheels: " << numWheels << endl;
    cout << "Horse Power: " << horsepower << " HP" << endl;
}
void Car::setNumWheels(int numWheels)
{
    this -> numWheels = numWheels;
}
int Car::getNumWheels()
{
    return numWheels;
}