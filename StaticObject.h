#ifndef DEF_StaticObject
#define DEF_StaticObject
#pragma once
#include "Entity.h"
#include <iostream>
// Exo 6
class StaticObject : public Entity{
public:
    StaticObject(float _x, float _y) : Entity(_x, _y) {
        std::cout << "Static Object just created at x = " << _x << "and y = " << _y << std::endl;
    }

};

#endif
