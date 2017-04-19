//
// Game.hh for cpp in /home/annibal/cpp/cp_2/anniba_c
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Wed Feb 15 12:25:09 2017 ANNIBAL Celine
// Last update Thu Feb 16 13:37:18 2017 ANNIBAL Celine
//
#ifndef _GAME_HH_
#define _GAME_HH_

#include "bloc/Ground.hh"
#include "bloc/Wall.hh"
#include "bloc/Door.hh"
#include "bloc/Obstacle.hh"
#include "charactere/Guard.hh"
#include "charactere/Player.hh"
#include "charactere/Camera.hh"
#include "charactere/Prisoner.hh"
#include "map/ReadMap.hh"

class Game
{
public:
  static Game* GetGame();
private:
  int _gameLoop;
  int GetGameLoop() const;
  Game(const Game&) = delete;
  Game &operator=(const Game&) = delete;
  Game();
  ~Game();
  static Game* m_instance;
public:
  void LoadMap();
  void MoveChar(ReadMap*, Player*);
};

#endif
