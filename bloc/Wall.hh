//
// Wall.hh for cpp in /home/annibal/cpp/cp_2/anniba_c/bloc
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 09:55:17 2017 ANNIBAL Celine
// Last update Wed Feb 15 09:08:05 2017 ANNIBAL Celine
//
#ifndef _WALL_HH_
#define _WALL_HH_

#include "ANotSteppable.hh"

class Wall: public ANotSteppable
{
public:
  Wall(char x);
  virtual ~Wall(void);
  Wall(const Wall&);
  Wall &operator=(const Wall&);
  bool isNotStep(void);
};

#endif
