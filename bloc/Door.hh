//
// Door.hh for cpp in /home/annibal/cpp/cp_2/anniba_c/door
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 10:32:35 2017 ANNIBAL Celine
// Last update Wed Feb 15 09:07:27 2017 ANNIBAL Celine
//
#ifndef _DOOR_HH_
#define _DOOR_HH_

#include "ASteppable.hh"
#include "ANotSteppable.hh"

class Door: public virtual ASteppable, public virtual ANotSteppable
{
private:
  bool _isOpen;
public:
  bool GetIsOpen() const;
  void SetIsOpen(bool);
  bool isStep() override;
  bool isNotStep() override;
  Door(char);
  virtual ~Door();
  Door(const Door&);
  Door &operator=(const Door&);
};

#endif
