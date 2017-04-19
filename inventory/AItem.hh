//
// AItem.hh for cpp in /home/annibal/cpp/cp_2/anniba_c/Inventory
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 13:10:11 2017 ANNIBAL Celine
// Last update Mon Feb 13 13:30:04 2017 ANNIBAL Celine
//
#ifndef _AITEM_HH_
#define _AITEM_HH_

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

class AItem
{
private:
  std::string _name;
public:
  AItem();
  std::string GetName() const;
  virtual ~AItem();
};

#endif
