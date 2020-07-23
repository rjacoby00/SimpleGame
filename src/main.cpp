// Ryan Jacoby

#include "main.hpp"

int main() {
    Map * mainMap = loadMap();
    Render renderer(mainMap);
    char c;

    mainMap->addEntity(new Entity(1, 1, 'E', EntityColor::GreenBlack));
    Player * p1 = new Player(2, 1);
    mainMap->addEntity(p1);

    while(c != 27) {
        c = renderer.draw();
        p1->loop(c, mainMap);
    }

    return 0;
}