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

Entity * Map::addEntity(Entity * e) {
    entities.push_back(e);
    return e;
}

void Map::loadDefaultMap() {
    map.clear();
    for(int i = 0; i < DEFAULT_MAP_X; i++) {
        std::vector<char> row;
        for(int j = 0; j < DEFAULT_MAP_Y; j++) {
            row.push_back(default_map[i][j]);
        }
        map.push_back(row);
    }
}

std::vector<Entity *> Map::getEntities() { return this->entities; }