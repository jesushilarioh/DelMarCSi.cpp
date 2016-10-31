//***********************************************************
// This program demonstrates the prefix and postfix modes of
// the increment and decrement operators
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 31, 2016
//***********************************************************
#include <iostream>
using namespace std;

int main()
{
    int num = 5;   // num starts out with 4.

    cout << num << endl;    // Displays 4
    cout << num++ << endl;  // Displays 4, then adds 1 to num
    cout << num << endl;    // Displays 5
    cout << ++ num << endl; // Adds 1 to num, then displays 6
    cout << endl;           // Displays a blank line

    cout << num << endl;    // Displays 6
    cout << num-- << endl;  // Displays 6, then subtracts 1 from num
    cout << num << endl;    // Displays 5
    cout << --num << endl;  // Subtracts 1 from num, then displays 4

    return 0;

}
