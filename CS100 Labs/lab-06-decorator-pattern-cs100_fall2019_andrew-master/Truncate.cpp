
#include "Truncate.hpp"
#include <string>
using namespace std;
string Truncate::stringify()
{
    string newstring=to_string(composite->evaluate());
    return newstring;
}
double Truncate::evaluate()
{
    return composite->evaluate();
}
