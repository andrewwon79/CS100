/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Abs.hpp"
#include <cmath>
#include <string>
double Abs::evaluate()
{
    double newvalue=abs(composite->evaluate());
    return newvalue;
}
string Abs::stringify()
{
    
    return composite->stringify();
}
