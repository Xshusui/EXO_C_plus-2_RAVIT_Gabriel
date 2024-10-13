#ifndef DEF_abstraite
#define DEF_abstraite

#pragma once
#include "Vector2.h"

class AMovable
{
    Vector2 direction;
    float vitesse;

public:
    AMovable(Vector2 _direction, float _vitesse) : direction(_direction), vitesse(_vitesse) {
        
    }

    virtual Vector2 Setdirection(Vector2 _direction) {
        direction = _direction;
    }

    virtual float Setvitesse(float _vitesse ) {
        vitesse = _vitesse;
    }

    virtual void Move() = 0;
};
#endif
