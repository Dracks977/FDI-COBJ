//
// AItem.cpp for cpp in /home/annibal/cpp/cp_2/anniba_c/Inventory
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 13:10:08 2017 ANNIBAL Celine
// Last update Mon Feb 13 13:29:59 2017 ANNIBAL Celine
//
#include "AItem.hh"

AItem::AItem()
{
}

std::string AItem::GetName() const
{
  return(this->_name);
}

AItem::~AItem() {}