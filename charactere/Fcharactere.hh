//
// Created by root on 13/02/17.
//

#ifndef CARBORD2_FCHARACTERE_HH
#define CARBORD2_FCHARACTERE_HH

#include "Guard.hh"
#include "Player.hh"
#include "Camera.hh"
#include "Prisoner.hh"
#include <string>
#include <vector>
#include "Icharactere.hh"


class Fcharactere {
private:
    Icharactere *pGuard(int);
    Icharactere *pPlayer(int);
    Icharactere *pPrisoner(int);
    Icharactere *pCamera(int);
public:
    Icharactere *(Fcharactere::*pf[4])(int);

public:
    Icharactere *Get(int, int);
    enum entity {
        PLAYER = 0, GUARD = 1, CAMERA = 2, PRISONER = 3
    };
};


#endif //CARBORD2_FCHARACTERE_HH
