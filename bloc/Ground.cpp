//
// Ground.cpp for cpp in /home/annibal/cpp/cp_2/anniba_c/bloc
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 09:41:25 2017 ANNIBAL Celine
// Last update Tue Feb 14 09:54:38 2017 ANNIBAL Celine
//
#include "Ground.hh"

Ground::Ground(char x) : ABloc(x), ASteppable(x)
{
}

Ground::~Ground()
{
}

Ground::Ground(const Ground&x) : ABloc(x._char) ,ASteppable(x._char)
{
}

Ground &Ground::operator=(const Ground&x)
{
    _char = x._char;
  return(*this);
}

bool Ground::isStep()
{
  return(true);
}
