#pragma once

#include"utils.hpp"

class Engine;

class MapLoader;

class MapRenderer
{
private:
    Engine* engine;
    MapLoader* mapLoader;

public:
    MapRenderer( Engine* eng );
    ~MapRenderer();

    void DrawPoints();
    void DrawSegments();
};