#include"app.hpp"
#include"engine.hpp"
#include"mapRenderer.hpp"
#include"settings.hpp"
#include"utils.hpp"
#include<raylib.h>

Engine::Engine( Application* application )
{
    app = application;
    //mapRenderer = new MapRenderer(this);
}

Engine::~Engine()
{
    //delete mapRenderer;
}

void Engine::Update()
{

}

void Engine::Draw2d()
{
    //mapRenderer->DrawPoints();
    //mapRenderer->DrawSegments();
}

void Engine::Draw3d()
{

}

void Engine::Draw()
{  
    BeginDrawing();
        ClearBackground(BLACK);
        Draw2d();
    EndDrawing();
}