#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double myNum = 15.5;  // Create and initialize a double value
    int myNewNum = myNum; // Create and initialize an integer variable with the double
    cout << myNum << " type casted to " << myNewNum << endl;
    int myNum2 = 12;
    float testNum;
    cout << "Enter a number";
    cin >> testNum;
    double myNewDouble = myNum2;
    cout << myNum2 << " type casted to " << myNewDouble << endl;
    cout << "Some double testNum" << testNum << endl;
    bool notTrue = false;
    bool trueValue = true;

    cout << "Boolean values =" << notTrue << "," << trueValue;

    return 0;
}