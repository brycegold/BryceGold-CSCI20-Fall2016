/*
** Bryce Gold
**
** 9/19/16
**
** This program creates two functions for the song "Going on a Bear Hunt"; 
** one for the chorus and one for the verse, hunt_chorus and obstacle_verse, 
** respectively. Then it outputs each several times to complete the song.
*/

#include <iostream>
#include <string>

using namespace std;

// function for the chorus; establishes the chorus lyric outputs and parameter "animal"
void hunt_chorus(string animal)
{
    cout << "Goin' on a " << animal << " hunt" << endl;
    cout << "Gonna catch a big one" << endl;
    cout << "I'm not afraid" << endl;
    cout << "Look what's up ahead!" << endl;
    cout << " " << endl;
    
    return;
}

// function for the verse; establishes the verse lyric outputs and parameter "obstacle"
void obstacle_verse(string obstacle)
{
    
    cout << obstacle << "!" << endl;
    cout << "Can't go over it" << endl;
    cout << "Can't go under it" << endl;
    cout << "Can't go around it" << endl;
    cout << "Gotta go through it!" << endl;
    cout << " " << endl;

    return;
}

int main()
{
    // outputs each chorus and verse, with the animal/obstacle inserted
    hunt_chorus("lion");
    obstacle_verse("Mud");
    
    hunt_chorus("tiger");
    obstacle_verse("Trees");
    
    hunt_chorus("ostrich");
    obstacle_verse("River");
    
    hunt_chorus("bear");
    obstacle_verse("Sticks");
    
    // ends the song with the output of a new verse
    cout << "Uh Oh! \nWhat's that? \nA BEAR!!" << endl;
    cout << "Run back home!" << endl;
}
