//
// IBloc.hh for cpp in /home/annibal/cpp/cp_2/anniba_c/bloc
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 09:26:18 2017 ANNIBAL Celine
// Last update Tue Feb 14 14:24:42 2017 ANNIBAL Celine
//
#ifndef _IBLOC_HH_
#define _IBLOC_HH_

#include <iostream>
#include <string>

class ABloc
{
protected:
  char _char;
  int _xPos;
  int _yPos;
public:
    ABloc(char x = 'B') : _char(x) {
    }
    virtual ~ABloc() {}
    char GetChar() const { return _char;}
    void SetChar(const char x){ _char = x;}
};

#endif
