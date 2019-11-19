/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DecBase.hpp
 * Author: Andrew Won
 *
 * Created on November 3, 2019, 11:41 PM
 */

#ifndef DECBASE_HPP
#define DECBASE_HPP
#include <string>
#include "base.hpp"
using namespace std;
class DecBase : public Base{
    protected:
    Base* composite;
    public:
        /* Constructors */
        DecBase() { };

        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
        virtual string stringify() = 0;
};

#endif /* DECBASE_HPP */
