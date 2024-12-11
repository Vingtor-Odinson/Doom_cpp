#pragma once

class Application;

class MapRenderer;

class Engine
{

private:
    Application* app;
    MapRenderer* mapRenderer;

public:

    Engine( Application* application );
    ~Engine();

    void Update();
    void Draw2d();
    void Draw3d();
    void Draw();
};