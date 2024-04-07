#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int snip(int comp, std::string user){
    if (comp == 1){
        if (user == "r"){
            return 0;
        }
        else if (user == "s"){
            return 1;
        }
        else{
            return 2;   
        }
    }
    else if (comp == 2){
        if (user == "r"){
            return 2;
        }
        else if (user == "s"){
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        if (user == "r"){
            return 1;
        }
        else if (user == "s"){
            return 2;
        }
        else{
            return 0;
        }
    }
    return 0;
}

int main(){
    while (true){
        std::string choice;
        std::cout << "Type r, p, or s for rock paper or scissors.";
        std::cin >> choice;
        int comp_choice = (rand() % 3) + 1;
        int result = snip(comp_choice, choice);
        if (result == 0){
            std::cout << "You won!";
        }
        else if (result == 1){
            std::cout << "You lost.";
        }
        else if (result == 2){
            std::cout << "You tied.";
        }
        std::cout << "Would you like to play again? y/n";
        std::string repeat;
        std::cin >> repeat;
        if (repeat == "n"){
            break;
        }
    }
    return 0;
    
}


