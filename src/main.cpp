// Ryan Jacoby

#include "main.hpp"

int main() {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++)
            std::cout << default_map[i][j];
        std::cout << '\n';
    }

    std::cout << '\n' << test() << '\n';

    return 0;
}