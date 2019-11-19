/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Floor.hpp"
#include <math.h>
#include <string>
double Floor::evaluate()
{
    double newvalue=floor(composite->evaluate());
    return newvalue;
}

string Floor::stringify()
{
    
    return composite->stringify();
}
