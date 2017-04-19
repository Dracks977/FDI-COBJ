//
// Created by root on 13/02/17.
//

#include "Guard.hh"

Guard::Guard(int x) : Aennemy(x){}

Guard::Guard(const Guard &x) : Aennemy(x._distMove) {

}

Guard& Guard::operator=(const Guard &x) {
    this->_distMove = x._distMove;
    return *this;
}

bool Guard::move(int, int, ReadMap*) {
return true;
}