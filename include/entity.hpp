// Ryan Jacoby

enum EntityColor {
    WhiteBlack = 1,
    RedWhite,
    GreenBlack
};

class Entity {
protected:
    char texture;
    unsigned short int x, y;
    EntityColor color;
public:
    Entity();
    Entity(int, int, char, EntityColor);
    char getTexture();
    unsigned short int getX();
    unsigned short int getY();
    EntityColor getColor();

    virtual int loop();
};
