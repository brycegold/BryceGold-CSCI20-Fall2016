#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int NUM_OF_ROWS = 0;
    int NUM_OF_COLS = 0;
    int myArray[3][4];
    float rowSums[3];
    float colSums[4];
    float rowTotal = 0;
    float colTotal = 0;
    float matrixAvg = 0;
    ifstream inFS;
    ofstream  outFS;
    
    inFS.open("initial.txt");
    
    // stores the input file in the array
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            inFS >> myArray[i][j];
        }
    }
    
    int row = 0;
    int col = 0;
    
    // loops to find total of each row and save it in the rowSums array
    for (row = 0; row < 3; ++row) {
        for (col = 0; col < 4; ++col){
            rowTotal += myArray[row][col];
        
            if (col == 3) {
                rowSums[row] = rowTotal;
                matrixAvg += rowTotal;
                rowTotal = 0;
            }
        }
    }
    
    // loops to find total of each column and save it to the colSums array
    for (col = 0; col < 4; ++col) {
        for (row = 0; row < 3; ++row){
            colTotal += myArray[row][col];
        
            if (row == 2) {
                colSums[col] = colTotal;
                matrixAvg += colTotal;
                colTotal = 0;
            }
        }
    }
    
    // finds the average of all the numbers
    matrixAvg = matrixAvg / 12;

    cout << "rows: " << endl;
    cout << rowSums[0] << endl;
    cout << rowSums[1] << endl;
    cout << rowSums[2] << endl;
    cout << "cols:" << endl;
    cout << colSums[0] << endl;
    cout << colSums[1] << endl;
    cout << colSums[2] << endl;
    cout << colSums[3] << endl;
    cout << "matrixAvg: " << endl;
    cout << matrixAvg << endl;
    
}