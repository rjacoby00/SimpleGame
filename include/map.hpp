// Ryan Jacoby

class Map {
private:
    std::vector<Entity *> entities;
public:
    std::vector<std::vector<char>> map;
    void loadDefaultMap();
    void addEntity(Entity *);
};