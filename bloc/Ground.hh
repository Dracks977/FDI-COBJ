//
// Ground.hh for cpp in /home/annibal/cpp/cp_2/anniba_c/bloc
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 09:41:28 2017 ANNIBAL Celine
// Last update Wed Feb 15 09:07:37 2017 ANNIBAL Celine
//
#ifndef _GROUND_HH_
#define _GROUND_HH_

#include "ASteppable.hh"

class Ground: public ASteppable
{
public:
  bool isStep();
  Ground(char);
  virtual ~Ground();
  Ground(const Ground&);
  Ground &operator=(const Ground&);
};

#endif
