/*
** Bryce Gold
**
** 11/2/16
**
** This program takes in a user's first name (up to 10 characters) and a user's
** last name (up to 20 characters) and outputs 3 unique usernames based on the 
** two names.
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char firstName[11];
    char lastName[21];
    char username1[20];
    char username2[20];
    char username3[20];
    
    cout << "Please input your first name (Limit 10 characters): ";
    cin  >> firstName;
    cout << " " << endl;
    
    // when the first name goes over 10 char, it outputs a warning
    if (strlen(firstName) >= 11) {
        cout << "WARNING: You entered a name with too many characters." << endl;
        cout << " " << endl;
    }
    
    else {
        cout << "Nice first name!" << endl;
        cout << " " << endl;
    }
    
    cout << "Please enter your last name (Limit 20 characters): ";
    cin  >> lastName;
    cout << " " << endl;
    
    // when the first and last names are the same, it outputs a warning
    if (strcmp(firstName, lastName) == 0) {
        cout << "WARNING: You entered the same name for your first and last names" << endl;
        cout << " " << endl;
    }
    
    // if the last name goes over 20 char, it outputs a warning
    if (strlen(lastName) >= 21) {
        cout << "WARNING: You entered a name with too many characters." << endl;
        cout << " " << endl;
    }
    
    else {
        cout << "Really great last name!" << endl;
        cout << " " << endl;
    }
    
    // copies a name to each username cstring to begin the new usernames
    strcpy(username1, lastName);
    strcpy(username2, firstName);
    strcpy(username3, firstName);
    
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << " " << endl;
    cout << "Which of the three usernames would you like:" << endl;
    
    // combines full last name with first 2 chars of first name
    cout << strncat(username1, firstName, 2) << endl;
    
    // combines whole first and whole last name
    cout << strcat(username2, lastName) << endl;
    
    // combines full first name with first 2 chars of last name
    cout << strncat(username3, lastName, 2) << endl;
}