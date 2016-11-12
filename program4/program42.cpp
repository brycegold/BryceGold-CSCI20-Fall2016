#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class StudentGrades {
    private:
    string studentName;
    string studentAnswers[21];
    float finalGrade;
    
    public:
    void SetStudentName(string name);
    void SetStudentAnswers(int i, string answer);
    void SetFinalGrade(float grade);
    string GetStudentName() const;
    string GetStudentAnswers() const;
    float GetFinalGrade() const;
    
    StudentGrades();
};

StudentGrades::StudentGrades() {
    studentName = "Dave";
    finalGrade = 0.0;
}

void StudentGrades::SetStudentName(string name) {
    studentName = name;
}

void StudentGrades::SetFinalGrade(float grade) {
    finalGrade = grade;
}

void StudentGrades::SetStudentAnswers(int i, string answer) {
    studentAnswers[i] = answer;
}

string StudentGrades::GetStudentName() const {
    return studentName;
}

float StudentGrades::GetFinalGrade() const {
    return finalGrade;
}
/*
string StudentGrades::GetStudentAnswers() const {
    return studentAnswers;
}
*/
int main() {
    // out file streams for the students' answers and answer key
    ifstream inStudentAnswers;
    ifstream inAnswerKey;
    ofstream outFinalScores;
    
    string answerKey[21];
    
    StudentGrades student0;
    StudentGrades student1;
    StudentGrades student2;
    StudentGrades student3;
    StudentGrades student4;
    StudentGrades student5;
    
    for (i = 0; i < 21)
    
    inStudentAnswers.open("studentAnswers.txt");
    inAnswerKey.open("answerKey.txt");
    int i = 0;
    
    while(!inAnswerKey.eof()) {
        inAnswerKey >> answerKey[i];
        i++;
    }
    
    inStudentAnswers.close();
    inAnswerKey.close();
    
    student1.SetStudentName("Bob");
    student1.SetStudentAnswers(0, "a");
    student1.SetStudentAnswers(1, "b");
    student1.SetStudentAnswers(2, "c");
    student1.SetFinalGrade(3.5);
    cout << student1.GetStudentName() << endl;
    
    for (i = 0; i < 21; i++) {
        cout << answerKey[i] << " ";
    }
    
    //cout << student1.GetStudentAnswers() << " ";
    //cout << student1.GetFinalGrade();
}