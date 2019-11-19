/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ceil.hpp
 * Author: Andrew Won
 *
 * Created on November 3, 2019, 11:42 PM
 */

#ifndef CEIL_HPP
#define CEIL_HPP
#include "DecBase.hpp"
#include <string>
using namespace std;
class Ceil : public DecBase{
    public:
        /* Constructors */
        Ceil(Base* newcomposite) {composite=newcomposite; };

        /* Pure Virtual Functions */
        double evaluate();
        string stringify();
};

#endif /* CEIL_HPP */
