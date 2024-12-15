#include<raylib.h>
#include"includes/map/mapRenderer.hpp"
#include"includes/map/mapLoader.hpp"
#include"includes/utils.hpp"

Vector2D A(50, 50), B(275, 25), C(50, 250), D(250, 250);
Segment AB(A, B), BD(B, D), DC(D, C), CA(C, A);

Vector2D Points[4] = { A, B, C, D };
Segment Segments[4] = {AB, BD, DC, CA};

MapRenderer::MapRenderer( Engine* eng )
{
    engine = eng;
    mapLoader = new MapLoader();
    mapLoader->ReadFile("data/maps/test.map");
}

MapRenderer::~MapRenderer(){
    delete mapLoader;
}

void MapRenderer::DrawPoints()
{   
    for(int i = 0; i < mapLoader->Points->size(); i++)
    {
        DrawCircle((*mapLoader->Points)[i].x, (*mapLoader->Points)[i].y, 10, WHITE);
    }

    //for(int i = 0; i < 4; i++)
    //{
    //    DrawCircle(Points[i].x, Points[i].y, 10, WHITE);
    //}
}

void MapRenderer::DrawSegments()
{   
    for(int i = 0; i < mapLoader->Segments->size(); i++)
    {   
        Segment actualSegment = (*mapLoader->Segments)[i];
        DrawLine( actualSegment.xIni, actualSegment.yIni, actualSegment.xFim, actualSegment.yFim, WHITE );
        DrawLine( actualSegment.indicadorXIni, actualSegment.indicadorYIni, actualSegment.indicadorXFim, actualSegment.indicadorYFim ,RED );
    }

    //for(int i = 0; i < 4; i++)
    //{
    //    DrawLine(Segments[i].xIni, Segments[i].yIni, Segments[i].xFim, Segments[i].yFim, WHITE );
    //    DrawLine( Segments[i].indicadorXIni, Segments[i].indicadorYIni, Segments[i].indicadorXFim, Segments[i].indicadorYFim ,RED );
    //}
}