/*
** Bryce Gold
**
** 10/12/16
**
** This program first outputs all the minutes between 1pm and 2:59pm. It then
** takes in user start and end time to output the minutes between the two.
*/

#include <iostream>

using namespace std;

int main() {
    int hour = 1;
    int minute = 0;
    int zeroOfMin = 0;
    int userStartTime = 0;
    int userEndTime = 0;
    string amPm = " ";
    
    while (hour <= 2) {
        
        minute = 0;
        
        while (minute <= 59) {
            
            cout << hour << ":";
            
            if (minute <= 9) {
                cout << "0";
            }
            
            cout << minute << " pm" << endl;
            
            ++minute;
        }
        
        ++hour;
    }
    
    cout << " " << endl;
    cout << "Enter a starting time:" << endl;
    cin  >> userStartTime;
    cout << " " << endl;
    
    cout << "Enter an ending time:" << endl;
    cin >> userEndTime;
    cout << " " << endl;
    
    /*
    cout << "Is it am or pm?:" << endl;
    cin >> amPm;
    cout << " " << endl;
    */
    
        while (userStartTime < userEndTime || (userStartTime > userEndTime) && userStartTime <= 12) {
            
            minute = 0;
            
            while (minute <= 59) {
                
                cout << userStartTime << ":";
                
                if (minute <= 9) {
                    cout << "0";
                }
                
                cout << minute << endl;
                
                minute += 15;
            }
            
            if (userStartTime == 12) {
            userStartTime = 0;
            }
            
            ++userStartTime;
        }
}