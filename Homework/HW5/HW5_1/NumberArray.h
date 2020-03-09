/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NumberArray.h
 * Author: User 1
 *
 * Created on May 3, 2019, 5:48 PM
 */

#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

#include <iostream>
using namespace std;

class NumberArray
{
private:
    int size;           //size of the number array;
    float* array;       
public:
    NumberArray();      //Default constructor
    NumberArray(int);   //Specified constructor by the problem
    ~NumberArray();     //Destructor (will delete the dynamically allocated array
    void setElement(const int&, float);//Sets the value of an element at certain location
    float getElement(const int&);      //Retrieves the value of an element
    float highest();            //Returns the highest number in the array
    float lowest();             //Returns the lowest number in the array
    float average();            //Returns the calculated average of all values in the array
};

#endif /* NUMBERARRAY_H */

