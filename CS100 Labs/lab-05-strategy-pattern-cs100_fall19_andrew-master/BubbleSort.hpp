/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSort.hpp
 * Author: Andrew Won
 *
 * Created on October 28, 2019, 5:15 PM
 */
#include "Sort.hpp"

#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

class BubbleSort : public Sort {
    public:
        /* Constructors */
        BubbleSort(){};

        /* Pure Virtual Functions */
        void sort(Container* container);
};


#endif /* BUBBLESORT_HPP */
