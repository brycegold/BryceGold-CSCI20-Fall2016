/*
// Bryce Gold
//
// 10/10/16
//
// This program is a quiz that finds out what food you are based on a set number
// of questions. Yes/No and numbers are taken from the user to answer the questions
// and output the correct food for them.
*/

#include <iostream>

using namespace std;

int main() {
    
    // variables used to store user's answers
    string coast = " ";
    string dance = " ";
    string sleepAt9 = " ";
    int season = 0;
    
    cout << "FIND OUT WHAT FOOD YOU ARE!!" << endl;
    cout << " " << endl;
    
    cout << "What coast are you from?" << endl;
    cin  >> coast;
    
    // if from west coast it asks about dancing
    if (coast == "West")
    {
        
        cout << "Do you like to dance?" << endl;
        cin  >> dance;
        
        // if you dance it asks about sleeping, otherwise it outputs water
        if (dance == "Yes")
        {
            
            // if you sleep at 9 it outputs avocado, otherwise it outputs almond
            cout << "Do you go to sleep at 9pm?" << endl;
            cin  >> sleepAt9;
            
            if (sleepAt9 == "Yes")
            {
                cout << "You are an avocado!" << endl;
            }
            
            else
            {
                cout << "You are an almond!" << endl;
            }
        }
        
        else
        {
            cout << "You are water!" << endl;
        }
    }
    
    // if input is of other coasts, it outputs season question
    else {
        cout << "What season were you born in? (Winter = 0; Spring = 1; Summer = 2; Fall = 3)" << endl;
        cin  >> season;
        
        // uses 4 different digits for the input then outputs the correct food
        switch (season)
        {
            case 0:
                cout << "You're hot chocolate!" << endl;
                break;
                
            case 1:
                cout << "You're a cucumber sandwich!" << endl;
                break;
                
            case 2:
                cout << "You're a snowcone!" << endl;
                break;
                
            default:
                cout << "You're pumpkin bread!" << endl;
                break;
        }
    }
    
}