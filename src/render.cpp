// Ryan Jacoby

#include"main.hpp"

Render::Render() {
    initscr();
    if (has_colors() == FALSE) {
        endwin();
        std::cout << "Your terminal does not support color!\n";
        exit(1);
    }

    start_color();
    init_pair(1, COLOR_WHITE, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_WHITE);
    init_pair(3, COLOR_GREEN, COLOR_BLACK);
}

Render::~Render() {
    endwin();
}

int Render::loop() {
    erase();

    for(std::vector<char> v : map) {
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
    return getch();
}

RenderColor::RenderColor(int fb, int bg) {
    this->fg = fg;
    this->bg = bg;
}