#ifndef DEF_IAttacker
#define DEF_IAttacker

#pragma once
#include "Alive.h"

class IAttacker{
public:
    virtual void Attack(float _Damage)
        Alive::*LifeA -= _Damage;
};

#endif
