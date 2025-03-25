/*Write a simple C++ program using SWITCH to output an appropriate full name and grade
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
    int score;
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
    char grade;

    switch (score / 10) // Integer division to categorize the score
    {
    case 10:
    case 9:
    case 8:
    case 7:
        grade = 'A';
        break;
    case 6:
        grade = 'B';
        break;
    case 5:
        grade = 'C';
        break;
    case 4:
        grade = 'D';
        break;
    case 3:
    case 2:
    case 1:
    case 0:
        grade = 'F';
        break;
    default:
        cout << "Invalid score entered!" << endl;
        return 1;
    }

    // Output
    cout << "Student name: " << name << endl;
    cout << "Subject name: " << subjectName << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
}
// The switch...case statement is used to determine the grade of a student based on the score entered by the user. The score is first converted to an integer using the int() function. The switch statement then checks the score against the specified ranges and assigns the appropriate grade. The default case is used to handle invalid scores. The output displays the student's name, subject name, score, and grade. The switch statement provides a more concise and readable way to handle multiple conditions compared to nested if...else statements.