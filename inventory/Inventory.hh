//
// AInventory.hpp for cpp in /home/annibal/cpp/cp_2/anniba_c/Inventory
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 13:04:49 2017 ANNIBAL Celine
// Last update Wed Feb 15 12:08:34 2017 ANNIBAL Celine
//
#ifndef _INVENTORY_HH_
#define _INVENTORY_HH_

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "AItem.hh"

class Inventory
{
protected:
  std::vector<AItem *> _weapons;
  std::vector<AItem *> _equipment;
public:
  Inventory();
  bool AddWeapon(AItem *);
  bool AddEqui(AItem *);
  bool RemoveWeapon(AItem *);
  bool RemoveEqui(AItem *);
  AItem* GetWeapon(unsigned int) const;
  AItem* GetWeapon(std::string const&) const;
  AItem* GetEqui(unsigned int) const;
  AItem* GetEqui(std::string const&) const;
};

#endif
