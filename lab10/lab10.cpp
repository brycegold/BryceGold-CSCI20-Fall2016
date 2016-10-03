#include <iostream>

using namespace std;

int main()
{
    int suzyAge = 25;
    int johnAge = 21;
    cout << "This is the equation suzyAge < johnAge: \n" << (suzyAge < johnAge) << endl;
    cout << " " << endl;
    
    int x = 7;
    int y = 7;
    cout << "This is the equation x >= y: \n" << (x >= y) << endl;
    cout << " " << endl;
    
    int a = 1;
    int b = 9;
    cout << "This is the equation a == b: \n" << (a == b) << endl;
    cout << " " << endl;
    
    int limit = 20;
    int count = 10;
    cout << "This is the equation limit * count: \n" << ((limit * count) / 2 > 0) << endl;
    cout << " " << endl;
    
    int t = -4;
    int z = 0;
    cout << "This is the equation t > z || z < 2: \n" << (t > 5 || z < 2) << endl;
    cout << " " << endl;
    
    int variable = -5;
    cout << "This is the equation !(variable > 0): \n" << (!(variable > 0)) << endl;
    cout << " " << endl;
    
    a = 16;
    cout << "This is the equation a / 4 < 8 && a >= 4: \n" << (a / 4 < 8 && a >= 4) << endl;
    cout << " " << endl;
    
    x = -2;
    y = 5;
    cout << "This is the equation x * y < 10 || y * z < 10: \n" << (x * y < 10 || y * z < 10) << endl;
    cout << " " << endl;
    
    int j = -2;
    int k = 5;
    int l = 4;
    cout << "This is the equation !(j * l < 10) || y / x * 4 < y * 2: \n" << (!(j * l < 10) || y / x * 4 < y * 2) << endl;
}