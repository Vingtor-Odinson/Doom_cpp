#pragma once

#include"cmath"

class Vector2D
{
public:

    float x, y;

    Vector2D(float X = 0.0, float Y = 0.0) : x(X), y(Y) {}

    float Magnitude() {
        return std::sqrt(x*x + y*y);
    }

    Vector2D Normalize() {
        return Vector2D(x/this->Magnitude(), y/this->Magnitude());
    }
    
    Vector2D operator+(const Vector2D& other) const {
        return Vector2D(x + other.x, y + other.y);
    }

    Vector2D operator-(const Vector2D& other) const {
        return Vector2D(x - other.x, y - other.y);
    }

    Vector2D operator-() const {
        return Vector2D(-x, -y);
    }

    Vector2D operator*(float scalar) const {
        return Vector2D(x*scalar, y*scalar);
    }

    Vector2D operator*(double scalar) const {
        return Vector2D( (float) x*scalar, (float) y*scalar);
    }
};

class Segment
{
public:
    float xIni = 0;
    float yIni = 0;
    float xFim = 0;
    float yFim = 0;

    Segment( Vector2D VIni, Vector2D VFim ) : xIni(VIni.x), yIni(VIni.y), xFim(VFim.x), yFim(VFim.y) {}
};