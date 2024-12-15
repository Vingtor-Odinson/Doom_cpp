#include"raylib.h"
#include"includes/map/mapRenderer.hpp"
#include"includes/utils.hpp"

Vector2D A(50, 50), B(275, 25), C(50, 250), D(250, 250);
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
        DrawLine( Segments[i].indicadorXIni, Segments[i].indicadorYIni, Segments[i].indicadorXFim, Segments[i].indicadorYFim ,RED );
    }
}