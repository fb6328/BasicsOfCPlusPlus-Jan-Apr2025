#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName;
    cout << "Enter yor full name" << endl;
    getline(cin, fullName);

    cout << "Hey " << fullName << ". How are you today?" << endl;
}
