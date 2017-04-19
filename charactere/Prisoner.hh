//
// Created by root on 13/02/17.
//

#ifndef CARBORD2_PRISONER_HH
#define CARBORD2_PRISONER_HH

#include "Aally.hh"

class Prisoner : public Aally{
public:
    bool move(int, int, ReadMap*) override ;
    Prisoner(int);
    Prisoner(const Prisoner&);
    Prisoner &operator =(const Prisoner &x);
    void stay();
    void follow();
};


#endif //CARBORD2_PRISONER_HH
