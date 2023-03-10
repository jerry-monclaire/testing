#include <string>
#include <iostream>
#include <stdio.h> 
#include <vector>
#include "chip.h";
using namespace std;


class Board{
    public:
        Board();

        bool updateBoard(int location, string c);
        



    private:
        vector<vector<Chip*>> game_set;


        


};