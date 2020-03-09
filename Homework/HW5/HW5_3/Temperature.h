#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include <iostream>
using namespace std;

class Temperature
{
private:
    float temperature;
public:
    Temperature();
    float getTemp();
    void setTemperature(float);
    bool isEthylFreezing();
    bool isEthylBoiling();
    bool isOxygenFreezing();
    bool isOxygenBoiling();
    bool isWaterFreezing();
    bool isWaterBoiling();
    void output();
};

#endif /* TEMPERATURE_H */

