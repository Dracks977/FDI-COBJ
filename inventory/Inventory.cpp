//
// Inventory.cpp for cpp in /home/annibal/cpp/cp_2/anniba_c/inventory
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Tue Feb 14 14:41:30 2017 ANNIBAL Celine
// Last update Wed Feb 15 12:01:26 2017 ANNIBAL Celine
//
#include "Inventory.hh"

Inventory::Inventory()
{
}

bool Inventory::AddWeapon(AItem* obj)
{
  _weapons.push_back(obj);
  if(std::find(_weapons.begin(), _weapons.end(), obj) != _weapons.end())
    return (true);
  else
    return (false);
}

bool Inventory::AddEqui(AItem* obj)
{
  _equipment.push_back(obj);
  if(std::find(_equipment.begin(), _equipment.end(), obj) != _equipment.end())
    return (true);
  else
    return (false);
}

bool Inventory::RemoveWeapon(AItem* obj)
{
  unsigned int i;
  for(i = 0; i < _weapons.size(); i++)
    {
      if(this->_weapons[i] == obj)
	{
	  _weapons.erase(_weapons.begin() + i);
	  return(true);
	}
    }
  return (false);
}

bool Inventory::RemoveEqui(AItem* obj)
{
  unsigned int i;
  for(i = 0; i < _equipment.size(); i++)
    {
      if(this->_equipment[i] == obj)
	{
	  _equipment.erase(_equipment.begin() + i);
	  return(true);
	}
    }
  return (false);
}

AItem*  Inventory::GetWeapon(unsigned int i) const
{
  if (i >= 0 && i < _weapons.size())
    return(_weapons[i]);
  return(nullptr);
}

AItem*  Inventory::GetWeapon(std::string const& str) const
{
  std::vector<AItem*>:: const_iterator it;

  for(it = _weapons.begin(); it != _weapons.end() ;it++)
    {
      if((*it)->GetName() == str)
	return(*it);
    }
  return (nullptr);
}

AItem*  Inventory::GetEqui(unsigned int i) const
{
  if (i >= 0 && i < _equipment.size())
    return(_equipment[i]);
  return(nullptr);
}

AItem*  Inventory::GetEqui(std::string const& str) const
{
  std::vector<AItem*>:: const_iterator it;

  for(it = _equipment.begin(); it != _equipment.end() ;it++)
    {
      if((*it)->GetName() == str)
	return(*it);
    }
  return (nullptr);
}
