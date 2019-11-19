/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rand.hpp
 * Author: Andrew Won
 *
 * Created on October 20, 2019, 12:12 AM
 */

#ifndef RAND_HPP
#define RAND_HPP

#include <iostream>
#include <string>
#include "base.hpp"
using namespace std;
class Random : public Base
{
private:
    double value;
public:
    Random();
    string stringify();
    double evaluate();
    
    
};


#endif /* RAND_HPP */

