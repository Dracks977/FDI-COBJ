//
// Created by root on 13/02/17.
//

#ifndef CARBORD2_READMAP_HH
#define CARBORD2_READMAP_HH

#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include "../charactere/Fcharactere.hh"
#include "../bloc/FBloc.hh"
#include <map>
#include <list>

class ReadMap {
private:
    int _x;
    int _y;
    std::list<Guard*> GuardList;
    std::map<char,int> _bType;
    std::vector<std::vector<ABloc*>> _map;
    std::vector<std::vector<char>> _mapChar;

    void readMap(std::string path);
    void readMapChar(std::string path);
    void GuardAppend();

private:
    void top(int y, int x);
    void bottom(int y, int x);
    void left(int y, int x);
    void right(int y, int x);
    void topleft(int y, int x);
    void topright(int y, int x);
    void bottomright(int y, int x);
    void bottomleft(int y, int x);


public:
    void SetGuardMarks();
    void ShowMap();
    void SaveMap(std::string);
    void SetMap(std::string);
    void GetPlayerPos(int &x, int&y);
    const std::list<Guard*> &GetGuard() const;
    ReadMap(std::string path);
    const std::vector<std::vector<ABloc*>> &getMap() const;
    const std::vector<std::vector<char>> &getCharMap() const;
    void SetCharAtPos(int x, int y, char c);
};


#endif //CARBORD2_READMAP_HH
