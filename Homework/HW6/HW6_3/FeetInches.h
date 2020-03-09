/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FeetInches.h
 * Author: User 1
 *
 * Created on May 6, 2019, 7:41 PM
 */

#ifndef FEETINCHES_H
#define FEETINCHES_H

#include <iostream>
#include <cstdlib>
using namespace std;

class FeetInches
{
private:
    int inches;
    int feet;
    double productFeet;
    double productInches;
    void simplify();
public:
    FeetInches();                   //Default constructor
    ~FeetInches();                  //Destructor
    FeetInches(const FeetInches&);  //Copy constructor
    void setFeet(int);              //Sets the value of feet (Mutator)
    void setInches(int);            //Sets the value of inches (Mutator)
    int getFeet();                  //Returns the value of feet (Accessor)
    int getInches();                //Returns the value of inches (Accessor)
    double getProductFeet();        //Returns the value of productFeet (Accessor)
    double getProductInches();      //Returns the value of productInches (Accessor)
    void output();                  //Displays the measurment in x'x"
    FeetInches operator+(const FeetInches&);//Allow the use of the addition operator
    FeetInches operator-(const FeetInches&);//Allow the use of the subtraction operator
    FeetInches operator=(const FeetInches&);//Allow the use of the assignment operator
    FeetInches operator*(const FeetInches&);//Allow the use of the asterisk operator (Multiplication) 
    FeetInches operator++();        //Prefix Increment
    FeetInches operator++(int);     //Postfix Increment
    FeetInches operator--();        //Prefix decrement
    FeetInches operator--(int);     //Postfix decrement
    bool operator<=(const FeetInches&);//Overloading the <= operator
    bool operator>=(const FeetInches&);//Overloading the >= operator
    bool operator!=(const FeetInches&);//Overloading the != operator
};

#endif /* FEETINCHES_H */

