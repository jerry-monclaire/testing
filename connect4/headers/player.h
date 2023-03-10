#include <string>
#include <iostream>
#include <stdio.h> 
using namespace std;


class Player{
    public:
        Player(); 
        Player(string n);
        

        string getName();
        int getWins();
        int getLosses();
        float getWinRatio();
        

        void setName(string n);
        void addWin();
        void addLoss();
        


    private:
        string name;
        int wins;
        int losses;
        float win_loss_ratio;
        

};
