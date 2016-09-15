/*
** Bryce Gold
**
** 9/12/16
**
** This program takes in your name, hourly pay, and hours worked and calculates
** your gross and net pay.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    float hourly_salary = 0;
    float hours_worked = 0;
    float tax_rate = .17;
    float net_pay = 0;
    float gross_pay = 0;
    
    string name_of_worker = "";
    
    // Takes in the variables needed to calculate pay
    cout << "Please enter your name" << endl;
    getline(cin, name_of_worker);
    cout << "Please enter your hourly salary" << endl;
    cin  >> hourly_salary;
    cout << "Please enter your hours worked" << endl;
    cin  >> hours_worked;
    
    // Equations to calculate gross and net pays
    gross_pay = hourly_salary * hours_worked;
    net_pay   = gross_pay - (gross_pay * tax_rate);
    
    // Outputs a "slip" with all variables included besides tax_rate
    cout << "name: " << name_of_worker << endl;
    cout << "hours worked: " << hours_worked << endl;
    cout << "rate: " << hourly_salary << endl;
    cout << "gross pay: " << gross_pay << endl;
    cout << "net pay: " << net_pay << endl;
}