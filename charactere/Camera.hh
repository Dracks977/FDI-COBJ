//
// Created by root on 13/02/17.
//

#ifndef CARBORD2_CAMERA_HH
#define CARBORD2_CAMERA_HH

#include "Aennemy.hh"

class Camera : public Aennemy {
public:
    bool move(int, int, ReadMap*);
    Camera(int);
    Camera(const Camera&);
    Camera &operator =(const Camera &x);
};


#endif //CARBORD2_CAMERA_HH
