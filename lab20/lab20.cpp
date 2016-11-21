#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
                // creates a cstring for the user input string 
                char firststr[10];
                int firstname = 0;
                
                // defines pointers that refer to the firststr array
                char *head = firststr;
                char *tail = firststr;
                
                // directs a user to enter a string and assigns it to the "firststr" cstring
                cout << "Please enter a 10 letter word or less" << endl;
                cin >> firststr;
                
                // finds the length of the user inputted string and assigns the letter count to the variable "firstname"
                strlen(firststr);
                firstname = strlen(firststr);
                
                // outputs the user's word as it was entered
                cout << "Your word is " << firststr << endl;
                
                // if the word entered was within the cstring array's limit, it outputs each character to form the complete word
                if (firstname<10)
                {
                                // uses the "head" pointer to output the pointee "firststr" beginning from the first user filled
                                // element to the last user filled element.
                                while (*head != '\0')
                                {
                                                cout << *head;
                                                head++;
                                }
                }
                
                // if not within the cstring array's limit, it outputs a warning
                else
                {
                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
                }
                cout << endl;
                
                // the pointer "tail" is assigned the memory address of the last character of the firststr array
                tail = &firststr[strlen(firststr) - 1];
                
                // if the user word fits in the cstring limit, it ouputs the characters in backwards order
                if (firstname < 10)
                {
                                // uses the pointer "tail" to ouput the pointee "firststr" starting at the last filled element
                                // and outputs up to the original first element (ex. element 5, then 4, then 3, etc)
                                while (*tail>0)
                                {
                                                cout << *tail;
                                                tail--;
                                }
                }
                cout << endl;
                
                // "head" pointer is assigned the memory address of the first element of "firststr"
                head = firststr;
                
                // "tail" pointer is assigned the memory address of the last element of the "firststr" array
                tail = &firststr[strlen(firststr) - 1];
                
                // the "head" pointer is changed to refer to the 2nd element of "firststr"
                head++;
                
                // the "tail" pointer is changed to refer to the 2nd to last element "firststr"
                tail--;
                
                // if the 2nd element of "firststr" is equal to the 2nd to last element of the same c string,
                // it is a palindrome
                if (*head == *tail)
                {
                                cout << "It is an palindrome!" << endl;
                }
                
                // otherwise the word is not a palindrome
                else
                {
                                cout << "It is not an palindrome" << endl;
                }
 
                return 0;
}