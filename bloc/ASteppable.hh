//
// ASteppable.hh for cpp in /home/annibal/cpp/cp_2/anniba_c/bloc
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 09:30:48 2017 ANNIBAL Celine
// Last update Tue Feb 14 14:32:11 2017 ANNIBAL Celine
//
#ifndef _ASTEPPABLE_HH_
#define _ASTEPPABLE_HH_

#include <iostream>
#include <string>
#include "ABloc.hh"

class ASteppable: public virtual ABloc
{
public:
  virtual bool isStep() = 0;
  virtual ~ASteppable() {};
  ASteppable(char);
};

#endif
