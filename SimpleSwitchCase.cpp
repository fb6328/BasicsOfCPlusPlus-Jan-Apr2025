#include <iostream>
using namespace std;

int main()
{
    cout << "...Day of the Week..." << endl;
    // Variable declarations
    int val;
    // Data input
    cout << "Enter a whole number between 1 and 7 to see the day of the week" << endl;
    cin >> val;

    // Switch...case
    switch (val)
    {
    case 1:
        cout << "You entered 1" << endl;
        cout << "The day is Monday" << endl;
        break;
    case 2:
        cout << "You entered 2" << endl;
        cout << "The day is Tuesday" << endl;
        break;
    case 3:
        cout << "You entered 3" << endl;
        cout << "The day is Wednesday" << endl;
        break;
    case 4:
        cout << "You entered 4" << endl;
        cout << "The day is Thursday" << endl;
        break;
    case 5:
        cout << "You entered 5" << endl;
        cout << "The day is Friday" << endl;
        break;
    case 6:
        cout << "You entered 6" << endl;
        cout << "The day is Saturday" << endl;
        break;
    case 7:
        cout << "You entered 7" << endl;
        cout << "The day is Sunday" << endl;
        break;
    default:
        cout << "You entered " << val << endl;
        cout << "No matching week day" << endl;
    }
}