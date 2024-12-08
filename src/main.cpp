#include"raylib.h"
#include<app.hpp>

int main()
{
    Application* application = new Application();

    application->Run();

    delete application;

    return 0;
}

