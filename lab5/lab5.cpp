/*
** Bryce Gold
**
** 9/8/16
**
** Program outputs monster types with different characteristics. Three monsters are
** hard coded while one is created from user input.
**
*/

#include <iostream>

using namespace std;

int main() {
    struct Monster {
      string head;
      string eyes;
      string ears;
      string nose;
      string mouth;
    };
    
    // Establishes the monsters and their characteristics (besides DJ who relies on user input)
    Monster MonsterOne;
    Monster Joe;
    Monster Mike;
    Monster DJ;
    
    MonsterOne.head = "Zombus";
    MonsterOne.eyes = "Spritem";
    MonsterOne.ears = "Vegitas";
    MonsterOne.nose = "None";
    MonsterOne.mouth = "Wackus";
    
    Joe.head = "Franken";
    Joe.eyes = "Spritem";
    Joe.ears = "Wackus";
    Joe.nose = "Wackus";
    Joe.mouth = "Vegitas";
    
    Mike.head = "Happy";
    Mike.eyes = "Wackus";
    Mike.ears = "Spritem";
    Mike.nose = "Spritem";
    Mike.mouth = "Spritem";
    
    // Allows the input of physical features for DJ
    cout << "Please enter a head: (Zombus, Franken, or Happy)" << endl;
    cin  >> DJ.head;
    cout << "Please enter an eye style: (Vegitas, Wackus, or Happy)" << endl;
    cin  >> DJ.eyes;
    cout << "Please enter an ear style: (Vegitas, Wackus, or Happy)" << endl;
    cin  >> DJ.ears;
    cout << "Please enter a nose style: (Vegitas, Wackus, or Happy)" << endl;
    cin  >> DJ.nose;
    cout << "Please enter a mouth style: (Vegitas, Wackus, or Happy)" << endl;
    cin  >> DJ.mouth;
    
    // Outputs each monster
    cout << "MonsterOne: " << MonsterOne.head << ", " << MonsterOne.eyes << ", ";
    cout << MonsterOne.ears << ", " << MonsterOne.nose << ", " << MonsterOne.mouth << endl;
    
    cout << "Joe: " << Joe.head << ", " << Joe.eyes << ", ";
    cout << Joe.ears << ", " << Joe.nose << ", " << Joe.mouth << endl;
    
    cout << "Mike: " << Mike.head << ", " << Mike.eyes << ", ";
    cout << Mike.ears << ", " << Mike.nose << ", " << Mike.mouth << endl;
    
    cout << "DJ: " << DJ.head << ", " << DJ.eyes << ", ";
    cout << DJ.ears << ", " << DJ.nose << ", " << DJ.mouth << endl;
    
}