/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Coin.h
 * Author: User 1
 *
 * Created on May 3, 2019, 6:36 PM
 */

#ifndef COIN_H
#define COIN_H

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Coin
{
private:
    string sideUp;
public:
    Coin();     //Default constructor that randomly tosses the coin one time
    void toss();//Tosses the coin
    string getSideUp();//Returns the the side of the coin that is facing up
};

#endif /* COIN_H */

