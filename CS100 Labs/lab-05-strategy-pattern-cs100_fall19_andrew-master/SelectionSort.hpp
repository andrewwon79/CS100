/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SelectionSort.hpp
 * Author: Andrew Won
 *
 * Created on October 27, 2019, 5:30 PM
 */

#ifndef SELECTIONSORT_HPP
#define SELECTIONSORT_HPP

#include "Container.hpp"
#include "Sort.hpp"
#include <iostream>
using namespace std;
class SelectionSort : public Sort {
    public:
        /* Constructors */
        
        
        //wtf
        SelectionSort();
        /* Pure Virtual Functions */
        void sort(Container* container);
};

#endif /* SELECTIONSORT_HPP */
