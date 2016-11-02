/*
** Bryce Gold
**
** 10/31/16
**
** This program outputs a menu for the user to choose from. It then takes in the
** user's order and outputs the inventory of the item along with the price. When
** ordering is completed it outputs the final list they chose along with the
** total cost.
*/

#include <iostream>

using namespace std;

int main() {
    // array to store the food items the customer chooses
    int customerOrder[1000];

    // arrays for the menu items with prices and inventory
    string menuItems[10];
    float price[10];
    int inventory[10];

    menuItems[0] = "Spaghetti";    price[0] = 11.00;   inventory[0] = 25;
    menuItems[1] = "Turkey";       price[1] = 8.25;    inventory[1] = 20;
    menuItems[2] = "Ham";          price[2] = 8.00;    inventory[2] = 25;
    menuItems[3] = "Donuts";       price[3] = 4.00;    inventory[3] = 75;
    menuItems[4] = "Lasagna";      price[4] = 10.00;   inventory[4] = 25;
    menuItems[5] = "Pizza";        price[5] = 6.00;    inventory[5] = 30;
    menuItems[6] = "Water";        price[6] = 1.50;    inventory[6] = 50;
    menuItems[7] = "Cereal";       price[7] = 1.00;    inventory[7] = 10;
    menuItems[8] = "Hamburger";    price[8] = 8.50;    inventory[8] = 25;
    menuItems[9] = "Fries";        price[9] = 3.75;    inventory[9] = 15;
    
    cout << "Welcome to my restaurant! What would you like to order today?" << endl;
    cout << " " << endl;
    
    // for loop that displays all the menu items in a list from 1 to 10
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ") " << menuItems[i] << endl;
    }
    
    cout << " " << endl;
    cout << "Enter the number of each food item you would like: (Enter 0 when done)" << endl;
    
    // variables used in the while loop below
    int totalItems = 0;
    int foodNum = 0;
    float priceTotal = 0;
    
    // while loop that takes in the user's input until the user is done ordering
    while (totalItems != -1) {
        cin  >> foodNum;
        
        // foodNum is adjusted to use the correct array element
        foodNum -= 1;
        
        if (foodNum == -1) {
            totalItems = -1;
        }
        
        // subtracts 1 from the inventory; adds to total price; and outputs value of both
        else if (foodNum <= 9 && foodNum >= 0) {
            customerOrder[totalItems] = foodNum + 1;
            inventory[foodNum] -= 1;
            priceTotal += price[foodNum];
            
            cout << " " << endl;
            cout << "Inventory of item: " << inventory[foodNum] << endl;
            cout << "Price of item: $" << price[foodNum] << endl;
            cout << "Total cost: $" << priceTotal << endl;
            cout << " " << endl;
            
            // when the item is out of stock, the string is outputted
            if (inventory[foodNum] < 0) {
                cout << "Ooh, that's out of stock, it'll take a few minutes to make that for you." << endl;
                cout << " " << endl;
            }
            
            totalItems += 1;
        }
        
        else {
            cout << " " << endl;
            cout << "That's not on the menu, you must be finished." << endl;
            break;
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
                cout << "Total cost: $" << priceTotal;
                finalOrder = 1000;
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
    