/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "BubbleSort.hpp"


void BubbleSort::sort(Container* container)
{
    Base* temp;
    for(int i=0;i<container->size()-1;i++)
    {      
	for(int j=0;j<container->size()-i-1;j++)
	{
		if((*container).at(j)->evaluate()>(*container).at(j+1)->evaluate())
        	{
        	    container->swap(j,j+1);
	        }
	} 
    }
}
