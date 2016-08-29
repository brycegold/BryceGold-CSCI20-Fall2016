#include <iostream>
#include <string>

using namespace std;

int main() {
    string adjective; 
    string noun;
    string noun2;
    string insulting_word;
    string insulting_word2;
    char special_character;
    float number_with_decimal;
    int number;
    
    cout << "Please enter an adjective" << endl;
    cin  >> adjective;
    
    cout << "Please enter a noun" << endl;
    cin  >> noun;
    
    cout << "Please enter a number with no decimals" << endl;
    cin  >> number;
    
    cout << "Please enter another noun" << endl;
    cin  >> noun2;
    
    cout << "Please enter an insulting word" << endl;
    cin  >> insulting_word;
    
    cout << "Please enter another insulting word" << endl;
    cin  >> insulting_word2;
    
    cout << "Please insert a special character" << endl;
    cin  >> special_character;
    
    cout << "Please enter a number with a decimal" << endl;
    cin  >> number_with_decimal;
    
    cout << endl;
    cout << "There once was a " << adjective << " " << noun << " who destroyed a whole town." << endl;
    cout << "Then one day came " << number << " " << noun2 << "(s) who had enough of the " << noun << " and said " << endl;
    cout << "'Leave this town you " << insulting_word << insulting_word2 << special_character << ".'" << endl;
    cout << "The " << noun << " then received exactly " << number_with_decimal << " punches to the face and ran away crying.";
}