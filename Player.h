#ifndef DEF_Player
#define DEF_Player
//Exo 9
#pragma once
#include"Entity.h"
#include"Alive.h"
#include"abstraite.h"
#include"IAttacker.h"
#include<iostream>

class Player : public Entity, public Alive, public AMovable, public IAttacker 
{
public:
    Player(float _x, float _y, float _maxhp, float _hp, Vector2 _direction, float _vitesse) : Entity(_x, _y), Alive(_hp), AMovable(_direction, _vitesse) {
        std::cout << "Player just created at x = " << _x << "and y = " << _y << "with hp = " << _maxhp << "with direction x = " << _direction.GetX() << "and y = " << _direction.GetY() << std::endl;
    }

    virtual void LoseLife(float _Damage) override {
        Alive::LoseLife(_Damage);
        std::cout << "Player just died" << std::endl;
    }

    virtual void Move() override {
        //code qui fait un deplacement
        float Move(float _direction, float _vitesse);
        std::cout << "Player moved to x = " << _direction << "and y = " << _vitesse << std::endl;
    }
    // implémenter une fonction = 
    
    virtual void Attack(Alive::LiveA)
    
};

#endif
