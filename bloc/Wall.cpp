//
// Wall.cpp for cpp in /home/annibal/cpp/cp_2/anniba_c/bloc
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 09:56:55 2017 ANNIBAL Celine
// Last update Tue Feb 14 09:56:31 2017 ANNIBAL Celine
//
#include "Wall.hh"

Wall::Wall(char x) : ABloc(x), ANotSteppable(x)
{
}

Wall::~Wall()
{
}

Wall::Wall(const Wall&x) : ABloc(x._char), ANotSteppable(x._char)
{
}

Wall &Wall::operator=(const Wall&)
{
  return(*this);
}

bool Wall::isNotStep()
{
  return(true);
}
