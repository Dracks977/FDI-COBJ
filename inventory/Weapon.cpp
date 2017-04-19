//
// Weapon.cpp for cpp in /home/annibal/cpp/cp_2/anniba_c/Inventory
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 13:15:22 2017 ANNIBAL Celine
// Last update Mon Feb 13 14:36:38 2017 ANNIBAL Celine
//
#include "Weapon.hh"

Weapon::Weapon() : AItem()
{
}

Weapon::~Weapon()
{
}

Weapon::Weapon(const Weapon& obj)
{
  (void)obj;
}

Weapon &Weapon::operator=(const Weapon& obj)
{
  (void)obj;
  return(*this);
}

int Weapon::GetAmmo() const
{
  return(this->_ammo);
}

int Weapon::GetMaxAmmo() const
{
  return(this->_maxAmmo);
}

void Weapon::SetMaxAmmo(int a)
{
  this->_maxAmmo = a;
}

void Weapon::SetAmmo(int a)
{
  this->_ammo = a;
}
