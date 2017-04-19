//
// Door.cpp for cpp in /home/annibal/cpp/cp_2/anniba_c/door
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 10:32:32 2017 ANNIBAL Celine
// Last update Tue Feb 14 10:04:47 2017 ANNIBAL Celine
//
#include "Door.hh"

bool Door::isStep()
{
  if(this->_isOpen == 1)
    return(true);
  else
    return(false);
}

bool Door::isNotStep()
{
  if(this->_isOpen == 0)
    return(true);
  else
    return(false);
}

bool Door::GetIsOpen() const
{
  return(this->_isOpen);
}

void Door::SetIsOpen(bool b)
{
  this->_isOpen = b;
}

Door::Door(char x) : ABloc(x), ASteppable(x), ANotSteppable(x)
{
}

Door::~Door()
{
}

Door::Door(const Door& obj) : ABloc(obj._char), ASteppable(obj._char), ANotSteppable(obj._char)
{

}

Door &Door::operator=(const Door& obj)
{
  (void)obj;
  return(*this);
}
