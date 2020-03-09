#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;
class Vehicle
{
private:
    string brand;
    int capacity;
public:
    Vehicle();
    int getCapacity();
    void setCapacity(int);
    void output();
    Vehicle(string, int);
};
#endif /* VEHICLE_H */

