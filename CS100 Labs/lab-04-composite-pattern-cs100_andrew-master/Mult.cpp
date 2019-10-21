
#include "Mult.hpp"
#include <string>
using namespace std;
Mult::Mult(Base *operand1, Base *operand2)
{
    value1=operand1;
    value2=operand2;
}
string Mult::stringify()
{
    string stringified;
    stringified=value1->stringify()+"*"+value2->stringify();
    return stringified;
}
double Mult::evaluate()
{
    double sum=0;
    sum=value1->evaluate()*value2->evaluate();
    return sum;
}
