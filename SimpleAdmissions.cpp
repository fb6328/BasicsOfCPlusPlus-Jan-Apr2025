#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declarations
    int yob, age;
    string interest;
    cout << "......SIMPLE ADMISSIONS PROGRAM USING C++..." << endl;
    cout << "Enter the child's year of birth" << endl;
    cin >> yob;

    // Operations
    age = 2025 - yob;

    // Decision making
    if (age >= 1 && age <= 10)
    {
        // Assign to specific class
        if (age >= 7)
        {
            cout << "Admitted to Grade School" << endl;
        }
        else if (age >= 5 && age <= 6)
        {
            cout << "Admitted to Kindergarten" << endl;
        }
        else if (age >= 3 && age <= 4)
        {
            cout << "Admitted to pre-school" << endl;
        }
        else
        {
            cout << "Admitted to Play Group" << endl;
        }
        // pick the interest
        cout << "Enter the child's interest i.e soccer or art" << endl;
        cin >> interest;
        // Check the interest and assign to group
        if (interest == "soccer")
        {
            cout << "Assigned to Soccer Play Group" << endl;
        }
        else if (interest == "art")
        {
            cout << "Assigned to Art Play Group" << endl;
        }
        else
        {
            cout << "Assigned to Other Play Group" << endl;
        }
    }
    else
    {
        cout << "Invalid age input. Age must be from 4 years to 10 years" << endl;
    }
}
