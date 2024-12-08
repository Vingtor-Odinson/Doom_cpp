#include"raylib.h"

Vector2D A(50, 50), B(250, 50), C(50, 250), D(250, 250);
Segment AB(A, B), BC(B, C), CD(C, D), DA(D, A);

Vector2D* Points = { A, B, C, D };
Segment* Segments = {AB, BC, CD, DA};

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