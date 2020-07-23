// Ryan Jacoby

class Player : public Entity {
private:
    int px, py;
public:
    Player(int, int);
    int loop(char, Map *);
};