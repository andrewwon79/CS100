
#include "Paren.hpp"
#include <string>
using namespace std;
string Paren::stringify()
{
    string newstring="("+composite->stringify()+")";
    return newstring;
}
double Paren::evaluate()
{
    double newvalue=composite->evaluate();
    return newvalue;
}
