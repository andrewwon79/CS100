/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Div.hpp
 * Author: Andrew Won
 *
 * Created on October 19, 2019, 11:50 PM
 */

#ifndef DIV_HPP
#define DIV_HPP

#include <iostream>
#include <string>
#include "base.hpp"
using namespace std;
class Div : public Base
{
private:
    Base *value1;
    Base *value2;
public:
    Div(Base  *,Base *);
    string stringify();
    double evaluate();
    
    
};

#endif /* DIV_HPP */


