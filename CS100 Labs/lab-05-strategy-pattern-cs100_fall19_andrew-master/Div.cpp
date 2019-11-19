
#include "Div.hpp"
#include <string>
using namespace std;
Div::Div(Base *operand1, Base *operand2)
{
    value1=operand1;
    value2=operand2;
}
string Div::stringify()
{
    string stringified;
    stringified=value1->stringify()+"/"+value2->stringify();
    return stringified;
}
double Div::evaluate()
{
    double sum=0;
    sum=value1->evaluate()/value2->evaluate();
    return sum;
}
