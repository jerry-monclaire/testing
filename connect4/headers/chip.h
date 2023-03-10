#include <string>
#include <iostream>
#include <stdio.h> 
using namespace std;


class Chip{
    public:
        Chip(); 
        
        bool isUsed();
        string getColor();

        void gotUsed();
        void setColor(string c);

        




    private:
        bool availability;
        string color;

};