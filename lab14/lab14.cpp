// Read in a series of grades, terminated by a -1.
// Then output the average and minimum of those grades.

#include <iostream>

using namespace std;

int main() {
    // Declare variables
    double count = 0;
    double total = 0;
    int minimum = 100;
    int grade = 0;
    
    // Read numbers in until we see the -1
    
    // Sum up grades as we do, and look for minimum
    while (grade != -1) {
        cin >> grade;
        
        total = total + grade;
        
        count = count + 1;
        
        if (grade < minimum && grade != -1) {
             
            minimum = grade;
             
        }

    }
    
    // Output results
    double average = (total + 1) / (count - 1);
    
    cout << "Average was " << average << endl;
    cout << "Minimum was " << minimum << endl;
    return 0;
}