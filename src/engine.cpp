#include"includes/app.hpp"
#include<raylib.h>
#include"includes/engine.hpp"
#include"includes/map/mapRenderer.hpp"
#include"includes/settings.hpp"
#include"includes/utils.hpp"

Engine::Engine( Application* application )
{
    app = application;
    mapRenderer = new MapRenderer(this);
}

Engine::~Engine()
{
    delete mapRenderer;
}

void Engine::Update()
{

}

void Engine::Draw2d()
{
    mapRenderer->DrawPoints();
    mapRenderer->DrawSegments();
}

void Engine::Draw3d()
{

}

void Engine::Draw()
{  
    BeginDrawing();
    ClearBackground(BLACK);
    Draw2d();
    Draw3d();
    EndDrawing();
}