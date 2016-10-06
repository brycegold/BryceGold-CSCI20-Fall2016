/*
** Bryce Gold
**
** 10/5/16
**
** This program calculates the income tax you owe. It takes in your gross wage, 
** marriage status, and tax witheld; outputting how much you owe and whether
** you get a refund or not.
*/

#include <iostream>

using namespace std;

int main() 
{
    // variables for taking in basic tax information from user
    string name;
    string marriageStatus;
    double wages = 0;
    double taxWitheld = 0;
    
    // variables for calculating tax and refund amount
    double grossIncome = 0;
    double taxCalculated = 0;
    double refundAmount = 0;
    double taxOwed = 0;
    
    cout << "Please enter your name" << endl; 
    getline(cin, name);
    
    cout << "Are you single or married?" << endl;
    cin  >> marriageStatus;
    
    cout << "Please enter your gross wages" << endl; 
    cin  >> wages;
    
    cout << "Please enter the amount of tax witheld" << endl; 
    cin  >> taxWitheld;
    cout << " " << endl;
    
    // if-else statements used to find out the tax amount owed based on income brackets and being single
    if (marriageStatus == "Single" || marriageStatus == "single")
    {
        grossIncome = wages - 3900 - 6100;
        
        if (grossIncome < 0)
        {
            taxCalculated = 0;
        }
        
        else if (grossIncome >= 0 && grossIncome <= 8925)
        {
            taxCalculated = .10 * grossIncome;
        }
        
        else if (grossIncome >= 8926 && grossIncome <= 36250)
        {
            taxCalculated = 892.50 + .15 * (grossIncome - 8925);
        }
        
        else if (grossIncome >= 36251 && grossIncome <= 87850)
        {
            taxCalculated = 4991.25 + .25 * (grossIncome - 36350);
        }
        
        else if (grossIncome >= 87851)
        {
            taxCalculated = 17891.25 + .28 * (grossIncome - 87850);
        }
    }
    
    // if-else statements used to find out the tax amount owed based on income brackets and being married
    else if (marriageStatus == "Married" || marriageStatus == "married")
    {
        grossIncome = wages - 7800 - 12200;
        
        if (grossIncome < 0)
        {
            taxCalculated = 0;
        }
        
        else if (grossIncome >= 0 && grossIncome <= 17850)
        {
            taxCalculated = .10 * grossIncome;
        }
        
        else if (grossIncome >= 17851 && grossIncome <= 72500)
        {
            taxCalculated = 1785 + .15 * (grossIncome - 17850);
        }
        
        else if (grossIncome >= 72501)
        {
            taxCalculated = 9982.50 + .28 * (grossIncome - 72500);
        }
    }
    
    // calculates if you owe tax or are entitled to a refund
    if (taxCalculated > taxWitheld)
    {
        taxOwed = taxCalculated - taxWitheld;
        
        refundAmount = 0;
    }
    
    else if (taxCalculated < taxWitheld)
    {
        taxOwed = 0;
        
        refundAmount = taxWitheld - taxCalculated;
    }
    
    else if (taxCalculated == taxWitheld)
    {
        taxOwed = 0;
        
        refundAmount = 0;
    }
    
    cout << "Name: " << name << endl;
    cout << "Total Gross Adjusted Income: " << grossIncome << endl;
    cout << "Total tax owed: " << taxOwed << endl;
    cout << name << " " << "is entitled to a REFUND of $" << refundAmount;
}