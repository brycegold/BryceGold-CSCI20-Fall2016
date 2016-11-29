#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "MyClass.h"

MyClass::MyClass() : num_(0) {}

void MyClass::Output() {
  cout << "My number is: " << num_ << endl;
}


int randomNumber(){
   srand(time(0));
   return (rand()% 10 + 1);
}

// Program starts here
int main() {
  // Create a MyClass Object
  MyClass object;
  // Call the output member function
  object.Output();
  // This ends our program
  return 0;
}