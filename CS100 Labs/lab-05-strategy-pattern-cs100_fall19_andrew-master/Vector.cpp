
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "Vector.hpp"
using namespace std;

Vector::Vector(){};

void Vector::set_sort_function(Sort* function)
{
    sort_function=function;
}

void Vector::add_element(Base* element)
{
    VecContainer.push_back(element);
}

void Vector::print()
{
    for(int i=0;i<VecContainer.size();i++)
    {
        cout<<VecContainer[i]->stringify()<<" ";
    }
}

Base* Vector::at(int i)
{
    Base *temp=VecContainer[i];
    return temp;
}

int Vector::size()
{
    return VecContainer.size();
}

void Vector::swap(int i, int j)
{
    Base *temp=VecContainer[i];
    VecContainer[i]=VecContainer[j];
    VecContainer[j]=temp;
}

void Vector::sort()
{
    sort_function->sort(this);
}
