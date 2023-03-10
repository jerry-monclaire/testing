#include <string>
#include <iostream>
#include <stdio.h> 
#include "player.h";
using namespace std;


Player::Player(): name("jerry monclaire"), 
                    wins(0),
                        losses(0),
                            win_loss_ratio(0.0) {}

Player::Player(string n): name(n), 
                        wins(0),
                            losses(0),
                                win_loss_ratio(0.0) {}

string Player::getName(){ return name; }
int Player::getWins(){ return wins; }
int Player::getLosses(){ return losses; }
float Player::getWinRatio(){ return (wins/losses); }

void Player::setName(string n){ name = n; }
void Player::addWin(){ 
    wins++;
    win_loss_ratio = wins/losses;
}
void Player::addLoss(){
    losses++;
    win_loss_ratio = wins/losses;
}