//
// Created by root on 14/02/17.
//

#ifndef CARBORD2_FITEM_HH
#define CARBORD2_FITEM_HH

#include "Weapon.hh"
#include "Equipment.hpp"
#include "../bloc/Door.hh"

class Fitem {
public:
    AItem *GetEquip(int);
    AItem *Get(int);
    enum Equip
    {
        WEAPON = 0 //ajouter d'autre equipement genre medickit etc
    };
    enum UsableOn{
        DOOR = 0 //autre objet sur lequel influe les clef et autre genre tp
    };
};


#endif //CARBORD2_FITEM_HH
