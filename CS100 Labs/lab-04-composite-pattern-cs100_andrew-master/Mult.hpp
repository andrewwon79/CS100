/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mult.hpp
 * Author: Andrew Won
 *
 * Created on October 19, 2019, 11:48 PM
 */

#ifndef MULT_HPP
#define MULT_HPP

#include <iostream>
#include <string>
#include "base.hpp"
using namespace std;
class Mult : public Base
{
private:
    Base *value1;
    Base *value2;
public:
    Mult(Base  *,Base *);
    string stringify();
    double evaluate();
    
    
};

#endif /* MULT_HPP */

