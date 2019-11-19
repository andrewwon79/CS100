#ifndef OP_HPP
#define OP_HPP

#include <iostream>
#include <string>
#include "base.hpp"
using namespace std;
class Op : public Base
{
private:
    double value;
public:
    Op();
    Op(double);
    string stringify();
    double evaluate();
    
    
};

#endif /* OP_HPP */
