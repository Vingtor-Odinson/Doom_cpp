#pragma once

#include"utils.hpp"

class Engine;

class MapRenderer
{
private:
    Engine* engine;

public:
    MapRenderer( Engine* eng ) : engine(eng) {}

    void DrawPoints();
    void DrawSegments();
}