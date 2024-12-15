#pragma once
#include<vector>
#include<string>

class Vector2D;

class Segment;

class MapLoader{

public:
    std::vector<Vector2D>* Points;
    std::vector<Segment>* Segments;

    MapLoader();
    ~MapLoader();

    void ReadFile(const std::string& file);
};