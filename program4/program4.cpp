/*
** Bryce Gold
**
** 11/13/16
**
** This program takes in a file of 6 students' answers and a file of the answer key
** and compares the two to determine points for each student. It outputs the final
** grade and any incorrect answers to the screen and to a new file.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

// class stores the final grade for each student object
class StudentGrades {
    private:
    float finalGrade;
    
    public:
    void SetFinalGrade(float grade) {
        finalGrade += grade;
    }
    
    float GetFinalGrade() {
        return finalGrade;
    }
    
    StudentGrades() {
        finalGrade = 0.0;
    }
};

int main() {
    // declaring a new object for each student
    StudentGrades student0;
    StudentGrades student1;
    StudentGrades student2;
    StudentGrades student3;
    StudentGrades student4;
    StudentGrades student5;
    
    int const NUM_QUESTIONS = 21;
    
    // stores the answer key
    string answerKey[NUM_QUESTIONS];
    
    // stores students' names and answers
    string studentAnswers[6][NUM_QUESTIONS+2] = {" "};
    
    // keeps a tally of the incorrect/omitted answers
    int wrongAnswers[6][NUM_QUESTIONS] = {0};
    
    ifstream inStudentAnswers;
    ifstream inAnswerKey;
    
    inStudentAnswers.open("studentAnswers.txt");
    inAnswerKey.open("answerKey.txt");
    
    if (!inStudentAnswers.is_open()) {
        cout << "Could not open studentAnswers.txt" << endl;
    }
    
    if (!inAnswerKey.is_open()) {
        cout << "Could not open answerKey.txt" << endl;
    }
    
    // stores the answer key into a single array
    for (int i = 0; !inAnswerKey.eof(); ++i) {
        if (inAnswerKey.good()) {
            inAnswerKey >> answerKey[i];
        }
    }
    
    // stores each student's name and answers in the studentAnswers array
    while (!inStudentAnswers.eof()) {
        if(inStudentAnswers.good()) {
            for(int i = 0; i < 6; ++i) {
                for (int j = 0; j < 23; ++j) {
                    inStudentAnswers >> studentAnswers[i][j];
                }
            }
        }
    }
    
    inStudentAnswers.close();
    inAnswerKey.close();
    
    // compares the student answers with the answer key
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < NUM_QUESTIONS; ++j){
            
            // if the answer given is correct, add 1 point to the student's grade
            // (compares starting from element 2 to skip the student's name)
            if (studentAnswers[i][j + 2] == answerKey[j]) {
                switch(i) {
                    case 0:
                    student0.SetFinalGrade(1.0);
                    break;
                    
                    case 1:
                    student1.SetFinalGrade(1.0);
                    break;
                    
                    case 2:
                    student2.SetFinalGrade(1.0);
                    break;
                    
                    case 3:
                    student3.SetFinalGrade(1.0);
                    break;
                    
                    case 4:
                    student4.SetFinalGrade(1.0);
                    break;
                    
                    default:
                    student5.SetFinalGrade(1.0);
                    break;
                }
            }
            
            // if the answer is incorrect, subtract .25 points from the student's grade   
            else if (studentAnswers[i][j + 2] != "?") {
                // increases wrongAnswers' value by 1 to show student's answer was incorrect
                wrongAnswers[i][j]++;
                
                switch(i) {
                    case 0:
                    student0.SetFinalGrade(-0.25);
                    break;
                    
                    case 1:
                    student1.SetFinalGrade(-0.25);
                    break;
                    
                    case 2:
                    student2.SetFinalGrade(-0.25);
                    break;
                    
                    case 3:
                    student3.SetFinalGrade(-0.25);
                    break;
                    
                    case 4:
                    student4.SetFinalGrade(-0.25);
                    break;
                    
                    default:
                    student5.SetFinalGrade(-0.25);
                    break;
                }
            }
            
            // if the student omitted the question, no grade is changed
            else {
                // increases by 1 to show the student omitted the question
                wrongAnswers[i][j]++;
            }
        }
    }
    
    ofstream outEndGrade;
    
    outEndGrade.open("endGrade.txt");
    
    if(!outEndGrade.is_open()) {
        cout << "Could not open endGrade.txt" << endl;
    }
    
    // loop outputs the student's name, grade, and incorrect answers to the screen and to the endGrade file
    for (int i = 0; i < 6; ++i) {
        
        // outputs each student's name to screen and file
        outEndGrade << setw(10) << left << studentAnswers[i][0] << setw(10) << studentAnswers[i][1] << setw(7) << "GRADE: ";
        cout << setw(10) << left << studentAnswers[i][0] << setw(10) << studentAnswers[i][1] << setw(7) << "GRADE: ";
        
        // outputs student's final grade to screen and file
        switch(i) {
            case 0:
            outEndGrade << setw(10) << student0.GetFinalGrade() << " ";
            cout << setw(10) << student0.GetFinalGrade() << " ";
            break;
            
            case 1:
            outEndGrade << setw(10) << student1.GetFinalGrade() << " ";
            cout << setw(10) << student1.GetFinalGrade() << " ";
            break;

            case 2:
            outEndGrade << setw(10) << student2.GetFinalGrade() << " ";
            cout << setw(10) << student2.GetFinalGrade() << " ";
            break;
            
            case 3:
            outEndGrade << setw(10) << student3.GetFinalGrade() << " ";
            cout << setw(10) << student3.GetFinalGrade() << " ";
            break;
            
            case 4:
            outEndGrade << setw(10) << student4.GetFinalGrade() << " ";
            cout << setw(10) << student4.GetFinalGrade() << " ";
            break;
            
            default:
            outEndGrade << setw(10) << student5.GetFinalGrade() << " ";
            cout << setw(10) << student5.GetFinalGrade() << " ";
            break;
        }
        
        outEndGrade << "WRONG/OMITTED ANSWERS: #";
        cout << "WRONG/OMITTED ANSWERS: #";
        
        // outputs the answers that were incorrect/omitted
        for (int j = 0; j < NUM_QUESTIONS; ++j) {
            
            // checks wrongAnswers array to find the questions incorrect or omitted
            if (wrongAnswers[i][j] > 0) {
                
                outEndGrade << j + 1 << ", ";
                cout << j + 1 << ", ";
            }
        }
        
        outEndGrade << endl;
        cout << endl;
    }
    
    outEndGrade << endl << "Problems more than half of class missed/omitted: ";
    cout << endl << "Problems more than half of class missed/omitted: ";
    
    // outputs the answers more than half the class missed or omitted
    for (int j = 0; j < NUM_QUESTIONS; ++j) {
        
        // variable to tally up the number of students that were incorrect/omitted each answer
        int totalWrong = wrongAnswers[0][j] + wrongAnswers[1][j] + wrongAnswers[2][j] 
                        + wrongAnswers[3][j] + wrongAnswers[4][j] + wrongAnswers[5][j];
        
        // if > 50% incorrect/omit, output the question number                
        if (totalWrong > 3) {
            cout << j + 1 << ", ";
            outEndGrade << j + 1 << ", ";
        }
    }
    
    outEndGrade << endl << "Class Average: ";
    cout << endl << "Class Average: ";
    
    // variable used to determine and store the class average
    float classAvg = student0.GetFinalGrade() + student1.GetFinalGrade() + student2.GetFinalGrade()
                    + student3.GetFinalGrade() + student4.GetFinalGrade() + student5.GetFinalGrade();
                    
    classAvg = classAvg / 6;
    
    // outputs the final class average
    outEndGrade << classAvg;
    cout << classAvg;
    
    outEndGrade.close();
}