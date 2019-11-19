/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   facotry.hpp
 * Author: Andrew Won
 *
 * Created on November 17, 2019, 10:29 PM
 */

#ifndef FACTORY_HPP
#define FACTORY_HPP
#include <iostream>
#include <string>
#include "base.hpp"
using namespace std;
class factory
{
private:

public:
	factory(){};	
	Base* Parse(char**,int);
};

#endif /* FACTORY_HPP */

