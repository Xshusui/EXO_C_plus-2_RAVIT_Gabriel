#ifndef VECTOR2EX2_H_INCLUDED
#define VECTOR2EX2_H_INCLUDED

class Vector2 {
private:
    float x;
    float y;
protected:

public:

    Vector2(float _x, float _y) : x(_x), y(_y) {}

    float GetX() {
        return x;
    }

    float GetY() {
        return y;
    }
    void SetX(float _x) {
        x = _x;
    }

    void SetY(float _y) {
        y = _y;
    }
};
#endif
