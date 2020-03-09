#include "Vehicle.h"
Vehicle::Vehicle()
{
    this -> brand = "";
    this -> capacity = 0;
}
Vehicle::Vehicle(string brand, int capacity)
{
    this -> brand = brand;
    this -> capacity = capacity;    
}
int Vehicle::getCapacity()
{
    return capacity;
}
void Vehicle::setCapacity(int capacity)
{
    this -> capacity = capacity;
}
void Vehicle::output()
{
    cout << "Brand is: " << brand << endl;
    cout << "Capacity is : " << capacity << endl;
}