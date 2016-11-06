/*
** Bryce Gold
**
** 11/5/16
**
** This program takes in a user's first name (up to 10 characters) and a user's
** last name (up to 20 characters) and outputs 3 unique usernames based on the 
** two names.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName;
    string lastName;
    
    cout << "Please input your first name (Limit 10 characters): ";
    cin  >> firstName;
    cout << " " << endl;

    // when the first name goes over 10 char, it outputs a warning
    if (firstName.length() > 10) {
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
    
    // if the last name goes over 20 char, it outputs a warning
    if (lastName.length() > 20) {
        cout << "WARNING: You entered a name with too many characters." << endl;
        cout << " " << endl;
    }

    else {
        cout << "Really great last name!" << endl;
        cout << " " << endl;
    }

    // when the first and last names are the same, it outputs a warning
    if (firstName == lastName) {
        cout << "WARNING: You entered the same name for your first and last names" << endl;
        cout << " " << endl;
    }
    
    string username1 = firstName;
    string username2 = firstName;
    string username3 = firstName;
    
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << " " << endl;
    cout << "Which of the three usernames would you like:" << endl;
    
    // combines full last name with first 2 chars of first name
    cout << username1.replace(2, username1.length() - 1, lastName) << endl;
    
    // combines whole first and whole last name
    cout << username2.append(lastName) << endl;
    
    // combines first letter of first name with whole last name
    cout << username3.replace(1, username1.length() - 1, lastName) << endl;
}