#include <list>
#include <iterator>
#include <iostream>
#include <string>
#include <algorithm>
#include "List.hpp"
using namespace std;


void List::set_sort_function(Sort* function)
{
    sort_function=function;
}

void List::add_element(Base* element)
{
    userlist.push_back(element);
}

void List::print()
{
    //list<Base *>::iterator iterateList;
    for(iterateList=userlist.begin();iterateList!=userlist.end();++iterateList)
    {
        cout<<(*iterateList)->stringify()<<" ";
    }
}

Base* List::at(int i)
{
    iterateList=userlist.begin();
    advance(iterateList,i);
    return *iterateList;
}

int List::size()
{
    return userlist.size();
}

void List::swap(int i, int j)
{
    list<Base *>::iterator iterateList2;
    list<Base *>::iterator iterateListreal;
    iterateListreal=userlist.begin();
    iterateList2=userlist.begin();
    advance(iterateList2,i);
    advance(iterateListreal,j);
    Base* temp=*iterateList2;
    *iterateList2=*iterateListreal;
    *iterateListreal=temp;
}

void List::sort()
{
    sort_function->sort(this);
}
