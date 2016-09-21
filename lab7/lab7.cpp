#include <iostream>
#include <string>

using namespace std;

void hunt_chorus(string animal)
{
    cout << "Goin' on a " << animal << " hunt" << endl;
    cout << "Gonna catch a big one" << endl;
    cout << "I'm not afraid" << endl;
    cout << "Look what's up ahead!" << endl;
    cout << " " << endl;
    
    return;
}

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
    hunt_chorus("lion");
    obstacle_verse("Mud");
    
    hunt_chorus("tiger");
    obstacle_verse("Trees");
    
    hunt_chorus("ostrich");
    obstacle_verse("River");
    
    hunt_chorus("bear");
    obstacle_verse("Sticks");
    
    cout << "Uh Oh! \nWhat's that? \nA BEAR!!" << endl;
    cout << "Run back home!" << endl;
}
