/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NumberArray.cpp
 * Author: User 1
 * 
 * Created on May 3, 2019, 5:48 PM
 */

#include "NumberArray.h"

//Definition of the default constructor
NumberArray::NumberArray()
{
    cout << "Creating default array..." << endl;
    size = 0;
    array = new float[size];
}

//Definition for specified constructor
NumberArray::NumberArray(int size)
{
    this -> size = size;
    array = new float[this -> size];
}

//Definition for the destructor
NumberArray::~NumberArray()
{
    cout << "Deleting the dynamically allocated array..." << endl;
    delete[] array;
}

void NumberArray::setElement(const int& loc, float value)
{
    if (loc < this -> size)
    {
        this -> array[loc] = value;
    }
    else
    {
        cout << "ERROR!!! The location is outside the range of array." << endl;
    }
}

float NumberArray::getElement(const int& loc)
{
    if (loc < this -> size)
    {
        return this -> array[loc];
    }
    if (loc >= this -> size)
    {
        cout << "ERROR!!! The location is outside the range of array." << endl;
        return 0;
    }   
}

float NumberArray::highest()
{
    float tempHigh= this -> array[0];
    for(int i=0; i < (this -> size)-1; i++)
    {
        if(tempHigh < this -> array[i+1])
        {
            tempHigh = this -> array[i+1];
        }
    }
    return tempHigh;
}

float NumberArray::lowest()
{
    float tempLow=this -> array[0];
    for(int i=0; i < (this -> size)-1; i++)
    {
        if(tempLow > this -> array[i+1])
        {
            tempLow = this -> array[i+1];
        }
    }
    return tempLow;
}

float NumberArray::average()
{
    float sum=0;
    for(int i=0; i < this -> size; i++)
    {
        sum += this -> array[i];
    }
    return sum/static_cast<float>(this -> size);
}

