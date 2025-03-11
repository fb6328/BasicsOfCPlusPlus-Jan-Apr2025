#include <iostream>
using namespace std;

extern int globalVariable;
int somFunct()
{
    // Trying to access globalVariable value
    cout << "In Main file, globalVariale =" << globalVariable << endl;
    // Change globalVarible value to 200
    globalVariable = 200;
    // The changed value of globalVariable
    cout << "In this Main, globalVariale =" << globalVariable << endl;
}