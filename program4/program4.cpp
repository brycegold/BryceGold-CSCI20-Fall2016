#include <iostream>
#include <string>

using namespace std;

class StudentGrades {
    private:
    string studentName;
    //string studentAnswers[21];
    //float finalGrade;
    
    public:
    void SetStudentName(string name);
    //void SetStudentAnswers(int i, string answer);
    //void SetFinalGrade(float grade);
    
    static const string GetStudentName;
    //string GetStudentAnswers;
    //float GetFinalGrade;
    
    StudentGrades();
};

StudentGrades::StudentGrades() {
    studentName = "NameHere";
    //studentAnswers[21] = {"None"};
    //finalGrade = 0.0;
}

void StudentGrades::SetStudentName(string name) {
    studentName = name;
}
/*
void StudentGrades::SetStudentAnswers(int i, string answer) {
    string studentAnswers[i] = answer;
};

void StudentGrades::SetFinalGrade(float grade) {
    finalGrade = grade;
}
*/
const string StudentGrades::GetStudentName {
    cout << studentName;
}
/*
string StudentGrades::GetStudentAnswers {
    for (int i = 0; i < 21; ++i) {
        cout << studentAnswers[i] << " ";
    }
}

string StudentGrades::GetFinalGrade {
    return finalGrade;
}
*/


int main() {
    StudentGrades student1;
    student1.SetStudentName("Bob");
    //student1.SetFinalGrade(3.5);
    
    student1.GetStudentName;
    cout << " ";
    student1.GetStudentName;
}