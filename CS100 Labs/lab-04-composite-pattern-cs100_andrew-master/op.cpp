
#include "op.hpp"
#include <string>
using namespace std;
Op::Op()
{
    value=0;
}
Op::Op(double operand1)
{
    value=operand1;
}
string Op::stringify()
{
    string stringified;
    stringified=to_string(value);
    return stringified;
}
double Op::evaluate()
{
    return value;
}
