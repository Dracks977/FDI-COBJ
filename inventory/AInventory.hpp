//
// AInventory.hpp for cpp in /home/annibal/cpp/cp_2/anniba_c/Inventory
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 13:04:49 2017 ANNIBAL Celine
// Last update Mon Feb 13 13:09:56 2017 ANNIBAL Celine
//
#ifndef _AINVENTORY_HPP_
#define _AINVENTORY_HPP_

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "AItem.hh"

template <typename F>
class AInventory
{
protected:
  F _weapons;
  F _equipment;
public:
  AInventory(int maxItems);
  virtual bool AddItem(AItem *) = 0;
  virtual bool RemoveItem(AItem *) = 0;
  virtual AItem* GetItem(int) const = 0;
  virtual AItem* GetItem(std::string) const = 0;
};

#endif
