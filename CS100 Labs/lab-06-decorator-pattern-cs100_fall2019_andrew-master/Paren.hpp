/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Paren.hpp
 * Author: Andrew Won
 *
 * Created on November 3, 2019, 11:55 PM
 */

#ifndef PAREN_HPP
#define PAREN_HPP

#include "DecBase.hpp"
#include <string>
using namespace std;
class Paren : public DecBase{
    public:
        /* Constructors */
        Paren(Base* newcomposite) {composite=newcomposite; };

        /* Pure Virtual Functions */
        double evaluate();
        string stringify();
};


#endif /* PAREN_HPP */
