//
// Created by root on 14/02/17.
//

#include "Fitem.hh"
#include <stdexcept>

AItem* Fitem::Get(int name) {
    if (name >= 1)
        throw std::invalid_argument("wrong type of Items");
    return new Equipment<Door>;
}

AItem* Fitem::GetEquip(int name) {
    if (name >= 1)
        throw std::invalid_argument("wrong type of Equip");
    return static_cast<AItem*>(new Weapon());
}
