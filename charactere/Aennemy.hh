//
// Created by root on 13/02/17.
//

#ifndef CARBORD2_AENNEMY_HH
#define CARBORD2_AENNEMY_HH

#include "Icharactere.hh"

class Aennemy : public Icharactere{
protected:
    bool lookAt(char); //char direction
public:
    Aennemy(int);
    Aennemy(const Aennemy&);
    Aennemy &operator =(const Aennemy &x);
    virtual bool move(int, int, ReadMap*) = 0;
};


#endif //CARBORD2_AENNEMY_HH
