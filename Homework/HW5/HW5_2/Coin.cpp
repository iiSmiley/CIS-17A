/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Coin.cpp
 * Author: User 1
 * 
 * Created on May 3, 2019, 6:36 PM
 */

#include "Coin.h"
//Definition of the default constructor
Coin::Coin()
{
    srand(time(0));         //srand is used to avoid the presence of patterns.
    int temp = rand()%2;    //The only problem with srand is that modern computers
    if(temp == 0)           //are so fast and could generate the same value
    {                       //on ech iteration.
        sideUp = "tails";
    }
    else
    {
        sideUp = "heads";
    }
}
//Definition of the function toss
void Coin::toss()
{
    int rand1 = rand();
    int rand2 = rand();
    int myRand;
    do
    {
        int rand3 = rand();
        myRand = (rand1+rand3)/rand2;
    }
    while(myRand > 1);
    if(myRand == 0)
    {
        sideUp = "tails";
    }
    else
    {
        sideUp = "heads";
    } 
}
//The sideUp getter for the class
string Coin::getSideUp()
{
    return sideUp;
}