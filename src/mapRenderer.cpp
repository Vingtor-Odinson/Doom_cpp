#include"raylib.h"
#include"mapRenderer.hpp"
#include"utils.hpp"

Vector2D A(50, 50), B(250, 50), C(50, 250), D(250, 250);
Segment AB(A, B), BD(B, D), DC(D, C), CA(C, A);

Vector2D Points[4] = { A, B, C, D };
Segment Segments[4] = {AB, BD, DC, CA};

void MapRenderer::DrawPoints()
{
    for(int i = 0; i < 4; i++)
    {
        DrawCircle(Points[i].x, Points[i].y, 10, WHITE);
    }
}

void MapRenderer::DrawSegments()
{
    for(int i = 0; i < 4; i++)
    {
        DrawLine(Segments[i].xIni, Segments[i].yIni, Segments[i].xFim, Segments[i].yFim, WHITE );
    }
}