/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Add.hpp
 * Author: Andrew Won
 *
 * Created on October 18, 2019, 2:29 PM
 */

#ifndef ADD_HPP
#define ADD_HPP
#include <iostream>
#include <string>
#include "base.hpp"
using namespace std;
class Add : public Base
{
private:
    Base* value1;
    Base* value2;
public:
    Add(Base *,Base *);
    string stringify();
    double evaluate();
    
    
};

#endif /* ADD_HPP */
