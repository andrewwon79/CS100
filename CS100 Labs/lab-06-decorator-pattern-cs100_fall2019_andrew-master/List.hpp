/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.hpp
 * Author: Andrew Won
 *
 * Created on October 27, 2019, 10:26 AM
 */

#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>
#include <list>
#include <iterator>
#include "Container.hpp"
#include "base.hpp"
#include "Sort.hpp"
using namespace std;

class List : public Container {
    private:
        
        list<Base *> userlist;
        list<Base *>::iterator iterateList;
    public:
        /* Constructors */
        List(){Container::sort_function=NULL;};
        List(Sort* function){Container::sort_function=function; };
        /* Non Virtual Functions */
        void set_sort_function(Sort* function); // set the type of sorting algorithm

        /* Pure Virtual Functions */
        // push the top pointer of the tree into container
        void add_element(Base* element);
        // iterate through trees and output the expressions (use stringify())
        void print();
        // calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
        void sort();

        /* Essentially the only functions needed to sort */
        //switch tree locations
        void swap(int i, int j);
        // get top ptr of tree at index i
        Base* at(int i);
        // return container size
        int size();
};

#endif /* LIST_HPP */


