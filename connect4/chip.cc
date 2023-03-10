#include "chip.h";

Chip::Chip(): availability(false),
                color("") {}
        
bool Chip::isUsed(){
    return availability;
}
string Chip::getColor(){
    return color;
}

void Chip::gotUsed(){
    availability = true;
}
void Chip::setColor(string c){
    color = c;
}
