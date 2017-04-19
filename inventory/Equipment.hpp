//
// Equipment.hpp for cpp in /home/annibal/cpp/cp_2/anniba_c/inventory
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Tue Feb 14 12:13:52 2017 ANNIBAL Celine
// Last update Tue Feb 14 12:22:54 2017 ANNIBAL Celine
//
#ifndef _EQUIPMENT_HH_
#define _EQUIPMENT_HH_

#include "AItem.hh"

template <typename C>
class Equipment: public AItem
{
private:
  C* _usableOn;
public:
  Equipment() : AItem(){}
  ~Equipment(){}
  Equipment(const Equipment&){
  }
  Equipment &operator=(const Equipment&){
    return(*this);
  }
};

#endif
