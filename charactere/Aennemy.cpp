//
// Created by root on 13/02/17.
//

#include "Aennemy.hh"

Aennemy::Aennemy(int x) : Icharactere(x){}

Aennemy::Aennemy(const Aennemy &x) :  Icharactere(x._distMove){
}

Aennemy& Aennemy::operator=(const Aennemy &x) {
    this->_distMove = x._distMove;
    return *this;
}

bool Aennemy::lookAt(char) {
return true;
}