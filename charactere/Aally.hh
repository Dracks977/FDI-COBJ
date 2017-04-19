//
// Created by root on 13/02/17.
//

#ifndef CARBORD2_AALLY_HH
#define CARBORD2_AALLY_HH

#include "Icharactere.hh"

class Aally : public Icharactere {
protected:
    void lieDown();
    void standUp();
    bool _LieStatus = false;
public:
    Aally(int);
    Aally(const Aally&);
    Aally &operator =(const Aally &x);
    virtual bool move(int, int, ReadMap*) = 0;
    bool GetIsLie() const;
};


#endif //CARBORD2_AALLY_HH
