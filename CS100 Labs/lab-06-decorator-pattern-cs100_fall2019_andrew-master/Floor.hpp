/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Floor.hpp
 * Author: Andrew Won
 *
 * Created on November 3, 2019, 11:47 PM
 */

#ifndef FLOOR_HPP
#define FLOOR_HPP

#include "DecBase.hpp"
#include <string>
using namespace std;
class Floor : public DecBase {
    public:
        /* Constructors */
        Floor(Base* newcomposite) {composite=newcomposite; };

        /* Pure Virtual Functions */
        double evaluate();
        string stringify();
};


#endif /* FLOOR_HPP */
