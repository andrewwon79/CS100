/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Truncate.hpp
 * Author: Andrew Won
 *
 * Created on November 3, 2019, 11:50 PM
 */

#ifndef TRUNCATE_HPP
#define TRUNCATE_HPP

#include "DecBase.hpp"
#include <string>
using namespace std;
class Truncate : public DecBase{
    public:
        /* Constructors */
        Truncate(Base* newcomposite) {composite=newcomposite; };

        /* Pure Virtual Functions */
        double evaluate();
        string stringify();
};

#endif /* TRUNCATE_HPP */
