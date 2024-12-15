#pragma once

class Engine;

class Application
{
private:

    Engine* engine;
    float dt;

public:
    Application();
    ~Application();
    void Run();

};
