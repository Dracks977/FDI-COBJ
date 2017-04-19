//
// Created by root on 13/02/17.
//

#include "Camera.hh"

Camera::Camera(int x) : Aennemy(x){}

Camera::Camera(const Camera &x) : Aennemy(x._distMove){

}

Camera& Camera::operator=(const Camera &x) {
    this->_distMove = x._distMove;
    return *this;
}

bool Camera::move(int, int, ReadMap*) {
return true;
}