//***********************************************************
// This program demonstrates a user controlled for loop.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 31, 2016
//***********************************************************
#include <iostream>
using namespace std;

int inputVal(int);              // Input Vlaidation (int)

int main()
{
    int minNumber,  // Starting number to square
        maxNumber;  // Maximum number to square

    // Get the minimum and maximum values to display.
    cout << "I will display a table of numbers and "
         << "their squares.\n"
         << "Enter the starting number: ";
    minNumber = inputVal(minNumber);
    cout << "Enter the ending number: ";
    maxNumber = inputVal(maxNumber);

    // Display the table.
    cout << "Number Number Squared\n"
         << "------------------------\n";

    for (int num = minNumber; num <= maxNumber; num++)
    {
        cout << num << "\t\t" << (num * num) << endl;
    }
    return 0;
}

//***********************************************
// Definition of function inputVal().           *
// This function is used to validate whether    *
// the user has entered a number. If no         *
// number is entered at the keyboard, the       *
// while loop will prompt the error and ask     *
// for valid input.                             *
//***********************************************

int inputVal(int num)
{
    while(!(cin >> num))
    {
        cout << "I'm sorry, a number must be entered...";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}
