#include "Ceil.hpp"
#include <math.h>
#include <string>
double Ceil::evaluate()
{
    double newvalue=ceil(composite->evaluate());
    return newvalue;
}

string Ceil::stringify()
{
    
    return composite->stringify();
}
