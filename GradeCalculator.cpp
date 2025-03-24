/*
Github @fb6328
Write a simple C++ program to out an appropriate full name and grade
of a student depending on the score entered by the user.
Ask the user to input the full name of the student, the unit name
and the score. Grade distribution is 70-100 A, 60-69 B, 50-59 C,
40-49 D, 0-39 F, anything else is invalid
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declarations
    float score;
    string name, subjectName;
    char grade;

    // Data input
    cout << ".....Simple Grade Calculator in C++....." << endl;
    cout << "Enter student full name" << endl;
    getline(cin, name);
    cout << "Enter subject name" << endl;
    getline(cin, subjectName);
    cout << "Enter the score" << endl;
    cin >> score;

    // Logic processing. Determining grade based on score
    if (score >= 70 && score <= 100)
    {
        grade = 'A';
    }
    else if (score >= 60)
    {
        grade = 'B';
    }
    else if (score >= 50)
    {
        grade = 'C';
    }
    else if (score >= 40)
    {
        grade = 'D';
    }
    else if (score >= 0)
    {
        grade = 'F';
    }
    else
    {
        cout << "Invalid score" << endl;
    }

    // Output
    cout << "Student name: " << name << endl;
    cout << "Subject name: " << subjectName << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
}
