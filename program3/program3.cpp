/*
** Bryce Gold
**
** 10/23/16
**
** This program is a version of Game of Nim. It takes in user input for the pile and
** amount of rocks, then allows the computer to do the same. It runs until all rocks
** have been taken and outputs the winner.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// class that determines the values of the rock piles
class RockPile {
    private:
    int numRocksPile1;
    int numRocksPile2;
    
    // mutators and accessors that change the values of numRocksPile1 and numRocksPile2 and return them
    public:
    void setNumRocksPile1(int numRocks) {
        numRocksPile1 = numRocks;
    };
    void setNumRocksPile2(int numRocks) {
        numRocksPile2 = numRocks;
    };
    
    int getNumRocksPile1() {
        return numRocksPile1;
    };
    int getNumRocksPile2() {
        return numRocksPile2;
    };
    
    // default constructor sets each pile to 15 rocks
    RockPile() {
        numRocksPile1 = 15;
        numRocksPile2 = 15;
    }
};

int main() {
    RockPile Game1;
    
    int userTake = 0;
    int userPile = 1;
    int totalNumRocks = Game1.getNumRocksPile1() + Game1.getNumRocksPile2();
    bool userTurn = true;
    
    srand(time(0));
    
    cout << "                          ~~ GAME OF NIM ~~" << endl;
    cout << " " << endl;
    cout << "Instructions:" << endl;
    cout << "The game begins with 2 piles of 15 rocks each. You are to choose a pile each round" << endl;
    cout << "and 1 to 3 rocks to take. The computer will then take its turn and follow the same" << endl;
    cout << "rules. The goal is to make the computer take the very last rock." << endl;
    cout << " " << endl;
    
    // game runs while there are still rocks in either pile
    while(totalNumRocks > 0) {
        
        // if it's the user's turn, it'll take in user's pile and amount info
        if(userTurn == true) {
            cout << "Which pile would you like to take from? (1 or 2)" << endl;
            cin  >> userPile;
            
            // if the user enters a pile number other than 1 or 2, it asks to reenter a valid pile
            while (userPile < 1 || userPile > 2) {
                cout << " " << endl;
                cout << "**Invalid pile number, Please choose a valid pile**" << endl;
                cout << "Which pile would you like to take from? (1 or 2)" << endl;
                cin  >> userPile;
            }
            
            // if the user enters pile 1 when it has 0 rocks, then it'll ask to enter pile 2
            while (Game1.getNumRocksPile1() == 0 && userPile == 1) {
                cout << " " << endl;
                cout << "**Pile 1 has 0 rocks, Please choose Pile 2**" << endl;
                
                cout << "Which pile would you like to take from? (1 or 2)" << endl;
                cin  >> userPile;
            }
            
            // if the user enters pile 2 when it has 0 rocks, then it'll ask to enter pile 1
            while (Game1.getNumRocksPile2() == 0 && userPile == 2) {
                cout << " " << endl;
                cout << "**Pile 2 has 0 rocks, Please choose Pile 1**" << endl;
                
                cout << "Which pile would you like to take from? (1 or 2)" << endl;
                cin  >> userPile;
            }
            
            cout << "How many rocks would you like to take? (1, 2, or 3)" << endl;
            cin  >> userTake;
            
            // if the user enters any value other than 1-3 then it'll ask them to enter a valid number
            while (userTake < 1 || userTake > 3) {
                cout << " " << endl;
                cout << "**That is not a valid amount. Please choose a number from 1 to 3.**" << endl;

                cout << "How many rocks would you like to take? (1, 2, or 3)" << endl;
                cin  >> userTake;                
            }
            
            // if user tries to take more rocks than what's available in the pile, then they're asked to choose a lower number
            while (userPile == 1 && userTake > Game1.getNumRocksPile1() || userPile == 2 && userTake > Game1.getNumRocksPile2()) {
                cout << " " << endl;
                cout << "**Insufficient amount of rocks, choose a lower amount**" << endl;
                cout << "How many rocks would you like to take? (1, 2, or 3)" << endl;
                cin  >> userTake;
            }
            
            userTurn = false;
        }
        
        // if it is the computer's turn, it will randomly select the pile and amount of rocks between 1-3
        else {
            userPile = (rand() % 2) + 1;
            userTake = (rand() % 3) + 1;
            
            // if the computer selects pile 1 when it has 0 rocks, it changes to pile 2
            if (Game1.getNumRocksPile1() == 0 && userPile == 1) {
                userPile = 2;
            }
            
            // if the computer selects pile 2 when it has 0 rocks, it changes to pile 1
            else if (Game1.getNumRocksPile2() == 0 && userPile == 2) {
                userPile = 1;
            }
            
            // if trying to take more rocks than what's contained in the pile, run random for another number
            while (userPile == 1 && userTake > Game1.getNumRocksPile1() || userPile == 2 && userTake > Game1.getNumRocksPile2()) {
                userTake = (rand() % 2) + 1;
            }
            
            cout << "Computer took " << userTake << " rocks from pile " << userPile << endl;
            userTurn = true;
        }
        
        // if pile 1 is selected then the mutator changes the value of numRocksPile1 according to the amount taken
        if(userPile == 1) {
            Game1.setNumRocksPile1(Game1.getNumRocksPile1() - userTake);
            totalNumRocks -= userTake;
        }
        
        // if pile 2 is selected then the mutator changes the value of numRocksPile2 according to the amount taken
        else {
            Game1.setNumRocksPile2(Game1.getNumRocksPile2() - userTake);
            totalNumRocks -= userTake;
        }
        
        cout << " " << endl;
        cout << "----------" << endl;
        cout << "Pile 1: " << Game1.getNumRocksPile1() << endl;
        cout << "Pile 2: " << Game1.getNumRocksPile2() << endl;
        cout << "----------" << endl;
        cout << " " << endl;

        // when the total number of rocks is 0, the game ends and a winner is determined
        if (totalNumRocks == 0) {
            cout << "GAME OVER!!" << endl;
            
            if (userTurn == true) {
                cout << "Congratulations! You have won the game! \\(0w0)/" << endl;
            }
            
            else {
                cout << "Oh boo! You've lost to the computer! :/" << endl;
            }
        }
    }
}