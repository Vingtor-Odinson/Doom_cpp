#include"includes/map/mapLoader.hpp"
#include"includes/utils.hpp"
#include<vector>
#include<fstream>
#include<sstream>

MapLoader::MapLoader(){
    Points = new std::vector<Vector2D>();
    Segments = new std::vector<Segment>();
}

MapLoader::~MapLoader(){
    delete Points;
    delete Segments;
}

void MapLoader::ReadFile(const std::string& file)
{
    std::fstream mapFile(file);

    if(!mapFile.is_open())
    {
        throw std::runtime_error("Não foi possível abrir o arquivo de mapa: " + file);
    }

    std::string line;

    while(std::getline(mapFile, line))
    {
        std::istringstream iss(line);
        std::string identifier;
        iss >> identifier;

        if(identifier == "V")
        {
            float x, y;
            iss >> x >> y;
            Points->push_back( Vector2D(x, y) );
        }
        else if(identifier == "S")
        {
            int index1, index2;
            iss >> index1 >> index2;
            Segments->push_back( Segment( (*Points)[index1], (*Points)[index2] ) );
        }

    }
}
