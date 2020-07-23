// Ryan Jacoby

#include"main.hpp"

Entity::Entity() {
    this->x = 0;
    this->y = 0;
    this->texture = ' ';
}

Entity::Entity(int x, int y, char texture) {
    this->x = x;
    this->y = y;
    this->texture = texture = ' ';
}

char Entity::getTexture() { return texture; }