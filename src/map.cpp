// Ryan Jacoby

#include"main.hpp"

Map::Map() {
    std::vector<std::vector<char>> map;
    std::vector<Entity *> entities;
}

Map::~Map() {
    for(Entity * e : entities)
        delete e;
}

void Map::addEntity(Entity * e) {
    entities.push_back(e);
}