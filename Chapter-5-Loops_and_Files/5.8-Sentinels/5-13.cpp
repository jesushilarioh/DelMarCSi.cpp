//***********************************************************
// This program calculates the total number of points a
// soccer team has earned over a series of games. The user
// enters a series of point values, then -1 when finished.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 31, 2016
//***********************************************************
#include <iostream>
using namespace std;

int inputVal(int);              // Input Vlaidation (int)

int main()
{
    int game = 1,   // Game counter
        points,     // To hold a number of points
        total = 0;  // Accumulator

    cout << "Enter the number of points your team has earned\n";
    cout << "so far in the season, then enter -1 when finished.\n\n";
    cout << "Enter the points for game " << game << ": ";
    points = inputVal(points);

    while (points != -1)
    {
        total += points;
        game++;
        cout << "Enter the points for game " << game << ": ";
        points = inputVal(points);
    }
    cout << "\nThe total points are " << total << endl;
    return 0;

}

//***********************************************
// Definition of function inputVal().           *
// This function is used to validate whether    *
// the user has entered a number (int). If no   *
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
