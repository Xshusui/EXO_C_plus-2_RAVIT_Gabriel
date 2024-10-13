#pragma once
class Alive{
    float maxLife;

    float LifeA;

public:
    Alive(float _LifeA) : LifeA(_LifeA), maxLife(_LifeA) {}

    virtual float GetmaxLife() {
        return maxLife;
    }
    virtual float GetLifeA() {
        return LifeA;
    }
    virtual void LoseLife(float _Damage) {
        LifeA -= _Damage;
    }
};
