//
// Obstacle.cpp for cpp in /home/annibal/cpp/cp_2/anniba_c/obstacle
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 10:52:16 2017 ANNIBAL Celine
// Last update Tue Feb 14 14:33:31 2017 ANNIBAL Celine
//
#include "Obstacle.hh"


bool Obstacle::TestIsStep(const Aally& obj)
{
  if(obj.GetIsLie())
    return(isStep());
  else
    return(false);
}

bool Obstacle::TestIsNotStep(const Aally &obj)
{
  if(!obj.GetIsLie())
    return(isNotStep());
  else
    return(false);
}

Obstacle::Obstacle(char x): ABloc(x), ASteppable(x), ANotSteppable(x)
{
}

Obstacle::~Obstacle()
{
}

bool Obstacle::isStep()
{
  return(true); 
}

bool Obstacle::isNotStep()
{
  return(true); 
}

Obstacle::Obstacle(const Obstacle &x) : ABloc(x._char), ASteppable(x._char), ANotSteppable(x._char)
{
}

Obstacle &Obstacle::operator=(const Obstacle&)
{
  return(*this);
}
