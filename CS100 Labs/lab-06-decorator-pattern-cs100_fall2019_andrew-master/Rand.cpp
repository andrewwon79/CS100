
#include "Rand.hpp"
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
Random::Random()
{
    srand (time(NULL));
    value=rand()%100;
}
string Random::stringify()
{
    string stringified;
    stringified=to_string(value);
    return stringified;
}
double Random::evaluate()
{
    return value;
}
