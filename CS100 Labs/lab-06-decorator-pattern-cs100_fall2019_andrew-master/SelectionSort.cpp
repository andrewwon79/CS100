
#include <iostream>
#include <vector>

#include "SelectionSort.hpp"

using namespace std;
void SelectionSort::sort(Container* container)
{
    Base* temp;
    for(int i=0;i<container->size()-1;i++)
    {                                        
        for(int counter=i+1;counter<container->size();counter++)
        {
            if((*container).at(i)->evaluate()>(*container).at(counter)->evaluate())     //if original is found to be greater than new element
            {
                container->swap(i,counter);
            }
        }
    }
}

SelectionSort::SelectionSort()
{
    
}
