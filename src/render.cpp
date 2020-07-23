// Ryan Jacoby

#include"main.hpp"

Render::Render(Map * m) {
    initscr();
    if (has_colors() == FALSE) {
        endwin();
        std::cout << "Your terminal does not support color!\n";
        exit(1);
    }

    curs_set(0);

    start_color();
    init_pair(1, COLOR_WHITE, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_WHITE);
    init_pair(3, COLOR_GREEN, COLOR_BLACK);

    this->current_map = m;
}

Render::~Render() {
    endwin();
}

char Render::draw() {
    erase();

    for(std::vector<char> v : current_map->map) {
        for(char c : v) {
            printw("[");
            if (c == 'F') {
                attron(COLOR_PAIR(3));
            } else {
                attron(COLOR_PAIR(1));
            }
            printw("%c", c);
            if (c == 'F') {
                attroff(COLOR_PAIR(3));
            } else {
                attroff(COLOR_PAIR(1));
            }
            printw("]");
        }

        printw("\n");
    }

    printw("\nPress escape to exit...");

    for(Entity * e : current_map->getEntities()) {
        attron(COLOR_PAIR(e->getColor()));
        mvaddch(e->getY(), (e->getX() * 3) + 1, e->getTexture());
        attroff(COLOR_PAIR(e->getColor()));
    }

    return getch();
}
