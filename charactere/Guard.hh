//
// Created by root on 13/02/17.
//

#ifndef CARBORD2_GUARD_HH
#define CARBORD2_GUARD_HH

#include "Aennemy.hh"

class Guard : public Aennemy{
public:
    int _PosX;
    int _PosY;
    bool move(int, int, ReadMap*) override ;
    Guard(int);
    Guard(const Guard&);
    Guard &operator =(const Guard &x);

};


#endif //CARBORD2_GUARD_HH
