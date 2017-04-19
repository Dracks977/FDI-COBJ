//
// Created by root on 13/02/17.
//

#include "Player.hh"
#include "../bloc/ASteppable.hh"
#include "../map/ReadMap.hh"

//remplacer map[y][x]->SetChar(' '); par le char de la map de char
bool Player::WMove(ReadMap *t) {
    std::vector<std::vector<ABloc*>> map = t->getMap();
    std::vector<std::vector<char>> mapchar = t->getCharMap();
    bool isopen = true;
    if (map[y-1][x]->GetChar() == ':'){
        IsAlive = false;
        return false;
    }
    if (map[y-1][x]->GetChar() == 'k')
        Key = true;
    if (dynamic_cast<Door*>(map[y-1][x])){
        isopen = Key;
        mapchar[y][x+1] = ' ';
    }
    if(dynamic_cast<ASteppable*>(map[y-1][x]) && isopen){
        if (map[y-1][x]->GetChar() == 'x')
            Escape = true;
        map[y][x]->SetChar(mapchar[y][x+1]);
        y -= 1;
        map[y][x]->SetChar('O');
        return true;
    }
    return false;
}
bool Player::AMove(ReadMap *t) {
    std::vector<std::vector<ABloc*>> map = t->getMap();
    std::vector<std::vector<char>> mapchar = t->getCharMap();
    bool isopen = true;
    if (map[y][x-1]->GetChar() == ':'){
        IsAlive = false;
        return false;
    }
    if (map[y][x-1]->GetChar() == 'k')
        Key = true;
    if (dynamic_cast<Door*>(map[y][x-1])){
        isopen = Key;
    }
    if(dynamic_cast<ASteppable*>(map[y][x-1]) && isopen){
        if (map[y][x-1]->GetChar() == 'x')
            Escape = true;
        map[y][x]->SetChar(mapchar[y][x+1]);
        x -= 1;
        map[y][x]->SetChar('O');
        return true;
    }
    return false;
}
bool Player::DMove(ReadMap *t) {
    std::vector<std::vector<ABloc*>> map = t->getMap();
    std::vector<std::vector<char>> mapchar = t->getCharMap();
    bool isopen = true;
    if (map[y][x+1]->GetChar() == ':'){
        IsAlive = false;
        return false;
    }
    if (map[y][x+1]->GetChar() == 'k')
        Key = true;
    if (dynamic_cast<Door*>(map[y][x+1]))
        isopen = Key;
    if(dynamic_cast<ASteppable*>(map[y][x+1])&& isopen){
        if (map[y][x+1]->GetChar() == 'x')
            Escape = true;
        map[y][x]->SetChar(mapchar[y][x+1]);
        x += 1;
        map[y][x]->SetChar('O');
        return true;
    }
    return false;
}
bool Player::SMove(ReadMap *t) {
    std::vector<std::vector<ABloc*>> map = t->getMap();
    std::vector<std::vector<char>> mapchar = t->getCharMap();
    bool isopen = true;
    if (map[y+1][x]->GetChar() == ':'){
        IsAlive = false;
        return false;
    }
    if (map[y+1][x]->GetChar() == 'k')
        Key = true;
    if (dynamic_cast<Door*>(map[y+1][x]))
        isopen = Key;
    if(dynamic_cast<ASteppable*>(map[y+1][x]) && isopen){
        if (map[y+1][x]->GetChar() == 'x')
            Escape = true;
        map[y][x]->SetChar(mapchar[y][x+1]);
        y += 1;
        map[y][x]->SetChar('O');
        if (map[y][x]->GetChar() == 'x')
            Escape = true;
        return true;
    }
    return false;
}

Player::Player(int x) : Aally(x){

}

Player::Player(const Player &x) : Aally(x._distMove){

}

Player& Player::operator=(const Player &x) {
    this->_distMove = x._distMove;
    return *this;
}

bool Player::move(int, int Pos, ReadMap* map) {
    pf[0] = &Player::WMove;
    pf[1] = &Player::AMove;
    pf[2] = &Player::DMove;
    pf[3] = &Player::SMove;
    (this->*pf[Pos])(map);
    return false;
}