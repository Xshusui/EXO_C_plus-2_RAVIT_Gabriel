#pragma once
#include "Vector2.h"

class Entity{
    Vector2 position;

public:
    Entity(float _x, float _y) : position(_x, _y){}

    virtual Vector2 Getposition() {
        return position;
    }

    virtual void Setposition(Vector2 _position) {
        position = _position;
    }
};
