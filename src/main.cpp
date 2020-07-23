// Ryan Jacoby

#include "main.hpp"

int main() {
    loadMap();

    Render test;

    while(test.loop() == 0);

    return 0;
}