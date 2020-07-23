// Ryan Jacoby

#include"main.hpp"

Entity::Entity() {
    this->x = 0;
    this->y = 0;
    this->texture = ' ';
}

Entity::Entity(int x, int y, char texture, EntityColor c) {
    this->x = x;
    this->y = y;
    this->texture = texture;
    this->color = c;
}

unsigned short int Entity::getX() { return this->x; }
unsigned short int Entity::getY() { return this->y; }

EntityColor Entity::getColor() { return this->color; }

char Entity::getTexture() { return this->texture; }

int Entity::loop() { return 0; }