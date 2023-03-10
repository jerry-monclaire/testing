#include "game.h";
 
Game::Game(Player *user1, Player *user2){
    game_board = new Board();
    player1 = user1;
    player2 = user2;
}

bool Game::checkForWinner(){
    return false;
}
void Game::play(){
    
}

Player *player1;
Player *player2;
Board *game_board;
int turn;