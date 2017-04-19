//
// Created by root on 13/02/17.
//

#ifndef CARBORD2_PLAYER_HH
#define CARBORD2_PLAYER_HH

#include "Aally.hh"

class Player : public Aally {
private:
    bool WMove(ReadMap*);
    bool AMove(ReadMap*);
    bool DMove(ReadMap*);
    bool SMove(ReadMap*);
    bool (Player::*pf[4])(ReadMap*);

public:
    bool IsAlive = true;
    bool Escape = false;
    bool Key = false;
    int x;
    int y;
    bool move(int, int, ReadMap*) override ;
    Player(int);
    Player(const Player&);
    Player &operator =(const Player &x);

public:
    enum POSX {W = 0, A = 1, D = 2, S = 3};
};


#endif //CARBORD2_PLAYER_HH
