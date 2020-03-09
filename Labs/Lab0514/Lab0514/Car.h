#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
using namespace std;
class Car : public Vehicle
{
private:
    int numWheels;
    int horsepower;
public:
    Car();
    int getNumWheels();
    void setNumWheels(int);
    Car(int wheels, int hp, string, int cap);
    void output();
};
#endif /* CAR_H */

