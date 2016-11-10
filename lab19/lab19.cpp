/*
** Bryce Gold
**
** 11/9/16
**
** This program takes in an input file of 4 columns of values and outputs a
** separate file containing the values along with the sums for each row and 
** sums for each column.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <ios>

using namespace std;

int main() {
    int myArray[125][4];
    string fileName = " ";
    
    // variables used to store sums and overall total of rows and columns
    int NUM_OF_ROWS = 0;
    float rowSums[125];
    float colSums[4];
    float rowTotal = 0;
    float colTotal = 0;
    float matrixAvg = 0;
    
    ifstream inFS;
    ofstream  outFS;
    
    cout << "Input the file name: ";
    cin  >> fileName;
    
    cout << "Opening file..." << endl;
    
    inFS.open(fileName);
    outFS.open("output.txt");
    
    // returns error if cannot open user file
    if (!inFS.is_open()) {
        cout << "Could not open the file" << endl;
        return 1;
    }

    int row = 0;
    int col = 0;

    // stores the input file values into the array
    for (row = 0; !inFS.eof(); ++row) {
        
        for (int col = 0; col < 4; ++col) {
            inFS >> myArray[row][col];
            
            NUM_OF_ROWS = row;
        }
    }
    
    // loops to find total of each row and save it in the rowSums array
    for (row = 0; row <= NUM_OF_ROWS; ++row) {
        for (col = 0; col < 4; ++col) {
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
        
        for (row = 0; row <= NUM_OF_ROWS; ++row){
            colTotal += myArray[row][col];
            
            if (row == NUM_OF_ROWS) {
                colSums[col] = colTotal;
                matrixAvg += colTotal;
                
                colTotal = 0;
            }
        }
    }

    cout << "Writing to output file..." << endl;
    
    // loop outputs the original values and total for each row in the output file
    for (row = 0; row <= NUM_OF_ROWS; ++row) {
        for (col = 0; col < 4; ++col) {
            
            outFS << myArray[row][col] << setfill(' ') << setw(4);
            
            if (col == 3) {
                outFS << setfill('.') << setw(4) << rowSums[row];
                outFS << endl;
            }
        }
    }
    
    for (row = 0; row < 4; ++row) {
        outFS << ":" << setfill(' ') << setw(4);
    }
    
    outFS << endl << left;
    
    // outputs the total for each column along bottom of each column in output file
    for (row = 0; row < 4; ++row) {
        outFS << colSums[row] << setfill(' ') << setw(4);
    }
    
    // finds the average of all the numbers
    matrixAvg = matrixAvg / (NUM_OF_ROWS * 4);

    outFS << endl << "Average of all numbers: " << matrixAvg;

    cout << "Closing input and output files." << endl;
    inFS.close();
    outFS.close();

}