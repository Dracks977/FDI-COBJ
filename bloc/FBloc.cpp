//
// FBloc.cpp for cpp in /home/annibal/cpp/cp_2/anniba_c/bloc
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Tue Feb 14 09:20:11 2017 ANNIBAL Celine
// Last update Tue Feb 14 12:06:23 2017 ANNIBAL Celine
//
#include "FBloc.hh"
#include <stdexcept>

ABloc* FBloc::pGround(char c)
{
  return(new Ground(c));
}

ABloc* FBloc::pWall(char c)
{
  return(new Wall(c));
}

ABloc* FBloc::pDoor(char c)
{
  return(new Door(c));
}

ABloc* FBloc::pObstacle(char c)
{
  return(new Obstacle(c));
}

ABloc* FBloc::pSecret(char) {
    std::cout << "new secret" << std::endl;
    return(new Ground('#'));
}
ABloc *FBloc::Get(int name, char c) {
    pf[0] = &FBloc::pGround;
    pf[1] = &FBloc::pWall;
    pf[2] = &FBloc::pDoor;
    pf[3] = &FBloc::pObstacle;
    pf[4] = &FBloc::pSecret;

  if (name >= 5)
    throw std::invalid_argument("wrong type of Characteres");
  return (this->*pf[name])(c);
}
