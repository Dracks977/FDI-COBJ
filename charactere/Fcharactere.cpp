//
// Created by root on 13/02/17.
//

#include "Fcharactere.hh"
#include <stdexcept>

Icharactere* Fcharactere::pGuard(int x) {
    return new Guard(x);
}
Icharactere* Fcharactere::pPlayer(int x) {
    return new Player(x);
}
Icharactere* Fcharactere::pCamera(int x) {
    return new Camera(x);
}
Icharactere* Fcharactere::pPrisoner(int x) {
    return new Prisoner(x);
}

Icharactere *Fcharactere::Get(int name, int x) {
    pf[0] = &Fcharactere::pPlayer;
    pf[1] = &Fcharactere::pGuard;
    pf[2] = &Fcharactere::pCamera;
    pf[3] = &Fcharactere::pPrisoner;

    if (name >= 3)
        throw std::invalid_argument("wrong type of Characteres");
    return (this->*pf[name])(x);

}