#include"app.hpp"
#include<raylib.h>
#include"engine.hpp"
#include"mapRenderer.hpp"
#include"settings.hpp"
#include"utils.hpp"

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