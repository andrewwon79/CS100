
#include "Pow.hpp"
#include <string>
#include <cmath>
using namespace std;
Pow::Pow(Base *operand1, Base *operand2)
{
    value1=operand1;
    value2=operand2;
}
string Pow::stringify()
{
    string stringified;
    stringified=value1->stringify()+"**"+value2->stringify();
    return stringified;
}
double Pow::evaluate()
{
    double sum=0;
    sum=pow(value1->evaluate(),value2->evaluate());
    //sum=value1->evaluate()+value2->evaluate();
    return sum;
}
