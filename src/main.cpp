// Ryan Jacoby

#include "main.hpp"

int main() {
    Map * mainMap = loadMap();
    Render renderer(mainMap);   // Handles rendering; map is no longer global for future support of multiple/multi page maps.
    
    char c;
    int state;  // Currently used for winning; will be used for other 

    // mainMap->addEntity(new Entity(1, 1, 'E', EntityColor::GreenBlack));
    Player * p1 = new Player(1, 1);
    mainMap->addEntity(p1);

    while(c != 27) {
        c = renderer.draw();
        state = p1->loop(c, mainMap);

        if(state == 1) {
            renderer.message("You win!  Thanks for playing.\n(press any key to continue)\n");   // Message will be customizable in main.sg
            break;
        }
    }

    return 0;
}