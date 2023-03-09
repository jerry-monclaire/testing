#include <iostream>
#include <stdio.h>
#include <string>

std::string reverse_string (std::string input){
    std::string output = " ";
    int n = input.size() - 1;
    for (int i = n; i >= 0; i--){
        output += input[i];
    }
    return output;
}


int main(){
    std::string str = "example";

    std::cout << str << std::endl;

    std::cout << reverse_string(str) << std::endl;

    return 0;

};