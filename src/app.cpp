#include<raylib.h>
#include"app.hpp"
#include"settings.hpp"
#include"engine.hpp"

Application::Application()
{
    this->engine = new Engine(this);
    dt = 0.0f;
}

Application::~Application()
{
    delete engine;
}

void Application::Run()
{
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "DOOM");
    while( !WindowShouldClose() )
    {   
        dt = GetFrameTime(); 
        engine->Update();
        engine->Draw();
    }
    CloseWindow();
}
