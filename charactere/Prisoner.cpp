//
// Created by root on 13/02/17.
//

#include "Prisoner.hh"

Prisoner::Prisoner(int x) : Aally(x){}

Prisoner::Prisoner(const Prisoner &x) : Aally(x._distMove) {

}

Prisoner& Prisoner::operator=(const Prisoner &x) {
    this->_distMove = x._distMove;
    return *this;
}

bool Prisoner::move(int, int, ReadMap*) {
return true;
}

void Prisoner::stay() {

}

void Prisoner::follow() {

}