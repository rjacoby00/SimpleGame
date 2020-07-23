// Ryan Jacoby

#include"main.hpp"

Player::Player(int x, int y) {
    this->x = x;
    this->y = y;
    this->px = x;
    this->py = y;
    this->texture = '*';
    this->color = EntityColor::RedWhite;
}

int Player::loop(char c, Map * m) {
    if(c == 'w') {
        this->px = this->x;
        this->py = this->y;
        this->y--;
    } else if(c == 's') {
        this->px = this->x;
        this->py = this->y;
        this->y++;
    } else if(c == 'a') {
        this->px = this->x;
        this->py = this->y;
        this->x--;
    } else if(c == 'd') {
        this->px = this->x;
        this->py = this->y;
        this->x++;
    }

    if(m->map[y][x] == '#') {
        this->x = this->px;
        this->y = this->py;
    }
    return 0;
}