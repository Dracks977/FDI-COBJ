//
// Obstacle.hh for cpp in /home/annibal/cpp/cp_2/anniba_c/obstacle
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 10:24:37 2017 ANNIBAL Celine
// Last update Wed Feb 15 09:07:54 2017 ANNIBAL Celine
//
#ifndef _OBSTACLE_HH_
#define _OBSTACLE_HH_

#include "ASteppable.hh"
#include "ANotSteppable.hh"
#include "../charactere/Fcharactere.hh"

class Obstacle : virtual public ASteppable, virtual public ANotSteppable
{
public:
    bool TestIsStep(const Aally& obj);
    bool TestIsNotStep(const Aally& obj);
    virtual bool isStep();
    virtual bool isNotStep();
    Obstacle(char);
    virtual ~Obstacle();
    Obstacle(const Obstacle&);
    Obstacle &operator=(const Obstacle&);
};

#endif
