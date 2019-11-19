/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sub.hpp
 * Author: Andrew Won
 *
 * Created on October 18, 2019, 3:09 PM
 */

#ifndef SUB_HPP
#define SUB_HPP

#include <iostream>
#include <string>
#include "base.hpp"
using namespace std;
class Sub : public Base
{
private:
    Base *value1;
    Base *value2;
public:
    Sub(Base  *,Base *);
    string stringify();
    double evaluate();
    
    
};

#endif /* SUB_HPP */

