// Ryan Jacoby

class Entity {
private:
    char texture;
    unsigned short int x, y;
public:
    Entity();
    Entity(int, int, char);
    char getTexture();
};
