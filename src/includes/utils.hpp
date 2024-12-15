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
    //TODO: trocar esses nomes que estão horríveis
    float indicadorXIni = 0;
    float indicadorYIni = 0;
    float indicadorXFim = 0;
    float indicadorYFim = 0; 

    Segment( Vector2D VIni, Vector2D VFim ) : xIni(VIni.x), yIni(VIni.y), xFim(VFim.x), yFim(VFim.y)
    {   
        float mod = 0;
        indicadorXIni = (xIni + xFim)/2.0;
        indicadorYIni = (yIni + yFim)/2.0;
        mod = std::sqrt( (xFim - xIni)*(xFim - xIni) + (yFim - yIni)*(yFim - yIni) );
        indicadorXFim = 10*(yIni - yFim)/mod + indicadorXIni;
        indicadorYFim = 10*(xFim - xIni)/mod + indicadorYIni;
    }
};