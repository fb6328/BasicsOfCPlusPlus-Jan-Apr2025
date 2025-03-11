#include <iostream>
#include "FileMain.cpp";
using namespace std;

int globalVariable;
int main()
{
    // Trying to access globalVariable value
    cout << "In Other file, globalVariale =" << globalVariable << endl;
}