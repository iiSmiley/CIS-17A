#include "Temperature.h"

//Assigning constant values for the freezing and the boiling points in Fahrenheit.
const int ETHYL_FREEZING    = -173;
const int ETHYL_BOILING     = 172;
const int OXYGEN_FREEZING   = -362;
const int OXYGEN_BOILING    = -306;
const int WATER_FREEZING    = 32;
const int WATER_BOILING     = 212;

//Definition for the default constructor
Temperature::Temperature()
{
    temperature = 0;
}

//Setter
void Temperature::setTemperature(float temprature)
{
    this -> temperature = temprature;
}
//Getter
float Temperature::getTemp()
{
    return temperature;
}

//All specified member functions by the problem.
//The member functions will return a boolean value, and they will
//output a message indicating what would happen if the boolean value is true.
bool Temperature::isEthylBoiling()
{
    if(temperature >= ETHYL_BOILING)
    {
        cout << "Ethyl Alcohol will boil at " << temperature << "." << endl;
        return true;
    }
    else return false;
}

bool Temperature::isEthylFreezing()
{
    if(temperature <= ETHYL_FREEZING)
    {
        cout << "Ethyl Alcohol will freeze at " << temperature << "." << endl;
        return true;
    }
    else return false;
}

bool Temperature::isOxygenBoiling()
{
    if(temperature >= OXYGEN_BOILING)
    {
        cout << "Oxygen will boil at " << temperature << "." << endl;
        return true;
    }
    else return false;
}

bool Temperature::isOxygenFreezing()
{
    if(temperature <= OXYGEN_FREEZING)
    {
        cout << "Oxygen will freeze at " << temperature << "." << endl;
        return true;
    }
    else return false;
}

bool Temperature::isWaterBoiling()
{
    if(temperature >= WATER_BOILING)
    {
        cout << "Water will boil at " << temperature << "." << endl;
        return true;
    }
    else return false;
}

bool Temperature::isWaterFreezing()
{
    if(temperature <= WATER_FREEZING)
    {
        cout << "Water will freeze at " << temperature << "." << endl;
        return true;
    }
    else return false;
}

void Temperature::output()
{
    isEthylFreezing();
    isEthylBoiling();
    isOxygenFreezing();
    isOxygenBoiling();
    isWaterFreezing();
    isWaterBoiling(); 
}