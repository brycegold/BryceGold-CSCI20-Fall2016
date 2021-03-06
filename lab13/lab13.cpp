/*
** Bryce Gold
**
** 10/12/16
**
** This program first outputs all the minutes between 1pm and 2:59pm. It then
** takes in user start and end time to output the 15 minute intervals between the two.
*/

#include <iostream>

using namespace std;

int main() {
    
    // variables used to establish starting hour and minute as well as take in the user's start and end time
    int hour = 1;
    int minute = 0;
    int userStartTime = 0;
    int userEndTime = 0;
    
    // loop to print out the minutes between 1pm and 2:59pm
    while (hour <= 2) {
        
        minute = 0;
        
        while (minute <= 59) {
            
            cout << hour << ":";
            
            // adds a zero to the front of the minute if it is at or below 9
            if (minute <= 9) {
                cout << "0";
            }
            
            cout << minute << " pm" << endl;
            
            ++minute;
        }
        
        ++hour;
    }
    
    // messages to receive start and end time
    cout << " " << endl;
    cout << "Enter a starting time:" << endl;
    cin  >> userStartTime;
    cout << " " << endl;
    
    cout << "Enter an ending time:" << endl;
    cin >> userEndTime;
    cout << " " << endl;
    
    // loop to print out the 15 minute intervals between the two user-entered hours
    while (userStartTime < userEndTime || (userStartTime > userEndTime) && userStartTime <= 12) {
            
        minute = 0;
            
        while (minute <= 59) {
                
            cout << userStartTime << ":";
            
            // adds a zero to the front of the minute if it is at or below 9
            if (minute <= 9) {
                cout << "0";
            }
                
            cout << minute << endl;
                
            minute += 15;
        }
        
        // "if statement" that accounts for rollover from 12 to 1
        if (userStartTime == 12) {
            userStartTime = 0;
        }
            
        ++userStartTime;
    }
}