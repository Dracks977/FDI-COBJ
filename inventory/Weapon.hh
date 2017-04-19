//
// Weapon.hh for cpp in /home/annibal/cpp/cp_2/anniba_c/Inventory
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 13:15:24 2017 ANNIBAL Celine
// Last update Wed Feb 15 11:11:12 2017 ANNIBAL Celine
//
#ifndef _WEAPON_HH_
#define _WEAPON_HH_

#include "AItem.hh"

class Weapon: public AItem
{
private:
  int _ammo;
  int _maxAmmo;
public:
  Weapon();
  ~Weapon();
  Weapon(const Weapon&);
  Weapon &operator=(const Weapon&);
  int GetAmmo() const;
  void SetAmmo(int);
  int GetMaxAmmo() const;
  void SetMaxAmmo(int);
};

#endif
