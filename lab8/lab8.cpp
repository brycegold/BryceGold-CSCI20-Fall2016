/*
** Bryce Gold
**
** 9/21/16
**
** This program has the user input an amount in kilograms and converts it into
** pounds. It then has the user input an amount in pounds and converts it into
** kilograms.
*/

#include <iostream>
#include <cmath>

using namespace std;

// takes in an amount in kg and runs it through the equation to output the amount in lbs
float ToPounds(float kg)
{
    float pounds = kg * 2.2;
    
    return pounds;
}

// takes in an amount in lbs and runs it through the equation to output the amount in kg
float ToKilo(float lb)
{
    float kilograms = lb / 2.2;
    
    return kilograms;
}


int main()
{
    // the variable used to save user input for kg/lb
    float amount;
    
    // Asks for the user's inputs of kg and lbs, then converts each to the opposing unit, lbs and kgs, respectively
    cout << "Please enter an amount in Kilograms" << endl;
    cin  >> amount;
    
    cout << "You entered: " << amount << " kilograms" << endl;
    cout << "That is " << ToPounds(amount) << " pounds" << endl;
    cout << " " << endl;
    
    cout << "Please enter an amount in pounds" << endl;
    cin  >> amount;
    
    cout << "You entered: " << amount << " pounds" << endl;
    cout << "That is " << ToKilo(amount) << " kilograms" << endl;
    
}