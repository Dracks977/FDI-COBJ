//
// FBloc.hh for cpp in /home/annibal/cpp/cp_2/anniba_c/bloc
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Tue Feb 14 09:20:14 2017 ANNIBAL Celine
// Last update Tue Feb 14 12:05:41 2017 ANNIBAL Celine
//
#ifndef _FBLOC_HH_
#define _FBLOC_HH_

#include "Ground.hh"
#include "Wall.hh"
#include "Door.hh"
#include "Obstacle.hh"
#include <string>
#include <vector>
#include "ABloc.hh"

class FBloc
{
private:
    ABloc *pGround(char);
    ABloc *pWall(char);
    ABloc *pDoor(char);
    ABloc *pObstacle(char);
    ABloc *pSecret(char);

public:
    ABloc *(FBloc::*pf[5])(char);
    ABloc *Get(int, char);
  enum env
    {
      GROUND = 0, WALL = 1, DOOR = 2, OBSTACLE = 3, SECRET = 4
    };
};

#endif
