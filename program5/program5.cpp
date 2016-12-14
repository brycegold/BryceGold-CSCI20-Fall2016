/*
** Bryce Gold
**
** 12/13/16
**
** This program is a Choose-Your-Own-Adventure type game. It asks for user input 
** of 0 or 1 to iterate through the game's text files and print them to the
** computer console. It continues to do so until a text file signifying "Game Over"
** is printed.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Class that holds a name variable and age variable used within the text files
class User {
    private:
        string userName;
        string userAge;
    
    public:
        void setUserName(string name);
        void setUserAge(string age);
        string getUserName();
        string getUserAge();
};

void User::setUserName(string name) {
    userName = name;
};

void User::setUserAge(string age) {
    userAge = age;
};

string User::getUserName() {
    return userName;
};

string User::getUserAge() {
    return userAge;
}

// Function that outputs the copyright ASCII art
void copyright_function() {
    cout << " " << endl;
    cout << "                    *" << endl;
    cout << "                         *   *" << endl;
    cout << "                   *   ^ " << endl;
    cout << "                *   /\\/ \\/\\  *" << endl;
    cout << "                   ~~~~~~~~~" << endl;
    cout << "                   Copyright" << endl;
    cout << "                  Bryce  Gold" << endl;
    cout << "                     2016" << endl;
    cout << "                   ~~~~~~~~~";
}

// Function takes in the file number and the user's name/age and friend's name/age to output the respective file
int printTextFiles(int fileNum, string userName, string age, string partnerName, string partnerAge) {
    ifstream inFS;
    string file;
    
    // Array of all text files
    string textFiles[14] = {
     "Title.txt",         "userNameEntry.txt",   "opening.txt", 
     "openBox.txt",       "windowJump.txt",      "sellTheBox.txt",      
     "carriageRide.txt",  "backDoorEscape.txt",  "hideInCave.txt",          
     "stayOnShore.txt",   "stayAndFight.txt",    "escapeIntoOcean.txt", 
     "boxInDumpster.txt", "leaveBox.txt"
    };
    
    inFS.open(textFiles[fileNum]);
    
    // If the file didn't open then notify the user and end the game
    if(!inFS.is_open()) {
        cout << "Could not open file" << endl;
        return 1;
    }
    
    // If the file is still being read, then output it to the console
    while(getline(inFS, file)) {
        
        // If "NAME" or "AGE" is found in the file, replace it with the user's name or age
        if(file.find("NAME") != string::npos) {
             file.replace(file.find("NAME"), 4, userName);
        }
        
        if(file.find("AGE") != string::npos) {
             file.replace(file.find("AGE"), 3, age);
        }
        
        // If "PARTNER" or "PARTNERAGE" is found in the file, replace it with the friend's name or age
        if(file.find("PARTNER") != string::npos) {
             file.replace(file.find("PARTNER"), 7, partnerName);
        }
        
        if(file.find("PARTNERAGE") != string::npos) {
             file.replace(file.find("PARTNERAGE"), 10, partnerAge);
        }
        
        cout << file << endl;
    }
    
    // If the last line of the file is GAME OVER, then return 0
    if(file == "    GAME OVER") {
        return 0;
    }
    
    inFS.close();
}

// Function takes the user's name/age, and friend's name/age and passes it to the printTextFiles function
// to output files. The function then asks user for input and decides which file to print next.
int TextChoiceAlgotithm(string userName, string age, string partnerName, string partnerAge) {
    int userChoice = 0;
    int i = 1;
    
    // While there are still files, ask for the user's choice and output the respective file
    while (i < 14) {
        
        // When user enters 0...
        if(userChoice == 0) {
            
            // If "stayAndFight.txt" is the current file, then output the "sellTheBox.txt" file
            if(i == 10) {
                i = 5;
            }
            
            // Otherwise, increase file array index by 1
            else {
                i += 1;
            }
        }
        
        // When user enters 1...
        else if(userChoice == 1) {
            
            // If "opening.txt" is the current file, then ouput "leaveBox.txt"
            if(i == 2) {
                i = 13;
            }
            
            // Else if "openBox.txt" is the current file, then output "backDoorEscape.txt"
            else if(i == 3) {
                i = 7;
            }

            // Otherwise, increase file array index by 2
            else {
                i += 2;
            }
        }
        
        // if the user didn't enter 0 or 1, notify the user
        else {
            cout << "   ****THAT IS NOT A VALID CHOICE****" << endl;
            cout << endl;
        }
        
        // Prints out the respective file based on user input. If it finds
        // game over, then output the copyright function and end the game.
        if(printTextFiles(i, userName, age, partnerName, partnerAge) == 0) {
            copyright_function();
            
            return 0;
        }
        
        // Receives the user's choice for the next text file
        cout << "   Choice: ";
        cin  >> userChoice;
        cout << endl;
    }
    
}

int main(){
    // Declare the user objects
    User Player;
    User Partner;
    
    // Variables used for user input that are assigned to the object variables
    string userName;
    string partnerName;
    string age;
    string partnerAge;
    
    int userChoice;

    
    // Prints out the title file
    printTextFiles(0, Player.getUserName(), Player.getUserAge(), Partner.getUserName(), Partner.getUserAge());
    
    // Waits for the user to want to begin
    cout << endl << "   Would you like to begin? Enter 0." << endl;
    cout << "   ";
    cin  >> userChoice;
    cin.ignore();
    
    // If the user wants to begin, then ask for name and age by printing out "userNameEntry.txt"
    if (userChoice == 0) {
        cout << endl;
        printTextFiles(1, Player.getUserName(), Player.getUserAge(), Partner.getUserName(), Partner.getUserAge());
        
        // Asks and recieves the user's name/age and their friend's name/age
        cout << "    ";
        getline (cin,userName);
        
        cout << "  |                                            |" << endl;
        cout << "   ********************************************" << endl;
        
        Player.setUserName(userName);
        
        cout << "  |********************************************|" << endl;
        cout << "    And your age, kind adventurer?              " << endl;
        cout << "    ";
        cin  >> age;
        cout << "  |                                            |" << endl;
        cout << "   ********************************************" << endl;
        cout << endl;
        
        Player.setUserAge(age);
        
        cout << "  |********************************************|" << endl;
        cout << "    What is your friend's name?                 " << endl;
        cout << "    ";
        cin  >> partnerName;
        cout << "  |                                            |" << endl;
        cout << "   ********************************************" << endl;
        cout << endl;
        
        Partner.setUserName(partnerName);
        
        cout << "  |********************************************|" << endl;
        cout << "    And what is your friend's age?              " << endl;
        cout << "    ";
        cin  >> partnerAge;
        cout << "  |                                            |" << endl;
        cout << "   ********************************************" << endl;
        cout << endl;
        
        Partner.setUserAge(partnerAge);

        cout << "    Yes, yes, yes! Very good! Let's begin, shall we?" << endl;
        cout << endl;
    }
    
    // If the user doesn't want to begin, then end the game
    else {
        cout << "   Goodbye" << endl;
        return 0;
    }
    
    // Calls the function to play through the entire game
    TextChoiceAlgotithm(Player.getUserName(), Player.getUserAge(), Partner.getUserName(), Player.getUserAge());
    return 0;
}