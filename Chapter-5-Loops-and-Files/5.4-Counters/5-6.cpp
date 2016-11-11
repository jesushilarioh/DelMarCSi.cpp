//***********************************************************
// This program displays a list of numbers and their squares
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 31, 2016
//***********************************************************
#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUMBER = 1,   // Starting number to be squared
              MAX_NUMBER = 10;  // Max number to be squared

    int num = MIN_NUMBER;       // Counter

    cout << "Number Number Squared\n";
    cout << "-------------------------\n";
    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++; // Increment counter.
    }
    return 0;

}
