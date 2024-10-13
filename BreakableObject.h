#ifndef DEF_BreakableObject
#define DEF_BreakableObject
#pragma once
// Exo 7
#include "Entity.h"
#include "Alive.h"
#include <iostream>

class BreakableObject : public Entity, public Alive
{
public:
    BreakableObject(float _x, float _y, float _maxhp, float _hp) : Entity(_x, _y), Alive(_hp) {
        std::cout << "Breakable Object just created at x = " << _x << "and y = " << _y << " with hp = " << _maxhp << std::endl;
    }
    // override la fonction virtual pur
    virtual void LoseLife(float _Damage) override {
        //on appelle la fonction LoseLife dans l'override
        Alive::LoseLife(_Damage);
        std::cout << "Breakable Object just broke" << std::endl;
    }
};

#endif
