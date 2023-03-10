#include "board.h";
#define ROW 6
#define COL 7

Board::Board(){
    for (int i = 0; i < ROW; i++){
        vector<Chip*> col_setup;
        for (int j = 0; j < COL; j++){ 
            col_setup.push_back(new Chip());
        }
        game_set.push_back(col_setup);
    }
}

bool Board::updateBoard(int location, string c){
    for (int i = ROW - 1; i >= 0; i--){
        if (!(game_set[i][location]->isUsed())){
            game_set[i][location]->gotUsed();
            game_set[i][location]->setColor(c);
            return true;
        }
    }
    return false;
}