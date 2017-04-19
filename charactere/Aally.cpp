//
// Created by root on 13/02/17.
//

#include "Aally.hh"

Aally::Aally(int x) : Icharactere(x){}

Aally::Aally(const Aally &x) : Icharactere(x._distMove) {

}

Aally& Aally::operator=(const Aally &x) {
    this->_distMove = x._distMove;
    return *this;
}

void Aally::lieDown() {
 _LieStatus = true;
}

void Aally::standUp() {
    _LieStatus = false;
}

bool Aally::GetIsLie() const {
    return _LieStatus;
}