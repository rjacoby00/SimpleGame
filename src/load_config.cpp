// Ryan Jacoby

#include "main.hpp"

std::vector<std::vector<char>> map;

static void loadDefaultMap() {
    map.clear();
    for(int i = 0; i < DEFAULT_MAP_X; i++) {
        std::vector<char> row;
        for(int j = 0; j < DEFAULT_MAP_Y; j++) {
            row.push_back(default_map[i][j]);
        }
        map.push_back(row);
    }
}

void loadMap() {
    std::ifstream fin;
    fin.open("config/main.sg");

    if(!fin.good()) {
        std::cout << "Filling map with default_map\n";
        loadDefaultMap();
        
    } else {
        std::cout << "Map file found, not using default_map\n";
        std::string line;
        getline(fin, line);

        if(line != "game_main") loadDefaultMap();
        else {
            while(line != "MAP" && fin.good()) getline(fin, line);

            while(line != "" && fin.good()) {
                getline(fin, line);

                std::vector<char> row;
                for(char c : line) 
                    row.push_back(c);
                
                map.push_back(row);
            }
        }
    }

    fin.close();
}

int test() {
    return 0;
}