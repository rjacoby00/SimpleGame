// Ryan Jacoby

class Map {
private:
    std::vector<Entity *> entities;
public:
    Map();
    ~Map();
    std::vector<std::vector<char>> map;
    void loadDefaultMap();
    Entity * addEntity(Entity *);
    std::vector<Entity *> getEntities();
};

static const int DEFAULT_MAP_X = 10;
static const int DEFAULT_MAP_Y = 10;
static char default_map[DEFAULT_MAP_X][DEFAULT_MAP_Y] = {
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, 
    {'#', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', '#'}, 
    {'#', ' ', '#', ' ', '#', '#', ' ', '#', ' ', '#'}, 
    {'#', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', '#'}, 
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#'}, 
    {'#', ' ', '#', '#', '#', ' ', '#', '#', ' ', '#'}, 
    {'#', ' ', '#', ' ', '#', ' ', '#', 'F', ' ', '#'},
    {'#', ' ', '#', ' ', '#', ' ', '#', '#', '#', '#'}, 
    {'#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', '#'},
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}};
