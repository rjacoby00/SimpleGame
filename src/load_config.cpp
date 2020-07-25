// Ryan Jacoby

#include "main.hpp"

std::vector<std::vector<char>> map;

Map * loadMap() {
    Map * m = new Map;

    std::ifstream fin;
    fin.open("config/main.sg");

    if(!fin.good()) m->loadDefaultMap();
    else {
        std::string line;
        getline(fin, line);

        if(line != "game_main") m->loadDefaultMap();
        else {
            while(line != "MAP" && fin.good()) getline(fin, line);

            while(line != "" && fin.good()) {
                getline(fin, line);

                std::vector<char> row;
                for(char c : line) 
                    row.push_back(c);
                
                m->map.push_back(row);
            }
        }
    }

    fin.close();

    return m;
}
