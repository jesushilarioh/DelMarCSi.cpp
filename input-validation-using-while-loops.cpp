//********************************************************************
//
//This program displays a list of numbers and their squares.
//
//By: JESUS HILARIO HERNANDEZ
//Last Updated: October 5th, 2016
//
//********************************************************************

#include <iostream>

using namespace std;

int main()
{

    /* Input validation when using numbers. */
    int number;

    cout << "Enter a number in the range 10-25: ";
    while (!(cin >> number))
    {
        // Explain error
        cout << "ERROR: A number must be pressed.\n"
        << "Enter a value in the range 1-100: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(1200, '\n');
    }
    while (number < 1 || number > 100)
    {
        // Explain error
        cout << "ERROR: The value must be in the range 1-100.\n"
        << "Enter a value in the range 1-100: ";
        // Ask for new input
        cin >> number;
    }

    cout << "You entered the number " << number << endl;


    /* Input validation when using characters */
    char choice;

    cout << "Enter Y or N: ";
    cin >> choice;

    while (!(choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N'))
    {
        cout << "ERROR: Either Y or N must be pressed.\n"
        << "Enter Y or N: ";
        // clear input stream
        cin.clear();
        // discard previous input
        cin.ignore(1200, '\n');
        // enter choice again
        cin >> choice;
    }
    cout << "You have chosen " << choice << endl;


    /* Input validation when using strings */

    string stringChoice;

    cout << "Enter \"yes\" or \"no\": ";
    cin >> stringChoice;

    while (!(stringChoice == "yes") && !(stringChoice == "no"))
    {
        cout << "ERROR: You must type either \"yes\" or \"no\".\n"
        << "Enter \"yes\" or \"no\": ";
        // clear input stream
        cin.clear();
        // discard previous input
        cin.ignore(1200, '\n');
        cin >> stringChoice;
    }

    cout << "You have enter: " << stringChoice << endl;

    return 0;
}
