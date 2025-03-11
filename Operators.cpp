// Different operators in C++

#include <iostream>
using namespace std;

int main()
{

    // Arithmetic/Mathematical Operators
    int num1 = 50, num2 = 10;
    cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;     // Addition
    cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;     // Subtraction
    cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;     // Multiplication
    cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;     // Division
    cout << num1 << "%" << num2 << "=" << num1 % num2 << endl;     // Modulus
    cout << num1 << "^" << num2 << "=" << (num1 ^ num2) << endl;   // Exponential. Wrong
    cout << num1 << "+=" << num2 << "=" << (num1 += num2) << endl; // Add then assign
    cout << num1 << "-=" << num2 << "=" << (num1 -= num2) << endl; // Subtract then assign
    cout << num1 << "*=" << num2 << "=" << (num1 *= num2) << endl; // Multiply then assign
    cout << num1 << "/=" << num2 << "=" << (num1 /= num2) << endl; // Divide then assign
    cout << num1 << "++" << num2 << "=" << (num1++) << endl;       // Increment by 1
    cout << num1 << "--" << num2 << "=" << (num1--) << endl;       // Decreement by 1
    cout << num1 << "++" << num2 << "=" << (++num1) << endl;       // Increment by 1
    cout << num1 << "--" << num2 << "=" << (--num1) << endl;       // Decreement by 1

    // COMPARISON OPERATORS
    cout << num1 << " > " << num2 << " = " << (num1 > num2) << endl;   // Greater than operation
    cout << num1 << " >= " << num2 << " = " << (num1 >= num2) << endl; // Greater than or equal to operation
    cout << num1 << " < " << num2 << " = " << (num1 < num2) << endl;   // Less than operation
    cout << num1 << " != " << num2 << " = " << (num1 != num2) << endl; // Not equal to operation

    // Boolean Operators
    cout << "true and true" << " = " << (true && true) << endl; // and operation
    // cout << "true and true" << " = " << (true and true) << endl; // and operation
    cout << "true and false" << " = " << (true && false) << endl; // and operation
    cout << "true or true" << " = " << (true || true) << endl;    // or operation
    cout << "true or false" << " = " << (true || false) << endl;  // or operation
    cout << "!true" << " = " << (!true) << endl;                  // Not true operation
    cout << "!false" << " = " << (!false) << endl;                // Not true operation
}