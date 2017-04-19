//
// ANotSteppable.hh for cpp in /home/annibal/cpp/cp_2/anniba_c/bloc
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Mon Feb 13 09:37:41 2017 ANNIBAL Celine
// Last update Tue Feb 14 14:31:55 2017 ANNIBAL Celine
//
#ifndef _ANOTSTEPPABLE_HH_
#define _ANOTSTEPPABLE_HH_

#include <iostream>
#include <string>
#include "ABloc.hh"

class ANotSteppable : public virtual ABloc
{
public:
    ANotSteppable(char x);
    ANotSteppable(){std::cout << "Anot def" << std::endl;}
    virtual ~ANotSteppable() {};
    virtual bool isNotStep() = 0;
};

#endif
