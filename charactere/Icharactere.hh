//
// Created by root on 13/02/17.
//

#ifndef CARBORD2_ICHARACTERE_HH
#define CARBORD2_ICHARACTERE_HH

class ReadMap;

class Icharactere {
protected:
    int _distMove; //ajouter point de vie etc
    virtual bool move(int, int, ReadMap *) = 0; // int = nbr case char direction NWES
public:
    Icharactere(int x) : _distMove(x){}

};


#endif //CARBORD2_ICHARACTERE_HH
