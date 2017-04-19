//
// Created by root on 13/02/17.
//

#include "ReadMap.hh"
#include <iostream>
ReadMap::ReadMap(std::string path) {
    _bType['#'] = FBloc::env::WALL;
    _bType['A'] = FBloc::env::DOOR;
    _bType[' '] = FBloc::env::GROUND;
    _bType['H'] = FBloc::env::OBSTACLE;
    _bType['S'] = FBloc::env::SECRET;
    _bType['x'] = FBloc::env::GROUND;
    _bType['k'] = FBloc::env::GROUND;
    readMap(path);
    readMapChar(path);
    GuardAppend();
}

void ReadMap::SaveMap(std::string path) {
    std::ofstream file;
    file.open (path);
    for(unsigned int i(0); i < _mapChar.size(); ++i) {
        for(unsigned int j(0); j < _mapChar[i].size(); ++j) {
            file << _mapChar[i][j];
        }
        file << std::endl;
    }
    file.close();
}

void ReadMap::SetMap(std::string path) {
    _map.clear();
    _mapChar.clear();
    GuardList.clear();
    readMap(path);
    readMapChar(path);
    GuardAppend();
}

//cree une map de vector<>
void ReadMap::readMap(std::string path) {
    std::ifstream file(path);
    char c;
    std::vector<ABloc*> test;
    FBloc facto;
    if (file.is_open()) {
        while (file.get(c)){
            auto search = _bType.find(c);
                 if (c == '\n'){
                     _map.push_back(test);
                     test.clear();
                 }else if (search != _bType.end())
                     test.push_back(facto.Get(_bType[c], c));
                 else test.push_back(facto.Get(FBloc::env::GROUND, ' '));

        }
        if (!test.empty())
            _map.push_back(test);
    }
    file.close();
}

void ReadMap::readMapChar(std::string path) {
    std::ifstream file(path);
    char c;
    std::vector<char> test;
    if (file.is_open()) {
        while (file.get(c)){
            if (c == '\n') {
                _mapChar.push_back(test);
                test.clear();
            }
            test.push_back(c);
        }
        if (!test.empty())
            _mapChar.push_back(test);
    }
    file.close();
}

const std::vector<std::vector<ABloc*>>& ReadMap::getMap() const {
    return _map;
}

void ReadMap::GuardAppend() {
    Fcharactere facto;
    unsigned int i;
    unsigned int j;
    for(i = 0; i < _mapChar.size(); ++i) {
        for(j = 0; j < _mapChar[i].size(); ++j) {
            if (_mapChar[i][j] == 'G'){
                Guard * G = static_cast<Guard *>(facto.Get(Fcharactere::entity::GUARD,3));
                G->_PosX = j - 1;
                G->_PosY = i;
                _map[i][j - 1]->SetChar('G');
                GuardList.push_back(G);
            }
        }
    }
}

const std::list<Guard*>& ReadMap::GetGuard() const {
    return  GuardList;
}

void ReadMap::ShowMap() {
  std::cout << "\033c" << std::endl;
  for(unsigned int i(0); i < _map.size(); ++i) {
        for(unsigned int j(0); j < _map[i].size(); ++j) {
            std::cout << _map[i][j]->GetChar();
        }
        std::cout << std::endl;
    }
}


void ReadMap::top(int y, int x) {
    if(dynamic_cast<Ground *>(_map[y + 1][x]))
        SetCharAtPos(y + 1, x, ':');
}

void ReadMap::bottom(int y, int x) {
    if(dynamic_cast<Ground *>(_map[y - 1][x]))
        SetCharAtPos(y - 1, x, ':');
}

void ReadMap::right(int y, int x) {
    if(dynamic_cast<Ground *>(_map[y][x + 1]))
        SetCharAtPos(y, x + 1, ':');
}
void ReadMap::left(int y, int x) {
    if(dynamic_cast<Ground *>(_map[y][x - 1]))
        SetCharAtPos(y, x - 1, ':');
}
void ReadMap::bottomleft(int y, int x) {
    if(dynamic_cast<Ground *>(_map[y - 1][x - 1]))
        SetCharAtPos(y - 1, x - 1, ':');
}

void ReadMap::bottomright(int y, int x) {
    if(dynamic_cast<Ground *>(_map[y - 1][x + 1]))
        SetCharAtPos(y - 1, x + 1, ':');
}

void ReadMap::topleft(int y, int x) {
    if(dynamic_cast<Ground *>(_map[y + 1][x - 1]))
        SetCharAtPos(y + 1, x - 1, ':');
}

void ReadMap::topright(int y, int x) {
    if(dynamic_cast<Ground *>(_map[y + 1][x + 1]))
        SetCharAtPos(y + 1, x + 1, ':');
}
void ReadMap::SetGuardMarks() {
    std::list<Guard *>::iterator p = GuardList.begin();
    // a split en plusieur fonction je pense
    while(p != GuardList.end()) {
        top((*p)->_PosY, (*p)->_PosX);
        bottom((*p)->_PosY, (*p)->_PosX);
        right((*p)->_PosY, (*p)->_PosX);
        left((*p)->_PosY, (*p)->_PosX);
        bottomleft((*p)->_PosY, (*p)->_PosX);
        bottomright((*p)->_PosY, (*p)->_PosX);
        topright((*p)->_PosY, (*p)->_PosX);
        topleft((*p)->_PosY, (*p)->_PosX);
        p++;
    }
}

const std::vector<std::vector<char>>& ReadMap::getCharMap() const {
    return  _mapChar;
}

void ReadMap::SetCharAtPos(int x, int y, char c) {
    _map[x][y]->SetChar(c);
}

void ReadMap::GetPlayerPos(int &x, int &y) {
    bool find = false;
    unsigned int i;
    unsigned int j;
    for(i = 0; i < _mapChar.size() && !find; ++i) {
        for(j = 0; j < _mapChar[i].size() && !find; ++j) {
            if (_mapChar[i][j] == 'O'){
                find = true;
                _mapChar[i][j] = ' ';
            }
        }
    }
    x = j - 2;
    y = i - 1;
    _map[i-1][j - 2]->SetChar('O');
}
