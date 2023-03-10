#include <string>
#include <iostream>
#include <stdio.h>
#include "board.h";
#include "player.h";
using namespace std;


class Game{
    public:
        Game(); 
        Game(Player *user1, Player *user2);

        bool checkForWinner();
        void play();



    private:
        Player *player1;
        Player *player2;
        Board *game_board;
        int turn;


        


};