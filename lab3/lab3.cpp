/*
**Bryce Gold
**
**9/2/16
**
**Emulates a CoinStar machine by inputting a coin amount
**and telling what you would receive in cash, after fees.
**
**Credits to cplusplus.com user FurryGuy for ceil usage.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // variables for what was received
    int total_cent_amount = 0;
    int total_coin_amount = 0;
    int quarter_amount = 0;
    int dime_amount = 0;
    int nickel_amount = 0;
    int penny_amount = 0;
    
    // calculation variables
    double total_dollar_amount = 0;
    double fee_amount = 0;
    double grand_total = 0;
    
    cout << "Please enter your money." << endl;
    cin  >> total_cent_amount;
    
    // calculates how many of each coin was received based on the coin total
    quarter_amount = total_cent_amount / 25;
    dime_amount = (total_cent_amount % 25) / 10;
    nickel_amount = ((total_cent_amount % 25) % 10) / 5;
    penny_amount = (((total_cent_amount % 25) % 10) % 5) / 1;
    total_coin_amount = quarter_amount + dime_amount + nickel_amount + penny_amount;

    cout << "You have entered: " << total_cent_amount << " cents." << endl;
    cout << "That was " << quarter_amount << " quarter(s), ";
    cout << dime_amount << " dime(s), ";
    cout << nickel_amount << " nickel(s), and ";
    cout << penny_amount << " pennies.";
    cout << " (" << total_coin_amount << " coins)" << endl;
    
    // calculates the dollar amount, and how much of a fee to subtract
    total_dollar_amount = total_cent_amount *.01;
    fee_amount = ceil((total_dollar_amount * .109) * 100) / 100;
    grand_total = total_dollar_amount - fee_amount;
    
    cout << "Total Dollar Amount: $" << total_dollar_amount << endl;
    cout << "Fee: $" << fee_amount << endl;
    cout << "Total You Recieve: $" << grand_total;
    
}