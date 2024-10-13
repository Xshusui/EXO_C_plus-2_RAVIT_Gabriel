#ifndef DEF_Mob
#define DEF_Mob
// Exo 8 
#include"Entity.h"
#include"Alive.h"
#include"abstraite.h"
#include<iostream>

#pragma once
class Mob : public Entity, public Alive, public AMovable
{
public:
    Mob(float _x, float _y, float _maxhp, float _hp, float, Vector2 _direction, float _vitesse) : Entity(_x, _y), Alive(_hp), AMovable(_direction, _vitesse) {
        std::cout << "Mob just created at x = " << _x << "and y = " << _y << "with hp = " << _maxhp << "with direction x = " << _direction.GetX() << "and y = " << _direction.GetY() << std::endl;
    }

    virtual void LoseLife(float _Damage) override {
        Alive::LoseLife(_Damage);
        std::cout << "Mob just die" << std::endl; 
    }

    virtual void Move() override {
        float Move(float _direction, float _vitesse);
        std::cout << "Mob move to x = " << _direction << "and y = " << _vitesse << std::endl;
    }
};

#endif
