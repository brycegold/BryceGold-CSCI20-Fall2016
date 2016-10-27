/*
** Bryce Gold
**
** 10/26/16
**
** This program outputs a menu for the user to choose from. It then takes in the
** user's order and outputs the final list they chose.
*/

#include <iostream>

using namespace std;

int main() {
    // array to store the food items the customer chooses
    int customerOrder[1000];

    // array for the menu items
    string menuItems[10];

    menuItems[0] = "Spaghetti";
    menuItems[1] = "Turkey";
    menuItems[2] = "Ham";
    menuItems[3] = "Donuts";
    menuItems[4] = "Lasagna";
    menuItems[5] = "Pizza";
    menuItems[6] = "Water";
    menuItems[7] = "Cereal";
    menuItems[8] = "Hamburger";
    menuItems[9] = "Fries";
    
    cout << "Welcome to my restaurant! What would you like to order today?" << endl;
    cout << " " << endl;
    
    // for loop that displays all the menu items in a list from 1 to 10
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ") " << menuItems[i] << endl;
    }
    
    cout << " " << endl;
    cout << "Enter the number of each food item you would like: (Enter -1 when done)" << endl;
    
    // variables used in the while loop below
    int totalItems = 0;
    int foodNum = 0;
    
    // while loop that takes in the user's input until they enter -1 to stop
    while (totalItems != -1) {
        cin  >> foodNum;
        
        // if statement breaks the loop by setting totalItems to -1
        if (foodNum == -1) {
            totalItems = -1;
        }
        
        // adds each item to the array for the customer's order
        else {
            customerOrder[totalItems] = foodNum;
            totalItems += 1;
        }
    }
    
    cout << " " << endl;
    cout << "You have ordered:" << endl;
    
    // variable used in the while loop below
    int finalOrder = 0;

    // while loop that outputs the final list of foods the user chose
    while (finalOrder < 1000) {
        
        // switch statement outputs the order in word form
        switch (customerOrder[finalOrder]) {
            case 0:
                break;
                
            case 1:
                cout << "Spaghetti" << endl;
                finalOrder++;
                break;
            
            case 2:
                cout << "Turkey" << endl;
                finalOrder++;
                break;
                
            case 3:
                cout << "Ham" << endl;
                finalOrder++;
                break;
                
            case 4:
                cout << "Donuts" << endl;
                finalOrder++;
                break;

            case 5:
                cout << "Lasagna" << endl;
                finalOrder++;
                break;

            case 6:
                cout << "Pizza" << endl;
                finalOrder++;
                break;
                
            case 7:
                cout << "Water" << endl;
                finalOrder++;
                break;
                
            case 8:
                cout << "Cereal" << endl;
                finalOrder++;
                break;
                
            case 9:
                cout << "Hamburger" << endl;
                finalOrder++;
                break;
                
            case 10:
                cout << "Fries" << endl;
                finalOrder++;
                break;
                
            default:
                cout << "This item is unknown" << endl;
                finalOrder++;
                break;
        }
    }
}