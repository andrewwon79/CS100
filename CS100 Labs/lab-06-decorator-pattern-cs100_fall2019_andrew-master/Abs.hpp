/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Abs.hpp
 * Author: Andrew Won
 *
 * Created on November 3, 2019, 11:49 PM
 */

#ifndef ABS_HPP
#define ABS_HPP

#include "DecBase.hpp"
#include <string>
using namespace std;
class Abs : public DecBase{
    public:
        /* Constructors */
        Abs(Base* newcomposite) {composite=newcomposite; };

        /* Pure Virtual Functions */
        double evaluate();
        string stringify();
};

#endif /* ABS_HPP */
